---
title: "Classe filesystem_error | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "filesystem/std::tr2::sys::filesystem_error"
dev_langs: 
  - "C++"
ms.assetid: c53aac27-c1fa-43e4-8967-48ea8ba1f172
caps.latest.revision: 13
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe filesystem_error
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Classe base per tutte le eccezioni generate per segnalare un overflow del sistema di basso livello.  
  
## Sintassi  
  
```  
class filesystem_error    : public system_error;  
```  
  
## Note  
 La classe funge da classe base per tutte le eccezioni generate per segnalare un errore nelle funzioni \<filesystem\>. Archivia un oggetto di tipo String, denominato mymesg in questo esempio a scopo illustrativo. Archivia anche due oggetti di tipo path, denominati mypval1 e mypval2.  
  
## filesystem\_error::filesystem\_error  
  
```  
filesystem_error(const string& what_arg, error_code ec);  
filesystem_error(const string& what_arg,  
    const path& pval1, error_code ec);  
filesystem_error(const string& what_arg,  
    const path& pval1, const path& pval2, error_code ec);  
```  
  
 Il primo costruttore crea il messaggio da what\_arg ed ec. Il secondo costruttore crea anche il messaggio da pval1, che viene archiviato in mypval1. Il terzo costruttore crea anche il messaggio da pval1, che viene archiviato in mypval1 e da pval2, che viene archiviato in mypval2.  
  
## filesystem\_error::path1  
  
```  
const path& path1() const noexcept;  
  
```  
  
 La funzione membro restituisce mypval1  
  
## filesystem\_error::path2  
  
```  
const path& path2() const noexcept;  
  
```  
  
 La funzione membro restituisce mypval2  
  
## filesystem\_error::what  
  
```  
const char *what() const noexcept;  
```  
  
 La funzione membro restituisce un puntatore a NTBS, preferibilmente composto da runtime\_error::what\(\), system\_error::what\(\), mymesg, mypval1.native\_string\(\) e mypval2.native\_string\(\).  
  
## Requisiti  
 **Intestazione:** filesystem  
  
 **Spazio dei nomi:** std::tr2::sys  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Classe system\_error](../standard-library/system-error-class.md)   
 [\<filesystem\>](../standard-library/filesystem.md)   
 [\<exception\>](../standard-library/exception.md)