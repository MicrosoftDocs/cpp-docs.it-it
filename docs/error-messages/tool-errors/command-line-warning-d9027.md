---
title: "Avviso della riga di comando D9027 | Microsoft Docs"
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
  - "D9027"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "D9027"
ms.assetid: 2a29edc5-5649-48f2-9058-2057c747284c
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso della riga di comando D9027
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

file di origine '\<nomefile\>' ignorato  
  
 Il file di origine di input è stato ignorato da CL.exe.  
  
 Questo avviso può venire visualizzato se è presente uno spazio tra l'opzione \/Fo e un nome di file di output in una riga di comando con l'opzione \/c.  Di seguito è riportato un esempio.  
  
```  
cl /c /Fo output.obj input.c   
```  
  
 Poiché c'è uno spazio tra \/Fo e `output.obj,` `output.obj` viene considerato come il nome del file di input.  Per risolvere il problema, rimuovere lo spazio:  
  
```  
cl /c /Fooutput.obj input.c   
```