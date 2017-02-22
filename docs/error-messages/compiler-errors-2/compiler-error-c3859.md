---
title: "Errore del compilatore C3859 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3859"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3859"
ms.assetid: 40e93b25-4393-4467-90de-035434a665c7
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C3859
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

intervallo di memoria virtuale per PCH superato. Ricompilare utilizzando l'opzione della riga di comando '\-Zmvalue' o un valore superiore.  
  
 L'intestazione precompilata è troppo piccola per la quantità di dati che il compilatore sta cercando di inserire.  Usare il flag del compilatore **\/Zm** per specificare un valore più grande per il file di intestazione precompilata.  Per altre informazioni, vedere [\/Zm \(Specifica il limite di allocazione della memoria per le intestazioni precompilate\)](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md).