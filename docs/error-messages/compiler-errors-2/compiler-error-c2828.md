---
title: "Errore del compilatore C2828 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2828"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2828"
ms.assetid: d8df6ed4-5954-46c2-b59b-52881d4e923d
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C2828
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile eseguire l'override globale di 'operator operatore' con forma binaria  
  
 L'operatore non può avere un formato binario all'esterno di un oggetto.  
  
### Per correggere valutando le seguenti possibili soluzioni  
  
1.  Rendere l'operatore di overload locale rispetto a un oggetto.  
  
2.  Scegliere un operatore unario appropriato per eseguire l'overload.