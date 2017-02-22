---
title: "Utilizzo della funzione abort | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Abort"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "abort (funzione)"
ms.assetid: 3ba39b78-ef74-4a8d-8dee-2d62442de174
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Utilizzo della funzione abort
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando viene chiamata la funzione [abort](../c-runtime-library/reference/abort.md) viene determinata l'interruzione immediata.  Ignora il normale processo di eliminazione degli oggetti statici globali inizializzati.  Ignora inoltre qualsiasi elaborazione speciale specificata utilizzando la funzione `atexit`.  
  
## Vedere anche  
 [Considerazioni di terminazione aggiuntive](../cpp/additional-termination-considerations.md)