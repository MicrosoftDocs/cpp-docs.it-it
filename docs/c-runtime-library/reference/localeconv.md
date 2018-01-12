---
title: localeconv | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: localeconv
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
apitype: DLLExport
f1_keywords: localeconv
dev_langs: C++
helpviewer_keywords:
- lconv type
- localeconv function
- locales, getting information on
ms.assetid: 7ecdb1f2-88f5-4037-a0e7-c754ab003660
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2cbd897b353f8a915fb4a29d61d0954b9b5a7f53
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="localeconv"></a>localeconv
Ottiene informazioni dettagliate sulle impostazioni locali.  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct lconv *localeconv( void );  
```  
  
## <a name="return-value"></a>Valore restituito  
 `localeconv` restituisce un puntatore a un oggetto compilato di tipo [struct lconv](../../c-runtime-library/standard-types.md). I valori contenuti nell'oggetto vengono copiati dalle impostazioni locali nel servizio di archiviazione locale di thread e può essere sovrascritto da chiamate successive a `localeconv`. Le modifiche apportate ai valori in questo oggetto non modificare le impostazioni locali. Le chiamate a [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) con i valori `LC_ALL`, `LC_MONETARY` o `LC_NUMERIC` per `category` sovrascrivono il contenuto della struttura.  
  
## <a name="remarks"></a>Note  
 La funzione `localeconv` ottiene informazioni dettagliate sulla formattazione numerica per le impostazioni locali correnti. Queste informazioni vengono archiviate in una struttura di tipo `lconv`. Il `lconv` struttura, definito nelle impostazioni locali. H, contiene i membri seguenti:  
  
 `char *decimal_point, wchar_t *_W_decimal_point`  
 Carattere del separatore decimale per le quantità non monetarie.  
  
 `char *thousands_sep, wchar_t *_W_thousands_sep`  
 Carattere che separa i gruppi di cifre a sinistra del separatore decimale per le quantità non monetarie.  
  
 `char *grouping`  
 Puntatore a un `char`-dimensioni integer che contiene la dimensione di ogni gruppo di cifre in quantità non monetarie.  
  
 `char *int_curr_symbol, wchar_t *_W_int_curr_symbol`  
 Simbolo di valuta internazionale per le impostazioni locali correnti. I primi tre caratteri specificano il simbolo di valuta internazionale alfabetico come definito nello standard *ISO 4217 dei codici per la rappresentazione di valute e fondi*. Il quarto carattere (carattere Null immediatamente precedente) separa il simbolo di valuta internazionale dalla quantità monetaria.  
  
 `char *currency_symbol, wchar_t *_W_currency_symbol`  
 Simbolo di valuta locale per le impostazioni locali correnti.  
  
 `char *mon_decimal_point, wchar_t *_W_mon_decimal_point`  
 Carattere del separatore decimale per le quantità monetarie.  
  
 `char *mon_thousands_sep, wchar_t *_W_mon_thousands_sep`  
 Separatore per i gruppi di cifre a sinistra del separatore decimale nelle quantità monetarie.  
  
 `char *mon_grouping`  
 Puntatore a un `char`-dimensioni integer che contiene la dimensione di ogni gruppo di cifre in quantità monetaria.  
  
 `char *positive_sign, wchar_t *_W_positive_sign`  
 Stringa del segno per le quantità monetarie non negative.  
  
 `char *negative_sign, wchar_t *_W_negative_sign`  
 Stringa del segno per le quantità monetarie negative.  
  
 `char int_frac_digits`  
 Numero di cifre a destra del separatore decimale in quantità monetarie con formattazione internazionale.  
  
 `char frac_digits`  
 Numero di cifre a destra del separatore decimale in quantità monetarie formattate.  
  
 `char p_cs_precedes`  
 Impostare su 1 se il simbolo di valuta precede il valore per la quantità monetaria formattata non negativa. Impostare su 0 se il simbolo segue il valore.  
  
 `char p_sep_by_space`  
 Impostare su 1 se il simbolo di valuta è separato con uno spazio dal valore per la quantità monetaria formattata non negativa. Impostare su 0 in assenza di uno spazio di separazione.  
  
 `char n_cs_precedes`  
 Impostare su 1 se il simbolo di valuta precede il valore per la quantità monetaria formattata negativa. Impostare su 0 se il simbolo segue il valore.  
  
 `char n_sep_by_space`  
 Impostare su 1 se il simbolo di valuta è separato con uno spazio dal valore per la quantità monetaria formattata negativa. Impostare su 0 in assenza di uno spazio di separazione.  
  
 `char p_sign_posn`  
 Posizione del segno positivo in quantità monetarie formattata non negative.  
  
 `char n_sign_posn`  
 Posizione del segno positivo in quantità monetarie formattata negative.  
  
Eccezione di quanto specificati, membri del `lconv` struttura con `char *` e `wchar_t *` versioni sono puntatori alle stringhe. Qualsiasi membro tra questi uguale a `""` (o `L""` per `wchar_t *`) è di lunghezza zero oppure non è supportato nelle impostazioni locali correnti. Si noti che `decimal_point` e `_W_decimal_point` sono sempre supportati e di lunghezza diversa da zero.  
  
I membri `char` della struttura sono numeri non negativi piccoli, non caratteri. Uno di questi che è uguale a `CHAR_MAX` non è supportata nelle impostazioni locali correnti.  
  
I valori di `grouping` e `mon_grouping` vengono interpretati in base alle regole seguenti:  
  
- `CHAR_MAX`-Non eseguire un'ulteriore raggruppamento.  
  
- 0 - utilizzare l'elemento precedente per ognuna delle cifre rimanenti.  
  
- *n*-Numero di cifre che costituiscono il gruppo corrente. Viene esaminato l'elemento successivo per determinare le dimensioni del gruppo successivo di cifre prima del gruppo corrente.  
  
I valori per `int_curr_symbol` vengono interpretati in base alle regole seguenti:  
  
-   I primi tre caratteri specificano il simbolo di valuta internazionale alfabetico come definito nello standard *ISO 4217 dei codici per la rappresentazione di valute e fondi*.  
  
-   Il quarto carattere (carattere Null immediatamente precedente) separa il simbolo di valuta internazionale dalla quantità monetaria.  
  
I valori per `p_cs_precedes` e `n_cs_precedes` vengono interpretati in base alle regole seguenti (la `n_cs_precedes` regola è racchiuso tra parentesi):  
  
- 0 - simbolo di valuta seguito valore non negativo valore monetario formattato (negativo).  
  
- 1 - simbolo di valuta precede valore non negativo valore monetario formattato (negativo).  
  
I valori per `p_sep_by_space` e `n_sep_by_space` vengono interpretati in base alle regole seguenti (la `n_sep_by_space` regola è racchiuso tra parentesi):  
  
- 0 - simbolo di valuta è separato dal valore dello spazio per valore monetario formattato (negativo) non negativo.  
  
- 1 - non c'è alcuna separazione di spazio tra il simbolo di valuta e il valore per valore monetario formattato (negativo) non negativo.  
  
I valori per `p_sign_posn` e `n_sign_posn` vengono interpretati in base alle regole seguenti:  
  
- 0 - simbolo di valuta e quantità racchiudono tra parentesi.  
  
- 1 - sign stringa precede simbolo di valuta e quantità.  
  
- 2 - stringa di sign segue simbolo di valuta e quantità.  
  
- 3 - accesso stringa precede il simbolo di valuta.  
  
- 4 - sign stringa immediatamente il simbolo di valuta indicato di seguito.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`localeconv`|\<locale.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Locale](../../c-runtime-library/locale.md)  (Impostazioni locali)  
 [setlocale](../../preprocessor/setlocale.md)   
 [Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)   
 [strftime, wcsftime, _strftime_l, _wcsftime_l](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)   
 [strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](../../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)