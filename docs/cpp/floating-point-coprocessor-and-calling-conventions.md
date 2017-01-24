---
title: "Coprocessore a virgola mobile e convenzioni di chiamata | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "coprocessore a virgola mobile"
  - "numeri a virgola mobile"
  - "numeri a virgola mobile, coprocessore"
ms.assetid: 3cc6615a-b308-4cf7-9570-83e192a832b3
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Coprocessore a virgola mobile e convenzioni di chiamata
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se si scrivono routine assembly per il coprocessore a virgola mobile, è necessario conservare la parola di controllo a virgola mobile e ripulire lo stack del coprocessore a meno che non si stia restituendo un valore **float** o **double** \(che la funzione deve restituire in ST\(0\)\).  
  
## Vedere anche  
 [Convenzioni di chiamata](../cpp/calling-conventions.md)