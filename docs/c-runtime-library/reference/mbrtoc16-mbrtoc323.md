---
title: mbrtoc16, mbrtoc323 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- mbrtoc16 function
- mbrtoc32 function
ms.assetid: 099ade4d-56f7-4e61-8b45-493f1d7a64bd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a12e90f9a4bc0cc27df421c27d77a1b9b69334b9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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
Puntatore ai **char16_t** oppure **char32_t** equivalente del carattere multibyte da convertire. Se Null, la funzione non archivia un valore.

*Origine*<br/>
Puntatore alla stringa di caratteri multibyte da convertire.

*max_bytes*<br/>
Il numero massimo di byte *origine* da esaminare per un carattere da convertire. Deve trattarsi di un valore compreso tra uno e il numero di byte, incluso qualsiasi carattere di terminazione null, rimanente *origine*.

*state*<br/>
Puntatore a un **mbstate_t** oggetto di stato di conversione utilizzato per interpretare la stringa multibyte da uno o più caratteri di output.

## <a name="return-value"></a>Valore restituito

Se l'operazione riesce, restituisce il valore del primo di tali condizioni che si applica, dato il corrente *stato* valore:

|Valore|Condizione|
|-----------|---------------|
|0|Alla successiva *max_bytes* oppure un minor numero di caratteri convertita da *origine* corrisponde al carattere "wide" null, corrisponde al valore archiviato se *destinazione* non è null.<br /><br /> *stato* contiene lo stato iniziale di spostamento.|
|Compreso tra 1 e *max_bytes*, inclusi,|Il valore restituito è il numero di byte *origine* che completa un carattere multibyte valido. Il carattere wide convertito viene archiviato se *destinazione* non è null.|
|-3|Il successivo carattere wide risultante da una precedente chiamata alla funzione è stato archiviato *destinazione* se *destinazione* non è null. Nessun byte da *origine* vengono utilizzati da questa chiamata alla funzione.<br /><br /> Quando si *origine* punta a un carattere multibyte che richiede più di un carattere wide da rappresentare (ad esempio, una coppia di surrogati), quindi il *stato* valore viene aggiornato in modo che scrive la successiva chiamata di funzione  il carattere aggiuntivo.|
|-2|Alla successiva *max_bytes* byte rappresentano un incompleto ma potenzialmente valido carattere multibyte. Nessun valore viene archiviato *destinazione*. Questo risultato può verificarsi se *max_bytes* è uguale a zero.|
|-1|Si è verificato un errore di codifica. Alla successiva *max_bytes* o numero di byte inferiore non contribuisce a un carattere multibyte valido e completo. Nessun valore viene archiviato *destinazione*.<br /><br /> **EILSEQ** archiviati in **errno** e lo stato di conversione *stato* non è specificato.|

## <a name="remarks"></a>Note

Il **mbrtoc16** funzione legge fino a *max_bytes* byte dal *origine* per trovare il primo completamento carattere multibyte valido e archivi UTF-16 equivalente carattere in *destinazione*. I byte di origine vengono interpretati in base alle impostazioni locali multibyte del thread corrente. Se il carattere multibyte richiede più di un carattere di output UTF-16, ad esempio una coppia di surrogati, il *stato* valore è impostato per archiviare il successivo carattere UTF-16 *destinazione* alla chiamata successiva a **mbrtoc16**. Il **mbrtoc32** funzione è identica, ma l'output viene archiviato come un carattere UTF-32.

Se *origine* è null, queste funzioni restituiscono l'equivalente di una chiamata effettuata usando gli argomenti di **NULL** per *destinazione*, **""** per *origine*e 1 per *max_bytes*. I valori passati di *destinazione* e *max_bytes* vengono ignorati.

Se *origine* è non null, la funzione inizia all'inizio della stringa e controlla fino a *max_bytes* byte per determinare il numero di byte necessari per completare il carattere multibyte successivo, tra cui tutte le sequenze di spostamento. Se i byte esaminati contengono un carattere multibyte valido e completo, la funzione converte il carattere nel carattere o nei caratteri wide a 16 bit o 32 bit equivalenti. Se *destinazione* non è null, la funzione archivia il risultato primo (e probabilmente l'unico) carattere nella destinazione. Se sono necessari caratteri di output aggiuntivi, viene impostato un valore *stato*, in modo che le successive chiamate alla funzione i caratteri aggiuntivi e restituiscono il valore -3. Se non sono necessari, quindi più caratteri di output *stato* è impostato sullo stato iniziale di spostamento.

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
