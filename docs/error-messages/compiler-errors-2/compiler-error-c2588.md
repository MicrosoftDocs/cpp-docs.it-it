---
title: "Errore del compilatore C2588 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2588"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2588"
ms.assetid: 19a0cabd-ca13-44a5-9be3-ee676abf9bc4
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C2588
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'::~identificatore': distruttore globale non valido  
  
 Il distruttore è definito per un elemento diverso da una classe, una struttura o un'unione,  ma questa operazione non è consentita.  
  
 Questo errore può essere causato dalla mancanza del nome di una struttura, classe o unione a sinistra dell'operatore di risoluzione dell'ambito \(`::`\).  
  
 Il seguente codice di esempio genera l'errore C2588:  
  
```  
// C2588.cpp  
~F();   // C2588  
```