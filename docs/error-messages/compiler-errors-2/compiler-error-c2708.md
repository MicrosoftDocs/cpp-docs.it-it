---
title: "Errore del compilatore C2708 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2708"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2708"
ms.assetid: d52d3088-1141-42f4-829c-74755a7fcc3a
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2708
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': lunghezza in byte dei parametri effettivi differente da una chiamata o da un riferimento precedente  
  
 Una funzione [\_\_stdcall](../../cpp/stdcall.md) deve essere preceduta da un prototipo.  In caso contrario, la prima chiamata alla funzione viene interpretata come un prototipo e questo errore si verifica quando viene rilevata una chiamata non corrispondente.  
  
 Per correggere questo errore, aggiungere un prototipo di funzione.