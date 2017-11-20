---
title: Operatori &lt;filesystem&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- FILESYSTEM/std::experimental::filesystem::operator==
- FILESYSTEM/std::experimental::filesystem::operator!=
- FILESYSTEM/std::experimental::filesystem::operator<
- FILESYSTEM/std::experimental::filesystem::operator<=
- FILESYSTEM/std::experimental::filesystem::operator>
- FILESYSTEM/std::experimental::filesystem::operator>=
- FILESYSTEM/std::experimental::filesystem::operator/
- FILESYSTEM/std::experimental::filesystem::operator<<
- FILESYSTEM/std::experimental::filesystem::operator>>
dev_langs: C++
ms.assetid: 102c4833-aa3b-41a8-8998-f5003c546bfd
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 3b3587822536a6eff54b42c36b155836a9e49ab5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="ltfilesystemgt-operators"></a>Operatori &lt;filesystem&gt;
Gli operatori eseguono un confronto lessicale di due percorsi come stringhe. Usare la funzione **equivalent** per determinare se due percorsi (ad esempio, un percorso relativo e un percorso assoluto) fanno riferimento allo stesso file o directory sul disco.  
  
```  
C:\root> D:\root: false  
C:\root> C:\root\sub: false  
C:\root> C:\roo: true  
```  
  
 Per altre informazioni, vedere [Esplorazione del file system (C++)](../standard-library/file-system-navigation.md).  
  
## <a name="operator"></a>operator==  
  
```  
bool operator==(const path& left, const path& right) noexcept;  
```  
  
 La funzione restituisce left.native() == right.native().  
  
## <a name="operator"></a>operator!=  
  
```  
bool operator!=(const path& left, const path& right) noexcept;  
```  
  
 La funzione restituisce !(left == right).  
  
## <a name="operator"></a>operator<  
  
```  
bool operator<(const path& left, const path& right) noexcept;  
```  
  
 La funzione restituisce left.native() < right.native().  
  
## <a name="operator"></a>operator<=  
  
```  
bool operator<=(const path& left, const path& right) noexcept;  
```  
  
 La funzione restituisce !(right \< left).  
  
## <a name="operator"></a>operator>  
  
```  
bool operator>(const path& left, const path& right) noexcept;  
```  
  
 La funzione restituisce right \< left.  
  
## <a name="operator"></a>operator>=  
  
```  
bool operator>=(const path& left, const path& right) noexcept;  
```  
  
 La funzione restituisce !(left < right).  
  
## <a name="operator"></a>operatore /  
  
```  
path operator/(const path& left, const path& right);
```  
  
 La funzione esegue:  
  
```  
basic_string<Elem, Traits> str;  
path ans = left;  
return (ans /= right);
```  
  
## <a name="operator"></a>operator<<  
  
```  
template <class Elem, class Traits>  
basic_ostream<Elem, Traits>& operator<<(basic_ostream<Elem, Traits>& os, const path& pval);
```  
  
 La funzione restituisce os << pval.string\<Elem, Traits>().  
  
## <a name="operator"></a>operator>>  
  
```  
template <class Elem, class Traits>  
basic_istream<Elem, Traits>& operator<<(basic_istream<Elem, Traits>& is, const path& pval);
```  
  
 La funzione esegue:  
  
```  
basic_string<Elem, Traits> str;  
is>> str;  
pval = str;  
return (is);
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classe path (libreria standard C++)](../standard-library/path-class.md)   
 [Esplorazione del file system (C++)](../standard-library/file-system-navigation.md)   
 [\<filesystem>](../standard-library/filesystem.md)

