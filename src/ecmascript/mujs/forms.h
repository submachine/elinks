#ifndef EL__ECMASCRIPT_MUJS_FORMS_H
#define EL__ECMASCRIPT_MUJS_FORMS_H

#include <mujs.h>

struct form;

void mjs_push_form_object(js_State *J, struct form *form);
void mjs_push_forms(js_State *J, void *node);

#endif
