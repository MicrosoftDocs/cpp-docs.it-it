---
title: fwrite | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- fwrite
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
- fwrite
dev_langs:
- C++
helpviewer_keywords:
- streams, writing data to
- fwrite function
ms.assetid: 7afacf3a-72d7-4a50-ba2e-bea1ab9f4124
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f1320bcc61830833f2b1a4a225dff30652df2d3a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32400580"
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

*size*<br/>
Dimensioni elemento, in byte.

*count*<br/>
Numero massimo di elementi da scrivere.

*Flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

**fwrite** restituisce il numero di full elementi effettivamente scritti, che può essere minore *conteggio* se si verifica un errore. Inoltre, se si verifica un errore, non è possibile determinare l'indicatore della posizione del file. Se entrambi *flusso* oppure *buffer* è un puntatore null o se viene specificato un numero dispari di byte da scrivere in modalità Unicode, la funzione richiama il gestore di parametri non validi, come descritto in [ Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta **errno** alla **EINVAL** e restituisce 0.

## <a name="remarks"></a>Note

Il **fwrite** funzione scrive fino a *conteggio* elementi, di *dimensioni* ognuno, con una lunghezza da *buffer* all'output *flusso*. Il puntatore del file associato *flusso* (se presente) viene incrementato il numero di byte effettivamente scritti. Se *flusso* viene aperto in modalità testo, ogni carattere di avanzamento riga viene sostituito con un ritorno a capo - avanzamento riga coppia. La sostituzione non ha effetto sul valore restituito.

Quando *flusso* viene aperto in modalità di conversione Unicode, ad esempio, se *flusso* viene aperto chiamando **fopen** e l'utilizzo di un parametro modalità che include **ccs = UNICODE**, **ccs = UTF-16LE**, oppure **ccs = UTF-8**, o se la modalità viene modificata in una modalità di conversione Unicode tramite **setMode** e una modalità parametro che include **o_wtext**, **_O_U16TEXT**, o **_O_U8TEXT**:*buffer* viene interpretato come un puntatore a un Matrice di **wchar_t** che contiene i dati UTF-16. Un tentativo di scrivere un numero dispari di byte in questa modalità causerà un errore di convalida del parametro.

Poiché questa funzione blocca il thread di chiamata, può essere considerata thread-safe. Per una versione non di blocco, vedere **fwrite_nolock**.

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
