---
title: _pclose | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _pclose
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
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _pclose
- pclose
dev_langs:
- C++
helpviewer_keywords:
- _pclose function
- pclose function
- pipes, closing
ms.assetid: e2e31a9e-ba3a-4124-bcbb-c4040110b3d3
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 0a6163775f7e8592a48a8011e8d72eea008dd5c7
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="pclose"></a>_pclose
Attende un nuovo processore dei comandi e chiude il flusso sulla pipe associata.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      int _pclose(  
FILE *stream   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `stream`  
 Valore restituito dalla chiamata precedente a `_popen`.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce lo stato di uscita, il processore dei comandi di terminazione o -1 se si verifica un errore. Il formato del valore restituito è uguale a quello per `_cwait`, ma i byte di ordine inferiore e quelli di ordine superiore sono invertiti. Se il flusso è **NULL**, `_pclose` imposta `errno` su `EINVAL` e restituisce -1.  
  
 Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 La funzione `_pclose` cerca l'ID di processo del processore dei comandi (Cmd.exe) avviato dalla chiamata `_popen` associata, esegue una chiamata [cwait](../../c-runtime-library/reference/cwait.md) sul nuovo processore dei comandi e chiude il flusso sulla pipe associata.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_pclose`|\<stdio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [_pipe](../../c-runtime-library/reference/pipe.md)   
 [_popen, _wpopen](../../c-runtime-library/reference/popen-wpopen.md)
