---
title: _set_new_mode
ms.date: 11/04/2016
api_name:
- _set_new_mode
api_location:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-heap-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- set_new_mode
- _set_new_mode
helpviewer_keywords:
- handler modes
- _set_new_mode function
- set_new_mode function
ms.assetid: 4d14039a-e54e-4689-8c70-74a4b9834768
ms.openlocfilehash: b248f1c97b1ec334b7441f33862b90473e08993f
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70948449"
---
# <a name="_set_new_mode"></a>_set_new_mode

Imposta una nuova modalità di gestione per **malloc**.

## <a name="syntax"></a>Sintassi

```cpp
int _set_new_mode( int newhandlermode );
```

### <a name="parameters"></a>Parametri

*newhandlermode*<br/>
Nuova modalità di gestione per **malloc**; il valore valido è 0 o 1.

## <a name="return-value"></a>Valore restituito

Restituisce la modalità del gestore precedente impostata per **malloc**. Il valore restituito 1 indica che, in caso di errore di allocazione della memoria, **malloc** ha precedentemente chiamato la routine del nuovo gestore; il valore restituito 0 indica che non è stato fatto. Se l'argomento *newhandlermode* non è uguale a 0 o 1, restituisce-1.

## <a name="remarks"></a>Note

La funzione C++ **_set_new_mode** imposta la nuova modalità del gestore per [malloc](malloc.md). La nuova modalità del gestore indica se, in caso di errore, **malloc** deve chiamare la routine del nuovo gestore come impostato da [_set_new_handler](set-new-handler.md). Per impostazione predefinita, **malloc** non chiama la routine del nuovo gestore in caso di errore di allocazione della memoria. È possibile eseguire l'override di questo comportamento predefinito in modo che, quando **malloc** non riesce ad allocare memoria, **malloc** chiama la routine del nuovo gestore nello stesso modo in cui il **nuovo** operatore esegue quando si verifica un errore per lo stesso motivo. Per altre informazioni, vedere le informazioni sugli operatori [new](../../cpp/new-operator-cpp.md) e [delete](../../cpp/delete-operator-cpp.md) in *Riferimenti al linguaggio C++* . Per eseguire l'override del comportamento predefinito, chiamare:

```cpp
_set_new_mode(1);
```

all'inizio del programma o collegarsi a Newmode.obj (vedere [Opzioni di collegamento](../../c-runtime-library/link-options.md)).

Questa funzione convalida il relativo parametro. Se *newhandlermode* è un valore diverso da 0 o 1, la funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, <strong>_set_new_mode</strong> restituisce-1 e **errno** viene impostato su `EINVAL`.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_set_new_mode**|\<new.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
[calloc](calloc.md)<br/>
[free](free.md)<br/>
[realloc](realloc.md)<br/>
[_query_new_handler](query-new-handler.md)<br/>
[_query_new_mode](query-new-mode.md)<br/>
