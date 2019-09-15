---
title: mbsrtowcs
ms.date: 11/04/2016
api_name:
- mbsrtowcs
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
- api-ms-win-crt-convert-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- mbsrtowcs
helpviewer_keywords:
- mbsrtowcs function
ms.assetid: f3a29de8-e36e-425b-a7fa-a258e6d7909d
ms.openlocfilehash: de7b25ea8a520dfe2c9cb26ec8989624b670dcb9
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70952040"
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
Numero massimo di caratteri (non byte) da convertire e archiviare in *wcstr*.

*mbstate*<br/>
Puntatore a un oggetto stato di conversione **mbstate_t** . Se questo valore è un puntatore Null, viene usato un oggetto stato di conversione interno statico. Poiché l'oggetto **mbstate_t** interno non è thread-safe, è consigliabile passare sempre il proprio parametro *mbstate* .

## <a name="return-value"></a>Valore restituito

Restituisce il numero di caratteri convertito correttamente, escluso il carattere di terminazione Null, se presente. Restituisce (size_t) (-1) se si è verificato un errore e imposta **errno** su EILSEQ.

## <a name="remarks"></a>Note

La funzione **mbsrtowcs** converte una stringa di caratteri multibyte a cui punta indirettamente da *mbstr*, in caratteri wide archiviati nel buffer a cui punta *wcstr*, usando lo stato di conversione contenuto in *mbstate*. La conversione continua per ogni carattere fino a quando non viene rilevato un carattere multibyte di terminazione null, viene rilevata una sequenza multibyte che non corrisponde a un carattere valido nelle impostazioni locali correnti o fino a quando non sono stati inseriti i caratteri di *conteggio* convertito. Se **mbsrtowcs** rileva il carattere multibyte null (' \ 0') prima o quando si verifica il *conteggio* , lo converte in un carattere di terminazione null a 16 bit e si arresta.

Quindi, la stringa di caratteri wide in *wcstr* è con terminazione null solo se **mbsrtowcs** rileva un carattere multibyte null durante la conversione. Se le sequenze a cui puntano *mbstr* e *wcstr* si sovrappongono, il comportamento di **mbsrtowcs** non è definito. **mbsrtowcs** è influenzato dalla categoria LC_TYPE delle impostazioni locali correnti.

La funzione **mbsrtowcs** differisce da [mbstowcs, _mbstowcs_l](mbstowcs-mbstowcs-l.md) per la relativa riavviabilità. Lo stato di conversione viene archiviato in *mbstate* per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili.  Ad esempio, un'applicazione deve usare **mbsrlen** invece di **mbslen**, se viene usata una chiamata successiva a **mbsrtowcs** anziché **mbstowcs**.

Se *wcstr* non è un puntatore null, all'oggetto puntatore a cui punta *mbstr* viene assegnato un puntatore null se la conversione è stata arrestata perché è stato raggiunto un carattere di terminazione null. In caso contrario, viene assegnato l'indirizzo subito dopo l'ultimo carattere multibyte convertito, se presente. Ciò consente a una chiamata di funzione successiva di riavviare la conversione nel punto in cui la chiamata è stata arrestata.

Se l'argomento *wcstr* è un puntatore null, l'argomento *count* viene ignorato e **mbsrtowcs** restituisce le dimensioni necessarie in caratteri wide per la stringa di destinazione. Se *mbstate* è un puntatore null, la funzione usa un oggetto stato di conversione **mbstate_t** interno statico non thread-safe. Se la sequenza di caratteri *mbstr* non dispone di una rappresentazione di caratteri multibyte corrispondente, viene restituito-1 e **errno** è impostato su **EILSEQ**.

Se il puntatore *mbstr* ISA null, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione imposta **errno** su **EINVAL** e restituisce-1.

In C++, questa funzione presenta un overload di modello che richiama la relativa controparte sicura più recente. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## <a name="exceptions"></a>Eccezioni

La funzione **mbsrtowcs** è multithread safe a condizione che nessuna funzione nel thread corrente chiami **setlocale** finché questa funzione è in esecuzione e l'argomento *mbstate* non è un puntatore null.

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
