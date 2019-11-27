---
title: Pulizia di risorse
ms.date: 11/04/2016
helpviewer_keywords:
- termination handlers [C++], cleaning up resources
- exception handling [C++], cleaning up resources
- C++ exception handling, termination handlers
- resources [C++], cleaning up
- exception handling [C++], cleanup code
- try-catch keyword [C++], termination handlers
ms.assetid: 65753efe-6a27-4750-b90c-50635775c1b6
ms.openlocfilehash: 225c3ccaf3342f11ad4eb6d6575ad3ac542acfd2
ms.sourcegitcommit: 654aecaeb5d3e3fe6bc926bafd6d5ace0d20a80e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2019
ms.locfileid: "74246641"
---
# <a name="cleaning-up-resources"></a>Pulizia di risorse

Durante l'esecuzione del gestore terminazioni, potrebbe essere possibile non sapere quali risorse sono effettivamente allocate prima che il gestore terminazioni venga chiamato. È possibile che il blocco di istruzioni **__try** sia stato interrotto prima dell'allocazione di tutte le risorse, in modo che non tutte le risorse siano state aperte.

Di conseguenza, per essere certi, è necessario verificare quali risorse sono effettivamente aperte prima di procedere con la pulizia gestione-terminazione. Una procedura consigliata consiste in:

1. Inizializzare gli handle su NULL.

1. Nel blocco di istruzioni **__try** allocare le risorse. Gli handle vengono impostati su valori positivi mentre la risorsa viene allocata.

1. Nel blocco di istruzioni **__finally** rilasciare ogni risorsa la cui variabile handle o flag corrispondente è diversa da zero o not null.

## <a name="example"></a>Esempio

Il codice seguente, ad esempio, usa un gestore di terminazione per chiudere tre file e un blocco di memoria allocati nel blocco di istruzioni **__try** . Prima di pulire una risorsa, il codice controlla se la risorsa è stata allocata.

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