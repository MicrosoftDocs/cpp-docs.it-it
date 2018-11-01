---
title: mbsrtowcs_s
ms.date: 11/04/2016
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
helpviewer_keywords:
- mbsrtowcs_s function
ms.assetid: 4ee084ec-b15d-4e5a-921d-6584ec3b5a60
ms.openlocfilehash: a935b5181078f3b08ba5f2f89c581ed8cce8ded5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50588826"
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
Il valore pari *wcstr* parole (caratteri "wide").

*mbstr*<br/>
Puntatore indiretto alla posizione della stringa di caratteri multibyte da convertire.

*count*<br/>
Il numero massimo di caratteri wide da archiviare nel *wcstr* buffer, escluso il carattere null oppure [truncate](../../c-runtime-library/truncate.md).

*mbstate*<br/>
Un puntatore a un **mbstate_t** oggetto stato di conversione. Se questo valore è un puntatore Null, viene usato un oggetto stato di conversione interno statico. Perché l'interno **mbstate_t** oggetto non è thread-safe, è consigliabile passare sempre il proprio *mbstate* parametro.

## <a name="return-value"></a>Valore restituito

Se la conversione viene eseguita correttamente restituisce zero, in caso contrario un codice di errore.

|Condizione di errore|Valore restituito e **errno**|
|---------------------|------------------------------|
|*wcstr* è un puntatore null e *sizeInWords* > 0|**EINVAL**|
|*mbstr* è un puntatore null|**EINVAL**|
|La stringa indirettamente a cui punta *mbstr* contiene una sequenza multibyte non valida per le impostazioni locali correnti.|**EILSEQ**|
|Il buffer di destinazione è troppo piccolo per contenere la stringa convertita (a meno che *conteggio* viene **truncate**; per altre informazioni, vedere la sezione Osservazioni)|**ERANGE**|

Se si verifica una di queste condizioni, viene richiamata l'eccezione di parametro non valido come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce un codice di errore e imposta **errno** come indicato nella tabella.

## <a name="remarks"></a>Note

Il **mbsrtowcs_s** funzione converte una stringa di caratteri multibyte indirettamente a cui punta *mbstr* in caratteri wide archiviati nel buffer a cui fa riferimento *wcstr*, da usando lo stato di conversione contenuto in *mbstate*. La conversione continuerà per ogni carattere fino a quando non viene soddisfatta una delle seguenti condizioni:

- Viene rilevato un carattere Null multibyte

- Viene rilevato un carattere multibyte non valido

- Il numero di caratteri "wide" archiviati nel *wcstr* uguale a un buffer *conteggio*.

La stringa di destinazione *wcstr* è sempre con terminazione null, anche in caso di errore, a meno che non *wcstr* è un puntatore null.

Se *conteggio* è il valore speciale [truncate](../../c-runtime-library/truncate.md), **mbsrtowcs_s** Converte la porzione di stringa rientrano nel buffer di destinazione, lasciando però spazio per un valore null carattere di terminazione.

Se **mbsrtowcs_s** converte correttamente la stringa di origine, inserisce la dimensione in caratteri wide della stringa convertita e il terminatore null in  *&#42;pReturnValue*, fornito  *pReturnValue* non è un puntatore null. Questo errore si verifica anche se il *wcstr* argomento è un puntatore null e ti permette di determinare le dimensioni del buffer richieste. Si noti che se *wcstr* è un puntatore null *conteggio* viene ignorato.

Se *wcstr* non è un puntatore null, l'oggetto del puntatore a cui punta *mbstr* viene assegnato un puntatore null se conversione è stata arrestata perché è stato raggiunto un carattere di terminazione null. In caso contrario, viene assegnato l'indirizzo subito dopo l'ultimo carattere multibyte convertito, se presente. Ciò consente a una chiamata di funzione successiva di riavviare la conversione nel punto in cui la chiamata è stata arrestata.

Se *mbstate* è un puntatore null, della libreria interna **mbstate_t** viene usato l'oggetto statico dello stato di conversione. Poiché l'oggetto statico interno non è thread-safe, è consigliabile passare il proprio *mbstate* valore.

Se **mbsrtowcs_s** rileva un carattere multibyte non valido nelle impostazioni locali correnti, inserisce -1  *&#42;pReturnValue*, imposta il buffer di destinazione *wcstr* per una stringa vuota, imposta **errno** al **EILSEQ**e restituisce **EILSEQ**.

Se le sequenze a cui punta *mbstr* e *wcstr* si sovrappongono, il comportamento delle **mbsrtowcs_s** è definito. **mbsrtowcs_s** dipende dalla categoria LC_TYPE delle impostazioni locali correnti.

> [!IMPORTANT]
> Assicurarsi che *wcstr* e *mbstr* non si sovrappongano e che *conteggio* rispecchi correttamente il numero di caratteri multibyte da convertire.

Il **mbsrtowcs_s** la funzione differisce da [mbstowcs_s, mbstowcs_s_l](mbstowcs-s-mbstowcs-s-l.md) dalla relativa possibilità di essere riavviata. Cui è archiviato lo stato di conversione *mbstate* per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili. Ad esempio, un'applicazione deve utilizzare **mbsrlen** invece di **mbslen**, se una chiamata successiva a **mbsrtowcs_s** viene usato al posto di **mbstowcs_s**.

In C++ l'utilizzo di questa funzione è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure usando le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## <a name="exceptions"></a>Eccezioni

Il **mbsrtowcs_s** funzione è multithread-safe se nessuna funzione nel thread corrente chiama **setlocale** fino a quando questa funzione è in esecuzione e il *mbstate* argomento è non è un puntatore null.

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
