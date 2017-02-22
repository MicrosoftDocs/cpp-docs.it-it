---
title: "Errore del compilatore C2818 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2818"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2818"
ms.assetid: 715fc7c9-0c6d-452b-b7f5-1682cea5e907
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2818
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

l'applicazione di 'operator \-\>' di overload è ricorsiva tramite il tipo 'tipo'  
  
 Una ridefinizione dell'operatore di accesso al membro di classe contiene un'istruzione `return` ricorsiva.  Per ridefinire l'operatore `->` con ricorsione, è necessario spostare la routine ricorsiva in una funzione distinta chiamata dalla funzione di override dell'operatore.