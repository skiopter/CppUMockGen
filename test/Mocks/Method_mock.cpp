/*
 * This file has been auto-generated by CppUTestMock v0.1.0.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 */

#include "Method.hpp"

#include <CppUTestExt/MockSupport.h>

Method::Method()
{}

bool Method::IsMockable(const CXCursor & cursor) const
{
    return mock().actualCall("Method::IsMockable").withConstPointerParameter("cursor", &cursor).returnBoolValue();
}
