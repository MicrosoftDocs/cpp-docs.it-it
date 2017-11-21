---
title: Effetti della memorizzazione nel buffer | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- buffers, effects of buffering
- buffering, effects of
ms.assetid: 5d544812-e95e-4f28-b15a-edef3f3414fd
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 77d97371e043242e49e119b926138b46d3b7647f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="effects-of-buffering"></a>Effetti della memorizzazione nel buffer
L'esempio seguente illustra gli effetti della memorizzazione nel buffer. Il programma potrebbe visualizzare `please wait`, attendere 5 secondi e quindi procedere. Potrebbe non verificarsi questa situazione, tuttavia, perché l'output viene memorizzato nel buffer.  
  
```  
// effects_buffering.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <time.h>  
using namespace std;  
  
int main( )  
{  
   time_t tm = time( NULL ) + 5;  
   cout << "Please wait...";  
   while ( time( NULL ) < tm )  
      ;  
   cout << "\nAll done" << endl;  
}  
```  
  
 Affinché il programma funzioni in modo logico, l'oggetto `cout` deve svuotarsi quando il messaggio viene visualizzato. Per scaricare un oggetto `ostream` , inviarlo al manipolatore `flush` :  
  
```  
cout <<"Please wait..." <<flush;  
```  
  
 Questo passaggio scarica il buffer, garantendo che il messaggio venga visualizzato prima dell'attesa. È inoltre possibile utilizzare il `endl` manipolatore, che scarica il buffer e restituisce un ritorno a capo-avanzamento riga, o è possibile utilizzare il `cin` oggetto. Questo oggetto (con l'oggetto `cerr` o `clog` ) in genere è associato all'oggetto `cout` . Quindi, qualsiasi uso di `cin` (oppure dell'oggetto `cerr` o `clog` ) scarica l'oggetto `cout` .  
  
## <a name="see-also"></a>Vedere anche  
 [Output Streams](../standard-library/output-streams.md) (Flussi di output)

