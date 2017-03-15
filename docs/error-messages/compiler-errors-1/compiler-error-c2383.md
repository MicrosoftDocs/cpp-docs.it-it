---
title: "Errore del compilatore C2383 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2383"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2383"
ms.assetid: 6696221d-879c-477a-a0f3-a6edc15fd3d7
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Errore del compilatore C2383
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'simbolo': argomenti predefiniti non consentiti su questo simbolo  
  
 Il compilatore C\+\+ non consente argomenti predefiniti su puntatori a funzioni.  
  
 Tale codice veniva accettato dal compilatore della versione precedente ma attualmente causa un errore.  Affinché il codice funzioni in tutte le versioni di Visual C\+\+, non assegnare un valore predefinito a un argomento puntatore a funzione.  
  
 La riga seguente genera l'errore C2383:  
  
```  
// C2383.cpp  
// compile with: /c   
void (*pf)(int = 0);   // C2383  
void (*pf)(int);   // OK  
```