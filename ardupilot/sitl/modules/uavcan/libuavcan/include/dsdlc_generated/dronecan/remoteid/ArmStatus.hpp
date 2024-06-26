/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/user/cyberimmune-systems-autonomous-delivery-drone-with-kos-contest/modules/DroneCAN/DSDL/dronecan/remoteid/20035.ArmStatus.uavcan
 */

#ifndef DRONECAN_REMOTEID_ARMSTATUS_HPP_INCLUDED
#define DRONECAN_REMOTEID_ARMSTATUS_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# DroneCAN version of MAVLink OPEN_DRONE_ID_ARM_STATUS
# see MAVLink XML for detailed description
#
uint8 ODID_ARM_STATUS_GOOD_TO_ARM = 0
uint8 ODID_ARM_STATUS_FAIL_GENERIC = 1
uint8 status

uint8[<=50] error
******************************************************************************/

/********************* DSDL signature source definition ***********************
dronecan.remoteid.ArmStatus
saturated uint8 status
saturated uint8[<=50] error
******************************************************************************/

#undef status
#undef error
#undef ODID_ARM_STATUS_GOOD_TO_ARM
#undef ODID_ARM_STATUS_FAIL_GENERIC

namespace dronecan
{
namespace remoteid
{

template <int _tmpl>
struct UAVCAN_EXPORT ArmStatus_
{
    typedef const ArmStatus_<_tmpl>& ParameterType;
    typedef ArmStatus_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_ARM_STATUS_GOOD_TO_ARM;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_ARM_STATUS_FAIL_GENERIC;
    };

    struct FieldTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > status;
        typedef ::uavcan::Array< ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 50 > error;
    };

    enum
    {
        MinBitLen
            = FieldTypes::status::MinBitLen
            + FieldTypes::error::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::status::MaxBitLen
            + FieldTypes::error::MaxBitLen
    };

    // Constants
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_ARM_STATUS_GOOD_TO_ARM >::Type ODID_ARM_STATUS_GOOD_TO_ARM; // 0
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_ARM_STATUS_FAIL_GENERIC >::Type ODID_ARM_STATUS_FAIL_GENERIC; // 1

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::status >::Type status;
    typename ::uavcan::StorageType< typename FieldTypes::error >::Type error;

    ArmStatus_()
        : status()
        , error()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<414 == MaxBitLen>::check();
#endif
    }

    bool operator==(ParameterType rhs) const;
    bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

    /**
     * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
     * floating point fields at any depth.
     */
    bool isClose(ParameterType rhs) const;

    static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    enum { DefaultDataTypeID = 20035 };

    static const char* getDataTypeFullName()
    {
        return "dronecan.remoteid.ArmStatus";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool ArmStatus_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        status == rhs.status &&
        error == rhs.error;
}

template <int _tmpl>
bool ArmStatus_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(status, rhs.status) &&
        ::uavcan::areClose(error, rhs.error);
}

template <int _tmpl>
int ArmStatus_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::status::encode(self.status, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::error::encode(self.error, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int ArmStatus_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::status::decode(self.status, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::error::decode(self.error, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature ArmStatus_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xFEDF72CCF06F3BDDULL);

    FieldTypes::status::extendDataTypeSignature(signature);
    FieldTypes::error::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename ArmStatus_<_tmpl>::ConstantTypes::ODID_ARM_STATUS_GOOD_TO_ARM >::Type
    ArmStatus_<_tmpl>::ODID_ARM_STATUS_GOOD_TO_ARM = 0U; // 0

template <int _tmpl>
const typename ::uavcan::StorageType< typename ArmStatus_<_tmpl>::ConstantTypes::ODID_ARM_STATUS_FAIL_GENERIC >::Type
    ArmStatus_<_tmpl>::ODID_ARM_STATUS_FAIL_GENERIC = 1U; // 1

/*
 * Final typedef
 */
typedef ArmStatus_<0> ArmStatus;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::dronecan::remoteid::ArmStatus > _uavcan_gdtr_registrator_ArmStatus;

}

} // Namespace remoteid
} // Namespace dronecan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::dronecan::remoteid::ArmStatus >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::dronecan::remoteid::ArmStatus::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::dronecan::remoteid::ArmStatus >::stream(Stream& s, ::dronecan::remoteid::ArmStatus::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "status: ";
    YamlStreamer< ::dronecan::remoteid::ArmStatus::FieldTypes::status >::stream(s, obj.status, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "error: ";
    YamlStreamer< ::dronecan::remoteid::ArmStatus::FieldTypes::error >::stream(s, obj.error, level + 1);
}

}

namespace dronecan
{
namespace remoteid
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::dronecan::remoteid::ArmStatus::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::dronecan::remoteid::ArmStatus >::stream(s, obj, 0);
    return s;
}

} // Namespace remoteid
} // Namespace dronecan

#endif // DRONECAN_REMOTEID_ARMSTATUS_HPP_INCLUDED