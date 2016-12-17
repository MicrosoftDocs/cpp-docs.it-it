---
title: "Avviso del compilatore (livello 1) C4025 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4025"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4025"
ms.assetid: c4f6a651-0641-4446-973e-8290065e49ad
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4025
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'numero': puntatore based passato a funzione con argomenti variabili. Parametro numero  
  
 Se si passa un puntatore based a una funzione con argomenti variabili, il puntatore viene normalizzato e i risultati possono essere imprevisti. Non passare puntatori based a funzioni con argomenti variabili.