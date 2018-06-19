---
title: Effetti della memorizzazione nel buffer | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- buffers, effects of buffering
- buffering, effects of
ms.assetid: 5d544812-e95e-4f28-b15a-edef3f3414fd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c28deb0f5e30d3ec28fac4805a86645bebf27f22
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33842378"
---
# <a name="effects-of-buffering"></a>Effetti della memorizzazione nel buffer

L'esempio seguente illustra gli effetti della memorizzazione nel buffer. Il programma potrebbe visualizzare `please wait`, attendere 5 secondi e quindi procedere. Potrebbe non verificarsi questa situazione, tuttavia, perché l'output viene memorizzato nel buffer.

```cpp
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

```cpp
cout <<"Please wait..." <<flush;
```

Questo passaggio scarica il buffer, garantendo che il messaggio venga visualizzato prima dell'attesa. È inoltre possibile utilizzare il `endl` manipolatore, che scarica il buffer e restituisce un ritorno a capo-avanzamento riga, o è possibile utilizzare il `cin` oggetto. Questo oggetto (con l'oggetto `cerr` o `clog` ) in genere è associato all'oggetto `cout` . Quindi, qualsiasi uso di `cin` (oppure dell'oggetto `cerr` o `clog` ) scarica l'oggetto `cout` .

## <a name="see-also"></a>Vedere anche

[Flussi di output](../standard-library/output-streams.md)<br/>
