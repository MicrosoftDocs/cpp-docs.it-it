---
title: "Errore degli strumenti del linker LNK1164 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1164"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1164"
ms.assetid: da89765c-affa-4f88-b170-6d6b19a577cf
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore degli strumenti del linker LNK1164
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

l'allineamento per la sezione sezione \(numero\) è superiore al valore di \/ALIGN  
  
 La dimensione di allineamento per la sezione data nel file oggetto supera il valore specificato con l'opzione [\/ALIGN](../../build/reference/align-section-alignment.md).  Il valore di **\/ALIGN** deve essere una potenza di 2 e deve essere uguale o superiore all'allineamento della sezione specificato nel file oggetto.  
  
 Ripetere la compilazione con un allineamento di sezione inferiore o aumentare il valore di **\/ALIGN**.