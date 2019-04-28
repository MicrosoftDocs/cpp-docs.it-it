---
title: Avviso degli strumenti del linker LNK4222
ms.date: 11/04/2016
f1_keywords:
- LNK4222
helpviewer_keywords:
- LNK4222
ms.assetid: b7bb1794-41fb-4c83-b9b0-59c0d786a7da
ms.openlocfilehash: 52a4fee532eb9997dcf013f95246b27fdffc4c20
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62160406"
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