---
title: _set_new_mode
ms.date: 11/04/2016
apiname:
- _set_new_mode
apilocation:
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
apitype: DLLExport
f1_keywords:
- set_new_mode
- _set_new_mode
helpviewer_keywords:
- handler modes
- _set_new_mode function
- set_new_mode function
ms.assetid: 4d14039a-e54e-4689-8c70-74a4b9834768
ms.openlocfilehash: 0228170e4ab5b55b4b061fa61a412766de77a063
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62356602"
---
# <a name="setnewmode"></a>_set_new_mode

Imposta una nuova modalità del gestore per **malloc**.

## <a name="syntax"></a>Sintassi

```cpp
int _set_new_mode( int newhandlermode );
```

### <a name="parameters"></a>Parametri

*newhandlermode*<br/>
Nuova modalità del gestore per **malloc**; valido valore è 0 o 1.

## <a name="return-value"></a>Valore restituito

Restituisce il gestore precedente set di modalità per **malloc**. Valore restituito pari a 1 indica che, in caso di errore di allocazione della memoria, **malloc** precedentemente chiamato la routine del nuovo gestore; un valore restituito pari a 0 indica che non è stato eseguito. Se il *newhandlermode* argomento non è uguale a 0 o 1, restituisce -1.

## <a name="remarks"></a>Note

La funzione C++ **_set_new_mode** imposta la nuova modalità del gestore per [malloc](malloc.md). La nuova modalità del gestore indica se, in caso di errore **malloc** consiste nel chiamare la routine del nuovo gestore come impostato da [set_new_handler](set-new-handler.md). Per impostazione predefinita **malloc** non chiama la routine del nuovo gestore in caso di errore per allocare memoria. È possibile eseguire l'override di questo comportamento predefinito in modo che, quando **malloc** non riesce ad allocare memoria, **malloc** chiama la routine del nuovo gestore nello stesso modo in cui il **nuovo** operatore Quando non riesce per lo stesso motivo. Per altre informazioni, vedere le informazioni sugli operatori [new](../../cpp/new-operator-cpp.md) e [delete](../../cpp/delete-operator-cpp.md) in *Riferimenti al linguaggio C++*. Per eseguire l'override del comportamento predefinito, chiamare:

```cpp
_set_new_mode(1);
```

all'inizio del programma o collegarsi a Newmode.obj (vedere [Opzioni di collegamento](../../c-runtime-library/link-options.md)).

Questa funzione convalida il relativo parametro. Se *newhandlermode* qualsiasi elemento diverso da 0 o 1, la funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, <strong>set_new_mode</strong> restituisce -1 e imposta **errno** a `EINVAL`.

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
