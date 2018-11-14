---
title: _get_doserrno
ms.date: 11/04/2016
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
helpviewer_keywords:
- get_doserrno function
- _get_doserrno function
ms.assetid: 7fec7be3-6e39-4181-846b-8ef24489361c
ms.openlocfilehash: 700f710e6d94f48b03697325bb720dbc539fe04e
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51331022"
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
Un puntatore a un integer da riempire con il valore corrente del **doserrno** macro globale.

## <a name="return-value"></a>Valore restituito

Se **get_doserrno** ha esito positivo, restituisce zero; in caso contrario, restituisce un codice di errore. Se *pValue* viene **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta **errno** al **EINVAL** e restituisce **EINVAL**.

## <a name="remarks"></a>Note

Il **doserrno** macro globale è impostata su zero durante l'inizializzazione di CRT, prima di processo dell'inizio dell'esecuzione. È impostata sul valore di errore del sistema operativo restituito da qualsiasi chiamata di funzione a livello del sistema che restituisce un errore del sistema operativo e non viene mai reimpostata su zero durante l'esecuzione. Quando si scrive codice per controllare il valore di errore restituito da una funzione, deselezionare sempre **doserrno** utilizzando [set_doserrno](set-doserrno.md) prima della chiamata di funzione. Poiché un'altra chiamata di funzione potrebbe sovrascrivere **doserrno**, controllare il valore usando **get_doserrno** immediatamente dopo la chiamata di funzione.

È consigliabile [get_errno](get-errno.md) invece di **get_doserrno** per i codici di errore portabili.

I valori possibili del **doserrno** sono definiti in \<errno. h >.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_get_doserrno**|\<stdlib.h>, \<cstdlib> (C++)|\<errno.h>, \<cerrno> (C++)|

**get_doserrno** è un'estensione Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[_set_doserrno](set-doserrno.md)<br/>
[errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)<br/>
