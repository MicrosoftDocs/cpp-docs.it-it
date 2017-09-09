---
title: error_category Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- system_error/std::error_category
- system_error/std::error_category::value_type
- system_error/std::error_category::default_error_condition
- system_error/std::error_category::equivalent
- system_error/std::error_category::message
- system_error/std::error_category::name
dev_langs:
- C++
helpviewer_keywords:
- std::error_category
- std::error_category::value_type
- std::error_category::default_error_condition
- std::error_category::equivalent
- std::error_category::message
- std::error_category::name
ms.assetid: e0a71e14-852d-4905-acd6-5f8ed426706d
caps.latest.revision: 15
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: 297d126e12536d8792977769bd6dd40e50b3ca68
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="errorcategory-class"></a>error_category Class
Represents the abstract, common base for objects that describes a category of error codes.  
  
## <a name="syntax"></a>Syntax  
  
```
class error_category;
```  
  
## <a name="remarks"></a>Remarks  
 Two predefined objects implement `error_category`: [generic_category](../standard-library/system-error-functions.md#generic_category) and [system_category](../standard-library/system-error-functions.md#system_category).  
  
### <a name="typedefs"></a>TypeDefs  
  
|||  
|-|-|  
|[value_type](#value_type)|A type that represents the stored error code value.|  
  
### <a name="member-functions"></a>Member Functions  
  
|||  
|-|-|  
|[default_error_condition](#default_error_condition)|Stores the error code value for an error condition object.|  
|[equivalent](#equivalent)|Returns a value that specifies whether error objects are equivalent.|  
|[message](#message)|Returns the name of the specified error code.|  
|[name](#name)|Returns the name of the category.|  
  
### <a name="operators"></a>Operators  
  
|||  
|-|-|  
|[operator==](#op_eq_eq)|Tests for equality between `error_category` objects.|  
|[operator!=](#op_neq)|Tests for inequality between `error_category` objects.|  
|[operator<](#op_lt)|Tests if the [error_category](../standard-library/error-category-class.md) object is less than the `error_category` object passed in for comparison.|  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<system_error>  
  
 **Namespace:** std  
  
##  <a name="default_error_condition"></a>  error_category::default_error_condition  
 Stores the error code value for an error condition object.  
  
```
virtual error_condition default_error_condition(int _Errval) const;
```  
  
### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Errval`|The error code value to store in the [error_condition](../standard-library/error-condition-class.md).|  
  
### <a name="return-value"></a>Return Value  
 Returns `error_condition(_Errval, *this)`.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="equivalent"></a>  error_category::equivalent  
 Returns a value that specifies whether error objects are equivalent.  
  
```
virtual bool equivalent(value_type _Errval,
    const error_condition& _Cond) const;

virtual bool equivalent(const error_code& _Code,
    value_type _Errval) const;
```  
  
### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Errval`|The error code value to compare.|  
|`_Cond`|The [error_condition](../standard-library/error-condition-class.md) object to compare.|  
|`_Code`|The [error_code](../standard-library/error-code-class.md) object to compare.|  
  
### <a name="return-value"></a>Return Value  
 `true` if the category and value are equal; otherwise, `false`.  
  
### <a name="remarks"></a>Remarks  
 The first member function returns `*this == _Cond.category() && _Cond.value() == _Errval`.  
  
 The second member function returns `*this == _Code.category() && _Code.value() == _Errval`.  
  
##  <a name="message"></a>  error_category::message  
 Returns the name of the specified error code.  
  
```
virtual string message(error_code::value_type val) const = 0;
```  
  
### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`val`|The error code value to describe.|  
  
### <a name="return-value"></a>Return Value  
 Returns a descriptive name of the error code `val` for the category.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="name"></a>  error_category::name  
 Returns the name of the category.  
  
```
virtual const char *name() const = 0;
```  
  
### <a name="return-value"></a>Return Value  
 Returns the name of the category as a null-terminated byte string.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="op_eq_eq"></a>  error_category::operator==  
 Tests for equality between `error_category` objects.  
  
```
bool operator==(const error_category& right) const;
```  
  
### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`right`|The object to be tested for equality.|  
  
### <a name="return-value"></a>Return Value  
 **true** if the objects are equal; **false** if the objects are not equal.  
  
### <a name="remarks"></a>Remarks  
 This member operator returns `this == &right`.  
  
##  <a name="op_neq"></a>  error_category::operator!=  
 Tests for inequality between `error_category` objects.  
  
```
bool operator!=(const error_category& right) const;
```  
  
### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`right`|The object to be tested for inequality.|  
  
### <a name="return-value"></a>Return Value  
 **true** if the `error_category` object is not equal to the `error_category` object passed in `right`; otherwise **false**.  
  
### <a name="remarks"></a>Remarks  
 The member operator returns `(!*this == right)`.  
  
##  <a name="op_lt"></a>  error_category::operator&lt;  
 Tests if the [error_category](../standard-library/error-category-class.md) object is less than the `error_category` object passed in for comparison.  
  
```
bool operator<(const error_category& right) const;
```  
  
### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`right`|The `error_category` object to be compared.|  
  
### <a name="return-value"></a>Return Value  
 **true** if the `error_category` object is less than the `error_category` object passed in for comparison; Otherwise, **false**.  
  
### <a name="remarks"></a>Remarks  
 The member operator returns `this < &right`.  
  
##  <a name="value_type"></a>  error_category::value_type  
 A type that represents the stored error code value.  
  
```
typedef int value_type;
```  
  
### <a name="remarks"></a>Remarks  
 This type definition is a synonym for `int`.  
  
## <a name="see-also"></a>See Also  
 [<system_error>](../standard-library/system-error.md)




