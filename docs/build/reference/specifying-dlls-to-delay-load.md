---
title: Specifica delle DLL per il caricamento ritardato | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- DELAYLOAD linker option
- delayed loading of DLLs
- delayed loading of DLLs, specifying
- /DELAYLOAD linker option
ms.assetid: 94cbecfe-7a42-40d1-a618-9f2786bac0d8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1e9becc0a686d3add5db140b239f1997f81a45be
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45722579"
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