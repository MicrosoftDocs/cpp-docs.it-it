---
title: _get_output_format
ms.date: 11/04/2016
apiname:
- _get_output_format
apilocation:
- msvcr110_clr0400.dll
- msvcr100.dll
- msvcr80.dll
- msvcrt.dll
- msvcr90.dll
- msvcr120.dll
- msvcr110.dll
apitype: DLLExport
f1_keywords:
- get_output_format
- _get_output_format
helpviewer_keywords:
- output formatting
- get_output_format function
- _get_output_format function
ms.assetid: 0ce42f3b-3479-41c4-bcbf-1d21f7ee37e7
ms.openlocfilehash: 60e209f6f8b723bfae1a4b434750b6237dc6479d
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57751427"
---
# <a name="getoutputformat"></a>_get_output_format

Ottiene il valore corrente del flag del formato di output.

> [!IMPORTANT]
>  Questa funzione è obsoleta. A partire da Visual Studio 2015 non è disponibile in CRT.

## <a name="syntax"></a>Sintassi

```
unsigned int _get_output_format();
```

## <a name="return-value"></a>Valore restituito

Valore corrente del flag del formato di output.

## <a name="remarks"></a>Osservazioni

Il flag del formato di output controlla le funzionalità dell'I/O formattato. Al momento per questo flag sono disponibili due valori: 0 e `_TWO_DIGIT_EXPONENT`. Se è impostato `_TWO_DIGIT_EXPONENT` , i numeri a virgola mobile vengono stampati con due sole cifre nell'esponente a meno che le dimensioni dell'esponente non ne richiedano una terza. Se il flag è zero, l'output del numero a virgola mobile visualizza tre cifre per l'esponente, se necessario aggiungendo degli zeri per arrivare a tre cifre.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`_get_output_format`|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../c-runtime-library/compatibility.md) nell'introduzione.

## <a name="see-also"></a>Vedere anche

[Sintassi per la specifica del formato: funzioni printf e wprintf](../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)<br/>
[printf_s, _printf_s_l, wprintf_s, _wprintf_s_l](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)<br/>
[_set_output_format](../c-runtime-library/set-output-format.md)
