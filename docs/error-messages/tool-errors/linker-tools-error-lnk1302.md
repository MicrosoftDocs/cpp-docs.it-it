---
title: "Errore degli strumenti del linker LNK1302 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1302"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1302"
ms.assetid: aea3c753-c2c4-4249-bbc3-f2d4f0164b5e
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore degli strumenti del linker LNK1302
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

supportato solo il collegamento di .netmodule sicuri; impossibile collegare file .netmodule  
  
 Un file .netmodule \(compilato con **\/LN**\) è stato passato al linker nel tentativo di un utente di chiamare il collegamento MSIL.  Un modulo C\+\+ è valido per il collegamento MSIL solo se è compilato con **\/clr:safe**.  
  
 Per correggere l'errore, eseguire la compilazione con **\/clr:safe** per attivare il collegamento MSIL oppure passare il file obj **\/clr** o **\/clr:pure** al linker anziché al modulo.  
  
 Per ulteriori informazioni, vedere  
  
-   [\/LN \(Crea modulo MSIL\)](../../build/reference/ln-create-msil-module.md)  
  
-   [.File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md)