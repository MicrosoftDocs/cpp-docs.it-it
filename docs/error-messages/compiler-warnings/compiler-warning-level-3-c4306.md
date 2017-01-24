---
title: "Avviso del compilatore (livello 3) C4306 | Microsoft Docs"
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
  - "C4306"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4306"
ms.assetid: 5b2192d7-402d-4b6d-8619-08105e7dcac7
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4306
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**'**   
 ***identificatore* ': conversione da '**   
 ***tipo1* ' a '**   
 ***tipo2* ' di dimensioni maggiori**  
  
 È stato effettuato il cast di tipo dell'identificatore in un puntatore più grande.  I bit alti non riempiti del nuovo tipo saranno riempiti con zero.  
  
 L'avviso può segnalare una conversione non desiderata.  È possibile che il puntatore risultante non sia valido.