---
title: reference_wrapper Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- functional/std::reference_wrapper
- type_traits/std::reference_wrapper
- xrefwrap/std::reference_wrapper
- type_traits/std::reference_wrapper::get
- type_traits/std::reference_wrapper::operator()
- functional/std::reference_wrapper::result_type
- functional/std::reference_wrapper::type
- functional/std::reference_wrapper::get
- functional/std::reference_wrapper::operator()
dev_langs:
- C++
helpviewer_keywords:
- std::reference_wrapper [C++]
- std::reference_wrapper [C++]
- std::reference_wrapper [C++], result_type
- std::reference_wrapper [C++], type
- std::reference_wrapper [C++], get
ms.assetid: 90b8ed62-e6f1-44ed-acc7-9619bd58865a
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
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
ms.openlocfilehash: 4e6acb873221133edb3000eeb82bd72ac9185744
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="referencewrapper-class"></a>reference_wrapper Class
Wraps a reference.  
  
## <a name="syntax"></a>Syntax  
  
```  
template <class Ty>  
class reference_wrapper  
{  
public:  
    typedef Ty type;  
 
    reference_wrapper(Ty&) noexcept;
    operator Ty&() const noexcept;
    Ty& get() const noexcept;

    template <class... Types> 
    auto operator()(Types&&... args) const ->
        decltype(std::invoke(get(), std::forward<Types>(args)...));
 
private:  
    Ty *ptr; // exposition only  
};  
```  
  
## <a name="remarks"></a>Remarks  
A `reference_wrapper<Ty>` is a copy constructible and copy assignable wrapper around a reference to an object or a function of type `Ty`, and holds a pointer that points to an object of that type. A `reference_wrapper` can be used to store references in standard containers, and to pass objects by reference to `std::bind`.  
  
The type `Ty` must be an object type or a function type, or a static assert fails at compile time.  
  
The helper functions [std::ref](functional-functions.md#ref) and [std::cref](functional-functions.md#cref) can be used to create `reference_wrapper` objects.  
  
### <a name="constructors"></a>Constructors  
  
|||  
|-|-|  
|[reference_wrapper](#reference_wrapper)|Constructs a `reference_wrapper`.|  
  
### <a name="typedefs"></a>Typedefs  
  
|||  
|-|-|  
|[result_type](#result_type)|The weak result type of the wrapped reference.|  
|[type](#type)|The type of the wrapped reference.|  
  
### <a name="member-functions"></a>Member Functions  
  
|||  
|-|-|  
|[get](#get)|Obtains the wrapped reference.|  
  
### <a name="operators"></a>Operators  
  
|||  
|-|-|  
|[reference_wrapper::operator Ty&amp;](#op_ty_amp)|Gets a pointer to the wrapped reference.|  
|[reference_wrapper::operator()](#op_call)|Calls the wrapped reference.|  
## <a name="requirements"></a>Requirements  
 **Header:** \<functional>  
  
 **Namespace:** std  
  
##  <a name="get"></a>  reference_wrapper::get  
 Obtains the wrapped reference.  
  
```  
Ty& get() const noexcept;
```  
  
### <a name="remarks"></a>Remarks  
The member function returns the wrapped reference.  
  
### <a name="example"></a>Example  
  
```cpp  
// std__functional__reference_wrapper_get.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int main() {   
    int i = 1;   
    std::reference_wrapper<int> rwi(i);   
  
    std::cout << "i = " << i << std::endl;   
    std::cout << "rwi = " << rwi << std::endl;   
    rwi.get() = -1;   
    std::cout << "i = " << i << std::endl;   
  
    return (0);   
}  
```  
  
```Output  
i = 1  
rwi = 1  
i = -1  
```  
  
##  <a name="op_ty_amp"></a>  reference_wrapper::operator Ty&amp;  
 Gets the wrapped reference.  
  
```  
operator Ty&() const noexcept;
```  
  
### <a name="remarks"></a>Remarks  
 The member operator returns `*ptr`.  
  
### <a name="example"></a>Example  
  
```cpp  
// std__functional__reference_wrapper_operator_cast.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int main() {   
    int i = 1;   
    std::reference_wrapper<int> rwi(i);   
  
    std::cout << "i = " << i << std::endl;   
    std::cout << "(int)rwi = " << (int)rwi << std::endl;   
  
    return (0);   
}  
```  
  
```Output  
i = 1  
(int)rwi = 1  
```  
  
##  <a name="op_call"></a>  reference_wrapper::operator()  
 Calls the wrapped reference.  
  
```  
template <class... Types>  
auto operator()(Types&&... args);
```  
  
### <a name="parameters"></a>Parameters  
 `Types`  
 The argument list types.  
  
 `args`  
 The argument list.  
  
### <a name="remarks"></a>Remarks  
 The template member `operator()` returns `std::invoke(get(), std::forward<Types>(args)...)`.  
  
### <a name="example"></a>Example  
  
```cpp  
// std__functional__reference_wrapper_operator_call.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int neg(int val) {   
    return (-val);   
}   
  
int main() {   
    std::reference_wrapper<int (int)> rwi(neg);   
  
    std::cout << "rwi(3) = " << rwi(3) << std::endl;   
  
    return (0);   
}  
```  
  
```Output  
rwi(3) = -3  
```  
  
##  <a name="reference_wrapper"></a>  reference_wrapper::reference_wrapper  
 Constructs a `reference_wrapper`.  
  
```  
reference_wrapper(Ty& val) noexcept;
```  
  
### <a name="parameters"></a>Parameters  
 `Ty`  
 The type to wrap.  
  
 `val`  
 The value to wrap.  
  
### <a name="remarks"></a>Remarks  
 The constructor sets the stored value `ptr` to `&val`.  
  
### <a name="example"></a>Example  
  
```cpp  
// std__functional__reference_wrapper_reference_wrapper.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int neg(int val) {   
    return (-val);   
}   
  
int main() {   
    int i = 1;   
    std::reference_wrapper<int> rwi(i);   
  
    std::cout << "i = " << i << std::endl;   
    std::cout << "rwi = " << rwi << std::endl;   
    rwi.get() = -1;   
    std::cout << "i = " << i << std::endl;   
  
    return (0);   
}  
```  
  
```Output  
i = 1  
rwi = 1  
i = -1  
```  
  
##  <a name="result_type"></a>  reference_wrapper::result_type  
 The weak result type of the wrapped reference.  
  
```  
typedef R result_type;  
```  
  
### <a name="remarks"></a>Remarks  
 The `result_type` typedef is a synonym for the weak result type of a wrapped function. This typedef is only meaningful for function types.  
  
### <a name="example"></a>Example  
  
```cpp  
// std__functional__reference_wrapper_result_type.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int neg(int val) {   
    return (-val);   
}   
  
int main() {   
    typedef std::reference_wrapper<int (int)> Mywrapper;   
    Mywrapper rwi(neg);   
    Mywrapper::result_type val = rwi(3);   
  
    std::cout << "val = " << val << std::endl;   
  
    return (0);   
}  
```  
  
```Output  
val = -3  
```  
  
##  <a name="type"></a>  reference_wrapper::type  
 The type of the wrapped reference.  
  
```  
typedef Ty type;  
```  
  
### <a name="remarks"></a>Remarks  
 The typedef is a synonym for the template argument `Ty`.  
  
### <a name="example"></a>Example  
  
```cpp  
// std__functional__reference_wrapper_type.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int neg(int val) {   
    return (-val);   
}   
  
int main() {   
    int i = 1;   
    typedef std::reference_wrapper<int> Mywrapper;   
    Mywrapper rwi(i);   
    Mywrapper::type val = rwi.get();   
  
    std::cout << "i = " << i << std::endl;   
    std::cout << "rwi = " << val << std::endl;   
  
    return (0);   
}  
```  
  
```Output  
i = 1  
rwi = 1  
```  
  
## <a name="see-also"></a>See Also  
 [cref](../standard-library/functional-functions.md#cref)   
 [ref](../standard-library/functional-functions.md#ref)


