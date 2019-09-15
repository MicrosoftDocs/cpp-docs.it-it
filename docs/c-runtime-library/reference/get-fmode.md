---
title: _get_fmode
ms.date: 11/04/2016
api_name:
- _get_fmode
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
- api-ms-win-crt-stdio-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- get_fmode
- _get_fmode
helpviewer_keywords:
- _get_fmode function
- file translation [C++], default mode
- get_fmode function
ms.assetid: 22ea70e2-b9b5-422d-b514-64f4beaea45c
ms.openlocfilehash: 03e07ea44aadec7c15352bb63fd25aa777ee9bfb
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70955876"
---
# <a name="_get_fmode"></a>_get_fmode

Ottiene la modalità di conversione file predefinita per le operazioni di I/O dei file.

## <a name="syntax"></a>Sintassi

```C
errno_t _get_fmode(
   int * pmode
);
```

### <a name="parameters"></a>Parametri

*pmode*<br/>
Puntatore a un Integer da riempire con la modalità predefinita corrente: **_O_TEXT** o **_O_BINARY**.

## <a name="return-value"></a>Valore restituito

Restituisce zero se ha esito positivo; un codice di errore se ha esito negativo. Se *pmode* è **null**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e la funzione restituisce **EINVAL**.

## <a name="remarks"></a>Note

La funzione ottiene il valore della variabile globale [_fmode](../../c-runtime-library/fmode.md). Questa variabile specifica la modalità di conversione file predefinita per le operazioni di I/O di file di flusso e di basso livello, ad esempio **_open**, **_pipe**, **fopen**e [freopen](freopen-wfreopen.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_get_fmode**|\<stdlib.h>|\<fcntl.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio in [_set_fmode](set-fmode.md).

## <a name="see-also"></a>Vedere anche

[_fmode](../../c-runtime-library/fmode.md)<br/>
[_set_fmode](set-fmode.md)<br/>
[_setmode](setmode.md)<br/>
[I/O file in modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md)<br/>
