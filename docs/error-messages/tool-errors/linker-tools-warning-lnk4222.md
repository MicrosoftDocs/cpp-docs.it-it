---
title: Strumenti del linker LNK4222 avviso | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4222
dev_langs:
- C++
helpviewer_keywords:
- LNK4222
ms.assetid: b7bb1794-41fb-4c83-b9b0-59c0d786a7da
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: abc4f85fbc361b37d9325f9d395a1c34e1eeed2e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46106932"
---
# <a name="linker-tools-warning-lnk4222"></a>Avviso degli strumenti del linker LNK4222

simbolo esportato 'symbol' non deve essere assegnato un numero ordinale

I simboli seguenti non devono essere esportati dall'ordinale:

- `DllCanUnloadNow`

- `DllGetClassObject`

- `DllGetClassFactoryFromClassString`

- `DllInstall`

- `DllRegisterServer`

- `DllRegisterServerEx`

- `DllUnregisterServer`

Queste funzioni si trovano sempre in base al nome, usando `GetProcAddress`. Il linker genera un avviso su questo tipo di esportazione è perché potrebbe comportare un'immagine più grande. Questo problema può verificarsi se l'intervallo delle esportazioni di ordinali è di grandi dimensioni con un numero relativamente basso di esportazioni. Ad esempio,

```
EXPORTS
   DllGetClassObject   @1
   MyOtherAPI      @100
```

richiede a 100 slot nella tabella di indirizzi di esportazione con 98 di essi filler sufficiente (2-99). D'altro canto

```
EXPORTS
   DllGetClassObject
   MyOtherAPI      @100
```

richiede due slot. (Tenere presente che è possibile anche esportare con il [/Export](../../build/reference/export-exports-a-function.md) l'opzione del linker.)