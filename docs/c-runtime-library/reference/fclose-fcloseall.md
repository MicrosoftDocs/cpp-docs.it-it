---
title: fclose, _fcloseall
ms.date: 4/2/2020
api_name:
- fclose
- _fcloseall
- _o__fcloseall
- _o_fclose
api_location:
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
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- fclose
- _fcloseall
helpviewer_keywords:
- fclose function
- streams, closing
- _fcloseall function
ms.assetid: c3c6ea72-92c6-450a-a33e-3e568d2784a4
ms.openlocfilehash: b2ee14c5fc8bb47cc2652443c0263bd14147c90d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81347484"
---
# <a name="fclose-_fcloseall"></a>fclose, _fcloseall

Chiude un flusso (**fclose**) o chiude tutti i flussi aperti (**_fcloseall**).

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

**fclose** restituisce 0 se il flusso viene chiuso correttamente. **_fcloseall** restituisce il numero totale di flussi chiusi. Entrambe le funzioni restituiscono **EOF** per indicare un errore.

## <a name="remarks"></a>Osservazioni

La funzione **fclose** chiude *il flusso*. Se *stream* è **NULL**, viene richiamato il gestore di parametri non validi, come descritto in Convalida [dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **fclose** imposta **errno** su **EINVAL** e restituisce **EOF**. È consigliabile controllare sempre il puntatore del *flusso* prima di chiamare questa funzione.

Per altre informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

La funzione **_fcloseall** chiude tutti i flussi aperti ad eccezione di **stdin**, **stdout**, **stderr** (e, in MS-DOS, **_stdaux** e **_stdprn**). Inoltre, chiude ed elimina tutti i file temporanei creati da **tmpfile**. In entrambe le funzioni, tutti i buffer associati al flusso vengono scaricati prima della chiusura. I buffer allocati nel sistema vengono rilasciati quando viene chiuso il flusso. I buffer assegnati dall'utente con **setbuf** e **setvbuf** non vengono rilasciati automaticamente.

**Nota:** quando vengono usate queste funzioni per chiudere un flusso, il descrittore del file sottostante e l'handle di file (o socket) del sistema operativo vengono chiusi insieme al flusso. Pertanto, se il file è stato originariamente aperto come handle di file o descrittore di file e viene chiuso con **fclose**, non chiamare anche **_close** per chiudere il descrittore di file; non chiamare la funzione Win32 **CloseHandle** per chiudere l'handle di file.

**fclose** e **_fcloseall** includono codice per la protezione da interferenze da altri thread. Per la versione senza blocco di un **file fclose**, vedere **_fclose_nolock**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

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
