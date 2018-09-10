---
title: _set_printf_count_output | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _set_printf_count_output
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
- set_printf_count_output
- _set_printf_count_output
dev_langs:
- C++
helpviewer_keywords:
- '%n format'
- set_printf_count_output function
- _set_printf_count_output function
ms.assetid: d8259ec5-764e-42d0-9169-72172e95163b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 783225412b01430d1043dafd4761cb7432eaa1d7
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44108319"
---
# <a name="setprintfcountoutput"></a>_set_printf_count_output

Abilitare o disabilitare il supporto per la **%n** formattare nel [printf, printf_l, wprintf, wprintf_l](printf-printf-l-wprintf-wprintf-l.md)-funzioni della famiglia.

## <a name="syntax"></a>Sintassi

```C
int _set_printf_count_output(
   int enable
);
```

### <a name="parameters"></a>Parametri

*abilitare*<br/>
Un valore diverso da zero per abilitare **%n** supportare, 0 per disabilitare **%n** supportano.

## <a name="property-valuereturn-value"></a>Valore proprietà/Valore restituito

Lo stato del **%n** supportare prima di chiamare questa funzione: diverso da zero se **%n** supporto è stato abilitato, 0 se è stata disabilitata.

## <a name="remarks"></a>Note

A causa di motivi di sicurezza, supporto per la **%n** identificatore di formato è disabilitata per impostazione predefinita nella **printf** e tutte le relative varianti. Se **%n** viene rilevata in un **printf** specifica di formato, il comportamento predefinito consiste nel richiamare il gestore di parametri non validi come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). La chiamata **set_printf_count_output** con un argomento diverso da zero causerà **printf**-interpretare le funzioni della famiglia **%n** come descritto in [formato Sintassi per la specifica: funzioni printf e wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_set_printf_count_output**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_set_printf_count_output.c
#include <stdio.h>

int main()
{
   int e;
   int i;
   e = _set_printf_count_output( 1 );
   printf( "%%n support was %sabled.\n",
        e ? "en" : "dis" );
   printf( "%%n support is now %sabled.\n",
        _get_printf_count_output() ? "en" : "dis" );
   printf( "12345%n6789\n", &i ); // %n format should set i to 5
   printf( "i = %d\n", i );
}
```

```Output
%n support was disabled.
%n support is now enabled.
123456789
i = 5
```

## <a name="see-also"></a>Vedere anche

[_get_printf_count_output](get-printf-count-output.md)<br/>
