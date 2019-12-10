---
title: Errore degli strumenti del linker LNK1107
ms.date: 11/04/2016
f1_keywords:
- LNK1107
helpviewer_keywords:
- LNK1107
ms.assetid: a37a893d-5efa-4eba-8f40-6c5518b4b9d0
ms.openlocfilehash: c75966d9c6c22f1bd2123fb30282bb2bed467130
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74991033"
---
# <a name="linker-tools-error-lnk1107"></a>Errore degli strumenti del linker LNK1107

file danneggiato o non valido: Impossibile leggere nella posizione

Lo strumento non è stato in grado di leggere il file. Ricreare il file.

LNK1107 può anche verificarsi se si tenta di passare un modulo (con estensione dll o netmodule creato con [/CLR: noAssembly](../../build/reference/clr-common-language-runtime-compilation.md) o [/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)) al linker; passare invece il file obj.

Se si compila l'esempio seguente:

```cpp
// LNK1107.cpp
// compile with: /clr /LD
public ref class MyClass {
public:
   void Test(){}
};
```

e quindi specificare **link LNK1107. dll** nella riga di comando. si otterrà LNK1107.  Per risolvere l'errore, specificare invece il **collegamento LNK1107. obj** .
