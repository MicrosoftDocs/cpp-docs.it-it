---
title: _chdrive | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _chdrive
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
- api-ms-win-crt-filesystem-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- chdrive
- _chdrive
dev_langs:
- C++
helpviewer_keywords:
- drives, changing
- _chdrive function
- chdrive function
ms.assetid: 212a1a4b-4fa8-444e-9677-7fca4c8c47e3
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1290f5a29ce2b6d80f98889fbb0fc5709cfa43e4
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="chdrive"></a>_chdrive
Modifica l'unità di lavoro corrente.  
  
> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per ulteriori informazioni, vedere [funzioni CRT non supportate nelle App Universal Windows Platform](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _chdrive(   
   int drive   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `drive`  
 Numero intero da 1 a 26 che specifica l'unità di lavoro corrente (1=A, 2=B e così via).  
  
## <a name="return-value"></a>Valore restituito  
 Zero (0) se l'unità di lavoro corrente è stata modificata correttamente, in caso contrario -1.  
  
## <a name="remarks"></a>Note  
 Se `drive` non è compreso nell'intervallo da 1a 26, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione **_chdrive** restituisce -1, `errno` viene impostato su `EACCES` e `_doserrno` viene impostato su `ERROR_INVALID_DRIVE`.  
  
 La funzione **_chdrive** non è thread-safe poiché dipende dalla funzione **SetCurrentDirectory** che non è a sua volta thread-safe. Per usare **_chdrive** in modo sicuro in un'applicazione multithread, è necessario includere la propria sincronizzazione dei thread. Per altre informazioni, visitare [MSDN Library](http://go.microsoft.com/fwlink/p/?linkid=150542) e cercare **SetCurrentDirectory**.  
  
 La funzione **_chdrive** modifica solo l'unità di lavoro corrente. **_chdir** modifica la directory di lavoro corrente.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|**_chdrive**|\<direct.h>|  
  
 Per altre informazioni, vedere [Compatibility](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [_getdrive](../../c-runtime-library/reference/getdrive.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo delle directory](../../c-runtime-library/directory-control.md)   
 [_chdir, _wchdir](../../c-runtime-library/reference/chdir-wchdir.md)   
 [_fullpath, _wfullpath](../../c-runtime-library/reference/fullpath-wfullpath.md)   
 [_getcwd, _wgetcwd](../../c-runtime-library/reference/getcwd-wgetcwd.md)   
 [_getdrive](../../c-runtime-library/reference/getdrive.md)   
 [_mkdir, _wmkdir](../../c-runtime-library/reference/mkdir-wmkdir.md)   
 [_rmdir, _wrmdir](../../c-runtime-library/reference/rmdir-wrmdir.md)   
 [system, _wsystem](../../c-runtime-library/reference/system-wsystem.md)