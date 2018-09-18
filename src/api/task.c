#include "../cefau3.h"

#include "include/capi/cef_task_capi.h"

void __stdcall CefTask_Execute(cef_task_t *self)
{
	self->execute(self);
}

int __stdcall CefTaskRunner_IsSame(struct _cef_task_runner_t* self,
	struct _cef_task_runner_t* that)
{
	return self->is_same(self, that);
}

int __stdcall CefTaskRunner_BelongsToCurrentThread(struct _cef_task_runner_t* self)
{
	return self->belongs_to_current_thread(self);
}

int __stdcall CefTaskRunner_BelongsToThread(struct _cef_task_runner_t* self,
	cef_thread_id_t threadId)
{
	return self->belongs_to_thread(self, threadId);
}

int __stdcall CefTaskRunner_PostTask(struct _cef_task_runner_t* self,
	struct _cef_task_t* task)
{
	return self->post_task(self, task);
}

int __stdcall CefTaskRunner_PostDelayedTask(struct _cef_task_runner_t* self,
	struct _cef_task_t* task,
	int64 delay_ms)
{
	return self->post_delayed_task(self, task, delay_ms);
}

cef_task_runner_t* __stdcall CefTaskRunnerGetForCurrentThread()
{
	return cef_task_runner_get_for_current_thread();
}

cef_task_runner_t* __stdcall CefTaskRunnerGetForThread(
	cef_thread_id_t threadId)
{
	return cef_task_runner_get_for_thread(threadId);
}

int __stdcall CefCurrentlyOn(cef_thread_id_t threadId)
{
	return cef_currently_on(threadId);
}

int __stdcall CefPostTask(cef_thread_id_t threadId, cef_task_t* task)
{
	return cef_post_task(threadId, task);
}

int __stdcall CefPostDelayedTask(cef_thread_id_t threadId,
	cef_task_t* task,
	int64 delay_ms)
{
	return cef_post_delayed_task(threadId, task, delay_ms);
}