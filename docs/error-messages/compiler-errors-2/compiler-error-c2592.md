---
title: "Errore del compilatore C2592 | Microsoft Docs"
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
  - "C2592"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2592"
ms.assetid: 833a4d7b-66ef-4d4c-ae83-a533c2b0eb07
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2592
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'class': 'base\_class\_2' è ereditato da 'base\_class\_1' e non può essere specificato nuovamente  
  
 È possibile specificare solo le classi di base che non ereditano da altre classi di base.  In questo caso, solo `base_class_1` è necessario nella specifica di `class` perché `base_class_1` eredita già `base_class_2`.