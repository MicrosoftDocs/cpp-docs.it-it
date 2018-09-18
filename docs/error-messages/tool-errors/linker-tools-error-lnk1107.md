---
title: Strumenti del linker LNK1107 errore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1107
dev_langs:
- C++
helpviewer_keywords:
- LNK1107
ms.assetid: a37a893d-5efa-4eba-8f40-6c5518b4b9d0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 73a1643d10ea9adc6ac6979eb2de023593ba8d01
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46060707"
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