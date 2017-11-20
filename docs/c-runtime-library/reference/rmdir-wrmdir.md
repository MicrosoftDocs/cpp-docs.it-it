---
title: _rmdir, _wrmdir | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _wrmdir
- _rmdir
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
- trmdir
- _trmdir
- wrmdir
- _rmdir
- _wrmdir
dev_langs: C++
helpviewer_keywords:
- _rmdir function
- directories [C++], deleting
- rmdir function
- directories [C++], removing
- trmdir function
- _trmdir function
- _wrmdir function
- wrmdir function
ms.assetid: 652c2a5a-b0ac-4493-864e-1edf484333c5
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 9770c84f2035687ca1ce9a7e3ae1d1e34df7d5d4
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="rmdir-wrmdir"></a>_rmdir, _wrmdir
Elimina una directory.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      int _rmdir(  
   const char *dirname   
);  
int _wrmdir(  
   const wchar_t *dirname   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `dirname`  
 Percorso della directory da rimuovere.  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste funzioni restituisce 0 se la directory viene eliminata correttamente. Il valore restituito-1 indica un errore e `errno` è impostata su uno dei valori seguenti:  
  
 **ENOTEMPTY**  
 Il percorso specificato non è una directory, la directory non è vuota o la directory è la directory di lavoro corrente o la directory radice.  
  
 `ENOENT`  
 Il percorso non è valido.  
  
 **EACCES**  
 Un programma ha un handle aperto per la directory.  
  
 Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 La funzione `_rmdir` elimina la directory specificata da `dirname`. La directory deve essere vuota e non deve essere la directory di lavoro corrente o la directory radice.  
  
 `_wrmdir` è una versione a caratteri wide di `_rmdir`; l'argomento `dirname` in `_wrmdir` è una stringa di caratteri wide. In caso contrario, `_wrmdir` e `_rmdir` si comportano in modo identico.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_trmdir`|`_rmdir`|`_rmdir`|`_wrmdir`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_rmdir`|\<direct.h>|  
|`_wrmdir`|\<direct.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [_mkdir](../../c-runtime-library/reference/mkdir-wmkdir.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo delle directory](../../c-runtime-library/directory-control.md)   
 [_chdir, _wchdir](../../c-runtime-library/reference/chdir-wchdir.md)   
 [_mkdir, _wmkdir](../../c-runtime-library/reference/mkdir-wmkdir.md)