---
description: 'Altre informazioni su: _set_doserrno'
title: _set_doserrno
ms.date: 4/2/2020
api_name:
- _set_doserrno
- _o__set_doserrno
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
- api-ms-win-crt-runtime-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _set_doserrno
- set_doserrno
helpviewer_keywords:
- _set_doserrno function
- doserrno global variable
- set_doserrno function
- _doserrno global variable
ms.assetid: 8686c159-3797-4705-a53e-7457869ca6f3
ms.openlocfilehash: c4b7860764505ab7d3388bace6fa86b0726851e1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334099"
---
# <a name="_set_doserrno"></a>_set_doserrno

Imposta il valore della variabile globale [_doserrno](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _set_doserrno( int error_value );
```

### <a name="parameters"></a>Parametri

*error_value*<br/>
Nuovo valore di **_doserrno**.

## <a name="return-value"></a>Valore restituito

Restituisce zero in caso di esito positivo.

## <a name="remarks"></a>Commenti

I valori possibili sono definiti in Errno.h.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_set_doserrno**|\<stdlib.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[_get_doserrno](get-doserrno.md)<br/>
[errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)<br/>
