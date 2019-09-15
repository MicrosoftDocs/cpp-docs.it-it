---
title: mbrtoc16, mbrtoc323
ms.date: 11/04/2016
api_name:
- mbrtoc16
- mbrtoc32
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
- mbrtoc16
- mbrtoc32
- uchar/mbrtoc16
- uchar/mbrtoc32
helpviewer_keywords:
- mbrtoc16 function
- mbrtoc32 function
ms.assetid: 099ade4d-56f7-4e61-8b45-493f1d7a64bd
ms.openlocfilehash: 52bcec5911fdc2ecbb073ae0042777aa4eb2b963
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70952455"
---
# <a name="mbrtoc16-mbrtoc32"></a>mbrtoc16, mbrtoc32

Converte il primo carattere multibyte in una stringa a caratteri narrow nel carattere UTF-16 o UTF-32 equivalente.

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

*destinazione*<br/>
Puntatore all'equivalente **char16_t** o **char32_t** del carattere multibyte da convertire. Se Null, la funzione non archivia un valore.

*source*<br/>
Puntatore alla stringa di caratteri multibyte da convertire.

*max_bytes*<br/>
Numero massimo di byte nell' *origine* da esaminare per un carattere da convertire. Deve essere un valore compreso tra uno e il numero di byte, incluso qualsiasi carattere di terminazione null, rimanente nell' *origine*.

*state*<br/>
Puntatore a un oggetto stato di conversione **mbstate_t** utilizzato per interpretare la stringa multibyte in uno o più caratteri di output.

## <a name="return-value"></a>Valore restituito

In caso di esito positivo, restituisce il valore della prima di queste condizioni che si applica, dato il valore *dello stato* corrente:

|Value|Condizione|
|-----------|---------------|
|0|Il *max_bytes* successivo o un minor numero di caratteri convertiti dall' *origine* corrisponde al carattere wide null, che corrisponde al valore archiviato se la *destinazione* non è null.<br /><br /> *lo stato contiene lo* stato iniziale di spostamento.|
|Compreso tra 1 e *max_bytes*inclusi|Il valore restituito è il numero di byte dell' *origine* che completa un carattere multibyte valido. Il carattere wide convertito viene archiviato se la *destinazione* non è null.|
|-3|Il successivo carattere wide risultante da una precedente chiamata alla funzione è stato archiviato nella *destinazione* se la *destinazione* non è null. La chiamata alla funzione non consente l'utilizzo di byte dall' *origine* .<br /><br /> Quando l' *origine* punta a un carattere multibyte che richiede più di un carattere wide da rappresentare (ad esempio, una coppia di surrogati), il valore di *stato* viene aggiornato in modo che la chiamata di funzione successiva scriva il carattere aggiuntivo.|
|-2|I successivi *max_bytes* byte rappresentano un carattere multibyte incompleto, ma potenzialmente valido. Nessun valore viene archiviato nella *destinazione*. Questo risultato può verificarsi se *max_bytes* è zero.|
|-1|Si è verificato un errore di codifica. I successivi *max_bytes* o un minor numero di byte non contribuiscono a un carattere multibyte completo e valido. Nessun valore viene archiviato nella *destinazione*.<br /><br /> **EILSEQ** viene archiviato in **errno** e lo *stato* della conversione non è specificato.|

## <a name="remarks"></a>Note

La funzione **mbrtoc16** legge fino a *max_bytes* byte dall' *origine* per trovare il primo carattere multibyte valido completo e quindi archivia il carattere UTF-16 equivalente nella *destinazione*. I byte di origine vengono interpretati in base alle impostazioni locali multibyte del thread corrente. Se il carattere multibyte richiede più di un carattere di output UTF-16, ad esempio una coppia di surrogati, il valore di *stato* viene impostato in modo da archiviare il successivo carattere UTF-16 nella *destinazione* alla chiamata successiva a **mbrtoc16**. La funzione **mbrtoc32** è identica, ma l'output viene archiviato come carattere UTF-32.

Se *source* è null, queste funzioni restituiscono l'equivalente di una chiamata effettuata usando gli argomenti di **null** per la *destinazione*, **""** per l' *origine*e 1 per *max_bytes*. I valori passati di *Destination* e *max_bytes* vengono ignorati.

Se l' *origine* non è null, la funzione inizia all'inizio della stringa e controlla fino a *max_bytes* byte per determinare il numero di byte necessari per completare il carattere multibyte successivo, incluse le sequenze di spostamento. Se i byte esaminati contengono un carattere multibyte valido e completo, la funzione converte il carattere nel carattere o nei caratteri wide a 16 bit o 32 bit equivalenti. Se la *destinazione* non è null, la funzione archivia il primo (ed eventualmente solo) carattere di risultato nella destinazione. Se sono necessari caratteri di output aggiuntivi, un valore viene impostato in *stato*, in modo che le chiamate successive alla funzione restituiscono i caratteri aggiuntivi e restituiscano il valore-3. Se non sono necessari altri caratteri di output, *lo* stato viene impostato sullo stato iniziale di spostamento.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**mbrtoc16**, **mbrtoc32**|\<uchar.h>|\<cuchar>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[c16rtomb, c32rtomb](c16rtomb-c32rtomb1.md)<br/>
[mbrtowc](mbrtowc.md)<br/>
[mbsrtowcs](mbsrtowcs.md)<br/>
[mbsrtowcs_s](mbsrtowcs-s.md)<br/>
