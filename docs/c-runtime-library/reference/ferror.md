---
title: ferror | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- ferror
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
- ferror
dev_langs:
- C++
helpviewer_keywords:
- ferror function
- streams, testing for errors
- errors [C++], testing for stream
ms.assetid: 528a34bc-f2aa-4c3f-b89a-5b148e6864f7
caps.latest.revision: 13
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
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 1828b9316cf29d953a6db8f8a6c11b5a3a08c346
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="ferror"></a>ferror
Test per un errore in un flusso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int ferror(   
   FILE *stream   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `stream`  
 Puntatore alla struttura `FILE` .  
  
## <a name="return-value"></a>Valore restituito  
 Se nessun errore si è verificato in `stream`, `ferror` restituisce 0. In caso contrario, viene restituito un valore diverso da zero. Se il flusso è `NULL`, `ferror` richiama il gestore dei parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta `errno` su`EINVAL` e restituisce 0.  
  
 Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 La routine `ferror` (implementata sia come funzione che come macro) testa un errore di lettura o scrittura nel file associato a `stream`. Se si è verificato un errore, il contrassegno di errore per il flusso rimane impostato fino alla chiusura o azzeramento del flusso, oppure finché viene chiamato `clearerr`.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`ferror`|\<stdio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [feof](../../c-runtime-library/reference/feof.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione degli errori](../../c-runtime-library/error-handling-crt.md)   
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [clearerr](../../c-runtime-library/reference/clearerr.md)   
 [_eof](../../c-runtime-library/reference/eof.md)   
 [feof](../../c-runtime-library/reference/feof.md)   
 [fopen, _wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [perror, _wperror](../../c-runtime-library/reference/perror-wperror.md)
