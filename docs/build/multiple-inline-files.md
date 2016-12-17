---
title: "File inline multipli | Microsoft Docs"
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
  - "inline (file), NMAKE multipli"
  - "file inline multipli"
  - "NMAKE (programma), inline (file)"
ms.assetid: 6d381dcf-0ed8-45d1-8df3-b4598d860b99
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# File inline multipli
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Con un comando è possibile creare più file inline.  
  
## Sintassi  
  
```  
  
      command << <<  
inlinetext  
<<[KEEP | NOKEEP]  
inlinetext  
<<[KEEP | NOKEEP]  
```  
  
## Note  
 Per ogni file specificare una o più righe di testo inline seguite da una riga di chiusura contenente il delimitatore.  Iniziare il testo del secondo file nella riga successiva alla riga di delimitazione del primo file.  
  
## Vedere anche  
 [File inline in un makefile](../build/inline-files-in-a-makefile.md)