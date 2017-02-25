---
title: "Avviso del compilatore (livello 2) C4653 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4653"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4653"
ms.assetid: 90ec3317-3d39-4b4c-bcd1-97e7c799e1b6
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 2) C4653
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

opzione del compilatore 'opzione' non coerente con l'intestazione precompilata. L'opzione della riga di comando corrente verrà ignorata  
  
 Un'opzione specificata con l'opzione Usa intestazione precompilata \([\/Yu](../../build/reference/yu-use-precompiled-header-file.md)\) non è coerente con le opzioni definite al momento della creazione dell'intestazione precompilata.  Per la compilazione viene utilizzata l'opzione specificata al momento della creazione dell'intestazione precompilata.  
  
 L'avviso può essere generato quando si specifica un valore diverso per l'opzione di compressione delle strutture \([\/Zp](../../build/reference/zp-struct-member-alignment.md)\) durante la compilazione dell'intestazione precompilata.