---
title: "Struttura is_error_code_enum | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "future/std::is_error_code_enum"
dev_langs: 
  - "C++"
ms.assetid: 84ae4b99-66d2-41ba-9b50-645fcbe14630
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Struttura is_error_code_enum
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specializzazione che indica che [future\_errc](../Topic/future_errc%20Enumeration.md) è appropriato per archiviare [error\_code](../standard-library/error-code-class.md).  
  
## Sintassi  
  
```  
template<>  
struct is_error_code_enum<Future_errc> : public true_type;  
```  
  
## Requisiti  
 **Intestazione:** future  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<future\>](../standard-library/future.md)