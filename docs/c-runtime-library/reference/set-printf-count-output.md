---
title: _set_printf_count_output
ms.date: 11/04/2016
api_name:
- _set_printf_count_output
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
- set_printf_count_output
- _set_printf_count_output
helpviewer_keywords:
- '%n format'
- set_printf_count_output function
- _set_printf_count_output function
ms.assetid: d8259ec5-764e-42d0-9169-72172e95163b
ms.openlocfilehash: 0d53b4e4c56a69582a4eb517fa1a5c9e10cd7d2f
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70948414"
---
# <a name="_set_printf_count_output"></a>_set_printf_count_output

Abilitare o disabilitare il supporto del formato **% n** nelle funzioni della famiglia [printf, _printf_l, wprintf e _wprintf_l](printf-printf-l-wprintf-wprintf-l.md).

## <a name="syntax"></a>Sintassi

```C
int _set_printf_count_output(
   int enable
);
```

### <a name="parameters"></a>Parametri

*enable*<br/>
Valore diverso da zero per abilitare il supporto **% n** , 0 per disabilitare il supporto di **% n** .

## <a name="property-valuereturn-value"></a>Valore proprietà/Valore restituito

Lo stato di **% n** supporta prima di chiamare questa funzione: diverso da zero se il supporto **% n** è stato abilitato, 0 se è stato disabilitato.

## <a name="remarks"></a>Note

Per motivi di sicurezza, il supporto per l'identificatore di formato **% n** è disabilitato per impostazione predefinita in **printf** e in tutte le relative varianti. Se viene rilevato **% n** in una specifica di formato **printf** , il comportamento predefinito consiste nel richiamare il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se si chiama **_set_printf_count_output** con un argomento diverso da zero, le funzioni della famiglia **printf**possono interpretare **% n** , come descritto in sintassi per la [specifica del formato: funzioni printf e wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

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
