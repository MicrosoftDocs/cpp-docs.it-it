---
title: _close | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _close
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
- _close
dev_langs:
- C++
helpviewer_keywords:
- _close function
- close function
- files [C++], closing
ms.assetid: 4708a329-8acf-4cd9-b7b0-a952e1897247
caps.latest.revision: 12
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
ms.openlocfilehash: 9dab323afc6c70e81592119e0cec2775c239d87f
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="close"></a>_close
Chiude un file.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _close(   
   int fd   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `fd`  
 Il descrittore del file che fa riferimento al file aperto.  
  
## <a name="return-value"></a>Valore restituito  
 `_close` restituisce 0 se il file è stato chiuso. Il valore restituito-1 indica un errore.  
  
## <a name="remarks"></a>Note  
 La funzione `_close` chiude il file associato a `fd`.  
  
 Il descrittore di file e il punto di controllo file del sistema operativo sottostante vengono chiusi. Di conseguenza, non è necessario chiamare `CloseHandle` se il file originariamente è stato aperto usando la funzione `CreateFile` di Win32 e convertito in un descrittore di file usando `_open_osfhandle`.  
  
 Questa funzione convalida i relativi parametri. Se `fd` è un descrittore di file non valido, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni restituiscono -1 e `errno` viene impostata su `EBADF`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|---------------------|---------------------|  
|`_close`|\<io.h>|\<errno.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [_open](../../c-runtime-library/reference/open-wopen.md).  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di basso livello](../../c-runtime-library/low-level-i-o.md)   
 [_chsize](../../c-runtime-library/reference/chsize.md)   
 [_creat, _wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [_dup, _dup2](../../c-runtime-library/reference/dup-dup2.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)   
 [_unlink, _wunlink](../../c-runtime-library/reference/unlink-wunlink.md)
