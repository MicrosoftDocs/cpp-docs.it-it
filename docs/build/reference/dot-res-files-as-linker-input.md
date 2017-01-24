---
title: "File res come input del linker | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "file RES come input del linker"
  - "collegamento [C++], file di risorse"
  - "RES (file come input del linker)"
  - "file di risorse, collegamento"
ms.assetid: 9c37ab00-97df-4d9a-91cd-6bf132970683
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# File res come input del linker
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile specificare un file RES quando si esegue il collegamento di un programma.  Il file RES viene creato nel compilatore di risorse \(RC\).  In LINK i file RES vengono automaticamente convertiti in COFF.  È necessario che lo strumento CVTRES.exe si trovi nella stessa directory di LINK.exe o in una directory specificata nella variabile di ambiente PATH.  
  
## Vedere anche  
 [File di input LINK](../../build/reference/link-input-files.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)