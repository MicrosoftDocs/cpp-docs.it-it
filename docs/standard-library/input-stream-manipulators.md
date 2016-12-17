---
title: "Manipolatori del flusso di input | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "flusso di input (oggetti)"
  - "flussi di input, manipolatori"
ms.assetid: 0addcacb-7b7b-4d70-9775-a59abc400fb3
caps.latest.revision: 8
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Manipolatori del flusso di input
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Molti manipolatori, come [setprecision](../Topic/setprecision.md), vengono definiti per la classe di `ios` e quindi si applicano ai flussi di input.  Pochi manipolatori, tuttavia, in realtà interessano gli oggetti del flusso di input.  A quelli che lo sono, il principali sono i manipolatori, `dec`, `oct` e `hex`di base, che determinano la base di conversione utilizzata con numeri dal flusso di input.  
  
 All'estrazione, il manipolatore di `hex` consente l'elaborazione dei vari formati di input.  Ad esempio, la c, C, 0xc, 0xC, 0Xc e 0XC vengono interpretati come integer decimale 12.  Qualsiasi carattere diverso da 0 a 9, da A a La F, da a alla f, x e di X terminare la conversione numerica.  Pertanto la sequenza `"124n5"` viene convertita in un numero 124 con il set [basic\_ios::fail](../Topic/basic_ios::fail.md) bit.  
  
## Vedere anche  
 [Flussi di input](../standard-library/input-streams.md)