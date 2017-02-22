---
title: "Classe error_code | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "error_code"
  - "std.error_code"
  - "std::error_code"
  - "system_error/std::error_code"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "error_code (classe)"
ms.assetid: c09b4a96-cb14-4281-a319-63543f9b2b4a
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 17
---
# Classe error_code
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta gli errori del sistema di basso livello che sono specifici.  
  
## Sintassi  
  
```  
class error_code;  
```  
  
## Note  
 Un oggetto classe di `error_code` del tipo archivia un valore di codice di errore e un puntatore a un oggetto che rappresenta [categoria](../standard-library/error-category-class.md) dei codici di errore che descrivono gli errori di sistema di basso livello segnalati.  
  
### Costruttori  
  
|||  
|-|-|  
|[error\_code](../Topic/error_code::error_code.md)|Crea un oggetto di tipo `error_code`.|  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[Tipo di valore](../Topic/error_code::value_type.md)|Un tipo che rappresenta il valore del codice archiviato errore.|  
  
### Funzioni del membro  
  
|||  
|-|-|  
|[assign](../Topic/error_code::assign.md)|Assegna un valore e una categoria di codice di errore a un codice di errore.|  
|[category](../Topic/error_code::category.md)|Restituisce la categoria di errore.|  
|[clear](../Topic/error_code::clear.md)|Cancella il valore e la categoria di codice di errore.|  
|[default\_error\_condition](../Topic/error_code::default_error_condition.md)|Restituisce la condizione di errore predefinita.|  
|[message](../Topic/error_code::message.md)|Restituisce il nome del codice di errore.|  
  
### Operatori  
  
|||  
|-|-|  
|[operatore\=\=](../Topic/error_code::operator==.md)|Test di uguaglianza tra oggetti di `error_code`.|  
|[operatore\!\=](../Topic/error_code::operator!=.md)|Test di disuguaglianza tra oggetti di `error_code`.|  
|[l'operatore ':?'\<](../Topic/error_code::operator%3C.md)|Test se l'oggetto di `error_code` è inferiore all'oggetto di `error_code` passato per il confronto.|  
|[operator\=](../Topic/error_code::operator=.md)|Assegna un nuovo valore di enumerazione all'oggetto di `error_code`.|  
|[bool dell'operatore](../Topic/error_code::operator%20bool.md)|Esegue il cast di una variabile di tipo `error_code`.|  
  
## Requisiti  
 **Intestazione:** \<system\_error\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Classe error\_category](../standard-library/error-category-class.md)   
 [\<system\_error\>](../standard-library/system-error.md)