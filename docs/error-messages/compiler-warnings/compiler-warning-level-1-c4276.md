---
title: "Avviso del compilatore (livello 1) C4276 | Microsoft Docs"
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
  - "C4276"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4276"
ms.assetid: 9d738c2d-29e5-408a-b9ff-be1a850b2238
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4276
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': nessun prototipo fornito. Non verranno utilizzati parametri  
  
 Quando si accetta l'indirizzo di una funzione con la convenzione di chiamata [\_\_stdcall](../../cpp/stdcall.md), è necessario fornire un prototipo in modo da consentire la creazione del nome decorato della funzione.  Poiché *funzione* non dispone di un prototipo, nella creazione del nome decorato si suppone che la funzione non contenga parametri.