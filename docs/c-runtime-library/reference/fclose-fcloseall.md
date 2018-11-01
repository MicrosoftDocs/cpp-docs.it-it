---
title: fclose, _fcloseall
ms.date: 11/04/2016
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
helpviewer_keywords:
- fclose function
- streams, closing
- _fcloseall function
ms.assetid: c3c6ea72-92c6-450a-a33e-3e568d2784a4
ms.openlocfilehash: 4713ffb7ecdf8da73e5f949bbef7be124dfaf28a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50536513"
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

*flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

**fclose** restituisce 0 se il flusso viene chiuso correttamente. **fcloseall** restituisce il numero totale di flussi chiusi. Entrambe le funzioni restituiscono **EOF** per indicare un errore.

## <a name="remarks"></a>Note

Il **fclose** funzione di chiusura *stream*. Se *stream* viene **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **fclose** imposta **errno** al **EINVAL** e restituisce **EOF**. È consigliabile che il *flusso* puntatore sempre selezionata prima della chiamata a questa funzione.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Il **fcloseall** funzione chiude tutti i flussi aperti tranne **stdin**, **stdout**, **stderr** (e in MS-DOS, **_stdaux**  e **_stdprn**). Chiude anche ed elimina i file temporanei creati dal **tmpfile**. In entrambe le funzioni, tutti i buffer associati al flusso vengono scaricati prima della chiusura. I buffer allocati nel sistema vengono rilasciati quando viene chiuso il flusso. I buffer assegnati dall'utente con **setbuf** e **setvbuf** non vengono rilasciati automaticamente.

**Nota:** quando vengono usate queste funzioni per chiudere un flusso, il descrittore del file sottostante e l'handle di file (o socket) del sistema operativo vengono chiusi insieme al flusso. Di conseguenza, se il file è stato originariamente aperto come handle di file o descrittore di file e viene chiusa con **fclose**, non chiamare **Close** per chiudere il descrittore del file; non chiamare la funzione Win32  **CloseHandle** per chiudere l'handle di file.

**fclose** e **fcloseall** includono codice per la protezione da interferenze di altri thread. Per la versione non blocca il thread di un **fclose**, vedere **fclose_nolock**.

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
