---
title: "Errore irreversibile C1382 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1382"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1382"
ms.assetid: 7a100f8c-3179-4927-a2f1-98de4c753850
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore irreversibile C1382
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il file PCH 'file' è stato ricompilato in seguito alla generazione di 'oggetto'.Ricompilare l'oggetto  
  
 Durante l'utilizzo di [\/LTCG](../../build/reference/ltcg-link-time-code-generation.md), il compilatore ha rilevato un file pch più recente di un file obj CIL che fa riferimento ad esso.  Le informazioni nel file obj CIL non sono aggiornate.  Ricompilare l'oggetto.  
  
 L'errore C1382 può inoltre verificarsi se si esegue la compilazione con **\/Yc** e si passano più file di codice sorgente al compilatore.  Per correggere l'errore, non utilizzare l'opzione **\/Yc** quando si passano più file di codice sorgente al compilatore.  Per ulteriori informazioni, vedere [\/Yc \(Crea il file di intestazione precompilato\)](../../build/reference/yc-create-precompiled-header-file.md).