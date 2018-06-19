---
title: _get_printf_count_output | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- '%n format'
- get_printf_count_output function
- _get_printf_count_output function
ms.assetid: 850f9f33-8319-433e-98d8-6a694200d994
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 216df8d973f391db2b6114d9bbcb50dcf509c5b5
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32398368"
---
# <a name="getprintfcountoutput"></a>_get_printf_count_output

Indica se [printf_l, printf wprintf, wprintf_l](printf-printf-l-wprintf-wprintf-l.md)-famiglia di funzioni supportano la **%n** formato.

## <a name="syntax"></a>Sintassi

```C
int _get_printf_count_output();
```

## <a name="return-value"></a>Valore restituito

Diverso da zero se **%n** è supportato, 0 se **%n** non è supportata.

## <a name="remarks"></a>Note

Se **%n** è non supportato (il valore predefinito), che si verifichi **%n** nella stringa di formato di uno qualsiasi del **printf** funzioni verranno richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se **%n** è abilitato il supporto (vedere [set_printf_count_output](set-printf-count-output.md)) quindi **%n** si comporterà come descritto in [sintassi specifica del formato: printf e wprintf Funzioni](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_get_printf_count_output**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_set_printf_count_output](set-printf-count-output.md).

## <a name="see-also"></a>Vedere anche

[_set_printf_count_output](set-printf-count-output.md)<br/>
