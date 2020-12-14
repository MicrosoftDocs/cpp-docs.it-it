---
description: 'Altre informazioni su: specifica delle dll per il caricamento ritardato'
title: Specifica delle DLL per il caricamento ritardato
ms.date: 11/04/2016
helpviewer_keywords:
- DELAYLOAD linker option
- delayed loading of DLLs
- delayed loading of DLLs, specifying
- /DELAYLOAD linker option
ms.assetid: 94cbecfe-7a42-40d1-a618-9f2786bac0d8
ms.openlocfilehash: ece96ea6f818c7e0bc6b6e032ce523e96a9f4ecb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97224543"
---
# <a name="specifying-dlls-to-delay-load"></a>Specifica delle DLL per il caricamento ritardato

È possibile specificare le DLL di cui ritardare il [](delayload-delay-load-import.md)caricamento con l' `dllname` opzione del linker/DELAYLOAD:. Se non si intende usare una versione personalizzata di una funzione di supporto, è necessario anche collegare il programma a delayimp.lib (per le applicazioni desktop) o a dloadhelper.lib (per le app dello Store).

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

## <a name="see-also"></a>Vedi anche

[Supporto del linker per le DLL di Delay-Loaded](linker-support-for-delay-loaded-dlls.md)
