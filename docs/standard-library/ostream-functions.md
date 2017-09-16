---
title: '&lt;ostream&gt; functions | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ostream/std::swap
- ostream/std::endl
- ostream/std::ends
- ostream/std::flush
ms.assetid: d6e56cc0-c8df-4dbe-be10-98e14c35ed3a
caps.latest.revision: 15
manager: ghogen
helpviewer_keywords:
- std::swap [C++]
- std::endl [C++]
- std::ends [C++]
- std::flush [C++]
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: a6f796a21ec0e8448524963a4d3f62edb492840d
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="ltostreamgt-functions"></a>&lt;ostream&gt; functions
||||  
|-|-|-|  
|[swap](#swap)|[endl](#endl)|[ends](#ends)|  
|[flush](#flush)|  
  
##  <a name="endl"></a>  endl  
 Terminates a line and flushes the buffer.  
  
```  
template class<Elem, Tr> basic_ostream<Elem, Tr>& endl(basic_ostream<Elem, Tr>& Ostr);
```  
  
### <a name="parameters"></a>Parameters  
 `Elem`  
 The element type.  
  
 `Ostr`  
 An object of type `basic_ostream`.  
  
 `Tr`  
 Character traits.  
  
### <a name="return-value"></a>Return Value  
 An object of type `basic_ostream`.  
  
### <a name="remarks"></a>Remarks  
 The manipulator calls `Ostr`**.**[put](../standard-library/basic-ostream-class.md#put)( `Ostr`**.** [widen](../standard-library/basic-ios-class.md#widen)( **'\n'**)), and then calls `Ostr`**.**[flush](../standard-library/basic-ostream-class.md#flush). It returns `Ostr`.  
  
### <a name="example"></a>Example  
  
```cpp  
// ostream_endl.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   cout << "testing" << endl;  
}  
```  
  
```Output  
testing  
```  
  
##  <a name="ends"></a>  ends  
 Terminates a string.  
  
```  
template class<Elem, Tr> basic_ostream<Elem, Tr>& ends(basic_ostream<Elem, Tr>& Ostr);
```  
  
### <a name="parameters"></a>Parameters  
 `Elem`  
 The element type.  
  
 `Ostr`  
 An object of type `basic_ostream`.  
  
 `Tr`  
 Character traits.  
  
### <a name="return-value"></a>Return Value  
 An object of type `basic_ostream`.  
  
### <a name="remarks"></a>Remarks  
 The manipulator calls `Ostr`**.**[put](../standard-library/basic-ostream-class.md#put)( `Elem`( **'\0'**)). It returns `Ostr.`  
  
### <a name="example"></a>Example  
  
```cpp  
// ostream_ends.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   cout << "a";  
   cout << "b" << ends;  
   cout << "c" << endl;  
}  
```  
  
```Output  
ab c  
```  
  
##  <a name="flush"></a>  flush  
 Flushes the buffer.  
  
```  
template class<Elem, Tr> basic_ostream<Elem, Tr>& flush(basic_ostream<Elem, Tr>& Ostr);
```  
  
### <a name="parameters"></a>Parameters  
 `Elem`  
 The element type.  
  
 `Ostr`  
 An object of type `basic_ostream`.  
  
 `Tr`  
 Character traits.  
  
### <a name="return-value"></a>Return Value  
 An object of type `basic_ostream`.  
  
### <a name="remarks"></a>Remarks  
 The manipulator calls `Ostr`**.**[flush](../standard-library/basic-ostream-class.md#flush). It returns `Ostr`.  
  
### <a name="example"></a>Example  
  
```cpp  
// ostream_flush.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   cout << "testing" << flush;  
}  
```  
  
```Output  
testing  
```  
  
##  <a name="swap"></a>  swap  
 Exchanges the values of two `basic_ostream` objects.  
  
```  
template <class Elem, class Tr>  
void swap(
    basic_ostream<Elem, Tr>& left,  
    basic_ostream<Elem, Tr>& right);
```  
  
### <a name="parameters"></a>Parameters  
 `left`  
 An lvalue reference to a `basic_ostream` object.  
  
 `right`  
 An lvalue reference to a `basic_ostream` object.  
  
### <a name="remarks"></a>Remarks  
 The template function `swap` executes `left.swap(right)`.  
  
## <a name="see-also"></a>See Also  
 [\<ostream>](../standard-library/ostream.md)


