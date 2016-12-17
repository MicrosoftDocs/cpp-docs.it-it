---
title: "Funzione abort | Microsoft Docs"
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
  - "Abort"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "abort (funzione)"
ms.assetid: 3352bcc4-1a8a-4e1f-8dcc-fe30f6b50f2d
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzione abort
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La funzione **abort**, dichiarata anche nel file di inclusione standard STDLIB.H, termina un programma C\+\+.  La differenza tra **exit** e **abort** è che **exit** consente l'elaborazione della fase di chiusura del runtime C\+\+ \(i distruttori globali dell'oggetto verranno chiamati\), mentre **abort** chiude il programma immediatamente.  Per ulteriori informazioni, vedere [abort](../c-runtime-library/reference/abort.md) in *Riferimenti alla libreria di runtime*.  
  
## Vedere anche  
 [Chiusura del programma](../cpp/program-termination.md)