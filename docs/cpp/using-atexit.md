---
title: "Utilizzo di atexit | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "atexit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "atexit (funzione)"
ms.assetid: d28fda17-c3d4-4af6-ba44-f44886bbb237
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di atexit
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Con la funzione [atexit](../c-runtime-library/reference/atexit.md), è possibile specificare una funzione di elaborazione uscita che viene eseguita prima della chiusura del programma.  Nessun oggetto statico globale inizializzato prima della chiamata a `atexit` viene eliminato prima dell'esecuzione della funzione di elaborazione uscita.  
  
## Vedere anche  
 [Considerazioni di terminazione aggiuntive](../cpp/additional-termination-considerations.md)