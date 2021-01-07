/**
 *
 *  World.cc
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#include "World.h"
#include <drogon/utils/Utilities.h>
#include <string>

using namespace drogon;
using namespace drogon_model::hello_world;

const std::string World::Cols::_id = "id";
const std::string World::Cols::_randomnumber = "randomnumber";
const std::string World::primaryKeyName = "id";
const bool World::hasPrimaryKey = true;
const std::string World::tableName = "world";

const std::vector<typename World::MetaData> World::_metaData = {
    {"id", "int32_t", "integer", 4, 0, 1, 1},
    {"randomnumber", "int32_t", "integer", 4, 0, 0, 1}};
const std::string &World::getColumnName(size_t index) noexcept(false)
{
    assert(index < _metaData.size());
    return _metaData[index]._colName;
}
World::World(const Row &r, const ssize_t indexOffset) noexcept
{
    if (indexOffset < 0)
    {
        if (!r["id"].isNull())
        {
            _id = std::make_shared<int32_t>(r["id"].as<int32_t>());
        }
        if (!r["randomnumber"].isNull())
        {
            _randomnumber =
                std::make_shared<int32_t>(r["randomnumber"].as<int32_t>());
        }
    }
    else
    {
        size_t offset = (size_t)indexOffset;
        if (offset + 2 > r.size())
        {
            LOG_FATAL << "Invalid SQL result for this model";
            return;
        }
        size_t index;
        index = offset + 0;
        if (!r[index].isNull())
        {
            _id = std::make_shared<int32_t>(r[index].as<int32_t>());
        }
        index = offset + 1;
        if (!r[index].isNull())
        {
            _randomnumber = std::make_shared<int32_t>(r[index].as<int32_t>());
        }
    }
}

World::World(
    const Json::Value &pJson,
    const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if (pMasqueradingVector.size() != 2)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if (!pMasqueradingVector[0].empty() &&
        pJson.isMember(pMasqueradingVector[0]))
    {
        _dirtyFlag[0] = true;
        if (!pJson[pMasqueradingVector[0]].isNull())
        {
            _id = std::make_shared<int32_t>(
                (int32_t)pJson[pMasqueradingVector[0]].asInt64());
        }
    }
    if (!pMasqueradingVector[1].empty() &&
        pJson.isMember(pMasqueradingVector[1]))
    {
        _dirtyFlag[1] = true;
        if (!pJson[pMasqueradingVector[1]].isNull())
        {
            _randomnumber = std::make_shared<int32_t>(
                (int32_t)pJson[pMasqueradingVector[1]].asInt64());
        }
    }
}

World::World(const Json::Value &pJson) noexcept(false)
{
    if (pJson.isMember("id"))
    {
        _dirtyFlag[0] = true;
        if (!pJson["id"].isNull())
        {
            _id = std::make_shared<int32_t>((int32_t)pJson["id"].asInt64());
        }
    }
    if (pJson.isMember("randomnumber"))
    {
        _dirtyFlag[1] = true;
        if (!pJson["randomnumber"].isNull())
        {
            _randomnumber = std::make_shared<int32_t>(
                (int32_t)pJson["randomnumber"].asInt64());
        }
    }
}

void World::updateByMasqueradedJson(
    const Json::Value &pJson,
    const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if (pMasqueradingVector.size() != 2)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if (!pMasqueradingVector[0].empty() &&
        pJson.isMember(pMasqueradingVector[0]))
    {
        if (!pJson[pMasqueradingVector[0]].isNull())
        {
            _id = std::make_shared<int32_t>(
                (int32_t)pJson[pMasqueradingVector[0]].asInt64());
        }
    }
    if (!pMasqueradingVector[1].empty() &&
        pJson.isMember(pMasqueradingVector[1]))
    {
        _dirtyFlag[1] = true;
        if (!pJson[pMasqueradingVector[1]].isNull())
        {
            _randomnumber = std::make_shared<int32_t>(
                (int32_t)pJson[pMasqueradingVector[1]].asInt64());
        }
    }
}

void World::updateByJson(const Json::Value &pJson) noexcept(false)
{
    if (pJson.isMember("id"))
    {
        if (!pJson["id"].isNull())
        {
            _id = std::make_shared<int32_t>((int32_t)pJson["id"].asInt64());
        }
    }
    if (pJson.isMember("randomnumber"))
    {
        _dirtyFlag[1] = true;
        if (!pJson["randomnumber"].isNull())
        {
            _randomnumber = std::make_shared<int32_t>(
                (int32_t)pJson["randomnumber"].asInt64());
        }
    }
}

const int32_t &World::getValueOfId() const noexcept
{
    const static int32_t defaultValue = int32_t();
    if (_id)
        return *_id;
    return defaultValue;
}
const std::shared_ptr<int32_t> &World::getId() const noexcept
{
    return _id;
}
void World::setId(const int32_t &pId) noexcept
{
    _id = std::make_shared<int32_t>(pId);
    _dirtyFlag[0] = true;
}

const typename World::PrimaryKeyType &World::getPrimaryKey() const
{
    assert(_id);
    return *_id;
}

const int32_t &World::getValueOfRandomnumber() const noexcept
{
    const static int32_t defaultValue = int32_t();
    if (_randomnumber)
        return *_randomnumber;
    return defaultValue;
}
const std::shared_ptr<int32_t> &World::getRandomnumber() const noexcept
{
    return _randomnumber;
}
void World::setRandomnumber(const int32_t &pRandomnumber) noexcept
{
    _randomnumber = std::make_shared<int32_t>(pRandomnumber);
    _dirtyFlag[1] = true;
}

void World::updateId(const uint64_t id)
{
}

const std::vector<std::string> &World::insertColumns() noexcept
{
    static const std::vector<std::string> _inCols = {"id", "randomnumber"};
    return _inCols;
}

void World::outputArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if (_dirtyFlag[0])
    {
        if (getId())
        {
            binder << getValueOfId();
        }
        else
        {
            binder << nullptr;
        }
    }
    if (_dirtyFlag[1])
    {
        if (getRandomnumber())
        {
            binder << getValueOfRandomnumber();
        }
        else
        {
            binder << nullptr;
        }
    }
}

const std::vector<std::string> World::updateColumns() const
{
    std::vector<std::string> ret;
    for (size_t i = 0; i < sizeof(_dirtyFlag); i++)
    {
        if (_dirtyFlag[i])
        {
            ret.push_back(getColumnName(i));
        }
    }
    return ret;
}

void World::updateArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if (_dirtyFlag[0])
    {
        if (getId())
        {
            binder << getValueOfId();
        }
        else
        {
            binder << nullptr;
        }
    }
    if (_dirtyFlag[1])
    {
        if (getRandomnumber())
        {
            binder << getValueOfRandomnumber();
        }
        else
        {
            binder << nullptr;
        }
    }
}
Json::Value World::toJson() const
{
    Json::Value ret;
    if (getId())
    {
        ret["id"] = getValueOfId();
    }
    else
    {
        ret["id"] = Json::Value();
    }
    if (getRandomnumber())
    {
        ret["randomnumber"] = getValueOfRandomnumber();
    }
    else
    {
        ret["randomnumber"] = Json::Value();
    }
    return ret;
}

Json::Value World::toMasqueradedJson(
    const std::vector<std::string> &pMasqueradingVector) const
{
    Json::Value ret;
    if (pMasqueradingVector.size() == 2)
    {
        if (!pMasqueradingVector[0].empty())
        {
            if (getId())
            {
                ret[pMasqueradingVector[0]] = getValueOfId();
            }
            else
            {
                ret[pMasqueradingVector[0]] = Json::Value();
            }
        }
        if (!pMasqueradingVector[1].empty())
        {
            if (getRandomnumber())
            {
                ret[pMasqueradingVector[1]] = getValueOfRandomnumber();
            }
            else
            {
                ret[pMasqueradingVector[1]] = Json::Value();
            }
        }
        return ret;
    }
    LOG_ERROR << "Masquerade failed";
    if (getId())
    {
        ret["id"] = getValueOfId();
    }
    else
    {
        ret["id"] = Json::Value();
    }
    if (getRandomnumber())
    {
        ret["randomnumber"] = getValueOfRandomnumber();
    }
    else
    {
        ret["randomnumber"] = Json::Value();
    }
    return ret;
}

bool World::validateJsonForCreation(const Json::Value &pJson, std::string &err)
{
    if (pJson.isMember("id"))
    {
        if (!validJsonOfField(0, "id", pJson["id"], err, true))
            return false;
    }
    else
    {
        err = "The id column cannot be null";
        return false;
    }
    if (pJson.isMember("randomnumber"))
    {
        if (!validJsonOfField(
                1, "randomnumber", pJson["randomnumber"], err, true))
            return false;
    }
    return true;
}
bool World::validateMasqueradedJsonForCreation(
    const Json::Value &pJson,
    const std::vector<std::string> &pMasqueradingVector,
    std::string &err)
{
    if (pMasqueradingVector.size() != 2)
    {
        err = "Bad masquerading vector";
        return false;
    }
    if (!pMasqueradingVector[0].empty())
    {
        if (pJson.isMember(pMasqueradingVector[0]))
        {
            if (!validJsonOfField(0,
                                  pMasqueradingVector[0],
                                  pJson[pMasqueradingVector[0]],
                                  err,
                                  true))
                return false;
        }
        else
        {
            err = "The " + pMasqueradingVector[0] + " column cannot be null";
            return false;
        }
    }
    if (!pMasqueradingVector[1].empty())
    {
        if (pJson.isMember(pMasqueradingVector[1]))
        {
            if (!validJsonOfField(1,
                                  pMasqueradingVector[1],
                                  pJson[pMasqueradingVector[1]],
                                  err,
                                  true))
                return false;
        }
    }
    return true;
}
bool World::validateJsonForUpdate(const Json::Value &pJson, std::string &err)
{
    if (pJson.isMember("id"))
    {
        if (!validJsonOfField(0, "id", pJson["id"], err, false))
            return false;
    }
    else
    {
        err =
            "The value of primary key must be set in the json object for "
            "update";
        return false;
    }
    if (pJson.isMember("randomnumber"))
    {
        if (!validJsonOfField(
                1, "randomnumber", pJson["randomnumber"], err, false))
            return false;
    }
    return true;
}
bool World::validateMasqueradedJsonForUpdate(
    const Json::Value &pJson,
    const std::vector<std::string> &pMasqueradingVector,
    std::string &err)
{
    if (pMasqueradingVector.size() != 2)
    {
        err = "Bad masquerading vector";
        return false;
    }
    if (!pMasqueradingVector[0].empty() &&
        pJson.isMember(pMasqueradingVector[0]))
    {
        if (!validJsonOfField(0,
                              pMasqueradingVector[0],
                              pJson[pMasqueradingVector[0]],
                              err,
                              false))
            return false;
    }
    else
    {
        err =
            "The value of primary key must be set in the json object for "
            "update";
        return false;
    }
    if (!pMasqueradingVector[1].empty() &&
        pJson.isMember(pMasqueradingVector[1]))
    {
        if (!validJsonOfField(1,
                              pMasqueradingVector[1],
                              pJson[pMasqueradingVector[1]],
                              err,
                              false))
            return false;
    }
    return true;
}
bool World::validJsonOfField(size_t index,
                             const std::string &fieldName,
                             const Json::Value &pJson,
                             std::string &err,
                             bool isForCreation)
{
    switch (index)
    {
        case 0:
            if (pJson.isNull())
            {
                err = "The " + fieldName + " column cannot be null";
                return false;
            }
            if (!pJson.isInt())
            {
                err = "Type error in the " + fieldName + " field";
                return false;
            }
            break;
        case 1:
            if (pJson.isNull())
            {
                err = "The " + fieldName + " column cannot be null";
                return false;
            }
            if (!pJson.isInt())
            {
                err = "Type error in the " + fieldName + " field";
                return false;
            }
            break;

        default:
            err = "Internal error in the server";
            return false;
            break;
    }
    return true;
}