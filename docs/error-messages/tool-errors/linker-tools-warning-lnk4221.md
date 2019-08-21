---
title: Avviso degli strumenti del linker LNK4221
ms.date: 08/19/2019
f1_keywords:
- LNK4221
helpviewer_keywords:
- LNK4221
ms.assetid: 8e2eb2de-9532-4b85-908a-8c9ff5c4cccb
ms.openlocfilehash: 299c3ef76006b347d6770d45ca317ff0eb941ffa
ms.sourcegitcommit: 9d4ffb8e6e0d70520a1e1a77805785878d445b8a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/20/2019
ms.locfileid: "69630809"
---
# <a name="linker-tools-warning-lnk4221"></a>Avviso degli strumenti del linker LNK4221

Questo file oggetto non definisce simboli pubblici non definiti in precedenza, pertanto non verrà utilizzato da alcuna operazione di collegamento che utilizza la libreria

Considerare i due frammenti di codice seguenti.

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

Per compilare i file e creare due file oggetto, eseguire **cl/c a. cpp b. cpp** al prompt dei comandi. Se si collegano i file oggetto eseguendo il **collegamento/lib/out: test. lib a. obj b. obj**, verrà visualizzato l'avviso LNK4221. Se si collegano gli oggetti eseguendo il **collegamento/lib/out: test. lib b. obj a. obj**, non verrà visualizzato alcun avviso.

Nel secondo scenario non viene emesso alcun avviso perché il linker opera in modalità LIFO (Last-in First-out). Nel primo scenario, b. obj viene elaborato prima di un. obj e un. obj non contiene nuovi simboli da aggiungere. Indicando al linker di elaborare prima un. obj, è possibile evitare l'avviso.

::: moniker range=">=vs-2019"

Una causa comune di questo errore è rappresentata dal caso in cui due file di origine specificano l'opzione [/YC (Crea file di intestazione precompilata)](../../build/reference/yc-create-precompiled-header-file.md) con lo stesso nome file di intestazione specificato nel campo dell' **intestazione** precompilata. Una causa comune di questo problema riguarda *PCH. h* poiché, per impostazione predefinita, *PCH. cpp* include *PCH. h* e non aggiunge nuovi simboli. Se un altro file di origine include *PCH. h* con **/YC** e il file obj associato viene elaborato prima di PCH. obj, il linker genererà LNK4221.

::: moniker-end

::: moniker range="<=vs-2017"

Una causa comune di questo errore è rappresentata dal caso in cui due file di origine specificano l'opzione [/YC (Crea file di intestazione precompilata)](../../build/reference/yc-create-precompiled-header-file.md) con lo stesso nome file di intestazione specificato nel campo dell' **intestazione** precompilata. Una causa comune di questo problema riguarda *stdafx. h* poiché, per impostazione predefinita, *stdafx. cpp* include *stdafx. h* e non aggiunge nuovi simboli. Se un altro file di origine include *stdafx. h* con **/YC** e il file obj associato viene elaborato prima di stdafx. obj, il linker genererà LNK4221.

::: moniker-end

Un modo per risolvere questo problema consiste nel verificare che per ogni intestazione precompilata sia presente un solo file di origine che lo includa con **/YC**. Per tutti gli altri file di origine devono essere usate intestazioni precompilate. Per ulteriori informazioni su come modificare questa impostazione, vedere [/Yu (utilizza il file di intestazione precompilata)](../../build/reference/yu-use-precompiled-header-file.md).
