---
title: Costanti per l'accesso in lettura/scrittura ai file
ms.date: 11/04/2016
helpviewer_keywords:
- read/write access constants
- write access constants
- access constants for file read/write
- constants [C++], file attributes
- file read/write access constants
ms.assetid: 56cd1d22-39a5-4fcf-bea2-7046d249e8ee
ms.openlocfilehash: 96d146b2e2f0ed82cbdc52b11d92c049da50e2cb
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79438389"
---
# <a name="file-readwrite-access-constants"></a>Costanti di accesso in lettura/scrittura file

## <a name="syntax"></a>Sintassi

```
#include <stdio.h>
```

## <a name="remarks"></a>Osservazioni

Queste costanti specificano il tipo di accesso ("a", "r" o "w") richiesto per il file. Con il tipo di accesso è possibile specificare sia la [modalità di conversione](../c-runtime-library/file-translation-constants.md) ("b" o "t") che la [modalità di commit su disco](../c-runtime-library/commit-to-disk-constants.md) ("c" o "n").

I tipi di accesso sono descritti nella tabella seguente:

|Tipo di accesso|Descrizione|
|----------|----------------|
|**"r"**|Viene aperto per la lettura. Se il file non esiste o non può essere trovato, la chiamata per aprire il file ha esito negativo.|
|**"w"**|Apre un file vuoto per la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente.|
|**"a"**|Viene aperto in scrittura alla fine del file (aggiunta); crea prima il file se non esiste. Tutte le operazioni di scrittura vengono eseguite alla fine del file. Benché il puntatore del file possa essere riposizionato usando `fseek` o `rewind`, viene sempre spostato di nuovo alla fine del file prima dell'esecuzione di qualsiasi operazione di scrittura. |
|**"r+"**|Viene aperto per la lettura e la scrittura. Se il file non esiste o non può essere trovato, la chiamata per aprire il file ha esito negativo.|
|**"w+"**|Apre un file vuoto per la lettura e la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente.|
|**"a+"**|Uguale ad **"a"** , ma consente la lettura.|

Quando il tipo di accesso "r+", "w+", o "a+" viene specificato, sono consentite sia la lettura che la scrittura (il file viene definito aperto per "l'aggiornamento"). Tuttavia, quando si passa da lettura a scrittura, deve esserci una nuova operazione `fflush`, `fsetpos`, `fseek` o `rewind`. È possibile specificare la posizione corrente per l'operazione `fsetpos` o `fseek`.

## <a name="see-also"></a>Vedere anche

[_fdopen, _wfdopen](../c-runtime-library/reference/fdopen-wfdopen.md)<br/>
[fopen, _wfopen](../c-runtime-library/reference/fopen-wfopen.md)<br/>
[freopen, _wfreopen](../c-runtime-library/reference/freopen-wfreopen.md)<br/>
[_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md)<br/>
[_popen, _wpopen](../c-runtime-library/reference/popen-wpopen.md)<br/>
[Global Constants](../c-runtime-library/global-constants.md) (Costanti globali)
