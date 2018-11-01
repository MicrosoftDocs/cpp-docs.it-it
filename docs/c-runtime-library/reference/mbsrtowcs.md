---
title: mbsrtowcs
ms.date: 11/04/2016
apiname:
- mbsrtowcs
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
- mbsrtowcs
helpviewer_keywords:
- mbsrtowcs function
ms.assetid: f3a29de8-e36e-425b-a7fa-a258e6d7909d
ms.openlocfilehash: 2bc0c8c9e2d871b6d1748c42dc02c627244dbf69
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50597145"
---
# <a name="mbsrtowcs"></a>mbsrtowcs

Converte una stringa di caratteri multibyte delle impostazioni locali correnti in una stringa di caratteri wide corrispondente, con la possibilità di ricominciare nel mezzo di un carattere multibyte. È disponibile una versione più sicura di questa funzione. Vedere [mbsrtowcs_s](mbsrtowcs-s.md).

## <a name="syntax"></a>Sintassi

```C
size_t mbsrtowcs(
   wchar_t *wcstr,
   const char **mbstr,
   sizeof count,
   mbstate_t *mbstate
);
template <size_t size>
size_t mbsrtowcs(
   wchar_t (&wcstr)[size],
   const char **mbstr,
   sizeof count,
   mbstate_t *mbstate
); // C++ only
```

### <a name="parameters"></a>Parametri

*wcstr*<br/>
Indirizzo in cui archiviare la stringa di caratteri wide convertita risultante.

*mbstr*<br/>
Puntatore indiretto alla posizione della stringa di caratteri multibyte da convertire.

*count*<br/>
Il numero massimo di caratteri (non byte) da convertire e archiviare nella *wcstr*.

*mbstate*<br/>
Un puntatore a un **mbstate_t** oggetto stato di conversione. Se questo valore è un puntatore Null, viene usato un oggetto stato di conversione interno statico. Perché l'interno **mbstate_t** oggetto non è thread-safe, è consigliabile passare sempre il proprio *mbstate* parametro.

## <a name="return-value"></a>Valore restituito

Restituisce il numero di caratteri convertito correttamente, escluso il carattere di terminazione Null, se presente. Restituisce (size_t)(-1) se si è verificato un errore e imposta **errno** su EILSEQ.

## <a name="remarks"></a>Note

Il **mbsrtowcs** funzione converte una stringa di caratteri multibyte indirettamente a cui punta *mbstr*, in caratteri wide archiviati nel buffer a cui fa riferimento *wcstr*, da usando lo stato di conversione contenuto in *mbstate*. La conversione continuerà per ogni carattere fino a quando non viene rilevato un carattere di terminazione null multibyte carattere, viene rilevata una sequenza multibyte che non corrisponde a un carattere valido nelle impostazioni locali correnti, o fino a quando *conteggio* sono stati convertiti in caratteri. Se **mbsrtowcs** rileva il carattere multibyte null ('\0') prima o quando *conteggio* si verifica, lo converte in un carattere di terminazione null a 16 bit e si arresta.

Pertanto, la stringa di caratteri "wide" in *wcstr* sono con terminazione null solo se **mbsrtowcs** rileva un carattere multibyte null durante la conversione. Se le sequenze a cui punta *mbstr* e *wcstr* si sovrappongono, il comportamento delle **mbsrtowcs** è definito. **mbsrtowcs** dipende dalla categoria LC_TYPE delle impostazioni locali correnti.

Il **mbsrtowcs** la funzione differisce da [mbstowcs, mbstowcs_l](mbstowcs-mbstowcs-l.md) dalla relativa possibilità di essere riavviata. Cui è archiviato lo stato di conversione *mbstate* per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili.  Ad esempio, un'applicazione deve utilizzare **mbsrlen** invece di **mbslen**, se una chiamata successiva a **mbsrtowcs** viene usato al posto di **mbstowcs**.

Se *wcstr* non è un puntatore null, l'oggetto del puntatore a cui punta *mbstr* viene assegnato un puntatore null se conversione è stata arrestata perché è stato raggiunto un carattere di terminazione null. In caso contrario, viene assegnato l'indirizzo subito dopo l'ultimo carattere multibyte convertito, se presente. Ciò consente a una chiamata di funzione successiva di riavviare la conversione nel punto in cui la chiamata è stata arrestata.

Se il *wcstr* l'argomento è un puntatore null, il *conteggio* verrà ignorato e **mbsrtowcs** restituisce le dimensioni necessarie in caratteri wide della stringa di destinazione. Se *mbstate* è un puntatore null, la funzione Usa un interno statico non thread-safe **mbstate_t** oggetto stato di conversione. Se la sequenza di caratteri *mbstr* non ha un multibyte corrispondente rappresentazione in caratteri, viene restituito -1 e il **errno** è impostata su **EILSEQ**.

Se *mbstr* isa un puntatore null, il gestore di parametri non validi viene richiamato, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta **errno** al **EINVAL** e restituisce -1.

In C++, questa funzione presenta un overload di modello che richiama la relativa controparte sicura più recente. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## <a name="exceptions"></a>Eccezioni

Il **mbsrtowcs** funzione è multithread-safe finché nessuna funzione nel thread corrente chiami **setlocale** fino a quando questa funzione è in esecuzione e il *mbstate* argomento non è un puntatore null.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**mbsrtowcs**|\<wchar.h>|

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[mbrtowc](mbrtowc.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[mbstowcs, _mbstowcs_l](mbstowcs-mbstowcs-l.md)<br/>
[mbsinit](mbsinit.md)<br/>
