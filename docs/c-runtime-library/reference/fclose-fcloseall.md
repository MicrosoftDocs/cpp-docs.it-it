---
description: 'Altre informazioni su: fclose, _fcloseall'
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
- api-ms-win-crt-private-l1-1-0.dll
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
ms.openlocfilehash: 1831eb2a2272cdddb8d9797f5329d5432bf30472
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97235931"
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

**fclose** restituisce 0 se il flusso è stato chiuso correttamente. **_fcloseall** restituisce il numero totale di flussi chiusi. Entrambe le funzioni restituiscono **EOF** per indicare un errore.

## <a name="remarks"></a>Commenti

La funzione **fclose** chiude il *flusso*. Se il *flusso* è **null**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **fclose** imposta **errno** su **EINVAL** e restituisce **EOF**. Prima di chiamare questa funzione, è consigliabile controllare sempre il puntatore di *flusso* .

Per altre informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

La **funzione _fcloseall** chiude tutti i flussi aperti eccetto **stdin**, **stdout**, **stderr** (e, in MS-DOS, **_stdaux** e **_stdprn**). Chiude ed elimina anche tutti i file temporanei creati da **tmpfile**. In entrambe le funzioni, tutti i buffer associati al flusso vengono scaricati prima della chiusura. I buffer allocati nel sistema vengono rilasciati quando viene chiuso il flusso. I buffer assegnati dall'utente con **setbuf** e **setvbuf** non vengono rilasciati automaticamente.

**Nota:** quando vengono usate queste funzioni per chiudere un flusso, il descrittore del file sottostante e l'handle di file (o socket) del sistema operativo vengono chiusi insieme al flusso. Pertanto, se il file è stato originariamente aperto come un handle di file o un descrittore di file e viene chiuso con **fclose**, non chiamare anche **_close** per chiudere il descrittore del file. non chiamare la funzione Win32 **CloseHandle** per chiudere l'handle di file.

**fclose** e **_fcloseall** includono il codice per la protezione da interferenze da altri thread. Per la versione non di blocco di un **fclose**, vedere **_fclose_nolock**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fclose**|\<stdio.h>|
|**_fcloseall**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [fopen](fopen-wfopen.md).

## <a name="see-also"></a>Vedi anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[_close](close.md)<br/>
[_fdopen, _wfdopen](fdopen-wfdopen.md)<br/>
[fflush](fflush.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[freopen, _wfreopen](freopen-wfreopen.md)<br/>
