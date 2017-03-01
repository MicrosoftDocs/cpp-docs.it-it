---
title: Effetti della memorizzazione nel buffer | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- buffers, effects of buffering
- buffering, effects of
ms.assetid: 5d544812-e95e-4f28-b15a-edef3f3414fd
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: d888b6d16e0a71168e0615d89bbd1d03c51afad8
ms.lasthandoff: 02/24/2017

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
  
 Questo passaggio scarica il buffer, garantendo che il messaggio venga visualizzato prima dell'attesa. È anche possibile usare il manipolatore `endl` , che scarica il buffer e genera un ritorno a capo-avanzamento riga oppure è possibile usare l'oggetto `cin` . Questo oggetto (con l'oggetto `cerr` o `clog` ) in genere è associato all'oggetto `cout` . Quindi, qualsiasi uso di `cin` (oppure dell'oggetto `cerr` o `clog` ) scarica l'oggetto `cout` .  
  
## <a name="see-also"></a>Vedere anche  
 [Output Streams](../standard-library/output-streams.md) (Flussi di output)


