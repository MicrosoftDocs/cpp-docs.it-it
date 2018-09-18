---
title: Avviso del compilatore C4335 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4335
dev_langs:
- C++
helpviewer_keywords:
- C4335
ms.assetid: e66467ad-a10b-4438-8c7c-e8e8d11d39bb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d2b28909d0c4b663fffeacbec58ad694131bb008
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46036579"
---
# <a name="compiler-warning-c4335"></a>Avviso del compilatore C4335

Rilevato formato di file Mac: convertire il file di origine in formato DOS o UNIX

Il carattere di terminazione di riga della prima riga di un file di origine è lo stile Macintosh ('\r') invece di UNIX ('\n') o DOS ("\r\n").

Questo avviso viene sempre generato come errore.  Visualizzare [avviso](../../preprocessor/warning.md) pragma per informazioni su come disabilitare questo avviso.  Inoltre, questo avviso viene generato solo una volta per ogni modulo. Pertanto, se sono presenti più `#include` direttive che specificano i file in formato Macintosh, C4335 verranno rilasciati una sola volta.

Un modo per generare i file in formato Macintosh consiste nell'usare la **opzioni di salvataggio avanzate** (nelle **File** menu) in Visual Studio.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4335.

```
// C4335 expected
#include "c4335.h"   // assume both include files are in Macintosh format
#include "c4335_2.h"
```