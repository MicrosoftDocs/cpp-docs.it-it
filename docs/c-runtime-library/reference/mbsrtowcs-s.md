---
title: mbsrtowcs_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: mbsrtowcs_s
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
f1_keywords: mbsrtowcs_s
dev_langs: C++
helpviewer_keywords: mbsrtowcs_s function
ms.assetid: 4ee084ec-b15d-4e5a-921d-6584ec3b5a60
caps.latest.revision: "24"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 72489315ad23bf65086105c5d76da1edea48674d
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="mbsrtowcss"></a>mbsrtowcs_s
Convertire una stringa di caratteri multibyte nelle impostazioni locali correnti in una rappresentazione di stringa di caratteri wide. Una versione di [mbsrtowcs](../../c-runtime-library/reference/mbsrtowcs.md) con miglioramenti per la sicurezza. come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
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
  
#### <a name="parameters"></a>Parametri  
 [out] `pReturnValue`  
 Numero di caratteri convertiti.  
  
 [out] `wcstr`  
 Indirizzo del buffer in cui archiviare la stringa di caratteri wide convertita risultante.  
  
 [out] `sizeInWords`  
 Dimensioni di `wcstr` in parole (caratteri wide).  
  
 [in, out] `mbstr`  
 Puntatore indiretto alla posizione della stringa di caratteri multibyte da convertire.  
  
 [in] `count`  
 Numero massimo di caratteri wide da archiviare nel buffer `wcstr`, escluso il carattere Null di terminazione o [_TRUNCATE](../../c-runtime-library/truncate.md).  
  
 [in, out] `mbstate`  
 Puntatore a un oggetto stato di conversione `mbstate_t`. Se questo valore è un puntatore Null, viene usato un oggetto stato di conversione interno statico. Poiché l'oggetto `mbstate_t` interno non è thread-safe, è consigliabile passare sempre un parametro `mbstate` fornito dall'utente.  
  
## <a name="return-value"></a>Valore restituito  
 Se la conversione viene eseguita correttamente restituisce zero, in caso contrario un codice di errore.  
  
|Condizione di errore|Valore restituito e `errno`|  
|---------------------|------------------------------|  
|`wcstr` è un puntatore Null e `sizeInWords` > 0|`EINVAL`|  
|`mbstr` è un puntatore Null|`EINVAL`|  
|La stringa a cui punta indirettamente `mbstr` contiene una sequenza multibyte non valida per le impostazioni locali correnti.|`EILSEQ`|  
|Il buffer di destinazione è troppo piccolo per contenere la stringa convertita (a meno che `count` non sia `_TRUNCATE`. Per altre informazioni, vedere Note)|`ERANGE`|  
  
 Se si verifica una di queste condizioni, viene richiamata l'eccezione di parametro non valido come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce un codice errore e imposta `errno` come indicato nella tabella.  
  
## <a name="remarks"></a>Note  
 La funzione `mbsrtowcs_s` converte una stringa di caratteri multibyte a cui punta indirettamente `mbstr` in caratteri wide archiviati nel buffer a cui punta `wcstr`, usando lo stato di conversione contenuto in `mbstate`. La conversione continuerà per ogni carattere fino a quando non viene soddisfatta una delle seguenti condizioni:  
  
-   Viene rilevato un carattere Null multibyte  
  
-   Viene rilevato un carattere multibyte non valido  
  
-   Il numero di caratteri wide archiviati nel buffer `wcstr` è uguale a `count`.  
  
 La stringa di destinazione `wcstr` termina sempre con Null, anche in caso di errore, a meno che `wcstr` non sia un puntatore Null.  
  
 Se `count` è il valore speciale [_TRUNCATE](../../c-runtime-library/truncate.md), `mbsrtowcs_s` converte la porzione di stringa più ampia possibile che può essere inclusa nel buffer di destinazione, lasciando però spazio per un carattere di terminazione Null.  
  
 Se `mbsrtowcs_s` converte correttamente la stringa di origine, inserisce la dimensione in caratteri wide della stringa convertita e il carattere di terminazione Null in `*pReturnValue`, a condizione che `pReturnValue` non sia un puntatore Null. Ciò si verifica anche quando l'argomento `wcstr` è un puntatore Null e permette di determinare le dimensioni del buffer richieste. Se `wcstr` è un puntatore Null, `count` viene ignorato.  
  
 Se `wcstr` non è un puntatore Null, all'oggetto puntatore a cui punta `mbstr` viene assegnato un puntatore Null se la conversione è stata arrestata in quanto è stato raggiunto un carattere di terminazione Null. In caso contrario, viene assegnato l'indirizzo subito dopo l'ultimo carattere multibyte convertito, se presente. Ciò consente a una chiamata di funzione successiva di riavviare la conversione nel punto in cui la chiamata è stata arrestata.  
  
 Se `mbstate` è un puntatore Null, viene usato l'oggetto statico dello stato di conversione `mbstate_t` della libreria interna. Poiché l'oggetto statico interno non è thread-safe, è consigliabile passare un valore `mbstate` fornito dall'utente.  
  
 Se `mbsrtowcs_s` rileva un carattere multibyte non valido nelle impostazioni locali correnti, inserisce -1 in `*pReturnValue`, imposta il buffer di destinazione `wcstr` su una stringa vuota, imposta `errno` su `EILSEQ` e restituisce `EILSEQ`.  
  
 Se le sequenze a cui punta `mbstr` e `wcstr` si sovrappongono, il comportamento di `mbsrtowcs_s` non è definito. `mbsrtowcs_s` viene influenzato dalla categoria LC_TYPE delle impostazioni locali correnti.  
  
> [!IMPORTANT]
>  Verificare che `wcstr` e `mbstr` non si sovrappongano e che `count` rispecchi correttamente il numero di caratteri multibyte da convertire.  
  
 La funzione `mbsrtowcs_s` differisce da [mbstowcs_s, _mbstowcs_s_l](../../c-runtime-library/reference/mbstowcs-s-mbstowcs-s-l.md) per la possibilità di essere riavviata. Lo stato di conversione viene archiviato in `mbstate` per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili. Ad esempio, un'applicazione deve usare `mbsrlen` anziché `mbslen` se viene usata una chiamata successiva a `mbsrtowcs_s` anziché `mbstowcs_s.`.  
  
 In C++ l'utilizzo di questa funzione è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure usando le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
## <a name="exceptions"></a>Eccezioni  
 La funzione `mbsrtowcs_s` è multithread-safe finché nessuna funzione nel thread corrente chiama `setlocale`, finché questa funzione è in esecuzione e l'argomento `mbstate` non è un puntatore Null.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`mbsrtowcs_s`|\<wchar.h>|  
  
## <a name="see-also"></a>Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [mbrtowc](../../c-runtime-library/reference/mbrtowc.md)   
 [mbtowc, _mbtowc_l](../../c-runtime-library/reference/mbtowc-mbtowc-l.md)   
 [mbstowcs_s, _mbstowcs_s_l](../../c-runtime-library/reference/mbstowcs-s-mbstowcs-s-l.md)   
 [mbsinit](../../c-runtime-library/reference/mbsinit.md)