---
title: Errore degli strumenti del linker LNK1107
ms.date: 11/04/2016
f1_keywords:
- LNK1107
helpviewer_keywords:
- LNK1107
ms.assetid: a37a893d-5efa-4eba-8f40-6c5518b4b9d0
ms.openlocfilehash: 68048d9f824283d002a4ea8b64d88f37bbeefc48
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50646563"
---
# <a name="linker-tools-error-lnk1107"></a>Errore degli strumenti del linker LNK1107

file danneggiato o non valido: non è possibile leggere in posizione

Lo strumento non è stato possibile leggere il file. Ricreare il file.

Errore LNK1107 può inoltre verificarsi se si prova a passare un modulo (estensione dll o netmodule creata con [/CLR: noAssembly](../../build/reference/clr-common-language-runtime-compilation.md) oppure [/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)) al linker; passare invece il file con estensione obj.

Se si compila l'esempio seguente:

```
// LNK1107.cpp
// compile with: /clr /LD
public ref class MyClass {
public:
   void Test(){}
};
```

e quindi specificare **collegare LNK1107. dll** nella riga di comando, verrà visualizzato l'errore LNK1107.  Per risolvere l'errore, specificare **collegare LNK1107** invece.