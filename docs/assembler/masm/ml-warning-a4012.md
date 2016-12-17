---
title: "ML Warning A4012 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "A4012"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A4012"
ms.assetid: 842b1259-9679-4eeb-a02d-672a583a94e5
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ML Warning A4012
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**informazioni sul numero di riga per segmento senza CODICE„ identificatore "**  
  
 Vi sono le istruzioni in un segmento che non aveva nome di una classe che termine dell'applicazione con “CODICE„. L'assemblatore non ha generato le informazioni CodeView per queste istruzioni.  
  
 CodeView non è possibile elaborare i moduli con il codice in segmenti con i nomi di classe che non terminano con “CODICE„.  
  
## Vedere anche  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)