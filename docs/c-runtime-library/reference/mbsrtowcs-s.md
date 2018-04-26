---
title: mbsrtowcs_s | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- mbsrtowcs_s
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
- api-ms-win-crt-convert-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- mbsrtowcs_s
dev_langs:
- C++
helpviewer_keywords:
- mbsrtowcs_s function
ms.assetid: 4ee084ec-b15d-4e5a-921d-6584ec3b5a60
caps.latest.revision: 24
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: cc125521b7db7537ecbbf3fe3c42ec6b8b8e1ada
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="mbsrtowcss"></a>mbsrtowcs_s

Convertire una stringa di caratteri multibyte nelle impostazioni locali correnti in una rappresentazione di stringa di caratteri wide. Una versione di [mbsrtowcs](mbsrtowcs.md) con miglioramenti per la sicurezza. come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t mbsrtowcs_s(
   size_t * pReturnValue,
   wchar_t * wcstr,
   size_t sizeInWords,
   const char ** mbstr,
   size_t count,
   mbstate_t * mbstate
);
template <size_t size>
errno_t mbsrtowcs_s(
   size_t * pReturnValue,
   wchar_t (&wcstr)[size],
   const char ** mbstr,
   size_t count,
   mbstate_t * mbstate
); // C++ only
```

### <a name="parameters"></a>Parametri

*pReturnValue*<br/>
Numero di caratteri convertiti.

*wcstr*<br/>
Indirizzo del buffer in cui archiviare la stringa di caratteri wide convertita risultante.

*sizeInWords*<br/>
Il valore pari *wcstr* in parole (caratteri "wide").

*mbstr*<br/>
Puntatore indiretto alla posizione della stringa di caratteri multibyte da convertire.

*count*<br/>
Il numero massimo di caratteri "wide" per l'archiviazione nel *wcstr* buffer, senza includere il carattere di terminazione null, o [truncate](../../c-runtime-library/truncate.md).

*mbstate*<br/>
Un puntatore a un **mbstate_t** oggetto stato di conversione. Se questo valore è un puntatore Null, viene usato un oggetto stato di conversione interno statico. Perché l'interno **mbstate_t** oggetto non è thread-safe, è consigliabile passare sempre la propria *mbstate* parametro.

## <a name="return-value"></a>Valore restituito

Se la conversione viene eseguita correttamente restituisce zero, in caso contrario un codice di errore.

|Condizione di errore|Valore restituito e **errno**|
|---------------------|------------------------------|
|*wcstr* è un puntatore null e *sizeInWords* > 0|**EINVAL**|
|*mbstr* è un puntatore null|**EINVAL**|
|La stringa indirettamente a cui punta *mbstr* contiene una sequenza multibyte che non è valida per le impostazioni locali correnti.|**EILSEQ**|
|Il buffer di destinazione è troppo piccolo per contenere la stringa convertita (a meno che *conteggio* viene **truncate**; per ulteriori informazioni, vedere la sezione Osservazioni)|**ERANGE**|

Se si verifica una di queste condizioni, viene richiamata l'eccezione di parametro non valido come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce un codice di errore e imposta **errno** come indicato nella tabella.

## <a name="remarks"></a>Note

Il **mbsrtowcs_s** funzione converte una stringa di caratteri multibyte indirettamente a cui puntata *mbstr* in caratteri wide archiviati nel buffer a cui puntato *wcstr*, da utilizzando lo stato di conversione contenuto in *mbstate*. La conversione continuerà per ogni carattere fino a quando non viene soddisfatta una delle seguenti condizioni:

- Viene rilevato un carattere Null multibyte

- Viene rilevato un carattere multibyte non valido

- Il numero di caratteri "wide" archiviati nel *wcstr* uguale a un buffer *conteggio*.

La stringa di destinazione *wcstr* è sempre con terminazione null, anche in caso di errore, a meno che non *wcstr* è un puntatore null.

Se *conteggio* è il valore speciale [truncate](../../c-runtime-library/truncate.md), **mbsrtowcs_s** Converte la gran parte della stringa come rientrano nel buffer di destinazione, lasciando comunque una chat room per un valore null carattere di terminazione.

Se **mbsrtowcs_s** converte correttamente la stringa di origine, inserisce la dimensione in caratteri "wide" della stringa convertita e il terminatore null in  *&#42;pReturnValue*, fornito  *pReturnValue* non è un puntatore null. Questo errore si verifica anche se il *wcstr* argomento è un puntatore null e permette di determinare le dimensioni del buffer richiesto. Si noti che se *wcstr* è un puntatore null *conteggio* viene ignorato.

Se *wcstr* non è un puntatore null, l'oggetto del puntatore a cui punta *mbstr* viene assegnato un puntatore null se la conversione è stata arrestata perché è stato raggiunto un carattere di terminazione null. In caso contrario, viene assegnato l'indirizzo subito dopo l'ultimo carattere multibyte convertito, se presente. Ciò consente a una chiamata di funzione successiva di riavviare la conversione nel punto in cui la chiamata è stata arrestata.

Se *mbstate* è un puntatore null, della libreria interna **mbstate_t** viene utilizzato l'oggetto statico dello stato di conversione. Poiché l'oggetto statico interno non è thread-safe, è consigliabile che si passa la propria *mbstate* valore.

Se **mbsrtowcs_s** rileva un carattere multibyte non valido nelle impostazioni locali correnti, inserisce -1 in  *&#42;pReturnValue*, imposta il buffer di destinazione *wcstr* per una stringa vuota, imposta **errno** alla **EILSEQ**e restituisce **EILSEQ**.

Se le sequenze a cui punta *mbstr* e *wcstr* si sovrappongono, il comportamento di **mbsrtowcs_s** è definito. **mbsrtowcs_s** è interessato dalla categoria LC_TYPE delle impostazioni locali correnti.

> [!IMPORTANT]
> Assicurarsi che *wcstr* e *mbstr* si sovrappongano e che *conteggio* rispecchi correttamente il numero di caratteri multibyte da convertire.

Il **mbsrtowcs_s** rispetto alla funzione [mbstowcs_s, mbstowcs_s_l](mbstowcs-s-mbstowcs-s-l.md) dal relativo riavviabilità. Lo stato di conversione viene archiviato *mbstate* per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili. Ad esempio, un'applicazione deve usare **mbsrlen** anziché **mbslen**, se una chiamata successiva a **mbsrtowcs_s** utilizzato al posto del **mbstowcs_s**.

In C++ l'utilizzo di questa funzione è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure usando le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## <a name="exceptions"></a>Eccezioni

Il **mbsrtowcs_s** funzione è multithread-safe finché nessuna funzione nel thread corrente chiama **setlocale** fino a quando questa funzione è in esecuzione e il *mbstate* argomento non è un puntatore null.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**mbsrtowcs_s**|\<wchar.h>|

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[mbrtowc](mbrtowc.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[mbstowcs_s, _mbstowcs_s_l](mbstowcs-s-mbstowcs-s-l.md)<br/>
[mbsinit](mbsinit.md)<br/>
