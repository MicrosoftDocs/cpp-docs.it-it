---
title: "Errore degli strumenti del linker LNK2023 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK2023"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2023"
ms.assetid: c99e35a8-739a-4a20-a715-29b8c3744703
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK2023
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

dll o punto di ingresso \<dll o punto di ingresso\> errato  
  
 È in corso il caricamento di una versione non corretta di msobj90.dll.  Assicurarsi che le versioni di link.exe e msobj90.dll nel percorso specificato corrispondano.  
  
 È possibile che una dipendenza di msobj90.dll non sia presente.  L'elenco delle dipendenze per msobj90.dll è il seguente:  
  
-   Msvcr90.dll  
  
-   Kernel32.dll  
  
 Verificare nel computer la presenza di eventuali altre copie di msobj90.dll che potrebbero non essere aggiornate.