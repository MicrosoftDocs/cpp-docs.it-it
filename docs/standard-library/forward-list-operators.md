---
title: '&lt;forward_list&gt; operators | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- forward_list/std::operator!=
- forward_list/std::operator==
- forward_list/std::operatoroperator&gt;
- forward_list/std::operatoroperator&gt=;
- forward_list/std::operatoroperator&lt;
- forward_list/std::operatoroperator&lt;=
dev_langs:
- C++
ms.assetid: 57492e09-3836-4dbc-9ae5-78ecf506c190
caps.latest.revision: 11
manager: ghogen
helpviewer_keywords:
- std::operator!= (forward_list)
- std::operator== (forward_list)
- std::operatoroperator&gt; (forward_list)
- std::operatoroperator&gt=; (forward_list)
- std::operatoroperator&lt; (forward_list)
- std::operatoroperator&lt;= (forward_list)
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: c00c7d1e506e60a0a8612601835ef4a91b98ea99
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="ltforwardlistgt-operators"></a>&lt;forward_list&gt; operators
||||  
|-|-|-|  
|[operator!=](#op_neq)|[operator&gt;](#op_gt)|[operator&gt;=](#op_gt_eq)|  
|[operator&lt;](#op_lt)|[operator&lt;=](#op_lt_eq)|[operator==](#op_eq_eq)|  
  
##  <a name="op_eq_eq"></a>  operator==  
 Tests if the forward list object on the left side of the operator is equal to the forward list object on the right side.  
  
```
bool operator==(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`left`|An object of type `forward_list`.|  
|`right`|An object of type `forward_list`.|  
  
### <a name="remarks"></a>Remarks  
 This template function overloads `operator==` to compare two objects of template class `forward_list`. The function returns `distance(left.begin(), end()) == distance(right.begin(),right.end()) && equal(left. begin(),left. end(),right.begin())`.  
  
##  <a name="op_neq"></a>  operator!=  
 Tests if the forward list object on the left side of the operator is not equal to the forward list object on the right side.  
  
```
bool operator!=(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`left`|An object of type `forward_list`.|  
|`right`|An object of type `forward_list`.|  
  
### <a name="return-value"></a>Return Value  
 **true** if the lists are not equal; **false** if the lists are equal.  
  
### <a name="remarks"></a>Remarks  
 This template function returns `!(left == right)`.  
  
##  <a name="op_lt"></a>  operator&lt;  
 Tests if the forward list object on the left side of the operator is less than the forward list object on the right side.  
  
```
bool operator<(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`left`|An object of type `forward_list`.|  
|`right`|An object of type `forward_list`.|  
  
### <a name="return-value"></a>Return Value  
 `true` if the list on the left side of the operator is less than but not equal to the list on the right side of the operator; otherwise `false`.  
  
### <a name="remarks"></a>Remarks  
 This template function overloads `operator<` to compare two objects of template class `forward_list`. The function returns `lexicographical_compare(lhs. begin(), lhs. end(), rhs.begin(), rhs.end())`.  
  
##  <a name="op_lt_eq"></a>  operator&lt;=  
 Tests if the forward list object on the left side of the operator is less than or equal to the forward list object on the right side.  
  
```
bool operator<=(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`left`|An object of type `forward_list`.|  
|`right`|An object of type `forward_list`.|  
  
### <a name="return-value"></a>Return Value  
 `true` if the list on the left side of the operator is less than or equal to the list on the right side of the operator; otherwise `false`.  
  
### <a name="remarks"></a>Remarks  
 This template function returns `!(right < left)`.  
  
##  <a name="op_gt"></a>  operator&gt;  
 Tests if the forward list object on the left side of the operator is greater than the forward list object on the right side.  
  
```
bool operator>(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`left`|An object of type `forward_list`.|  
|`right`|An object of type `forward_list`.|  
  
### <a name="return-value"></a>Return Value  
 `true` if the list on the left side of the operator is greater than the list on the right side of the operator; otherwise `false`.  
  
### <a name="remarks"></a>Remarks  
 This template function returns `right < left`.  
  
##  <a name="op_gt_eq"></a>  operator&gt;=  
 Tests if the forward list object on the left side of the operator is greater than or equal to the forward list object on the right side.  
  
```
bool operator>=(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`left`|An object of type `forward_list`.|  
|`right`|An object of type `forward_list`.|  
  
### <a name="return-value"></a>Return Value  
 `true` if the forward list on the left side of the operator is greater than or equal to the forward list on the right side of the operator; otherwise `false`.  
  
### <a name="remarks"></a>Remarks  
 The template function returns `!(left < right)`.  
  
## <a name="see-also"></a>See Also  
 [<forward_list>](../standard-library/forward-list.md)




