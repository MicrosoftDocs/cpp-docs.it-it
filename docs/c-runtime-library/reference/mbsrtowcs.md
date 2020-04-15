---
title: mbsrtowcs
ms.date: 4/2/2020
api_name:
- mbsrtowcs
- _o_mbsrtowcs
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
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- mbsrtowcs
helpviewer_keywords:
- mbsrtowcs function
ms.assetid: f3a29de8-e36e-425b-a7fa-a258e6d7909d
ms.openlocfilehash: 509046e1c55d89cd78b09076838983691423a1ee
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81338887"
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

*Wcstr*<br/>
Indirizzo in cui archiviare la stringa di caratteri wide convertita risultante.

*mbstr (intalltore*<br/>
Puntatore indiretto alla posizione della stringa di caratteri multibyte da convertire.

*count*<br/>
Numero massimo di caratteri (non byte) da convertire e archiviare in *wcstr*.

*mbstate (in stato di stato)*<br/>
Puntatore a un oggetto stato di conversione **mbstate_t.** Se questo valore è un puntatore Null, viene usato un oggetto stato di conversione interno statico. Poiché l'oggetto **mbstate_t** interno non è thread-safe, è consigliabile passare sempre il proprio parametro *mbstate.*

## <a name="return-value"></a>Valore restituito

Restituisce il numero di caratteri convertito correttamente, escluso il carattere di terminazione Null, se presente. Restituisce (size_t)(-1) se si è verificato un errore e imposta **errno** su EILSEQ.

## <a name="remarks"></a>Osservazioni

La funzione **mbsrtowcs** converte una stringa di caratteri multibyte a cui punta indirettamente *mbstr*, in caratteri wide archiviati nel buffer a cui punta *wcstr*, utilizzando lo stato di conversione contenuto in *mbstate*. La conversione continua per ogni carattere fino a quando non viene rilevato un carattere multibyte null, una sequenza multibyte che non corrisponde a un carattere valido nelle impostazioni locali correnti o fino a quando non sono stati convertiti i caratteri *di conteggio.* Se **mbsrtowcs** rileva il carattere null multibyte (''0') prima o quando si verifica *il conteggio,* lo converte in un carattere di terminazione null a 16 bit e si arresta.

Pertanto, la stringa di caratteri wide in *wcstr* viene terminata con null solo se **mbsrtowcs** rileva un carattere null multibyte durante la conversione. Se le sequenze a cui *puntano mbstr* e *wcstr* si sovrappongono, il comportamento di **mbsrtowcs** non è definito. **mbsrtowcs** è influenzato dalla categoria LC_TYPE delle impostazioni locali correnti.

La funzione **mbsrtowcs** differisce da [mbstowcs, _mbstowcs_l](mbstowcs-mbstowcs-l.md) dalla sua rimocitale. Lo stato di conversione viene archiviato in *mbstate* per le chiamate successive alla stessa o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili.  Ad esempio, un'applicazione deve utilizzare **mbsrlen** anziché **mbslen**, se viene utilizzata una chiamata successiva a **mbsrtowcs** anziché **mbstowcs**.

Se *wcstr* non è un puntatore null, all'oggetto puntatore a cui punta *mbstr* viene assegnato un puntatore null se la conversione viene interrotta perché è stato raggiunto un carattere di terminazione null. In caso contrario, viene assegnato l'indirizzo subito dopo l'ultimo carattere multibyte convertito, se presente. Ciò consente a una chiamata di funzione successiva di riavviare la conversione nel punto in cui la chiamata è stata arrestata.

Se l'argomento *wcstr* è un puntatore null, l'argomento *count* viene ignorato e **mbsrtowcs** restituisce la dimensione richiesta in caratteri wide per la stringa di destinazione. Se *mbstate* è un puntatore null, la funzione utilizza un oggetto di stato statico non thread-safe **mbstate_t** stato di conversione. Se la sequenza di caratteri *mbstr* non dispone di una rappresentazione di caratteri multibyte corrispondente, viene restituito un -1 e **errno** viene impostato su **EILSEQ**.

Se *mbstr* è un puntatore null, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione imposta **errno** su **EINVAL** e restituisce -1.

In C++, questa funzione presenta un overload di modello che richiama la relativa controparte sicura più recente. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="exceptions"></a>Eccezioni

La funzione **mbsrtowcs** è multithread-safe finché nessuna funzione nel thread corrente chiama **setlocale** finché questa funzione è in esecuzione e l'argomento *mbstate* non è un puntatore null.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**mbsrtowcs**|\<wchar.h>|

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyteInterpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[mbrtowc](mbrtowc.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[mbstowcs, _mbstowcs_l](mbstowcs-mbstowcs-l.md)<br/>
[mbsinit](mbsinit.md)<br/>
