/* SPDX-License-Identifier: GPL-2.0-only */
#ifndef __LABWC_VIEW_IMPL_COMMON_H
#define __LABWC_VIEW_IMPL_COMMON_H
/*
 * Common code for view->impl functions
 *
 * Please note: only xdg-shell-toplevel-view and xwayland-view view_impl
 * functions should call these functions.
 */

void view_impl_move_to_front(struct view *view);
void view_impl_map(struct view *view);

#endif /* __LABWC_VIEW_IMPL_COMMON_H */