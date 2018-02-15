---
title: fclose, _fcloseall | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- fclose
- _fcloseall
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
- fclose
- _fcloseall
dev_langs:
- C++
helpviewer_keywords:
- fclose function
- streams, closing
- _fcloseall function
ms.assetid: c3c6ea72-92c6-450a-a33e-3e568d2784a4
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a9399aa2848ff3f5179b711674fa524ef7543fc0
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="fclose-fcloseall"></a>fclose, _fcloseall
Chiude un flusso (`fclose`) o chiude tutti i flussi aperti (`_fcloseall`).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int fclose(   
   FILE *stream   
);  
int _fcloseall( void );  
```  
  
#### <a name="parameters"></a>Parametri  
 `stream`  
 Puntatore alla struttura `FILE` .  
  
## <a name="return-value"></a>Valore restituito  
 `fclose` restituisce 0 se il flusso è stato chiuso correttamente. `_fcloseall` restituisce il numero totale di flussi chiusi. Entrambe le funzioni restituiscono `EOF` per indicare un errore.  
  
## <a name="remarks"></a>Note  
 La funzione `fclose` chiude `stream`. Se `stream` è `NULL`, viene richiamato il gestore dei parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `fclose` imposta `errno` su `EINVAL` e restituisce `EOF`. È consigliabile controllare sempre il puntatore `stream` prima di chiamare questa funzione.  
  
 Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 La funzione `_fcloseall` chiude tutti i flussi aperti, tranne `stdin`, `stdout`, `stderr` (e in MS-DOS, `_stdaux` e `_stdprn`). Chiude anche ed elimina tutti i file temporanei creati da `tmpfile`. In entrambe le funzioni, tutti i buffer associati al flusso vengono scaricati prima della chiusura. I buffer allocati nel sistema vengono rilasciati quando viene chiuso il flusso. I buffer assegnati dall'utente con `setbuf` e `setvbuf` non vengono rilasciati automaticamente.  
  
 **Nota:** quando vengono usate queste funzioni per chiudere un flusso, il descrittore del file sottostante e l'handle di file (o socket) del sistema operativo vengono chiusi insieme al flusso. Pertanto, se il file è stato originariamente aperto come handle di file o descrittore di file e viene chiuso con `fclose`, non chiamare `_close` per chiudere il descrittore del file. Non chiamare la funzione `CloseHandle` Win32 per chiudere l'handle di file.  
  
 `fclose` e `_fcloseall` includono codice per la protezione da interferenze di altri thread. Per una versione che non blocca di `fclose`, vedere `_fclose_nolock`.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`fclose`|\<stdio.h>|  
|`_fcloseall`|\<stdio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [fopen](../../c-runtime-library/reference/fopen-wfopen.md).  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [_close](../../c-runtime-library/reference/close.md)   
 [_fdopen, _wfdopen](../../c-runtime-library/reference/fdopen-wfdopen.md)   
 [fflush](../../c-runtime-library/reference/fflush.md)   
 [fopen, _wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [freopen, _wfreopen](../../c-runtime-library/reference/freopen-wfreopen.md)