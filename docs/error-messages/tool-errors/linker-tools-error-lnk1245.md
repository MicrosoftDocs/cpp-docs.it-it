---
title: "Errore degli strumenti del linker LNK1245 | Microsoft Docs"
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
  - "LNK1245"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1245"
ms.assetid: 179c8165-ffbb-44cd-9f24-5250f29577cc
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK1245
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

è stato specificato il sottosistema non valido 'sottosistema'; il valore di \/SUBSYSTEM deve essere WINDOWS, WINDOWSCE o CONSOLE  
  
 L'oggetto è stato compilato con [\/clr](../../build/reference/clr-common-language-runtime-compilation.md) e si è verificata una delle seguenti situazioni:  
  
-   È stato definito un punto di ingresso personalizzato \([\/ENTRY](../../build/reference/entry-entry-point-symbol.md)\) da cui il linker non è in grado di dedurre un sottosistema.  
  
-   Il valore passato all'opzione del linker [\/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) non è valido per gli oggetti \/clr.  
  
 In entrambi i casi, è possibile correggere l'errore specificando un valore valido nell'opzione del linker \/SUBSYSTEM.