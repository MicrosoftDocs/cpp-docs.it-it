---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4222'
title: Avviso degli strumenti del linker LNK4222
ms.date: 11/04/2016
f1_keywords:
- LNK4222
helpviewer_keywords:
- LNK4222
ms.assetid: b7bb1794-41fb-4c83-b9b0-59c0d786a7da
ms.openlocfilehash: 215dd04339b783d558b05140bb7dd08c5936d5e5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97222607"
---
# <a name="linker-tools-warning-lnk4222"></a>Avviso degli strumenti del linker LNK4222

al simbolo esportato ' symbol ' non deve essere assegnato un numero ordinale

I simboli seguenti non devono essere esportati in base al numero ordinale:

- `DllCanUnloadNow`

- `DllGetClassObject`

- `DllGetClassFactoryFromClassString`

- `DllInstall`

- `DllRegisterServer`

- `DllRegisterServerEx`

- `DllUnregisterServer`

Queste funzioni sono sempre individuate in base al nome, usando `GetProcAddress` . Il linker avvisa di questo tipo di esportazione perché potrebbe produrre un'immagine più grande. Questo problema può verificarsi se l'intervallo delle esportazioni ordinali è di grandi dimensioni con un numero relativamente basso di esportazioni. ad esempio:

```
EXPORTS
   DllGetClassObject   @1
   MyOtherAPI      @100
```

richiederà 100 slot nella tabella degli indirizzi di esportazione con 98 di essi (2-99). D'altro canto

```
EXPORTS
   DllGetClassObject
   MyOtherAPI      @100
```

richiederà due slot. Tenere presente che è anche possibile esportare con l'opzione del linker [/Export](../../build/reference/export-exports-a-function.md) .
