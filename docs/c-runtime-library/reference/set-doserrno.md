---
title: _set_doserrno | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _set_doserrno
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _set_doserrno
- set_doserrno
dev_langs:
- C++
helpviewer_keywords:
- _set_doserrno function
- doserrno global variable
- set_doserrno function
- _doserrno global variable
ms.assetid: 8686c159-3797-4705-a53e-7457869ca6f3
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a5a09b37e1c0d4013731c3358a526e077a6ad8b2
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="setdoserrno"></a>_set_doserrno

Imposta il valore della variabile globale [_doserrno](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _set_doserrno( int error_value );
```

### <a name="parameters"></a>Parametri

*error_value*<br/>
Nuovo valore del **doserrno**.

## <a name="return-value"></a>Valore restituito

Restituisce zero in caso di esito positivo.

## <a name="remarks"></a>Note

I valori possibili sono definiti in Errno.h.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_set_doserrno**|\<stdlib.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[_get_doserrno](get-doserrno.md)<br/>
[errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)<br/>
