---
title: "Avviso degli strumenti del linker LNK4105 | Microsoft Docs"
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
  - "LNK4105"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4105"
ms.assetid: 6c7bebf4-4ea6-4533-a6ed-e563d43abbd7
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso degli strumenti del linker LNK4105
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

nessun argomento specificato con l'opzione 'opzione'; opzione ignorata  
  
 Questo avviso viene visualizzato solo quando è impostata l'opzione [\/LIBPATH](../../build/reference/libpath-additional-libpath.md).  Se non si specifica alcuna directory con questa opzione, essa viene ignorata dal linker e viene generato questo messaggio di avviso.  
  
 Se non occorre eseguire l'override delle impostazioni della libreria di ambiente esistente, rimuovere l'opzione \/LIBPATH dalla riga di comando del linker.  Per utilizzare un percorso di ricerca alternativo per le librerie, specificarlo dopo l'opzione \/LIBPATH.  
  
## Esempio  
  
```  
link /libpath:c:\filepath\lib bar.obj  
```  
  
 Questo codice fa in modo che le librerie richieste vengano cercate dal linker in `c:\filepath\lib` prima che nei percorsi predefiniti.