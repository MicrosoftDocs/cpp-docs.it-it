---
description: 'Altre informazioni su: errore degli strumenti del linker LNK1107'
title: Errore degli strumenti del linker LNK1107
ms.date: 11/04/2016
f1_keywords:
- LNK1107
helpviewer_keywords:
- LNK1107
ms.assetid: a37a893d-5efa-4eba-8f40-6c5518b4b9d0
ms.openlocfilehash: 2a5ed9ba0bc4789a324d143b6287a08712299cdd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97281392"
---
# <a name="linker-tools-error-lnk1107"></a>Errore degli strumenti del linker LNK1107

file danneggiato o non valido: Impossibile leggere nella posizione

Lo strumento non è stato in grado di leggere il file. Ricreare il file.

LNK1107 può anche verificarsi se si tenta di passare un modulo (con estensione dll o netmodule creato con [/CLR: noAssembly](../../build/reference/clr-common-language-runtime-compilation.md) o  [/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)) al linker; passare invece il file obj.

Se si compila l'esempio seguente:

```cpp
// LNK1107.cpp
// compile with: /clr /LD
public ref class MyClass {
public:
   void Test(){}
};
```

e quindi specificare **LNK1107.dlldi collegamento** nella riga di comando, si otterrà LNK1107.  Per risolvere l'errore, specificare invece il **collegamento LNK1107. obj** .
