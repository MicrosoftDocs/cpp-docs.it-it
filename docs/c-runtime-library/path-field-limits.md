---
title: Limiti dei campi percorso
ms.date: 11/04/2016
f1_keywords:
- _MAX_EXT
- _MAX_DIR
- _MAX_PATH
- _MAX_FNAME
- _MAX_DRIVE
helpviewer_keywords:
- path field constants
- MAX_FNAME constant
- _MAX_DIR constant
- _MAX_DRIVE constant
- paths, maximum limit
- _MAX_PATH constant
- MAX_DRIVE constant
- _MAX_FNAME constant
- _MAX_EXT constant
- MAX_DIR constant
- MAX_EXT constant
ms.assetid: 2b5d0e43-1347-45b4-8397-24a8a45c444e
ms.openlocfilehash: 89609de3fc5584a960480bff83566f5e38c8be1f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50477532"
---
# <a name="path-field-limits"></a>Limiti dei campi percorso

## <a name="syntax"></a>Sintassi

```cpp
#include <stdlib.h>
```

## <a name="remarks"></a>Note

Queste costanti definiscono la lunghezza massima del percorso e dei singoli campi nel percorso.

|Costante|Significato|
|--------------|-------------|
|`_MAX_DIR`|Lunghezza massima del componente di directory|
|`_MAX_DRIVE`|Lunghezza massima del componente di unità|
|`_MAX_EXT`|Lunghezza massima del componente di estensione|
|`_MAX_FNAME`|Lunghezza massima del componente di nome file|
|`_MAX_PATH`|Lunghezza massima del percorso completo|

> [!NOTE]
> Runtime C supporta una lunghezza dei percorsi fino a 32768 caratteri di lunghezza, ma spetta al sistema operativo, in particolare al file system, supportare questi percorsi più lunghi. La somma dei campi non deve superare `_MAX_PATH` per una compatibilità completa con le versioni precedenti con i file system FAT32. Il file system NTFS di Windows supporta percorsi con un massimo di 32768 caratteri, ma solo quando si utilizzano le API Unicode. Quando si usano nomi lunghi per i percorsi, aggiungere al percorso il prefisso \\\\?\ e usare le versioni Unicode delle funzioni C Run-Time.

## <a name="see-also"></a>Vedere anche

[Costanti globali](../c-runtime-library/global-constants.md)