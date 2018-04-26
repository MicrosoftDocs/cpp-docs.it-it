---
title: fclose, _fcloseall | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
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
caps.latest.revision: 17
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 03e884663c1af1d9c9f31330cda40aa3c7458820
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="fclose-fcloseall"></a>fclose, _fcloseall

Chiude un flusso (**fclose**) o chiude tutti i flussi aperti (**fcloseall**).

## <a name="syntax"></a>Sintassi

```C
int fclose(
   FILE *stream
);
int _fcloseall( void );
```

### <a name="parameters"></a>Parametri

*Flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

**fclose** restituisce 0 se il flusso viene chiuso correttamente. **fcloseall** restituisce il numero totale di flussi chiuso. Entrambe le funzioni restituiscono **EOF** per indicare un errore.

## <a name="remarks"></a>Note

Il **fclose** funzione chiude *flusso*. Se *flusso* viene **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **fclose** imposta **errno** al **EINVAL** e restituisce **EOF**. È consigliabile che il *flusso* puntatore sempre controllato prima chiamata a questa funzione.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Il **fcloseall** funzione chiude tutti i flussi aperti tranne **stdin**, **stdout**, **stderr** (in MS-DOS, **_stdaux**  e **_stdprn**). Inoltre, viene chiusa e consente di eliminare qualsiasi file temporanei creati dal **tmpfile**. In entrambe le funzioni, tutti i buffer associati al flusso vengono scaricati prima della chiusura. I buffer allocati nel sistema vengono rilasciati quando viene chiuso il flusso. Buffer assegnati dall'utente con **setbuf** e **setvbuf** non vengono rilasciati automaticamente.

**Nota:** quando vengono usate queste funzioni per chiudere un flusso, il descrittore del file sottostante e l'handle di file (o socket) del sistema operativo vengono chiusi insieme al flusso. Pertanto, se originariamente è stato possibile aprire il file come file gestire o il descrittore del file e viene chiuso con **fclose**, eseguire non anche chiamata **Close** per chiudere il descrittore del file; non chiamare la funzione Win32  **CloseHandle** per chiudere l'handle di file.

**fclose** e **fcloseall** includere il codice per proteggersi da interferenze di altri thread. Per la versione non di blocco di un **fclose**, vedere **fclose_nolock**.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fclose**|\<stdio.h>|
|**_fcloseall**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [fopen](fopen-wfopen.md).

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[_close](close.md)<br/>
[_fdopen, _wfdopen](fdopen-wfdopen.md)<br/>
[fflush](fflush.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[freopen, _wfreopen](freopen-wfreopen.md)<br/>
