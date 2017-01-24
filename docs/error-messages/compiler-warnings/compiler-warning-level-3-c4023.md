---
title: "Avviso del compilatore (livello 3) C4023 | Microsoft Docs"
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
  - "C4023"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4023"
ms.assetid: 615d5374-d7c1-42eb-acfd-917c053270c8
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4023
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'symbol': puntatore based passato a funzione senza prototipo. Parametro number  
  
 Passando un puntatore based a una funzione senza prototipo il puntatore viene normalizzazione viene normalizzato, con risultati imprevisti.  
  
 Questo problema può essere risolto se si usano funzioni di prototipo che sono puntatori based passati.