---
title: Pulizia delle risorse
description: Come rilasciare le risorse durante un gestore di terminazione per la gestione strutturata delle eccezioni.
ms.date: 08/24/2020
helpviewer_keywords:
- termination handlers [C++], cleaning up resources
- exception handling [C++], cleaning up resources
- C++ exception handling, termination handlers
- resources [C++], cleaning up
- exception handling [C++], cleanup code
- try-catch keyword [C++], termination handlers
ms.assetid: 65753efe-6a27-4750-b90c-50635775c1b6
ms.openlocfilehash: dae92a515db25b9985a890d7d08cc213f88ecfea
ms.sourcegitcommit: efc8c32205c9d610f40597556273a64306dec15d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/26/2020
ms.locfileid: "88898431"
---
# <a name="cleaning-up-resources"></a>Pulizia delle risorse

Durante l'esecuzione del gestore di terminazione, è possibile che non si conoscano le risorse che sono state acquisite prima della chiamata del gestore di terminazione. È possibile che il **`__try`** blocco di istruzioni sia stato interrotto prima dell'acquisizione di tutte le risorse, in modo che non tutte le risorse siano state aperte.

Per essere sicuri, è consigliabile verificare quali risorse sono aperte prima di procedere con la pulizia della gestione della terminazione. Una procedura consigliata consiste in:

1. Inizializzare gli handle su NULL.

1. Nel **`__try`** blocco di istruzioni acquisire le risorse. Gli handle vengono impostati su valori positivi quando viene acquisita la risorsa.

1. Nel **`__finally`** blocco di istruzioni rilasciare ogni risorsa la cui variabile handle o flag corrispondente è diversa da zero o not null.

## <a name="example"></a>Esempio

Il codice seguente, ad esempio, usa un gestore di terminazione per chiudere tre file e rilasciare un blocco di memoria. Queste risorse sono state acquisite nel **`__try`** blocco di istruzioni. Prima di pulire una risorsa, il codice verifica prima di tutto se la risorsa è stata acquisita.

```cpp
// exceptions_Cleaning_up_Resources.cpp
#include <stdlib.h>
#include <malloc.h>
#include <stdio.h>
#include <windows.h>

void fileOps() {
   FILE  *fp1 = NULL,
         *fp2 = NULL,
         *fp3 = NULL;
   LPVOID lpvoid = NULL;
   errno_t err;

   __try {
      lpvoid = malloc( BUFSIZ );

      err = fopen_s(&fp1, "ADDRESS.DAT", "w+" );
      err = fopen_s(&fp2, "NAMES.DAT", "w+" );
      err = fopen_s(&fp3, "CARS.DAT", "w+" );
   }
   __finally {
      if ( fp1 )
         fclose( fp1 );
      if ( fp2 )
         fclose( fp2 );
      if ( fp3 )
         fclose( fp3 );
      if ( lpvoid )
         free( lpvoid );
   }
}

int main() {
   fileOps();
}
```

## <a name="see-also"></a>Vedere anche

[Scrittura di un gestore di terminazione](../cpp/writing-a-termination-handler.md)<br/>
[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)
