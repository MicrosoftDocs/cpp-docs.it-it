---
title: fwrite
ms.date: 4/2/2020
api_name:
- fwrite
- _o_fwrite
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
- fwrite
helpviewer_keywords:
- streams, writing data to
- fwrite function
ms.assetid: 7afacf3a-72d7-4a50-ba2e-bea1ab9f4124
ms.openlocfilehash: a5bd6da3c8d16189f7ff0db744901e03513acc21
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81345401"
---
# <a name="fwrite"></a>fwrite

Scrive i dati in un flusso.

## <a name="syntax"></a>Sintassi

```C
size_t fwrite(
   const void *buffer,
   size_t size,
   size_t count,
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Puntatore ai dati da scrivere.

*Dimensione*<br/>
Dimensioni elemento, in byte.

*count*<br/>
Numero massimo di elementi da scrivere.

*flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

**fwrite** restituisce il numero di elementi completi effettivamente scritti, che possono essere minori di *count* se si verifica un errore. Inoltre, se si verifica un errore, non è possibile determinare l'indicatore della posizione del file. Se *stream* o *buffer* è un puntatore null o se viene specificato un numero dispari di byte da scrivere in modalità Unicode, la funzione richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione imposta **errno** su **EINVAL** e restituisce 0.

## <a name="remarks"></a>Osservazioni

La funzione **fwrite** scrive fino a *count* elementi, di *lunghezza ciascuna,* dal *buffer* al *flusso*di output. Il puntatore del file associato al *flusso* (se presente) viene incrementato del numero di byte effettivamente scritti. Se *il flusso* viene aperto in modalità testo, ogni avanzamento riga viene sostituito con una coppia di avanzamento riga di ritorno a capo. La sostituzione non ha effetto sul valore restituito.

Quando *il flusso* viene aperto in modalità di conversione Unicode, ad esempio se il *flusso* viene aperto chiamando **fopen** e utilizzando un parametro mode che include il buffer **di ccs**, UNICODE , ccs , **UTF-16LE**o **ccs , UTF-8**, oppure se la modalità viene modificata in una modalità di conversione Unicode utilizzando **_setmode** e un parametro mode che include **_O_WTEXT**, **_O_U16TEXT**o **_O_U8TEXT**, il buffer viene interpretato come un*puntatore* a una matrice di **wchar_t** contiene dati UTF-16. Un tentativo di scrivere un numero dispari di byte in questa modalità causerà un errore di convalida del parametro.

Poiché questa funzione blocca il thread di chiamata, può essere considerata thread-safe. Per una versione non bloccante, vedere **_fwrite_nolock**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fwrite**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio relativo a [fread](fread.md).

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[_setmode](setmode.md)<br/>
[fread](fread.md)<br/>
[_fwrite_nolock](fwrite-nolock.md)<br/>
[_write](write.md)<br/>
