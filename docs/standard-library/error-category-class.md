---
title: "Classe error_category | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::error_category"
  - "system_error/std::error_category"
  - "error_category"
  - "std.error_category"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "error_category (classe)"
ms.assetid: e0a71e14-852d-4905-acd6-5f8ed426706d
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# Classe error_category
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta la base comune astratta per gli oggetti che descrive una categoria di codici di errore.  
  
## Sintassi  
  
```  
class error_category;  
```  
  
## Note  
 Implementano due oggetti predefiniti `error_category`: [generic\_category](../Topic/generic_category.md) e [system\_category](../Topic/system_category.md).  
  
### Typedef  
  
|||  
|-|-|  
|[value\_type](../Topic/error_category::value_type.md)|Tipo che rappresenta il valore di codice di errore archiviato.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[default\_error\_condition](../Topic/error_category::default_error_condition.md)|Archivia il valore di codice di errore per un oggetto condizione di errore.|  
|[equivalent](../Topic/error_category::equivalent.md)|Restituisce un valore che specifica se gli oggetti di errore sono equivalenti.|  
|[messaggio](../Topic/error_category::message.md)|Restituisce il nome del codice di errore specificato.|  
|[name](../Topic/error_category::name.md)|Restituisce il nome della categoria.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\=\=](../Topic/error_category::operator==.md)|Verifica l'uguaglianza tra `error_category` oggetti.|  
|[operator\!\=](../Topic/error_category::operator!=.md)|Verifica la disuguaglianza tra `error_category` oggetti.|  
|[operator\<](../Topic/error_category::operator%3C.md)|Verifica se il [error\_category](../standard-library/error-category-class.md) oggetto è minore di `error_category` oggetto passato per il confronto.|  
  
## Requisiti  
 **Intestazione:** \<system\_error\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<system\_error\>](../standard-library/system-error.md)