---
title: _get_doserrno | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _get_doserrno
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
dev_langs: C++
helpviewer_keywords:
- get_doserrno function
- _get_doserrno function
ms.assetid: 7fec7be3-6e39-4181-846b-8ef24489361c
caps.latest.revision: "19"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c8eff0ac1a97c9a1d48b82601eb0d6dc0bb8bed0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="getdoserrno"></a>_get_doserrno
Recupera il valore di errore restituito dal sistema operativo prima che venga convertito in un valore `errno`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t _get_doserrno(   
   int * pValue   
);   
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `pValue`  
 Un puntatore a un valore integer che deve essere compilato con il valore corrente della macro globale `_doserrno`.  
  
## <a name="return-value"></a>Valore restituito  
 Se `_get_doserrno` ha esito positivo, restituisce zero; in caso contrario, restituisce un codice di errore. Se `pValue` è `NULL`, viene richiamato il gestore dei parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta `errno` su`EINVAL` e restituisce `EINVAL`.  
  
## <a name="remarks"></a>Note  
 La macro globale `_doserrno` è impostata su zero durante l'inizializzazione CRT, prima dell'inizio dell'esecuzione del processo. È impostata sul valore di errore del sistema operativo restituito da qualsiasi chiamata di funzione a livello del sistema che restituisce un errore del sistema operativo e non viene mai reimpostata su zero durante l'esecuzione. Quando si scrive il codice per il controllo del valore di errore restituito da una funzione, deselezionare sempre `_doserrno` usando [_set_doserrno](../../c-runtime-library/reference/set-doserrno.md) prima della chiamata di funzione. Poiché un'altra chiamata di funzione potrebbe sovrascrivere `_doserrno`, verificare il valore usando `_get_doserrno` immediatamente dopo la chiamata di funzione.  
  
 È consigliabile usare [_get_errno](../../c-runtime-library/reference/get-errno.md) invece di `_get_doserrno` per i codici di errore portabili.  
  
 I valori possibili di `_doserrno` sono definiti in \<errno.h>.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|---------------------|---------------------|  
|`_get_doserrno`|\<stdlib.h>, \<cstdlib> (C++)|\<errno.h>, \<cerrno> (C++)|  
  
 `_get_doserrno` è un'estensione Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [_set_doserrno](../../c-runtime-library/reference/set-doserrno.md)   
 [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)