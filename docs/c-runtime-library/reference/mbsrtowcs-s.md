---
title: mbsrtowcs_s
ms.date: 4/2/2020
api_name:
- mbsrtowcs_s
- _o_mbsrtowcs_s
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
- mbsrtowcs_s
helpviewer_keywords:
- mbsrtowcs_s function
ms.assetid: 4ee084ec-b15d-4e5a-921d-6584ec3b5a60
ms.openlocfilehash: 62ae534e8080b74ada49cca005811a049055cb65
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81338897"
---
# <a name="mbsrtowcs_s"></a>mbsrtowcs_s

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

*pReturnValue (Valore restituito)*<br/>
Numero di caratteri convertiti.

*Wcstr*<br/>
Indirizzo del buffer in cui archiviare la stringa di caratteri wide convertita risultante.

*sizeInWords*<br/>
La dimensione di *wcstr* nelle parole (caratteri di tipo "wide" ).

*mbstr (intalltore*<br/>
Puntatore indiretto alla posizione della stringa di caratteri multibyte da convertire.

*count*<br/>
Numero massimo di caratteri di tipo "wide" da archiviare nel buffer *wcstr,* escluso il valore null di terminazione, o [_TRUNCATE](../../c-runtime-library/truncate.md).

*mbstate (in stato di stato)*<br/>
Puntatore a un oggetto stato di conversione **mbstate_t.** Se questo valore è un puntatore Null, viene usato un oggetto stato di conversione interno statico. Poiché l'oggetto **mbstate_t** interno non è thread-safe, è consigliabile passare sempre il proprio parametro *mbstate.*

## <a name="return-value"></a>Valore restituito

Se la conversione viene eseguita correttamente restituisce zero, in caso contrario un codice di errore.

|Condizione di errore|Valore restituito ed **errno**|
|---------------------|------------------------------|
|*wcstr* è un puntatore null e *sizeInWords* > 0|**Einval**|
|*mbstr* è un puntatore null|**Einval**|
|La stringa a cui punta *indirettamente mbstr* contiene una sequenza multibyte non valida per le impostazioni locali correnti.|**EILSEQ**|
|Il buffer di destinazione è troppo piccolo per contenere la stringa convertita (a meno che *count* non sia **_TRUNCATE**; per ulteriori informazioni, vedere Osservazioni)|**ERANGE**|

Se si verifica una di queste condizioni, viene richiamata l'eccezione di parametro non valido come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce un codice di errore e imposta **errno** come indicato nella tabella.

## <a name="remarks"></a>Osservazioni

La funzione **mbsrtowcs_s** converte una stringa di caratteri multibyte a cui punta *indirettamente mbstr* in caratteri wide archiviati nel buffer a cui *punta wcstr*, utilizzando lo stato di conversione contenuto in *mbstate*. La conversione continuerà per ogni carattere fino a quando non viene soddisfatta una delle seguenti condizioni:

- Viene rilevato un carattere Null multibyte

- Viene rilevato un carattere multibyte non valido

- Il numero di caratteri wide archiviati nel buffer *wcstr* è uguale a *count*.

La stringa di destinazione *wcstr* è sempre con terminazione null, anche in caso di errore, a meno che *wcstr* non sia un puntatore null.

Se *count* è il valore speciale [_TRUNCATE](../../c-runtime-library/truncate.md), **mbsrtowcs_s** converte la maggior parte della stringa che rientra nel buffer di destinazione, lasciando comunque spazio per un terminatore null.

Se **mbsrtowcs_s** converte correttamente la stringa di origine, inserisce la dimensione in caratteri di tipo "wide" della stringa convertita e il carattere di terminazione null in *&#42;pReturnValue*, purché *pReturnValue* non sia un puntatore null. Ciò si verifica anche se il *wcstr* argomento è un puntatore null e consente di determinare la dimensione del buffer richiesto. Si noti che se *wcstr* è un puntatore null, *count* viene ignorato.

Se *wcstr* non è un puntatore null, all'oggetto puntatore a cui punta *mbstr* viene assegnato un puntatore null se la conversione viene interrotta perché è stato raggiunto un carattere di terminazione null. In caso contrario, viene assegnato l'indirizzo subito dopo l'ultimo carattere multibyte convertito, se presente. Ciò consente a una chiamata di funzione successiva di riavviare la conversione nel punto in cui la chiamata è stata arrestata.

Se *mbstate* è un puntatore null, viene utilizzata l'oggetto statico dello stato di conversione interno della libreria **mbstate_t.** Poiché questo oggetto statico interno non è thread-safe, è consigliabile passare il proprio valore *mbstate.*

Se **mbsrtowcs_s** rileva un carattere multibyte non valido nelle impostazioni locali correnti, inserisce -1 in *&#42;pReturnValue*, imposta il buffer di destinazione *wcstr* su una stringa vuota, imposta **errno** su **EILSEQ**e restituisce **EILSEQ**.

Se le sequenze a cui *puntano mbstr* e *wcstr* si sovrappongono, il comportamento di **mbsrtowcs_s** non è definito. **mbsrtowcs_s** è influenzata dalla categoria LC_TYPE delle impostazioni locali correnti.

> [!IMPORTANT]
> Assicurarsi che *wcstr* e *mbstr* non si sovrappongano e che *il conteggio* rifletta correttamente il numero di caratteri multibyte da convertire.

La funzione **mbsrtowcs_s** è diversa da [mbstowcs_s, _mbstowcs_s_l](mbstowcs-s-mbstowcs-s-l.md) per la sua riavviabilità. Lo stato di conversione viene archiviato in *mbstate* per le chiamate successive alla stessa o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili. Ad esempio, un'applicazione deve utilizzare **mbsrlen** anziché **mbslen**, se viene utilizzata una chiamata successiva a **mbsrtowcs_s** anziché **mbstowcs_s**.

In C++ l'utilizzo di questa funzione è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure usando le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="exceptions"></a>Eccezioni

La funzione **mbsrtowcs_s** è multithread-safe se nessuna funzione nel thread corrente chiama **setlocale** finché questa funzione è in esecuzione e l'argomento *mbstate* non è un puntatore null.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**mbsrtowcs_s**|\<wchar.h>|

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyteInterpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[mbrtowc](mbrtowc.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[mbstowcs_s, _mbstowcs_s_l](mbstowcs-s-mbstowcs-s-l.md)<br/>
[mbsinit](mbsinit.md)<br/>
