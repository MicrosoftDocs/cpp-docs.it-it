---
description: 'Altre informazioni su: costanti degli attributi di file'
title: Costanti di attributi file
ms.date: 11/04/2016
f1_keywords:
- A_HIDDEN
- _A_NORMAL
- _A_SUBDIR
- _A_RDONLY
- A_NORMAL
- A_SUBDIR
- _A_SYSTEM
- c.constants.file
- _A_HIDDEN
- A_RDONLY
- _A_ARCH
- A_ARCH
helpviewer_keywords:
- constants [C++], file attributes
- file attribute constants [C++]
- _A_SYSTEM constant
- files [C++], file attribute constants
- _A_SUBDIR constant
- _A_ARCH constant
- _A_NORMAL constant
- _A_HIDDEN constant
- _A_RDONLY constant
ms.assetid: 8dc8ccb9-99f5-446b-876c-7ebecc2f764f
ms.openlocfilehash: 8b57549b4a21cc5d699f933009c575b3f3fca81d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97306365"
---
# <a name="file-attribute-constants"></a>Costanti di attributi file

## <a name="syntax"></a>Sintassi

```
#include <io.h>
```

## <a name="remarks"></a>Osservazioni

Queste costanti specificano gli attributi correnti del file o directory specificata dalla funzione.

Gli attributi sono rappresentati dalle costanti manifesto seguenti:

|Costante|Descrizione|
|-|-|
|`_A_ARCH`| Archiviazione. Da impostare ogni volta che il file viene modificato e cancellato dal comando BACKUP. Valore: 0x20|
|`_A_HIDDEN`| File nascosto. Generalmente non visualizzato con il comando DIR, a meno che non venga usata l'opzione /AH. Restituisce informazioni su file comuni oltre che su quelli con questo attributo. Valore: 0x02|
|`_A_NORMAL`| Normale. Il file può essere letto o scritto senza restrizioni. Valore: 0x00|
|`_A_RDONLY`| Di sola lettura. Il file non può essere aperto per la scrittura e non può essere creato un file con lo stesso nome. Valore: 0x01|
|`_A_SUBDIR`| Sottodirectory. Valore: 0x10|
|`_A_SYSTEM`| File di sistema. Generalmente non visualizzato con il comando DIR, a meno che non venga usata l'opzione /AS. Valore: 0x04|

Più costanti possono essere combinate con l'operatore OR (&#124;).

## <a name="see-also"></a>Vedi anche

[Funzioni di ricerca filename](../c-runtime-library/filename-search-functions.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)
