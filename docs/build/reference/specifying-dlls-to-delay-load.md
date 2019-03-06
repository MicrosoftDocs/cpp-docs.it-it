---
title: Specifica delle DLL per il caricamento ritardato
ms.date: 11/04/2016
helpviewer_keywords:
- DELAYLOAD linker option
- delayed loading of DLLs
- delayed loading of DLLs, specifying
- /DELAYLOAD linker option
ms.assetid: 94cbecfe-7a42-40d1-a618-9f2786bac0d8
ms.openlocfilehash: b1ca214d8c840d9e993d5a89823b63868a664bec
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57424886"
---
# <a name="specifying-dlls-to-delay-load"></a>Specifica delle DLL per il caricamento ritardato

È possibile specificare le DLL di ritardo caricare con il [/DELAYLOAD fa](../../build/reference/delayload-delay-load-import.md):`dllname` l'opzione del linker. Se non si intende usare una versione personalizzata di una funzione di supporto, è necessario anche collegare il programma a delayimp.lib (per le applicazioni desktop) o a dloadhelper.lib (per le app dello Store).

Di seguito è riportato un esempio semplice di caricamento ritardato di una DLL:

```
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

Compilare la versione DEBUG del progetto. Eseguire il codice un'istruzione alla volta usando il debugger in modo da notare che il file user32.dll verrà caricato solo quando si effettua la chiamata a `MessageBox`.

## <a name="see-also"></a>Vedere anche

[Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)
