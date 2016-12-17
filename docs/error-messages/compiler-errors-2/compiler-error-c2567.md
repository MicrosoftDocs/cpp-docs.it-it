---
title: "Errore del compilatore C2567 | Microsoft Docs"
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
  - "C2567"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2567"
ms.assetid: 9c140ac9-7059-47e6-9ba1-e7939c8c0dc3
caps.latest.revision: 4
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2567
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile aprire metadati in 'file', il file potrebbe essere stato eliminato o spostato  
  
 Il processo back end del compilatore non ha trovato un file di metadati a cui si fa riferimento nel file di origine \(con `#using`\) nella stessa directory in cui era stato trovato dal processo front end.  Per ulteriori informazioni, vedere [Direttiva \#using](../../preprocessor/hash-using-directive-cpp.md).  
  
 L'errore C2567 può essere generato nel caso in cui la compilazione venga eseguita con **\/c** su un computer e che successivamente venga tentata una generazione di codice in fase di collegamento su un altro computer.  Per ulteriori informazioni, vedere [\/LTCG \(Generazione di codice in fase di collegamento\)](../../build/reference/ltcg-link-time-code-generation.md).  
  
 Può inoltre indicare che la memoria del computer è insufficiente.  
  
 Per correggere l'errore, assicurarsi che il file di metadati sia nella stessa directory per tutte le fasi del processo di compilazione.