---
title: _set_new_mode
ms.date: 4/2/2020
api_name:
- _set_new_mode
- _o__set_new_mode
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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: 3a27717d65714de54f477e4e2b3f243c4631fd8c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81332328"
---
# <a name="_set_new_mode"></a>_set_new_mode

Imposta una nuova modalità di gestione per **malloc**.

## <a name="syntax"></a>Sintassi

```cpp
int _set_new_mode( int newhandlermode );
```

### <a name="parameters"></a>Parametri

*newhandlermode (modalità gestore)*<br/>
Nuova modalità di gestione per **malloc**; valore valido è 0 o 1.

## <a name="return-value"></a>Valore restituito

Restituisce la modalità di gestione precedente impostata per **malloc**. Un valore restituito pari a 1 indica che, in caso di mancata allocazione della memoria, **malloc** ha precedentemente chiamato la nuova routine del gestore; un valore restituito pari a 0 indica che non lo ha fatto. Se l'argomento *newhandlermode* non è uguale a 0 o 1, restituisce -1.

## <a name="remarks"></a>Osservazioni

La funzione C++ **_set_new_mode** imposta la nuova modalità del gestore per [malloc](malloc.md). La nuova modalità del gestore indica se, in caso di errore, **malloc** deve chiamare la nuova routine del gestore come impostato da [_set_new_handler](set-new-handler.md). Per impostazione predefinita, **malloc** non chiama la nuova routine del gestore in caso di errore nell'allocazione della memoria. È possibile eseguire l'override di questo comportamento predefinito in modo che, quando **malloc** non riesce ad allocare memoria, **malloc** chiama la nuova routine del gestore nello stesso modo in cui l'operatore **new** esegue quando non riesce per lo stesso motivo. Per altre informazioni, vedere le informazioni sugli operatori [new](../../cpp/new-operator-cpp.md) e [delete](../../cpp/delete-operator-cpp.md) in *Riferimenti al linguaggio C++*. Per eseguire l'override del comportamento predefinito, chiamare:

```cpp
_set_new_mode(1);
```

all'inizio del programma o del collegamento a Newmode.obj (vedere [Opzioni di collegamento](../../c-runtime-library/link-options.md)).

Questa funzione convalida il relativo parametro. Se *newhandlermode* è diverso da 0 o 1, la funzione richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, <strong>_set_new_mode</strong> restituisce -1 e imposta **errno** su `EINVAL`.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_set_new_mode**|\<new.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Allocazione della memoria](../../c-runtime-library/memory-allocation.md)<br/>
[calloc](calloc.md)<br/>
[Gratuito](free.md)<br/>
[realloc](realloc.md)<br/>
[_query_new_handler](query-new-handler.md)<br/>
[_query_new_mode](query-new-mode.md)<br/>
