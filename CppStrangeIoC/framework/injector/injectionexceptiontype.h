﻿#pragma once





namespace strange
{
namespace extensions
{
namespace injector
{
namespace api
{
enum class InjectionExceptionType
{
	/// A circular dependency was found.
	/// This Exception was raised to prevent a stack overflow.
	CIRCULAR_DEPENDENCY,
	/// The value of a binding does not extend or implement the binding type.
	ILLEGAL_BINDING_VALUE,
	/// No InjectionBinder found.
	NO_BINDER,
	/// No ReflectionBinder found.
	NO_REFLECTOR,
	/// No InjectorFactory found.
	NO_FACTORY,
	/// The provided binding is not an instantiable class.
	NOT_INSTANTIABLE,
	/// The requested Binding was null or couldn't be found.
	NULL_BINDING,
	/// During an attempt to construct, no constructor was found.
	NULL_CONSTRUCTOR,
	/// During setter injection the requested setter resolved to null.
	NULL_INJECTION_POINT,
	/// No reflection was provided for the requested class.
	NULL_REFLECTION,
	/// The instance being injected into resolved to null.
	NULL_TARGET,
	/// The value being injected into the target resolved to null.
	NULL_VALUE_INJECTION,
	/// The list of setters and setter names must have exactly the same number of entries.
	/// Two lists are required because Unity does not at present support Tuple.
	/// Seeing this error likely indicates a problem with the Reflector (it's not you, it's me).
	SETTER_NAME_MISMATCH,
	/// The requested cross-context injector returned null
	MISSING_CROSS_CONTEXT_INJECTOR,
	//An implicit implementor does not fulfill the designated interface
	IMPLICIT_BINDING_IMPLEMENTOR_DOES_NOT_IMPLEMENT_INTERFACE,
	//An implicit type does not implement the designated interface
	IMPLICIT_BINDING_TYPE_DOES_NOT_IMPLEMENT_DESIGNATED_INTERFACE,
	//Assembly object was not retrieved and cached
	UNINITIALIZED_ASSEMBLY,
};
}
}
}
}

