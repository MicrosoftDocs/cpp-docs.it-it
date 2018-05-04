---
title: _get_doserrno | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _get_doserrno
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
- _get_doserrno
- get_doserrno
dev_langs:
- C++
helpviewer_keywords:
- get_doserrno function
- _get_doserrno function
ms.assetid: 7fec7be3-6e39-4181-846b-8ef24489361c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f7cef2c068fad2f18cb1d11d33e551588800cb64
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="getdoserrno"></a>_get_doserrno

Ottiene il valore di errore restituito dal sistema operativo prima che venga convertito in un **errno** valore.

## <a name="syntax"></a>Sintassi

```C
errno_t _get_doserrno( 
   int * pValue 
);
```

### <a name="parameters"></a>Parametri

*pValue*<br/>
Un puntatore a un numero intero in cui inserire il valore corrente di **doserrno** macro globale.

## <a name="return-value"></a>Valore restituito

Se **get_doserrno** ha esito positivo, restituisce zero; in caso contrario, restituisce un codice di errore. Se *pValue* viene **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta **errno** alla **EINVAL** e restituisce **EINVAL**.

## <a name="remarks"></a>Note

Il **doserrno** macro globale è impostato su zero durante l'inizializzazione CRT, prima di processo dell'inizio dell'esecuzione. È impostata sul valore di errore del sistema operativo restituito da qualsiasi chiamata di funzione a livello del sistema che restituisce un errore del sistema operativo e non viene mai reimpostata su zero durante l'esecuzione. Quando si scrive codice per controllare il valore di errore restituito da una funzione, non sempre crittografata **doserrno** utilizzando [set_doserrno](set-doserrno.md) prima della chiamata di funzione. Perché un'altra chiamata di funzione potrebbe sovrascrivere **doserrno**, controllare il valore utilizzando **get_doserrno** immediatamente dopo la chiamata di funzione.

È consigliabile [get_errno](get-errno.md) anziché **get_doserrno** i codici di errore portabile.

I valori possibili del **doserrno** sono definite nel \<errno. h >.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_get_doserrno**|\<stdlib.h>, \<cstdlib> (C++)|\<errno.h>, \<cerrno> (C++)|

**get_doserrno** è un'estensione Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[_set_doserrno](set-doserrno.md)<br/>
[errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)<br/>
