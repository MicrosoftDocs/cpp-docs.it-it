---
description: 'Altre informazioni su: effetti della memorizzazione nel buffer'
title: Effetti della memorizzazione nel buffer
ms.date: 11/04/2016
helpviewer_keywords:
- buffers, effects of buffering
- buffering, effects of
ms.assetid: 5d544812-e95e-4f28-b15a-edef3f3414fd
ms.openlocfilehash: dc46a5a7a390250be1872f9264235e133b9f58ff
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97232720"
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

Questo passaggio scarica il buffer, garantendo che il messaggio venga visualizzato prima dell'attesa. È anche possibile usare il `endl` manipolatore, che Scarica il buffer e restituisce un feed della riga di ritorno a capo, oppure è possibile usare l' `cin` oggetto. Questo oggetto (con l'oggetto `cerr` o `clog` ) in genere è associato all'oggetto `cout` . Quindi, qualsiasi uso di `cin` (oppure dell'oggetto `cerr` o `clog` ) scarica l'oggetto `cout` .

## <a name="see-also"></a>Vedi anche

[Flussi di output](../standard-library/output-streams.md)
