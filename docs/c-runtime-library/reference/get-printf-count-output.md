---
title: _get_printf_count_output
ms.date: 11/04/2016
apiname:
- _get_printf_count_output
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
- get_printf_count_output
- _get_printf_count_output
helpviewer_keywords:
- '%n format'
- get_printf_count_output function
- _get_printf_count_output function
ms.assetid: 850f9f33-8319-433e-98d8-6a694200d994
ms.openlocfilehash: 477e4a9e987f27bd70b9707e91b9ea9d84b69993
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62332053"
---
# <a name="getprintfcountoutput"></a>_get_printf_count_output

Indica se [printf, printf_l, wprintf, wprintf_l](printf-printf-l-wprintf-wprintf-l.md)-supporto per le funzioni della famiglia il **%n** formato.

## <a name="syntax"></a>Sintassi

```C
int _get_printf_count_output();
```

## <a name="return-value"></a>Valore restituito

Se diverso da zero **%n** è supportato, 0 se **%n** non è supportato.

## <a name="remarks"></a>Note

Se **%n** è non supportato (impostazione predefinita), che si verifichi **%n** nella stringa di formato di uno qualsiasi dei **printf** funzioni richiamerà il gestore di parametri non validi come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se **%n** supporto è abilitato (vedere [set_printf_count_output](set-printf-count-output.md)) quindi **%n** si comporterà come descritto in [sintassi specifica del formato: printf e wprintf Funzioni](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_get_printf_count_output**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_set_printf_count_output](set-printf-count-output.md).

## <a name="see-also"></a>Vedere anche

[_set_printf_count_output](set-printf-count-output.md)<br/>
