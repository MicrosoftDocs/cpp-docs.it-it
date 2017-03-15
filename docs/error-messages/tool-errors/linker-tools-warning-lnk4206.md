---
title: "Avviso degli strumenti del linker LNK4206 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4206"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4206"
ms.assetid: 6c108e33-00cf-4c5a-830d-d65d470930a7
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso degli strumenti del linker LNK4206
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile trovare informazioni sul tipo precompilato; 'nomefile' non collegato o sovrascritto; oggetto collegato senza informazioni di debug  
  
 Il file oggetto specificato, compilato con [\/Yc](../../build/reference/yc-create-precompiled-header-file.md), non è stato specificato nel comando LINK o è stato sovrascritto.  
  
 In genere, l'avviso LNK4206 viene visualizzato quando il file obj compilato con \/Yc si trova in una libreria e non sono disponibili riferimenti ai simboli per il file dal codice.  In questo caso, il linker non utilizzerà il file obj, che potrebbe anche non venire rilevato.  In tale situazione, è necessario ricompilare il codice e utilizzare [\/Yl](../../build/reference/yl-inject-pch-reference-for-debug-library.md) per gli oggetti rimanenti, ovvero quelli non compilati con \/Yc.