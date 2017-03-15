---
title: "/FD (Ricompilazione minima IDE) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/FD"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/FD (opzione del compilatore) [C++]"
  - "FD (opzione del compilatore) [C++]"
  - "-FD (opzione del compilatore) [C++]"
ms.assetid: 7ef21b8c-a448-4bb4-9585-a2a870028e17
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# /FD (Ricompilazione minima IDE)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'opzione **\/FD** viene esposta agli utenti solo nella pagina delle proprietà [Riga di comando](../../ide/command-line-property-pages.md) della finestra di dialogo **Pagine delle proprietà** di un progetto C\+\+ e soltanto se non è stata selezionata l'opzione [\/Gm \(Abilita la ricompilazione minima\)](../../build/reference/gm-enable-minimal-rebuild.md).  L'opzione **\/FD** ha effetto solo dall'ambiente di sviluppo  e non viene esposta nell'output di **cl \/?**.  
  
 Se l'opzione **\/Gm** non viene abilitata nell'ambiente di sviluppo, sarà utilizzata l'opzione **\/FD**.  L'opzione **\/FD** assicura che il file con estensione idb disponga di informazioni sufficienti sulla dipendenza.  L'opzione **\/FD** viene utilizzata solo dall'ambiente di sviluppo e non deve essere utilizzata dalla riga di comando o da uno script di compilazione.  
  
## Vedere anche  
 [Opzioni del file di output \(\/F\)](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)