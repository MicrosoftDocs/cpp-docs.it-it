---
title: "Avviso del compilatore (livello 3) C4723 | Microsoft Docs"
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
  - "C4723"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4723"
ms.assetid: 07669d14-3fd8-4a43-94bc-b61c50e58460
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4723
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

possibile divisione per 0  
  
 Il secondo operando in una divisione restituisce zero in fase di compilazione, generando risultati non definiti.  
  
 L'avviso viene generato solo se si utilizza [\/Og](../../build/reference/og-global-optimizations.md) o un'opzione di ottimizzazione che implica \/Og.  
  
 È possibile che l'operando zero venga generato dal compilatore.