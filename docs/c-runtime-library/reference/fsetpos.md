---
title: fsetpos | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- fsetpos
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
- fsetpos
dev_langs:
- C++
helpviewer_keywords:
- streams, setting position indicators
- fsetpos function
ms.assetid: 6d19ff48-1a2b-47b3-9f23-ed0a47b5a46e
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
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: 1facc7aec41e7ab1c8b420f6792d76cce0d2b029
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---
# <a name="fsetpos"></a>fsetpos
Imposta l'indicatore di posizione del flusso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int fsetpos(   
   FILE *stream,  
   const fpos_t *pos   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `stream`  
 Puntatore alla struttura `FILE` .  
  
 `pos`  
 Archiviazione dell'indicatore di posizione.  
  
## <a name="return-value"></a>Valore restituito  
 Se l'esito è positivo, `fsetpos` restituisce 0. In caso di errore, la funzione restituisce un valore diverso da zero e imposta `errno` su una delle costanti manifeste seguenti (definite in ERRNO.H): `EBADF`, che indica che il file non è accessibile o l'oggetto a cui punta `stream` non è una struttura di file valida; oppure `EINVAL`, che indica che è stato passato un valore non valido per `stream` o `pos`. Se viene passato un parametro non valido, queste funzioni richiamano il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
 Per altre informazioni su questo e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 Il `fsetpos` funzione imposta l'indicatore di posizione del file per `stream` al valore di `pos`, ottenuta in una chiamata precedente a `fgetpos` contro `stream`. La funzione consente di cancellare l'indicatore di fine del file e consente di annullare gli effetti di [ungetc](../../c-runtime-library/reference/ungetc-ungetwc.md) su `stream`. Dopo la chiamata di `fsetpos`, l'operazione successiva su `stream` può essere di input o output.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`fsetpos`|\<stdio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio relativo a [fgetpos](../../c-runtime-library/reference/fgetpos.md).  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fgetpos](../../c-runtime-library/reference/fgetpos.md)
