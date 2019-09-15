---
title: _get_doserrno
ms.date: 11/04/2016
api_name:
- _get_doserrno
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
ms.openlocfilehash: 2810ead8bdd7d6c77cb2b55f4f97371bfc9751e6
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70956032"
---
# <a name="_get_doserrno"></a>_get_doserrno

Ottiene il valore di errore restituito dal sistema operativo prima che venga convertito in un valore **errno** .

## <a name="syntax"></a>Sintassi

```C
errno_t _get_doserrno(
   int * pValue
);
```

### <a name="parameters"></a>Parametri

*pValue*<br/>
Puntatore a un Integer da riempire con il valore corrente della macro globale **doserrno** .

## <a name="return-value"></a>Valore restituito

Se **_get_doserrno** ha esito positivo, restituisce zero; Se ha esito negativo, viene restituito un codice di errore. Se *pValue* è **null**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione imposta **errno** su **EINVAL** e restituisce **EINVAL**.

## <a name="remarks"></a>Note

La macro globale **doserrno** è impostata su zero durante l'inizializzazione CRT, prima dell'inizio dell'esecuzione del processo. È impostata sul valore di errore del sistema operativo restituito da qualsiasi chiamata di funzione a livello del sistema che restituisce un errore del sistema operativo e non viene mai reimpostata su zero durante l'esecuzione. Quando si scrive codice per verificare il valore di errore restituito da una funzione, deselezionare sempre **doserrno** usando [_set_doserrno](set-doserrno.md) prima della chiamata di funzione. Poiché un'altra chiamata di funzione potrebbe sovrascrivere **doserrno**, verificare il valore utilizzando **_get_doserrno** immediatamente dopo la chiamata di funzione.

È consigliabile usare [_get_errno](get-errno.md) anziché **_get_doserrno** per i codici di errore portabili.

I valori possibili di **doserrno** sono definiti \<in errno. h >.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_get_doserrno**|\<stdlib.h>, \<cstdlib> (C++)|\<errno.h>, \<cerrno> (C++)|

**_get_doserrno** è un'estensione Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[_set_doserrno](set-doserrno.md)<br/>
[errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)<br/>
