---
title: "Riutilizzo di file inline | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "inline (file), riutilizzo NMAKE"
  - "NMAKE (programma), inline (file)"
  - "revisione di file inline"
ms.assetid: d42dbffb-2cef-4ccb-9a1f-20b8ef81481c
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Riutilizzo di file inline
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per riutilizzare un file inline, specificare \<\<*nomefile* nella posizione in cui il file è definito e utilizzato per la prima volta, quindi riutilizzare *nomefile* senza \<\< successivamente nello stesso comando o in un comando diverso.  Il comando che consente di creare il file inline deve essere eseguito prima di tutti i comandi che lo utilizzano.  
  
## Vedere anche  
 [File inline in un makefile](../build/inline-files-in-a-makefile.md)