---
description: 'Altre informazioni su: _get_output_format'
title: _get_output_format
ms.date: 11/04/2016
api_name:
- _get_output_format
api_location:
- msvcr110_clr0400.dll
- msvcr100.dll
- msvcr80.dll
- msvcrt.dll
- msvcr90.dll
- msvcr120.dll
- msvcr110.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- get_output_format
- _get_output_format
helpviewer_keywords:
- output formatting
- get_output_format function
- _get_output_format function
ms.assetid: 0ce42f3b-3479-41c4-bcbf-1d21f7ee37e7
ms.openlocfilehash: cdbe5038745273882685a79e148e143c3d65d7e5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97181735"
---
# <a name="_get_output_format"></a>_get_output_format

Ottiene il valore corrente del flag del formato di output.

> [!IMPORTANT]
> questa funzione è obsoleta. A partire da Visual Studio 2015 non è disponibile in CRT.

## <a name="syntax"></a>Sintassi

```
unsigned int _get_output_format();
```

## <a name="return-value"></a>Valore restituito

Valore corrente del flag del formato di output.

## <a name="remarks"></a>Commenti

Il flag del formato di output controlla le funzionalità dell'I/O formattato. Al momento per questo flag sono disponibili due valori: 0 e `_TWO_DIGIT_EXPONENT`. Se è impostato `_TWO_DIGIT_EXPONENT` , i numeri a virgola mobile vengono stampati con due sole cifre nell'esponente a meno che le dimensioni dell'esponente non ne richiedano una terza. Se il flag è zero, l'output del numero a virgola mobile visualizza tre cifre per l'esponente, se necessario aggiungendo degli zeri per arrivare a tre cifre.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`_get_output_format`|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../c-runtime-library/compatibility.md) nell'introduzione.

## <a name="see-also"></a>Vedi anche

[Sintassi per la specifica del formato: funzioni printf e wprintf](../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)<br/>
[printf_s, _printf_s_l, wprintf_s, _wprintf_s_l](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)<br/>
[_set_output_format](../c-runtime-library/set-output-format.md)
