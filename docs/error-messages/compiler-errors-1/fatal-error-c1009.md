---
title: "Errore irreversibile C1009 | Microsoft Docs"
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
  - "C1009"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1009"
ms.assetid: dcc8383c-3362-4c47-9c26-25d2451ebd53
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile C1009
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

limite del compilatore: macro eccessivamente annidate  
  
 Nel compilatore è stato tentato di espandere troppe macro contemporaneamente.  Per il compilatore esiste un limite di 256 livelli di annidamento delle macro.  Suddividere le macro annidate in macro più semplici.