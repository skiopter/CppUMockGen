/*
 * This file has been auto-generated by CppUTestMock v0.1.0.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 */

#include "Config.hpp"

#include <CppUTestExt/MockSupport.h>

MockedType Config::OverrideSpec::GetType() const
{
    return static_cast<MockedType>( mock().actualCall("Config::OverrideSpec::GetType").onObject(this).returnIntValue() );
}

const std::string & Config::OverrideSpec::GetExprModFront() const
{
    return * static_cast<const std::string *>( mock().actualCall("Config::OverrideSpec::GetExprModFront").onObject(this).returnConstPointerValue() );
}

const std::string & Config::OverrideSpec::GetExprModBack() const
{
    return * static_cast<const std::string *>( mock().actualCall("Config::OverrideSpec::GetExprModBack").onObject(this).returnConstPointerValue() );
}

bool Config::UseUnderlyingTypedefType() const
{
    return mock().actualCall("Config::UseUnderlyingTypedefType").onObject(this).returnBoolValue();
}

const Config::OverrideSpec * Config::GetParameterOverride(const std::string & key) const
{
    return static_cast<const Config::OverrideSpec *>( mock().actualCall("Config::GetParameterOverride").onObject(this).withStringParameter("key", key.c_str()).returnConstPointerValue() );
}

const Config::OverrideSpec * Config::GetTypeOverride(const std::string & key) const
{
    return static_cast<const Config::OverrideSpec *>( mock().actualCall("Config::GetTypeOverride").onObject(this).withStringParameter("key", key.c_str()).returnConstPointerValue() );
}

const Config::OverrideSpec * Config::OverrideMap::GetOverride(const std::string & key) const
{
    return static_cast<const Config::OverrideSpec *>( mock().actualCall("Config::OverrideMap::GetOverride").onObject(this).withStringParameter("key", key.c_str()).returnConstPointerValue() );
}

