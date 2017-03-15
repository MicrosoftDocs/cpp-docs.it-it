---
title: "alloc_text | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.alloc_text"
  - "alloc_text_CPP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "alloc_text (pragma)"
  - "pragma, alloc_text"
ms.assetid: 1fd7be18-e4f7-4f70-b079-6326f72b871a
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# alloc_text
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Assegnare un nome alla sezione di codice in cui devono essere presenti le definizioni di funzioni specificate.  Il pragma deve essere trovarsi tra un dichiaratore di funzione e la definizione di funzione per le funzioni denominate.  
  
## Sintassi  
  
```  
  
#pragma alloc_text( "  
textsection  
", function1, ... )  
```  
  
## Note  
 Il pragma **alloc\_text** non gestisce le funzioni membro di C\+\+ o funzioni in overload.  Il pragma è applicabile solo alle funzioni dichiarate con il collegamento C, ovvero a funzioni dichiarate con le specifiche di collegamento **extern "C"**.  Se si tenta di utilizzare questo pragma in una funzione con collegamento C\+\+, viene generato un errore del compilatore.  
  
 Poiché l'indirizzamento di funzioni che utilizzano `__based` non è supportato, la specifica dei percorsi della sezione richiede l'utilizzo del pragma **alloc\_text**.  Il nome specificato da *textsection* deve essere racchiuso tra virgolette doppie.  
  
 Il pragma **alloc\_text** deve essere inserito dopo le dichiarazioni di tutte le funzioni specificate e prima delle definizioni di tali funzioni.  
  
 Le funzioni cui si fa riferimento in un pragma **alloc\_text** devono essere definite nello stesso modulo del pragma.  Se questa operazione non viene eseguita e una funzione non definita viene compilata in seguito in una sezione del testo diversa, l'errore può essere individuato o meno.  Sebbene il programma in genere venga eseguito correttamente, la funzione non verrà allocata nelle sezioni desiderate.  
  
 Altre limitazioni per **alloc\_text** sono le seguenti:  
  
-   Non può essere utilizzato in una funzione.  
  
-   Deve essere utilizzato dopo che la funzione è stata dichiarata, ma prima che la funzione sia stata definita.  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)