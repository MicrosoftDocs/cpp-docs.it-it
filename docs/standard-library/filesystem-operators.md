---
title: "Operatori &lt;filesystem&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "FILESYSTEM/std::experimental::filesystem::v1::operator=="
  - "std::experimental::filesystem::v1::operator=="
  - "FILESYSTEM/std::experimental::filesystem::v1::operator!="
  - "std::experimental::filesystem::v1::operator!="
  - "FILESYSTEM/std::experimental::filesystem::v1::operator<"
  - "std::experimental::filesystem::v1::operator<"
  - "FILESYSTEM/std::experimental::filesystem::v1::operator<="
  - "std::experimental::filesystem::v1::operator<="
  - "FILESYSTEM/std::experimental::filesystem::v1::operator>"
  - "std::experimental::filesystem::v1::operator>"
  - "FILESYSTEM/std::experimental::filesystem::v1::operator>="
  - "std::experimental::filesystem::v1::operator>="
  - "FILESYSTEM/std::experimental::filesystem::v1::operator/"
  - "std::experimental::filesystem::v1::operator/"
  - "FILESYSTEM/std::experimental::filesystem::v1::operator<<"
  - "std::experimental::filesystem::v1::operator<<"
  - "FILESYSTEM/std::experimental::filesystem::v1::operator>>"
  - "std::experimental::filesystem::v1::operator>>"
dev_langs: 
  - "C++"
ms.assetid: 102c4833-aa3b-41a8-8998-f5003c546bfd
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Operatori &lt;filesystem&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli operatori eseguono un confronto lessicale di due percorsi come stringhe. Usare la funzione **equivalent** per determinare se due percorsi \(ad esempio, un percorso relativo e un percorso assoluto\) fanno riferimento allo stesso file o directory sul disco.  
  
```  
C:\root > D:\root: false  
C:\root > C:\root\sub: false  
C:\root > C:\roo: true  
  
```  
  
 Per altre informazioni, vedere [Esplorazione del file system \(C\+\+\)](../standard-library/file-system-navigation.md).  
  
## operator\=\=  
  
```  
bool operator==(const path& left, const path& right) noexcept;  
```  
  
 La funzione restituisce left.native\(\) \=\= right.native\(\).  
  
## operator\!\=  
  
```  
bool operator!=(const path& left, const path& right) noexcept;  
```  
  
 La funzione restituisce \!\(left \=\= right\).  
  
## operator\<  
  
```  
bool operator<(const path& left, const path& right) noexcept;  
```  
  
 La funzione restituisce left.native\(\) \< right.native\(\).  
  
## operator\<\=  
  
```  
bool operator<=(const path& left, const path& right) noexcept;  
```  
  
 La funzione restituisce \!\(right \< left\).  
  
## operator\>  
  
```  
bool operator>(const path& left, const path& right) noexcept;  
```  
  
 La funzione restituisce right \< left.  
  
## operator\>\=  
  
```  
bool operator>=(const path& left, const path& right) noexcept;  
```  
  
 La funzione restituisce \!\(left \< right\).  
  
## operatore \/  
  
```  
path operator/(const path& left, const path& right);  
```  
  
 La funzione esegue:  
  
```  
basic_string<Elem, Traits> str;  
path ans = left;  
return (ans /= right);  
  
```  
  
## operator\<\<  
  
```  
template<class Elem, class Traits>    basic_ostream<Elem, Traits>&    operator<<(basic_ostream<Elem, Traits>& os, const path& pval);  
```  
  
 La funzione restituisce os \<\< pval.string\<Elem, Traits\>\(\).  
  
## operator\>\>  
  
```  
template<class Elem, class Traits>    basic_istream<Elem, Traits>&    operator<<(basic_istream<Elem, Traits>& is, const path& pval);  
```  
  
 La funzione esegue:  
  
```  
basic_string<Elem, Traits> str;  
is >> str;  
pval = str;  
return (is);  
  
```  
  
## operator\=\=  
  
```  
bool operator==(const path& left, const path& right) noexcept;  
```  
  
 La funzione restituisce left.native\(\) \=\= right.native\(\).  
  
## Vedere anche  
 [Classe path \(Libreria dei modelli standard C\+\+\)](../standard-library/path-class-cpp-standard-template-library.md)   
 [Esplorazione del file system \(C\+\+\)](../standard-library/file-system-navigation.md)   
 [\<filesystem\>](../standard-library/filesystem.md)