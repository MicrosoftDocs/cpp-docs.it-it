---
title: "messaggio | Microsoft Docs"
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
  - "message_CPP"
  - "vc-pragma.message"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "message (pragma)"
  - "pragma, messaggio"
ms.assetid: 67414f25-ed47-4079-a5dc-21d9d1a39754
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# messaggio
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Invia un valore letterale stringa all'output standard senza terminare la compilazione.  
  
## Sintassi  
  
```  
  
#pragma message( messagestring )  
```  
  
## Note  
 Un utilizzo tipico del pragma **message** consiste nel visualizzare i messaggi informativi in fase di compilazione.  
  
 Il parametro *messagestring* può essere una macro che si espande in un valore letterale stringa; le macro di questo tipo possono essere concatenate con valori letterali stringa in qualsiasi combinazione.  
  
 Se si utilizza una macro predefinita nel pragma **message**, tale macro deve restituire una stringa differente, in caso contrario è necessario convertire l'output della macro in una stringa.  
  
 Nel frammento di codice seguente viene utilizzato il pragma **message** per visualizzare i messaggi durante la compilazione:  
  
```  
// pragma_directives_message1.cpp  
// compile with: /LD  
#if _M_IX86 >= 500  
#pragma message("_M_IX86 >= 500")  
#endif  
  
#pragma message("")  
  
#pragma message( "Compiling " __FILE__ )   
#pragma message( "Last modified on " __TIMESTAMP__ )  
  
#pragma message("")  
  
// with line number  
#define STRING2(x) #x  
#define STRING(x) STRING2(x)  
  
#pragma message (__FILE__ "[" STRING(__LINE__) "]: test")  
  
#pragma message("")  
```  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)