---
title: '&lt;istream&gt; functions | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- istream/std::swap
- istream/std::ws
ms.assetid: 0301ea0d-4ded-4841-83dd-4253b55b3188
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: da7daceab4f20246b321ea9c3443eae4eb085a23
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="ltistreamgt-functions"></a>&lt;istream&gt; functions
|||  
|-|-|  
|[swap](#istream_swap)|[ws](#ws)|  
  
##  <a name="istream_swap"></a>  swap  
 Exchanges the elements of two stream objects.  
  
```  
template <class Elem, class Tr>  
void swap(
    basic_istream<Elem, Tr>& left,  
    basic_istream<Elem, Tr>& right);

template <class Elem, class Tr>  
void swap(
    basic_iostream<Elem, Tr>& left,  
    basic_iostream<Elem, Tr>& right);
```  
  
### <a name="parameters"></a>Parameters  
 `left`  
 A stream.  
  
 `right`  
 A stream.  
  
##  <a name="ws"></a>  ws  
 Skips white space in the stream.  
  
```  
template class<Elem, Tr> basic_istream<Elem, Tr>& ws(basic_istream<Elem, Tr>& _Istr);
```  
  
### <a name="parameters"></a>Parameters  
 `_Istr`  
 A stream.  
  
### <a name="return-value"></a>Return Value  
 The stream.  
  
### <a name="remarks"></a>Remarks  
 The manipulator extracts and discards any elements `ch` for which [use_facet](../standard-library/basic-filebuf-class.md#open)< **ctype**\< **Elem**> >( [getloc](../standard-library/ios-base-class.md#getloc)). **is**( **ctype**\< **Elem**>:: **space**, **ch**) is true.  
  
 The function calls [setstate](../standard-library/basic-ios-class.md#setstate)( **eofbit**) if it encounters end of file while extracting elements. It returns `_Istr`.  
  
### <a name="example"></a>Example  
  See [operator>>](../standard-library/istream-operators.md#op_gt_gt) for an example of using `ws`.  
  
## <a name="see-also"></a>See Also  
 [\<istream>](../standard-library/istream.md)


