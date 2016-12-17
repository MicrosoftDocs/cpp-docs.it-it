---
title: "Effetti della memorizzazione nel buffer | Microsoft Docs"
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
  - "buffer, effetti della memorizzazione nel buffer"
  - "memorizzazione nel buffer, effetti"
ms.assetid: 5d544812-e95e-4f28-b15a-edef3f3414fd
caps.latest.revision: 9
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Effetti della memorizzazione nel buffer
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'esempio seguente illustra gli effetti della memorizzazione nel buffer. Il programma potrebbe visualizzare `please wait`, attendere 5 secondi e quindi procedere. Potrebbe non verificarsi questa situazione, tuttavia, perché l'output viene memorizzato nel buffer.  
  
```  
// effects_buffering.cpp // compile with: /EHsc #include <iostream> #include <time.h> using namespace std; int main( ) { time_t tm = time( NULL ) + 5; cout << "Please wait..."; while ( time( NULL ) < tm ) ; cout << "\nAll done" << endl; }  
```  
  
 Affinché il programma funzioni in modo logico, l'oggetto `cout` deve svuotarsi quando il messaggio viene visualizzato. Per scaricare un oggetto `ostream`, inviarlo al manipolatore `flush`:  
  
```  
cout << "Please wait..." << flush;  
```  
  
 Questo passaggio scarica il buffer, garantendo che il messaggio venga visualizzato prima dell'attesa. È anche possibile usare il manipolatore `endl`, che scarica il buffer e genera un ritorno a capo\-avanzamento riga oppure è possibile usare l'oggetto `cin`. Questo oggetto \(con l'oggetto `cerr` o `clog`\) in genere è associato all'oggetto `cout`. Quindi, qualsiasi uso di `cin` \(oppure dell'oggetto `cerr` o `clog`\) scarica l'oggetto `cout`.  
  
## Vedere anche  
 [Flussi di output](../standard-library/output-streams.md)