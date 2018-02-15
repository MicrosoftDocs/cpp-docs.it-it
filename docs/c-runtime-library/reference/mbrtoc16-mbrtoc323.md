---
title: mbrtoc16, mbrtoc323 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7e686a39266587fdc214ddbb0757672a57b94314
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="mbrtoc16-mbrtoc32"></a>mbrtoc16, mbrtoc32
Converte il primo carattere multibyte in una stringa a caratteri narrow nel carattere UTF-16 o UTF-32 equivalente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
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
  
#### <a name="parameters"></a>Parametri  
 `destination`  
 Puntatore al carattere `char16_t` o `char32_t` equivalente del carattere multibyte da convertire. Se Null, la funzione non archivia un valore.  
  
 `source`  
 Puntatore alla stringa di caratteri multibyte da convertire.  
  
 `max_bytes`  
 Numero massimo di byte in `source` da esaminare per un carattere da convertire. Deve trattarsi di un valore compreso tra uno e il numero di byte, incluso qualsiasi carattere di terminazione Null, rimanente in `source`.  
  
 `state`  
 Puntatore a un oggetto stato di conversione `mbstate_t` usato per interpretare la stringa multibyte da uno o più caratteri di output.  
  
## <a name="return-value"></a>Valore restituito  
 In caso di esito positivo, restituisce il valore della prima di tali condizioni che si applica, dato il corrente valore `state` :  
  
|Valore|Condizione|  
|-----------|---------------|  
|0|I successivi `max_bytes` caratteri (o un valore inferiore) convertiti da `source` corrispondono al carattere wide Null, cioè il valore archiviato se `destination` non è Null.<br /><br /> `state` contiene lo stato iniziale di spostamento.|  
|Tra 1 e `max_bytes`, inclusi|Il valore restituito è il numero di byte di `source` che completa un carattere multibyte valido. Il carattere wide convertito viene archiviato se `destination` non è Null.|  
|-3|Il successivo carattere wide risultante da una precedente chiamata alla funzione è stato archiviato in `destination` se `destination` non è Null. Nessun byte da `source` viene utilizzato da questa chiamata alla funzione.<br /><br /> Quando  `source` punta a un carattere multibyte che richiede più di un carattere wide da rappresentare (ad esempio, una coppia di surrogati), il valore `state` viene aggiornato in modo che la chiamata di funzione successiva scriva il carattere aggiuntivo.|  
|-2|I successivi `max_bytes` byte rappresentano un carattere multibyte incompleto ma potenzialmente valido. Nessun valore viene archiviato in `destination`. Questo risultato può verificarsi se `max_bytes` è zero.|  
|-1|Si è verificato un errore di codifica. I successivi `max_bytes` byte o un numero inferiore non contribuiscono a un carattere multibyte valido e completo. Nessun valore viene archiviato in `destination`.<br /><br /> `EILSEQ` viene archiviato in `errno` e non viene specificato lo stato di conversione `state` .|  
  
## <a name="remarks"></a>Note  
 La funzione `mbrtoc16` legge fino a `max_bytes` byte da `source` per trovare il primo carattere multibyte valido completo e archivia il carattere UTF-16 equivalente in `destination`. I byte di origine vengono interpretati in base alle impostazioni locali multibyte del thread corrente. Se il carattere multibyte richiede più di un carattere di output UTF-16, ad esempio una coppia di surrogati, il valore `state` è impostato in modo da archiviare il successivo carattere UTF-16 `destination` nella successiva chiamata a `mbrtoc16`. La funzione `mbrtoc32` è identica, ma l'output viene archiviato come carattere UTF-32.  
  
 Se `source` è Null, queste funzioni restituiscono l'equivalente di una chiamata effettuata usando gli argomenti di `NULL` per `destination`, `""` per `source`e `1` per `max_bytes`. I valori passati di `destination` e `max_bytes` vengono ignorati.  
  
 Se `source` non è Null, la funzione viene eseguita all'inizio della stringa e controlla fino a `max_bytes` byte per determinare il numero di byte necessari per completare il carattere multibyte successivo, comprese tutte le sequenze di spostamento. Se i byte esaminati contengono un carattere multibyte valido e completo, la funzione converte il carattere nel carattere o nei caratteri wide a 16 bit o 32 bit equivalenti. Se `destination` non è Null, la funzione archivia il primo (e probabilmente l'unico) carattere risultante nella destinazione. Se sono necessari caratteri di output aggiuntivi, viene impostato un valore in `state`, in modo che le successive chiamate alla funzione generino i caratteri aggiuntivi e restituiscano il valore -3. Se non sono più necessari caratteri di output, `state` viene impostato sullo stato iniziale di spostamento.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione C|Intestazione C++|  
|--------------|--------------|------------------|  
|`mbrtoc16`,                `mbrtoc32`|\<uchar.h>|\<cuchar>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Data Conversion](../../c-runtime-library/data-conversion.md)  (Conversione dei dati)  
 [Locale](../../c-runtime-library/locale.md)  (Impostazioni locali)  
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [c16rtomb, c32rtomb](../../c-runtime-library/reference/c16rtomb-c32rtomb1.md)   
 [mbrtowc](../../c-runtime-library/reference/mbrtowc.md)   
 [mbsrtowcs](../../c-runtime-library/reference/mbsrtowcs.md)   
 [mbsrtowcs_s](../../c-runtime-library/reference/mbsrtowcs-s.md)