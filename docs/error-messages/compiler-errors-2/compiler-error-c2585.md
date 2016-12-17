---
title: "Errore del compilatore C2585 | Microsoft Docs"
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
  - "C2585"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2585"
ms.assetid: 05bb1a9c-28fb-4a88-a1b5-aea85ebdee1c
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2585
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

conversione esplicita in 'tipo' ambigua  
  
 La conversione del tipo può produrre più risultati.  
  
### Possibili cause  
  
1.  Conversione da un tipo di struttura o classe basato su più ereditarietà.  Se il tipo eredita la stessa classe base più volte, l'operatore o la funzione di conversione deve utilizzare la risoluzione dell'ambito \(`::`\) per specificare quali classi ereditate utilizzare nella conversione.  
  
2.  Con la stessa conversione sono stati definiti un costruttore e un operatore di conversione.