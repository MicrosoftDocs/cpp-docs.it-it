---
title: mbsrtowcs | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- mbsrtowcs function
ms.assetid: f3a29de8-e36e-425b-a7fa-a258e6d7909d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ccb5bda16238888905678ffb3b6de01b93555ad0
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32405432"
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
Un puntatore a un **mbstate_t** oggetto stato di conversione. Se questo valore è un puntatore Null, viene usato un oggetto stato di conversione interno statico. Perché l'interno **mbstate_t** oggetto non è thread-safe, è consigliabile passare sempre la propria *mbstate* parametro.

## <a name="return-value"></a>Valore restituito

Restituisce il numero di caratteri convertito correttamente, escluso il carattere di terminazione Null, se presente. Restituisce (size_t)(-1) se si è verificato un errore e imposta **errno** su EILSEQ.

## <a name="remarks"></a>Note

Il **mbsrtowcs** funzione converte una stringa di caratteri multibyte indirettamente a cui puntata *mbstr*, in caratteri wide archiviati nel buffer a cui puntato *wcstr*, da utilizzando lo stato di conversione contenuto in *mbstate*. La conversione continuerà per ogni carattere fino a quando non viene rilevato un carattere di terminazione null multibyte carattere, viene rilevata una sequenza multibyte che non corrisponde a un carattere valido per le impostazioni locali correnti, o fino alla *conteggio* caratteri sono stati convertiti. Se **mbsrtowcs** rileva il carattere multibyte null ('\0') prima o quando *conteggio* si verifica, lo converte in un carattere di terminazione null a 16 bit e si arresta.

Di conseguenza, la stringa di caratteri "wide" in *wcstr* è con terminazione null solo se **mbsrtowcs** rileva un carattere multibyte null durante la conversione. Se le sequenze a cui punta *mbstr* e *wcstr* si sovrappongono, il comportamento di **mbsrtowcs** è definito. **mbsrtowcs** è interessato dalla categoria LC_TYPE delle impostazioni locali correnti.

Il **mbsrtowcs** rispetto alla funzione [mbstowcs, mbstowcs_l](mbstowcs-mbstowcs-l.md) dal relativo riavviabilità. Lo stato di conversione viene archiviato *mbstate* per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili.  Ad esempio, un'applicazione deve usare **mbsrlen** anziché **mbslen**, se una chiamata successiva a **mbsrtowcs** utilizzato al posto del **mbstowcs**.

Se *wcstr* non è un puntatore null, l'oggetto del puntatore a cui punta *mbstr* viene assegnato un puntatore null se la conversione è stata arrestata perché è stato raggiunto un carattere di terminazione null. In caso contrario, viene assegnato l'indirizzo subito dopo l'ultimo carattere multibyte convertito, se presente. Ciò consente a una chiamata di funzione successiva di riavviare la conversione nel punto in cui la chiamata è stata arrestata.

Se il *wcstr* l'argomento è un puntatore null, la *conteggio* argomento viene ignorato e **mbsrtowcs** restituisce le dimensioni necessarie in caratteri "wide" per la stringa di destinazione. Se *mbstate* è un puntatore null, la funzione utilizza un interno statico non thread-safe **mbstate_t** oggetto stato di conversione. Se la sequenza di caratteri *mbstr* non dispone di un multibyte corrispondente rappresentazione dei caratteri, viene restituito -1 e il **errno** è impostato su **EILSEQ**.

Se *mbstr* un puntatore null, il gestore di parametri non validi viene richiamato, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta **errno** alla **EINVAL** e restituisce -1.

In C++, questa funzione presenta un overload di modello che richiama la relativa controparte sicura più recente. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## <a name="exceptions"></a>Eccezioni

Il **mbsrtowcs** funzione è multithread-safe finché nessuna funzione nel thread corrente chiama **setlocale** fino a quando questa funzione è in esecuzione e il *mbstate* argomento non è un puntatore null.

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
