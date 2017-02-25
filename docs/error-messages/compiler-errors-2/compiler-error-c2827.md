---
title: "Errore del compilatore C2827 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2827"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2827"
ms.assetid: cb3e5814-0c92-40e4-b620-98578ae3003a
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C2827
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile eseguire l'override globale di 'operator operatore' con forma unaria  
  
 L'operatore non può avere un formato unario all'esterno di un oggetto.  
  
### Per correggere valutando le seguenti possibili soluzioni  
  
1.  Rendere l'operatore di overload locale rispetto a un oggetto.  
  
2.  Scegliere un operatore unario appropriato per eseguire l'overload.