---
title: _get_osfhandle | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _get_osfhandle
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
- get_osfhandle
- _get_osfhandle
dev_langs:
- C++
helpviewer_keywords:
- operating systems, getting file handles
- get_osfhandle function
- _get_osfhandle function
- file handles [C++], operating system
ms.assetid: 0bdd728a-4fd8-410b-8c9f-01a121135196
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 314f57a38cdabb4257624550f6686075a5b61697
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="getosfhandle"></a>_get_osfhandle
Recupera l''handle di file del sistema operativo associato al descrittore di file specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
intptr_t _get_osfhandle(   
   int fd   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `fd`  
 Descrittore di file esistente.  
  
## <a name="return-value"></a>Valore restituito  
 Un handle di file del sistema operativo se `fd` è valido. In caso contrario, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce `INVALID_HANDLE_VALUE` (-1) e imposta `errno` a `EBADF`, che indica un handle di file non valido.  
  
## <a name="remarks"></a>Note  
 Per chiudere un file aperto con `_get_osfhandle`, chiamare `_close`. L'handle sottostante viene inoltre chiuso da una chiamata a `_close`, pertanto non è necessario chiamare la funzione Win32 `CloseHandle` sull'handle originale.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_get_osfhandle`|\<io.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [_close](../../c-runtime-library/reference/close.md)   
 [_creat, _wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [_dup, _dup2](../../c-runtime-library/reference/dup-dup2.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)
