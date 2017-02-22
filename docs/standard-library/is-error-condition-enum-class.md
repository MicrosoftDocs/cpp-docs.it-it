---
title: "Classe is_error_condition_enum | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::is_error_condition_enum"
  - "std.is_error_condition_enum"
  - "is_error_condition_enum"
  - "system_error/std::is_error_condition_enum"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_error_condition_enum (classe)"
ms.assetid: 752bb87a-c61c-4304-9254-5aaf228b59c0
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# Classe is_error_condition_enum
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta un predicato di digitare test per l'enumerazione [error\_condition](../standard-library/error-condition-class.md).  
  
## Sintassi  
  
```  
template<_Enum>  
    class is_error_condition_enum;  
```  
  
## Note  
 Un'istanza di questo [predicato del tipo](../standard-library/type-traits.md) vale se il tipo `_Enum` è un valore di enumerazione appropriato per archiviare in un oggetto di tipo `error_condition`.  
  
 Viene consentito aggiungere le specializzazioni a questo tipo per i tipi definiti dall'utente.  
  
## Requisiti  
 **Intestazione:** \<system\_error\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)   
 [\<system\_error\>](../standard-library/system-error.md)