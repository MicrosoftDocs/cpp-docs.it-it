---
title: "Avviso del compilatore (livello 2) C4056 | Microsoft Docs"
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
  - "C4056"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4056"
ms.assetid: a3c3a9b8-ec30-452d-96cb-3694adcce789
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 2) C4056
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

overflow durante operazioni aritmetiche con una costante in virgola mobile  
  
 Le operazioni aritmetiche con una costante in virgola mobile generano un risultato che supera il valore massimo consentito.  
  
 Questo avviso può essere causato da ottimizzazioni del compilatore eseguite durante operazioni aritmetiche su costanti.  È possibile ignorare con sicurezza questo avviso se scompare quando si disattiva l'ottimizzazione \([\/Od](../../build/reference/od-disable-debug.md)\).  
  
 Il seguente codice di esempio genera l'errore C4056:  
  
```  
// C4056.cpp  
// compile with: /W2 /LD  
#pragma warning (default : 4056)  
float fp_val = 1.0e300 * 1.0e300;   // C4056  
```