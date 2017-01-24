---
title: "Istruzione Null (C) | Microsoft Docs"
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
  - "espressioni [C++], null"
  - "istruzione null"
  - "valori null, espressioni"
  - "punto e virgola, istruzione null in C"
ms.assetid: 72576ce6-26d0-4379-be65-fee522088790
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Istruzione Null (C)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un'istruzione "null" è un'istruzione che contiene solo un punto e virgola; può essere visualizzata in qualsiasi punto in cui è prevista un'istruzione.  Quando viene eseguita un'istruzione null, non succede nulla.  Il modo corretto per codificare un'istruzione null è:  
  
## Sintassi  
  
```  
  
;  
  
```  
  
## Note  
 Istruzioni quali **do**, **for**, **if** e `while` richiedono che un'istruzione eseguibile venga visualizzata come corpo dell'istruzione.  L'istruzione null soddisfa il requisito della sintassi nei casi in cui non è necessario un corpo effettivo dell'istruzione.  
  
 Come per qualsiasi altra istruzione di C, è possibile includere un'etichetta prima di un'istruzione null.  Per etichettare un elemento che non è un'istruzione, come la parentesi graffa di chiusura di un'istruzione composta, è possibile etichettare un'istruzione null e inserirla subito prima dell'elemento per ottenere lo stesso risultato.  
  
 In questo esempio viene illustrata l'istruzione null:  
  
```  
for ( i = 0; i < 10; line[i++] = 0 )  
     ;  
```  
  
 In questo esempio, l'espressione loop dell'istruzione **for** `line[i++] = 0` inizializza i primi 10 elementi di `line` su 0.  Il corpo dell'istruzione è un'istruzione null, poiché non sono disponibili ulteriori istruzioni.  
  
## Vedere anche  
 [Istruzioni](../c-language/statements-c.md)