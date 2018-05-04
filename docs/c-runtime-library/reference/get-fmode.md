---
title: _get_fmode | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _get_fmode
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
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- get_fmode
- _get_fmode
dev_langs:
- C++
helpviewer_keywords:
- _get_fmode function
- file translation [C++], default mode
- get_fmode function
ms.assetid: 22ea70e2-b9b5-422d-b514-64f4beaea45c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a28909e5e848712305fb28e8ac4d46180f8948cf
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="getfmode"></a>_get_fmode

Ottiene la modalità di conversione file predefinita per le operazioni di I/O dei file.

## <a name="syntax"></a>Sintassi

```C
errno_t _get_fmode( 
   int * pmode 
);
```

### <a name="parameters"></a>Parametri

*pmode*<br/>
Un puntatore a un integer da riempire con la modalità predefinita corrente: **o_text** oppure **O_BINARY**.

## <a name="return-value"></a>Valore restituito

Restituisce zero se ha esito positivo; un codice di errore se ha esito negativo. Se *pmode* viene **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e la funzione restituisce **EINVAL**.

## <a name="remarks"></a>Note

La funzione ottiene il valore della variabile globale [_fmode](../../c-runtime-library/fmode.md). Questa variabile specifica la modalità di conversione file predefinita per quelle a basso livello e trasmettere le operazioni dei / o file, ad esempio **Open**, **pipe**, **fopen**, e [ freopen](freopen-wfreopen.md).

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
