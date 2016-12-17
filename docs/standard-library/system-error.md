---
title: "&lt;system_error&gt; | Microsoft Docs"
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
  - "std.<system_error>"
  - "std::<system_error>"
  - "<system_error>"
  - "system_error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "system_error (intestazione)"
ms.assetid: 5e046c6e-48d9-4740-8c8a-05f3727c1215
caps.latest.revision: 15
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;system_error&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Includere l'intestazione `<system_error>` per definire la classe `system_error` di eccezione e i modelli correlati per elaborare gli errori di sistema di basso livello.  
  
## Sintassi  
  
```  
#include <system_error>  
```  
  
### Oggetti  
  
|||  
|-|-|  
|[generic\_category](../Topic/generic_category.md)|Rappresenta la categoria degli errori generici.|  
|[system\_category](../Topic/system_category.md)|Rappresenta la categoria per gli errori causati dagli overflow di basso livello di sistema.|  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[generic\_errno](../Topic/generic_errno.md)|Un tipo che rappresenta un'enumerazione che fornisce i nomi simbolici per tutte le macro di codice di errore definito da POSIX in `<errno.h>`.|  
  
### Funzioni  
  
|||  
|-|-|  
|[make\_error\_code](../Topic/make_error_code.md)|Crea un oggetto `error_code`.|  
|[make\_error\_condition](../Topic/make_error_condition.md)|Crea un oggetto `error_condition`.|  
  
### Operatori  
  
|||  
|-|-|  
|[operatore\=\=](../Topic/operator==%20\(%3Csystem_error%3E\).md)|Verifica se l'oggetto a sinistra dell'operatore è uguale all'oggetto sul lato destro.|  
|[operatore\!\=](../Topic/operator!=%20\(%3Csystem_error%3E\).md)|Verifica se l'oggetto a sinistra dell'operatore non è uguale all'oggetto sul lato destro.|  
|[l'operatore ':?'\<](../Topic/operator%3C%20\(%3Csystem_error%3E\).md)|Verifica se un oggetto è inferiore all'oggetto passato per il confronto.|  
  
### Enumerazioni  
  
|||  
|-|-|  
|[errc](../Topic/errc%20Enumeration.md)|Fornisce i nomi simbolici per tutte le macro di codice di errore definite da POSIX in `<errno.h>`.|  
  
### Classi e strutture  
  
|||  
|-|-|  
|[error\_category](../standard-library/error-category-class.md)|Rappresenta tale classe astratta, comune per gli oggetti che descrive una categoria di codici di errore.|  
|[error\_code](../standard-library/error-code-class.md)|Rappresenta gli errori del sistema di basso livello che sono specifici.|  
|[error\_condition](../standard-library/error-condition-class.md)|Rappresenta i codici errore definiti dall'utente.|  
|[is\_error\_code\_enum](../standard-library/is-error-code-enum-class.md)|Rappresenta un predicato di digitare test per l'enumerazione [Classe error\_code](../standard-library/error-code-class.md).|  
|[is\_error\_condition\_enum](../standard-library/is-error-condition-enum-class.md)|Rappresenta un predicato di digitare test per l'enumerazione [Classe error\_condition](../standard-library/error-condition-class.md).|  
|[system\_error](../standard-library/system-error-class.md)|Rappresenta la classe base per tutte le eccezioni generate per segnalare un overflow di basso livello di sistema.|  
  
## Requisiti  
 **Intestazione:** \<system\_error\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)