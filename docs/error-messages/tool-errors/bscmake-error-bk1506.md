---
title: "Errore BK1506 di BSCMAKE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "BK1506"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BK1506"
ms.assetid: f51f8cea-f8fc-4323-bcf2-b7bd119792ee
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore BK1506 di BSCMAKE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile aprire il file "nomefile" \[: motivo\]  
  
 Non è possibile aprire il file con BSCMAKE.  
  
### Possibili cause  
  
1.  Il file è bloccato da un altro processo.  Se il `reason` è **Autorizzazione negata**, è possibile che il file sia utilizzato dal visualizzatore.  Chiudere la finestra Sfoglia e riprovare a eseguire la compilazione.  
  
2.  Disco pieno.  
  
3.  Errore hardware.  
  
4.  Il file di output specificato ha lo stesso nome di una sottodirectory esistente.