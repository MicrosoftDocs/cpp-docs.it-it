---
title: mbsrtowcs | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ff120fea2ec3f1ea659233ccee3f66514d0fd76b
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="mbsrtowcs"></a>mbsrtowcs
Converte una stringa di caratteri multibyte delle impostazioni locali correnti in una stringa di caratteri wide corrispondente, con la possibilità di ricominciare nel mezzo di un carattere multibyte. È disponibile una versione più sicura di questa funzione. Vedere [mbsrtowcs_s](../../c-runtime-library/reference/mbsrtowcs-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
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
  
#### <a name="parameters"></a>Parametri  
 [out] `wcstr`  
 Indirizzo in cui archiviare la stringa di caratteri wide convertita risultante.  
  
 [in, out] `mbstr`  
 Puntatore indiretto alla posizione della stringa di caratteri multibyte da convertire.  
  
 [in] `count`  
 Numero massimo di caratteri (non byte) da convertire e archiviare in `wcstr`.  
  
 [in, out] `mbstate`  
 Puntatore a un oggetto stato di conversione `mbstate_t`. Se questo valore è un puntatore Null, viene usato un oggetto stato di conversione interno statico. Poiché l'oggetto `mbstate_t` interno non è thread-safe, è consigliabile passare sempre un parametro `mbstate` fornito dall'utente.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce il numero di caratteri convertito correttamente, escluso il carattere di terminazione Null, se presente. Restituisce (size_t)(-1) se si è verificato un errore e imposta `errno` su EILSEQ.  
  
## <a name="remarks"></a>Note  
 La funzione `mbsrtowcs` converte una stringa di caratteri multibyte a cui punta indirettamente `mbstr` in caratteri wide archiviati nel buffer a cui punta `wcstr`, usando lo stato di conversione contenuto in `mbstate`. La conversione continua per ciascun carattere fino a quando non viene rilevato un carattere multibyte di terminazione Null, non viene rilevata una sequenza multibyte che non corrisponde a un carattere valido nelle impostazioni locali correnti o non vengono convertiti `count` caratteri. Se `mbsrtowcs` rileva il carattere multibyte Null ('\0') nel momento in cui si verifica `count` o subito prima, lo converte in un carattere di terminazione Null a 16 bit e si arresta.  
  
 Pertanto, la stringa di caratteri wide in `wcstr` termina con Null solo se `mbsrtowcs` rileva un carattere multibyte Null durante la conversione. Se le sequenze a cui punta `mbstr` e `wcstr` si sovrappongono, il comportamento di `mbsrtowcs` non è definito. `mbsrtowcs` viene influenzato dalla categoria LC_TYPE delle impostazioni locali correnti.  
  
 La funzione `mbsrtowcs` differisce da [mbstowcs, _mbstowcs_l](../../c-runtime-library/reference/mbstowcs-mbstowcs-l.md) per la possibilità di essere riavviata. Lo stato di conversione viene archiviato in `mbstate` per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili.  Ad esempio, un'applicazione deve usare `mbsrlen` anziché `mbslen` se viene usata una chiamata successiva a `mbsrtowcs` anziché `mbstowcs.`.  
  
 Se `wcstr` non è un puntatore Null, all'oggetto puntatore a cui punta `mbstr` viene assegnato un puntatore Null se la conversione è stata arrestata in quanto è stato raggiunto un carattere di terminazione Null. In caso contrario, viene assegnato l'indirizzo subito dopo l'ultimo carattere multibyte convertito, se presente. Ciò consente a una chiamata di funzione successiva di riavviare la conversione nel punto in cui la chiamata è stata arrestata.  
  
 Se l'argomento `wcstr` è un puntatore Null, l'argomento `count` viene ignorato e `mbsrtowcs` restituisce le dimensioni necessarie in caratteri wide per la stringa di destinazione. Se `mbstate` è un puntatore Null, la funzione userà un oggetto stato di conversione `mbstate_t` interno statico non thread-safe. Se la sequenza di caratteri `mbstr` non ha una rappresentazione di caratteri multibyte corrispondente, viene restituito -1 e `errno` viene impostato su `EILSEQ`.  
  
 Se `mbstr` è un puntatore Null, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta `errno` su`EINVAL` e restituisce -1.  
  
 In C++, questa funzione presenta un overload di modello che richiama la relativa controparte sicura più recente. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
## <a name="exceptions"></a>Eccezioni  
 La funzione `mbsrtowcs` è multithread-safe finché nessuna funzione nel thread corrente chiama `setlocale`, finché questa funzione è in esecuzione e l'argomento `mbstate` non è un puntatore Null.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`mbsrtowcs`|\<wchar.h>|  
  
## <a name="see-also"></a>Vedere anche  
 [Data Conversion](../../c-runtime-library/data-conversion.md)  (Conversione dei dati)  
 [Locale](../../c-runtime-library/locale.md)  (Impostazioni locali)  
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [mbrtowc](../../c-runtime-library/reference/mbrtowc.md)   
 [mbtowc, _mbtowc_l](../../c-runtime-library/reference/mbtowc-mbtowc-l.md)   
 [mbstowcs, _mbstowcs_l](../../c-runtime-library/reference/mbstowcs-mbstowcs-l.md)   
 [mbsinit](../../c-runtime-library/reference/mbsinit.md)