---
title: '&lt;system_error&gt; operators | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- system_error/std::operator!=
- system_error/std::operator==
dev_langs:
- C++
ms.assetid: c14edefb-bd8a-4e90-88d3-c59c98e6f73c
caps.latest.revision: 11
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: 887b7c019857b1ae685b3108791e47158f48b921
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="ltsystemerrorgt-operators"></a>&lt;system_error&gt; operators
||||  
|-|-|-|  
|[operator!=](#op_neq)|[operator&lt;](#op_lt)|[operator==](#op_eq_eq)|  
  
##  <a name="op_eq_eq"></a>  operator==  
 Tests if the object on the left side of the operator is equal to the object on the right side.  
  
```
bool operator==(const error_code& left,
    const error_condition& right);

bool operator==(const error_condition& left,
    const error_code& right);
```  
  
### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`left`|The object to be tested for equality.|  
|`right`|The object to be tested for equality.|  
  
### <a name="return-value"></a>Return Value  
 **true** if the objects are equal; **false** if objects are not equal.  
  
### <a name="remarks"></a>Remarks  
 This function returns `left.category() == right.category() && left.value() == right.value()`.  
  
##  <a name="op_neq"></a>  operator!=  
 Tests if the object on the left side of the operator is not equal to the object on the right side.  
  
```
bool operator!=(const error_code& left,
    const error_condition& right);

bool operator!=(const error_condition& left,
    const error_code& right);
```  
  
### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`left`|The object to be tested for inequality.|  
|`right`|The object to be tested for inequality.|  
  
### <a name="return-value"></a>Return Value  
 **true** if the object passed in `left` is not equal to the object passed in `right`; otherwise **false**.  
  
### <a name="remarks"></a>Remarks  
 This function returns `!(left == right)`.  
  
##  <a name="op_lt"></a>  operator&lt;  
 Tests if an object is less than the object passed in for comparison.  
  
```
template <class _Enum>  
inline bool operator<(
    _Enum left,
    typename enable_if<is_error_code_enum<_Enum>::value,
    const error_code&>::type right);

template <class _Enum>  
inline bool operator<(
    typename enable_if<is_error_code_enum<_Enum>::value,
    const error_code&>::type left, _Enum right);

template <class _Enum>  
inline bool operator<(
    _Enum left,
    typename enable_if<is_error_condition_enum<_Enum>::value,
    const error_condition&>::type right);

template <class _Enum>  
inline bool operator<(
    typename enable_if<is_error_condition_enum<_Enum>::value,
    const error_condition&>::type left, _Enum right);
```  
  
### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`left`|The object to be compared.|  
|`right`|The object to be compared.|  
  
### <a name="return-value"></a>Return Value  
 **true** if the object passed in `left` is less than the object passed in `right`; Otherwise, **false**.  
  
### <a name="remarks"></a>Remarks  
 This function tests the error order.  
  
## <a name="see-also"></a>See Also  
 [<system_error>](../standard-library/system-error.md)




