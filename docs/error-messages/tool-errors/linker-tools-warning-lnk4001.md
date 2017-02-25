---
title: "Avviso degli strumenti del linker LNK4001 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4001"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4001"
ms.assetid: 0a8b1c3a-64ce-4311-b7c0-065995059246
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso degli strumenti del linker LNK4001
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

nessun file oggetto specificato; librerie in uso  
  
 Sono stati passati uno o più file lib, ma nessun file obj.  
  
 Poiché il linker non è in grado di accedere in un file LIB alle informazioni accessibili in un file obj, questo avviso indica che sarà necessario specificare in modo esplicito altre opzioni del linker.  Potrebbe essere necessario specificare, ad esempio, le opzioni [\/MACHINE](../../build/reference/machine-specify-target-platform.md), [\/OUT](../../build/reference/out-output-file-name.md) o [\/ENTRY](../../build/reference/entry-entry-point-symbol.md).