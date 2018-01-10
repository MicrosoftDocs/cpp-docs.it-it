---
title: Classe filesystem_error | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: filesystem/std::experimental::filesystem::filesystem_error
dev_langs: C++
ms.assetid: c53aac27-c1fa-43e4-8967-48ea8ba1f172
caps.latest.revision: "13"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a70b489fa3e7a570cf4cd8ea4abf6af583e72a0a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="filesystemerror-class"></a>Classe filesystem_error
Classe base per tutte le eccezioni generate per segnalare un overflow del sistema di basso livello.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class filesystem_error    : public system_error;  
```  
  
## <a name="remarks"></a>Note  
 La classe funge da classe base per tutte le eccezioni generate per segnalare un errore nelle funzioni \<filesystem>. Archivia un oggetto di tipo String, denominato mymesg in questo esempio a scopo illustrativo. Archivia anche due oggetti di tipo path, denominati mypval1 e mypval2.  
  
## <a name="filesystemerrorfilesystemerror"></a>filesystem_error::filesystem_error  
  
```  
filesystem_error(const string& what_arg,
    error_code ec);

filesystem_error(const string& what_arg,  
    const path& pval1,
    error_code ec);

filesystem_error(const string& what_arg,  
    const path& pval1,
    const path& pval2,
    error_code ec);
```  
  
 Il primo costruttore crea il messaggio da what_arg ed ec. Il secondo costruttore crea anche il messaggio da pval1, che viene archiviato in mypval1. Il terzo costruttore crea anche il messaggio da pval1, che viene archiviato in mypval1 e da pval2, che viene archiviato in mypval2.  
  
## <a name="filesystemerrorpath1"></a>filesystem_error::path1  
  
```  
const path& path1() const noexcept;  
```  
  
 La funzione membro restituisce mypval1  
  
## <a name="filesystemerrorpath2"></a>filesystem_error::path2  
  
```  
const path& path2() const noexcept;  
```  
  
 La funzione membro restituisce mypval2  
  
## <a name="filesystemerrorwhat"></a>filesystem_error::what  
  
```  
const char *what() const noexcept;  
```  
  
 La funzione membro restituisce un puntatore a NTBS, preferibilmente composto da runtime_error::what(), system_error::what(), mymesg, mypval1.native_string() e mypval2.native_string().  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<filesystem >  
  
 **Spazio nomi:** std::experimental::filesystem  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Classe system_error](../standard-library/system-error-class.md)   
 [\<filesystem>](../standard-library/filesystem.md)   
 [\<exception>](../standard-library/exception.md)

