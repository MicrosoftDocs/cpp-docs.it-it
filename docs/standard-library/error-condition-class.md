---
title: "Classe error_condition | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "system_error/std::error_condition"
  - "std::error_condition"
  - "error_condition"
  - "std.error_condition"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "error_condition (classe)"
ms.assetid: 6690f481-97c9-4554-a0ff-851dc96b7a06
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# Classe error_condition
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta i codici errore definiti dall'utente.  
  
## Sintassi  
  
```  
class error_condition;  
```  
  
## Note  
 Un oggetto di tipo `error_condition` archivia un valore di codice di errore e un puntatore a un oggetto che rappresenta [categoria](../standard-library/error-category-class.md) dei codici di errore utilizzati per gli errori definiti dall'utente segnalati.  
  
### Costruttori  
  
|||  
|-|-|  
|[error\_condition](../Topic/error_condition::error_condition.md)|Crea un oggetto di tipo `error_condition`.|  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[Tipo di valore](../Topic/error_condition::value_type.md)|Un tipo che rappresenta il valore del codice archiviato errore.|  
  
### Funzioni del membro  
  
|||  
|-|-|  
|[assign](../Topic/error_condition::assign.md)|Assegna un valore e una categoria di codice di errore a una condizione di errore.|  
|[category](../Topic/error_condition::category.md)|Restituisce la categoria di errore.|  
|[clear](../Topic/error_condition::clear.md)|Cancella il valore e la categoria di codice di errore.|  
|[message](../Topic/error_condition::message.md)|Restituisce il nome del codice di errore.|  
  
### Operatori  
  
|||  
|-|-|  
|[operatore\=\=](../Topic/error_condition::operator==.md)|Test di uguaglianza tra oggetti di `error_condition`.|  
|[operatore\!\=](../Topic/error_condition::operator!=.md)|Test di disuguaglianza tra oggetti di `error_condition`.|  
|[l'operatore ':?'\<](../Topic/error_condition::operator%3C.md)|Test se l'oggetto di `error_condition` è inferiore all'oggetto di `error_code` passato per il confronto.|  
|[operator\=](../Topic/error_condition::operator=.md)|Assegna un nuovo valore di enumerazione all'oggetto di `error_condition`.|  
|[bool dell'operatore](../Topic/error_condition::operator%20bool.md)|Esegue il cast di una variabile di tipo `error_condition`.|  
  
## Requisiti  
 **Intestazione:** \<system\_error\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Classe error\_category](../standard-library/error-category-class.md)   
 [\<system\_error\>](../standard-library/system-error.md)