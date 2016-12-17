---
title: "Errore della riga di comando D8027 | Microsoft Docs"
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
  - "D8027"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "D8027"
ms.assetid: f228220f-0c7f-49a6-a6e0-1f7bd4745aa6
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore della riga di comando D8027
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile eseguire 'componente'  
  
 Il compilatore non è in grado di eseguire il componente di compilazione o il linker specificato.  
  
### Possibili cause  
  
1.  Memoria insufficiente per caricare il componente.  Se il compilatore è stato richiamato da NMAKE, eseguire il compilatore al di fuori del contesto del makefile.  
  
2.  Nel sistema operativo in uso non è possibile eseguire il componente.  Assicurarsi che il percorso punti ai file eseguibili appropriati del sistema operativo corrente.  
  
3.  Il componente è danneggiato.  Copiare il componente dai dischi originali utilizzando il programma di installazione.  
  
4.  Un'opzione non è stata specificata correttamente.  Di seguito è riportato un esempio.  
  
    ```  
    cl /B1 file1.c  
    ```