---
title: _get_doserrno
ms.date: 4/2/2020
api_name:
- _get_doserrno
- _o__get_doserrno
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
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _get_doserrno
- get_doserrno
helpviewer_keywords:
- get_doserrno function
- _get_doserrno function
ms.assetid: 7fec7be3-6e39-4181-846b-8ef24489361c
ms.openlocfilehash: 2d5d4e224b39e9fa597e12975d27fa5720fbfbc7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81345249"
---
# <a name="_get_doserrno"></a>_get_doserrno

Ottiene il valore di errore restituito dal sistema operativo prima che venga convertito in un valore **errno.**

## <a name="syntax"></a>Sintassi

```C
errno_t _get_doserrno(
   int * pValue
);
```

### <a name="parameters"></a>Parametri

*pValue*<br/>
Puntatore a un numero intero da riempire con il valore corrente della **_doserrno** macro globale.

## <a name="return-value"></a>Valore restituito

Se **_get_doserrno** ha esito positivo, restituisce zero; se non riesce, restituisce un codice di errore. Se *pValue* è **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione imposta **errno** su **EINVAL** e restituisce **EINVAL**.

## <a name="remarks"></a>Osservazioni

Il **_doserrno** macro globale viene impostato su zero durante l'inizializzazione di CRT, prima dell'inizio dell'esecuzione del processo. È impostata sul valore di errore del sistema operativo restituito da qualsiasi chiamata di funzione a livello del sistema che restituisce un errore del sistema operativo e non viene mai reimpostata su zero durante l'esecuzione. Quando si scrive codice per controllare il valore di errore restituito da una funzione, cancellare sempre **_doserrno** utilizzando [_set_doserrno](set-doserrno.md) prima della chiamata di funzione. Poiché un'altra chiamata di funzione può sovrascrivere **_doserrno**, controllare il valore utilizzando **_get_doserrno** immediatamente dopo la chiamata di funzione.

Si consiglia [_get_errno](get-errno.md) invece di **_get_doserrno** per i codici di errore portabili.

I valori **_doserrno** possibili di \<_doserrno sono definiti in errno.h>.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_get_doserrno**|\<stdlib.h>, \<cstdlib> (C++)|\<errno.h>, \<cerrno> (C++)|

**_get_doserrno** è un'estensione Microsoft.A is a Microsoft extension. Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[_set_doserrno](set-doserrno.md)<br/>
[errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)<br/>
