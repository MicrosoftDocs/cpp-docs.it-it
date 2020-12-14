---
description: 'Altre informazioni su: avviso del compilatore C4335'
title: Avviso del compilatore C4335
ms.date: 11/04/2016
f1_keywords:
- C4335
helpviewer_keywords:
- C4335
ms.assetid: e66467ad-a10b-4438-8c7c-e8e8d11d39bb
ms.openlocfilehash: fc8f86036a299c41bc0cb1814b98372edc3b4d8f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97238310"
---
# <a name="compiler-warning-c4335"></a>Avviso del compilatore C4335

Rilevato formato di file Mac: convertire il file di origine in formato DOS o UNIX

Il carattere di terminazione di riga della prima riga di un file di origine è di tipo Macintosh (' \') anziché UNIX (' \n ') o DOS (' \r\n ').

Questo avviso viene sempre emesso come un errore.  Per informazioni su come disabilitare questo avviso, vedere il pragma [warning](../../preprocessor/warning.md) .  Inoltre, questo avviso viene emesso una sola volta per ogni modulo. Se pertanto sono presenti più `#include` direttive che specificano i file in formato Macintosh, C4335 verrà emesso una sola volta.

Un modo per generare file in formato Macintosh consiste nell'usare le **Opzioni di salvataggio avanzate** (nel menu **file** ) in Visual Studio.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4335.

```cpp
// C4335 expected
#include "c4335.h"   // assume both include files are in Macintosh format
#include "c4335_2.h"
```
