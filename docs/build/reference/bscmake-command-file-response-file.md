---
title: "File di comando di BSCMAKE (file di risposta) | Microsoft Docs"
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
  - "BSCMAKE, file di comando"
  - "BSCMAKE, file di risposta"
  - "file di comando"
  - "file di comando, BSCMAKE"
  - "file di risposta"
  - "file di risposta, BSCMAKE"
ms.assetid: abdffeea-35c7-4f2d-8c17-7d0d80bac314
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# File di comando di BSCMAKE (file di risposta)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'input della riga di comando può essere fornito tutto o in parte mediante un file di comando.  Specificare il file di comando mediante la seguente sintassi:  
  
```  
BSCMAKE @filename  
```  
  
 È consentito l'utilizzo di un unico file di comando.  Con *filename* è possibile indicare anche il percorso.  Anteporre sempre a *filename* un simbolo @.  In BSCMAKE non sono presenti estensioni predefinite.  Ulteriori *sbrfiles* possono essere aggiunti dopo *filename* sulla riga di comando.  Il file di comando è un file di testo che contiene l'input da passare a BSCMAKE nello stesso ordine in cui sarebbe stato specificato nella riga di comando.  I vari argomenti della riga di comando possono essere separati da uno o più spazi, caratteri di tabulazione o di nuova riga.  
  
 Con il seguente comando viene richiamata l’utilità BSCMAKE mediante un file di comando:  
  
```  
BSCMAKE @prog1.txt  
```  
  
 Di seguito è riportato un file di comando di esempio:  
  
```  
/n /v /o main.bsc /El  
/S (  
toolbox.h  
verdate.h c:\src\inc\screen.h  
)  
file1.sbr file2.sbr file3.sbr file4.sbr  
```  
  
## Vedere anche  
 [Riferimenti a BSCMAKE](../../build/reference/bscmake-reference.md)