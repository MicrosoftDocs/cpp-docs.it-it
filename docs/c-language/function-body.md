---
title: "Corpo della funzione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "corpo della funzione"
  - "definizioni di funzioni, corpo della funzione"
  - "funzioni [C], sintassi"
  - "variabili, sintassi delle funzioni"
ms.assetid: f7e74822-fac8-4dc8-8f3a-2b1611da4640
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Corpo della funzione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un "corpo di funzione" è un'istruzione composta che contiene le istruzioni che specificano ciò che svolge la funzione.  
  
## Sintassi  
 *function\-definition*:  
 *declaration\-specifiers*  opt *attribute\-seq* opt *declarator declaration\-list* opt *compound\-statement*  
  
 \/\* *attribute\-seq* è specifico di Microsoft \*\/  
  
 *compound\-statement*: \/\* Corpo della funzione \*\/  
 **{**  *declaration\-list*  opt *statement\-list* opt **}**  
  
 Le variabili dichiarate nel corpo di funzione, le "variabili locali", dispongono della classe di archiviazione **automatica** se non specificato diversamente.  Quando la funzione viene chiamata, l'archiviazione viene creata per le variabili locali e le inizializzazioni locali vengono eseguite.  Il controllo di esecuzione passa alla prima istruzione in *compound\-statement* e continua fino a quando viene eseguita un'istruzione `return` o viene rilevata la fine del corpo di funzione.  Il controllo ritorna quindi al punto in cui la funzione è stata chiamata.  
  
 Un'istruzione `return` contenente un'espressione deve essere eseguita se la funzione restituisce un valore.  Il valore restituito di una funzione non è definito se nessuna istruzione `return` viene eseguita o se l'istruzione `return` non include un'espressione.  
  
## Vedere anche  
 [Definizioni di funzioni C](../c-language/c-function-definitions.md)