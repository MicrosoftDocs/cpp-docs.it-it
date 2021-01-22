---
description: Altre informazioni su come specificare le dll per ritardare il caricamento
title: Specificare le dll per ritardare il caricamento
ms.date: 01/19/2021
helpviewer_keywords:
- DELAYLOAD linker option
- delayed loading of DLLs
- delayed loading of DLLs, specifying
- /DELAYLOAD linker option
ms.openlocfilehash: de8c2e3cb9605cbc6dbc215a0449348c12295c17
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98667495"
---
# <a name="specify-dlls-to-delay-load"></a>Specificare le dll per ritardare il caricamento

È possibile specificare le DLL di cui ritardare il caricamento utilizzando l' [`/delayload:dllname`](delayload-delay-load-import.md) opzione del linker. Se non si prevede di usare la propria versione di una funzione di supporto, è necessario collegare anche il programma a *`delayimp.lib`* (per le applicazioni desktop) o *`dloadhelper.lib`* (per le app UWP).

Ecco un semplice esempio di caricamento ritardato di una DLL:

```cpp
// cl t.cpp user32.lib delayimp.lib  /link /DELAYLOAD:user32.dll
#include <windows.h>
// uncomment these lines to remove .libs from command line
// #pragma comment(lib, "delayimp")
// #pragma comment(lib, "user32")

int main() {
   // user32.dll will load at this point
   MessageBox(NULL, "Hello", "Hello", MB_OK);
}
```

Compilare la versione DEBUG del progetto. Eseguire il codice un'istruzione alla volta utilizzando il debugger. si noterà che *`user32.dll`* viene caricato solo quando si effettua la chiamata a `MessageBox` .

## <a name="see-also"></a>Vedi anche

[Supporto per le DLL a caricamento ritardato nel linker](linker-support-for-delay-loaded-dlls.md)
