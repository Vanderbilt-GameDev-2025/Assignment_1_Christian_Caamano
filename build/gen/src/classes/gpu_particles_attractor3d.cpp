/**************************************************************************/
/*  gpu_particles_attractor3d.cpp                                         */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#include <godot_cpp/classes/gpu_particles_attractor3d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void GPUParticlesAttractor3D::set_cull_mask(uint32_t p_mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticlesAttractor3D::get_class_static()._native_ptr(), StringName("set_cull_mask")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t p_mask_encoded;
	PtrToArg<int64_t>::encode(p_mask, &p_mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_mask_encoded);
}

uint32_t GPUParticlesAttractor3D::get_cull_mask() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticlesAttractor3D::get_class_static()._native_ptr(), StringName("get_cull_mask")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GPUParticlesAttractor3D::set_strength(float p_strength) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticlesAttractor3D::get_class_static()._native_ptr(), StringName("set_strength")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double p_strength_encoded;
	PtrToArg<double>::encode(p_strength, &p_strength_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_strength_encoded);
}

float GPUParticlesAttractor3D::get_strength() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticlesAttractor3D::get_class_static()._native_ptr(), StringName("get_strength")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void GPUParticlesAttractor3D::set_attenuation(float p_attenuation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticlesAttractor3D::get_class_static()._native_ptr(), StringName("set_attenuation")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double p_attenuation_encoded;
	PtrToArg<double>::encode(p_attenuation, &p_attenuation_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_attenuation_encoded);
}

float GPUParticlesAttractor3D::get_attenuation() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticlesAttractor3D::get_class_static()._native_ptr(), StringName("get_attenuation")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void GPUParticlesAttractor3D::set_directionality(float p_amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticlesAttractor3D::get_class_static()._native_ptr(), StringName("set_directionality")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double p_amount_encoded;
	PtrToArg<double>::encode(p_amount, &p_amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_amount_encoded);
}

float GPUParticlesAttractor3D::get_directionality() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticlesAttractor3D::get_class_static()._native_ptr(), StringName("get_directionality")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}


} // namespace godot 