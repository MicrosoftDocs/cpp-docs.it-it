---
title: Avviso degli strumenti del linker LNK4221
ms.date: 11/04/2016
f1_keywords:
- LNK4221
helpviewer_keywords:
- LNK4221
ms.assetid: 8e2eb2de-9532-4b85-908a-8c9ff5c4cccb
ms.openlocfilehash: baea8643001c550aeb3cb35dc6fe414e4330c0c1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62160380"
---
# <a name="linker-tools-warning-lnk4221"></a>Avviso degli strumenti del linker LNK4221

Questo file oggetto non definisce alcun simboli pubblici non definiti in precedenza, quindi non essere usato da qualsiasi operazione di collegamento che utilizza la libreria

Prendere in considerazione i seguenti due frammenti di codice.

```
// a.cpp
#include <atlbase.h>
```

```
// b.cpp
#include <atlbase.h>
int function()
{
   return 0;
}
```

Per compilare i file e creare due file di oggetto, eseguire **cl /c a.cpp cpp b. cpp** un prompt dei comandi. Se si collegano file oggetto eseguendo **link/lib b. obj. obj /out**, verrà visualizzato l'avviso LNK4221. Se si collegano gli oggetti eseguendo **link/lib. obj b. obj /out**, non si riceverà un avviso.

Nel secondo scenario viene visualizzato alcun avviso perché il linker funziona in modo last in First-Out (LIFO). Nel primo scenario, b. obj viene elaborata prima. obj e. obj non contiene nuovi simboli da aggiungere. Facendo in modo che il linker per l'elaborazione. obj prima di tutto, è possibile evitare l'avviso.

Una causa comune di questo errore è quando due file di origine specificano l'opzione [/Yc (Crea precompilati o meno File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md) con lo stesso nome di file di intestazione specificato nella **intestazioni precompilate** campo. Una causa comune di questo problema riguarda i file stdafx. h, poiché, per impostazione predefinita, stdafx. cpp comprende stdafx. h e non aggiunge nuovi simboli. Se un altro file di origine include file stdafx. h con **/Yc** e il file con estensione obj associata viene elaborato prima stdafx. obj, il linker genererà LNK4221.

Un modo per risolvere questo problema consiste nell'assicurarsi che per ogni intestazione precompilata, c'è solo un file di origine che lo include con **/Yc**. Tutti gli altri file di origine è necessario usare intestazioni precompilate. Per altre informazioni su come modificare questa impostazione, vedere [/Yu (Usa il File intestazione precompilata)](../../build/reference/yu-use-precompiled-header-file.md).