---
title: mbrtoc16, mbrtoc323
ms.date: 11/04/2016
apiname:
- mbrtoc16
- mbrtoc32
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
- mbrtoc16
- mbrtoc32
- uchar/mbrtoc16
- uchar/mbrtoc32
helpviewer_keywords:
- mbrtoc16 function
- mbrtoc32 function
ms.assetid: 099ade4d-56f7-4e61-8b45-493f1d7a64bd
ms.openlocfilehash: f8573ac321772d19141be0228891b290ba48b217
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51520142"
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

*Destinazione*<br/>
Puntatore per il **char16_t** oppure **char32_t** equivalente del carattere multibyte da convertire. Se Null, la funzione non archivia un valore.

*source*<br/>
Puntatore alla stringa di caratteri multibyte da convertire.

*max_bytes*<br/>
Il numero massimo di byte in *origine* da esaminare per un carattere da convertire. Deve trattarsi di un valore compreso tra uno e il numero di byte, incluso qualsiasi carattere di terminazione null, rimanente *origine*.

*state*<br/>
Puntatore a un **mbstate_t** oggetto di stato di conversione utilizzato per interpretare la stringa multibyte da uno o più caratteri di output.

## <a name="return-value"></a>Valore restituito

In caso di esito positivo restituisce il valore del primo di tali condizioni che si applica, dato il corrente *stato* valore:

|Valore|Condizione|
|-----------|---------------|
|0|Alla successiva *max_bytes* o un minor numero di caratteri convertiti dal *origine* corrispondono al carattere wide null, corrisponde al valore archiviato se *destinazione* non null.<br /><br /> *stato* contiene lo stato iniziale di spostamento.|
|Tra 1 e *max_bytes*, inclusi,|Il valore restituito è il numero di byte di *origine* che completa un carattere multibyte valido. Il carattere wide convertito viene archiviato se *destinazione* non null.|
|-3|Il successivo carattere wide risultante da una precedente chiamata alla funzione è stato archiviato nel *destinazione* se *destinazione* non null. Nessun byte da *origine* vengono utilizzati da questa chiamata alla funzione.<br /><br /> Quando *origine* punta a un carattere multibyte che richiede più di un carattere wide da rappresentare (ad esempio, una coppia di surrogati), il *stato* valore viene aggiornato in modo che la successiva chiamata di funzione scrive  il carattere aggiuntivo.|
|-2|La prossima *max_bytes* byte rappresentano un incompleto ma potenzialmente valido carattere multibyte. Nessun valore viene archiviato *destinazione*. Questo risultato può verificarsi se *max_bytes* è uguale a zero.|
|-1|Si è verificato un errore di codifica. La prossima *max_bytes* o un numero di byte non contribuisce a un carattere multibyte valido e completo. Nessun valore viene archiviato *destinazione*.<br /><br /> **EILSEQ** viene archiviato in **errno** e lo stato di conversione *stato* non è specificato.|

## <a name="remarks"></a>Note

Il **mbrtoc16** funzione legge fino a *max_bytes* byte dal *origine* per trovare il primo carattere multibyte valido, completo e archivi di UTF-16 equivalente carattere in *destinazione*. I byte di origine vengono interpretati in base alle impostazioni locali multibyte del thread corrente. Se il carattere multibyte richiede più di un carattere di output UTF-16, ad esempio una coppia di surrogati, il *lo stato* è impostato per archiviare il successivo carattere UTF-16 in *destinazione* alla chiamata successiva a **mbrtoc16**. Il **mbrtoc32** funzione è identica, ma l'output viene archiviato come un carattere UTF-32.

Se *origine* è null, queste funzioni restituiscono l'equivalente di una chiamata effettuata usando gli argomenti di **NULL** per *destinazione*, **""** per *origine*e 1 per *max_bytes*. I valori passati dei *destinazione* e *max_bytes* vengono ignorati.

Se *origine* è non null, la funzione inizia all'inizio della stringa e controlla fino a *max_bytes* byte per determinare il numero di byte necessari per completare il carattere multibyte successivo, tra cui tutte le sequenze di spostamento. Se i byte esaminati contengono un carattere multibyte valido e completo, la funzione converte il carattere nel carattere o nei caratteri wide a 16 bit o 32 bit equivalenti. Se *destinazione* è non null, la funzione archivia il risultato primo (e probabilmente l'unico) carattere nell'istanza di destinazione. Se sono necessari caratteri di output aggiuntivi, viene impostato un valore *stato*, in modo che le successive chiamate alla funzione i caratteri aggiuntivi e restituiscono il valore -3. Se non sono necessari, quindi più caratteri di output *stato* viene impostato sullo stato iniziale di spostamento.

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
