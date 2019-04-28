---
title: Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C++
ms.date: 11/04/2016
helpviewer_keywords:
- functions [C], exporting
- functions [C], C or C++ executables and
- __cplusplus macro
- exporting DLLs [C++], C functions in C++ executables
- exporting functions [C++], C functions in C++ executables
ms.assetid: b51d6e5e-37cf-4c1c-b0bf-fcf188c82f00
ms.openlocfilehash: b7ba2ed30615efb3b05e71cecf0ea69898feb8ba
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62273573"
---
# <a name="exporting-c-functions-for-use-in-c-or-c-language-executables"></a>Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C++

Se si dispongono di funzioni in una DLL scritta in C, che si desidera accedere da un linguaggio C o C++ modulo linguistico, è consigliabile usare il **cplusplus** macro del preprocessore per determinare quale lingua è in fase di compilazione e quindi dichiarare questi le funzioni con collegamento C, se viene utilizzato da un C++ modulo linguistico. Se si usa questa tecnica e forniscono i file di intestazione per la DLL, queste funzioni possono essere usate dagli utenti di C e C++ senza alcuna modifica.

Il codice seguente illustra un file di intestazione che può essere utilizzato dalle applicazioni client di C e C++:

```h
// MyCFuncs.h
#ifdef __cplusplus
extern "C" {  // only need to export C interface if
              // used by C++ source code
#endif

__declspec( dllimport ) void MyCFunc();
__declspec( dllimport ) void AnotherCFunc();

#ifdef __cplusplus
}
#endif
```

Se è necessario collegare le funzioni C all'eseguibile C++ e i file di intestazione di dichiarazione di funzione non usa la tecnica precedente, nel file di origine C++, eseguire il comando seguente per impedire al compilatore di decorazione dei nomi di funzione C:

```cpp
extern "C" {
#include "MyCHeader.h"
}
```

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Esportazione da una DLL tramite i file def](exporting-from-a-dll-using-def-files.md)

- [Esportazione da una DLL tramite dllexport](exporting-from-a-dll-using-declspec-dllexport.md)

- [Esportazione e importazione utilizzando AFX_EXT_CLASS](exporting-and-importing-using-afx-ext-class.md)

- [Determinare quale metodo di esportazione da utilizzare](determining-which-exporting-method-to-use.md)

- [Importare in un'applicazione tramite __declspec(dllimport)](importing-into-an-application-using-declspec-dllimport.md)

- [Inizializzare una DLL](run-time-library-behavior.md#initializing-a-dll)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Nomi decorati](reference/decorated-names.md)

- [Uso di extern per specificare un collegamento](../cpp/using-extern-to-specify-linkage.md)

## <a name="see-also"></a>Vedere anche

[Esportazione da una DLL](exporting-from-a-dll.md)
