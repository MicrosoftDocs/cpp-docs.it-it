---
title: '&lt;string&gt; typedefs | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- string/std::string
- string/std::u16string
- string/std::u32string
- string/std::wstring
ms.assetid: fdca01e9-f2f1-4b59-abda-0093d760b3cc
caps.latest.revision: 12
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: 07de226afac564c50618d212648a63b90069c902
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="ltstringgt-typedefs"></a>&lt;string&gt; typedefs
||||  
|-|-|-|  
|[string](#string)|[u16string](#u16string)|[u32string](#u32string)|  
|[wstring](#wstring)|  
  
##  <a name="string"></a>  string  
 A type that describes a specialization of the template class [basic_string](../standard-library/basic-string-class.md) with elements of type `char`.  
  
 Other typedefs that specialize `basic_string` include [wstring](../standard-library/string-typedefs.md#wstring), [u16string](../standard-library/string-typedefs.md#u16string), and [u32string](../standard-library/string-typedefs.md#u32string).  
  
```cpp  
typedef basic_string<char, char_traits<char>, allocator<char>> string;
```  
  
### <a name="remarks"></a>Remarks  
 The following are equivalent declarations:  
  
```cpp  
string str("");

basic_string<char> str("");
```  
  
 For a list of string constructors, see [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).  
  
##  <a name="u16string"></a>  u16string  
 A type that describes a specialization of the template class [basic_string](../standard-library/basic-string-class.md) with elements of type `char16_t`.  
  
 Other typedefs that specialize `basic_string` include [wstring](../standard-library/string-typedefs.md#wstring), [string](../standard-library/string-typedefs.md#string), and [u32string](../standard-library/string-typedefs.md#u32string).  
  
```cpp  
typedef basic_string<char16_t, char_traits<char16_t>, allocator<char16_t>> u16string;
```  
  
### <a name="remarks"></a>Remarks  
 For a list of string constructors, see [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).  
  
##  <a name="u32string"></a>  u32string  
 A type that describes a specialization of the template class [basic_string](../standard-library/basic-string-class.md) with elements of type `char32_t`.  
  
 Other typedefs that specialize `basic_string` include [string](../standard-library/string-typedefs.md#string), [u16string](../standard-library/string-typedefs.md#u16string), and [wstring](../standard-library/string-typedefs.md#wstring).  
  
```cpp  
typedef basic_string<char32_t, char_traits<char32_t>, allocator<char32_t>> u32string;
```  
  
### <a name="remarks"></a>Remarks  
 For a list of string constructors, see [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).  
  
##  <a name="wstring"></a>  wstring  
 A type that describes a specialization of the template class [basic_string](../standard-library/basic-string-class.md) with elements of type `wchar_t`.  
  
 Other typedefs that specialize `basic_string` include [string](../standard-library/string-typedefs.md#string), [u16string](../standard-library/string-typedefs.md#u16string), and [u32string](../standard-library/string-typedefs.md#u32string).  
  
```cpp  
typedef basic_string<wchar_t, char_traits<wchar_t>, allocator<wchar_t>> wstring;
```  
  
### <a name="remarks"></a>Remarks  
 The following are equivalent declarations:  
  
```cpp  
wstring wstr(L"");

basic_string<wchar_t> wstr(L"");
```  
  
 For a list of string constructors, see [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).  
  
> [!NOTE]
>  The size of `wchar_t` is implementation-defined. If your code depends on `wchar_t` to be a certain size, check your platform's implementation (for example, with `sizeof(wchar_t)`). If you need a string character type with a width that is guaranteed to remain the same on all platforms, use [string](../standard-library/string-typedefs.md#string), [u16string](../standard-library/string-typedefs.md#u16string), or [u32string](../standard-library/string-typedefs.md#u32string).  
  
## <a name="see-also"></a>See Also  
 [\<string>](../standard-library/string.md)




