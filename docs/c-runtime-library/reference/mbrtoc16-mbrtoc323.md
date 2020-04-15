---
title: mbrtoc16, mbrtoc323
ms.date: 4/2/2020
api_name:
- mbrtoc16
- mbrtoc32
- _o_mbrtoc16
- _o_mbrtoc32
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
- mbrtoc16
- mbrtoc32
- uchar/mbrtoc16
- uchar/mbrtoc32
helpviewer_keywords:
- mbrtoc16 function
- mbrtoc32 function
ms.assetid: 099ade4d-56f7-4e61-8b45-493f1d7a64bd
ms.openlocfilehash: 91755d19eacf73f19700eed7fffbffc529d4e235
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81340972"
---
# <a name="mbrtoc16-mbrtoc32"></a>mbrtoc16, mbrtoc32

Converte il primo carattere multibyte UTF-8 in una stringa nel carattere UTF-16 o UTF-32 equivalente.

## <a name="syntax"></a>Sintassi

```C
size_t mbrtoc16(
   char16_t* destination,
   const char* source,
   size_t max_bytes,
   mbstate_t* state
);

size_t mbrtoc32(
   char32_t* destination,
   const char* source,
   size_t max_bytes,
   mbstate_t* state
);
```

### <a name="parameters"></a>Parametri

*Destinazione*\
Puntatore **all'char16_t** o **char32_tequivalente** del carattere multibyte UTF-8 da convertire. Se null, la funzione non archivia un valore.

*fonte*\
Puntatore alla stringa di caratteri multibyte UTF-8 da convertire.

*max_bytes*\
Numero massimo di byte *nell'origine* da esaminare per un carattere da convertire. Questo argomento deve essere un valore compreso tra uno e il numero di byte, incluso qualsiasi carattere di terminazione null, rimanente *nell'origine*.

*Stato*\
Puntatore a un oggetto stato di conversione **mbstate_t** utilizzato per interpretare la stringa multibyte UTF-8 in uno o più caratteri di output.

## <a name="return-value"></a>Valore restituito

In caso di esito positivo, restituisce il valore della prima di queste condizioni che si applica, dato il valore *dello stato* corrente:

|Valore|Condizione|
|-----------|---------------|
|0|Il *successivo max_bytes* o meno caratteri convertiti *dall'origine* corrispondono al carattere wide null, ovvero il valore archiviato se *destination* non è null.<br /><br /> *contiene* lo stato di spostamento iniziale.|
|Tra 1 e *max_bytes*, inclusi|Il valore restituito è il numero di byte di *origine* che completano un carattere multibyte valido. Il carattere wide convertito viene archiviato se *destination* non è null.|
|-3|Il carattere wide successivo risultante da una precedente chiamata alla funzione è stato archiviato nella *destinazione* se *destination* non è null. Nessun byte *dall'origine* viene utilizzato da questa chiamata alla funzione.<br /><br /> Quando *l'origine* punta a un carattere multibyte UTF-8 che richiede più di un carattere wide per rappresentare (ad esempio, una coppia di surrogati), il valore *dello stato* viene aggiornato in modo che la chiamata di funzione successiva scriva il carattere aggiuntivo.|
|-2|*L'max_bytes* byte successivi rappresenta un carattere multibyte UTF-8 incompleto, ma potenzialmente valido. Nessun valore viene memorizzato nella *destinazione*. Questo risultato può verificarsi se *max_bytes* è zero.|
|-1|Si è verificato un errore di codifica. Il *successivo max_bytes* o meno byte non contribuiscono a un carattere multibyte UTF-8 completo e valido. Nessun valore viene memorizzato nella *destinazione*.<br /><br /> **EILSEQ** is stored in **errno** and the conversion state value *state* is unspecified.|

## <a name="remarks"></a>Osservazioni

La funzione **mbrtoc16** legge fino a *max_bytes* byte *dall'origine* per trovare il primo carattere multibyte UTF-8 valido completo e quindi archivia il carattere UTF-16 equivalente nella *destinazione.* Se il carattere richiede più di un carattere di output UTF-16, ad esempio una coppia di surrogati, il valore *dello stato* viene impostato per archiviare il carattere UTF-16 successivo nella *destinazione* alla chiamata successiva a **mbrtoc16**. La funzione **mbrtoc32** è identica, ma l'output viene archiviato come carattere UTF-32.

Se *source* è null, queste funzioni restituiscono l'equivalente di una chiamata effettuata utilizzando argomenti NULL per *destination*, `""` (una stringa vuota con terminazione null) per *source*e 1 per **NULL** *max_bytes*. I valori passati di *destinazione* e *max_bytes* vengono ignorati.

Se *source* non è null, la funzione inizia all'inizio della stringa e controlla fino a *max_bytes* byte per determinare il numero di byte necessari per completare il carattere multibyte UTF-8 successivo, incluse eventuali sequenze shift. Se i byte esaminati contengono un carattere multibyte UTF-8 valido e completo, la funzione converte il carattere nel carattere o nei caratteri wide a 16 o 32 bit equivalenti. Se *destination* non è null, la funzione archivia il primo (e possibilmente unico) carattere di risultato nella destinazione. Se sono necessari caratteri di output aggiuntivi, viene impostato un valore nello *stato*, in modo che le chiamate successive alla funzione eserino i caratteri aggiuntivi e restituiscano il valore -3. Se non sono necessari altri caratteri di output, *lo stato* viene impostato sullo stato di spostamento iniziale.

Per convertire i caratteri multibyte non UTF-8 in caratteri LE UTF-16, utilizzare le funzioni [mbrtowc](mbrtowc.md), [mbtowc o _mbtowc_l](mbtowc-mbtowc-l.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**mbrtoc16**, **mbrtoc32**|\<uchar.h>|\<cuchar>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../compatibility.md).

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../data-conversion.md)\
[Impostazioni internazionali](../locale.md)\
[Interpretazione di sequenze di caratteri multibyte](../interpretation-of-multibyte-character-sequences.md)\
[c16rtomb, c32rtomb](c16rtomb-c32rtomb1.md)\
[mbrtowc](mbrtowc.md)\
[mbsrtowcs](mbsrtowcs.md)\
[mbsrtowcs_s](mbsrtowcs-s.md)
