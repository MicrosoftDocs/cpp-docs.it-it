---
description: 'Altre informazioni su: _get_printf_count_output'
title: _get_printf_count_output
ms.date: 11/04/2016
api_name:
- _get_printf_count_output
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
- get_printf_count_output
- _get_printf_count_output
helpviewer_keywords:
- '%n format'
- get_printf_count_output function
- _get_printf_count_output function
ms.assetid: 850f9f33-8319-433e-98d8-6a694200d994
ms.openlocfilehash: fe5ee728b7bc8400cd93ec4e93131496d59334c5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339005"
---
# <a name="_get_printf_count_output"></a>_get_printf_count_output

Indica se le funzioni [printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)-Family supportano il formato **% n** .

## <a name="syntax"></a>Sintassi

```C
int _get_printf_count_output();
```

## <a name="return-value"></a>Valore restituito

Diverso da zero se **% n** è supportato, 0 se **% n** non è supportato.

## <a name="remarks"></a>Commenti

Se **% n** non è supportato (impostazione predefinita), la presenza di **% n** nella stringa di formato di una qualsiasi delle funzioni **printf** richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se è abilitato il supporto di **% n** (vedere [_set_printf_count_output](set-printf-count-output.md)), il comportamento di **% n** sarà analogo a quello descritto nella sintassi per la [specifica del formato: funzioni printf e wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_get_printf_count_output**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_set_printf_count_output](set-printf-count-output.md).

## <a name="see-also"></a>Vedi anche

[_set_printf_count_output](set-printf-count-output.md)<br/>
