---
title: "localeconv | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "localeconv"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
apitype: "DLLExport"
f1_keywords: 
  - "localeconv"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lconv (tipo)"
  - "localeconv (funzione)"
  - "impostazioni locali, recupero di informazioni"
ms.assetid: 7ecdb1f2-88f5-4037-a0e7-c754ab003660
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# localeconv
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene informazioni dettagliate sulle impostazioni locali.  
  
## Sintassi  
  
```  
  
struct lconv *localeconv( void );  
```  
  
## Valore restituito  
 `localeconv` restituisce un puntatore a un oggetto compilato di tipo [lconv struct](../../c-runtime-library/standard-types.md).  I valori contenuti nell'oggetto possono essere sovrascritti dalle chiamate successive a `localeconv` e non modificano direttamente l'oggetto.  Le chiamate a [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) con i valori `category` di `LC_ALL`, `LC_MONETARY`, o `LC_NUMERIC` sovrascrivono il contenuto della struttura.  
  
## Note  
 La funzione `localeconv` ottiene informazioni dettagliate sulla formattazione numerica per le impostazioni locali correnti.  Queste informazioni vengono archiviate in una struttura di tipo **lconv**.  La struttura **lconv**, definita in LOCALE.H, contiene i seguenti membri:  
  
 `char *decimal_point, wchar_t *_W_decimal_point`  
 Carattere del separatore decimale per quantità non monetarie.  
  
 `char *thousands_sep, wchar_t *_W_thousands_sep`  
 Carattere che separa i gruppi di cifre a sinistra del separatore decimale per quantità non monetarie.  
  
 `char *grouping`  
 Dimensione di ciascun gruppo di cifre in quantità non monetarie.  
  
 `char *int_curr_symbol, wchar_t *_W_int_curr_symbol`  
 Simbolo di valuta internazionale per le impostazioni locali correnti.  I primi tre caratteri specificano il simbolo di valuta internazionale alfabetico come definito nello standard *ISO 4217 Codici per la rappresentazione di valuta e fondi*.  Il quarto carattere \(immediatamente prima di carattere null\) separa il simbolo di valuta internazionale dalla quantità monetaria.  
  
 `char *currency_symbol, wchar_t *_W_currency_symbol`  
 Simbolo di valuta locale per le impostazioni locali correnti.  
  
 `char *mon_decimal_point, wchar_t *_W_mon_decimal_point`  
 Carattere del separatore decimale per quantità monetarie.  
  
 `char *mon_thousands_sep, wchar_t *_W_mon_thousands_sep`  
 Separatore per gruppi di cifre a sinistra del separatore decimale in quantità monetarie.  
  
 `char *mon_grouping`  
 Dimensione di ciascun gruppo di cifre in quantità monetarie.  
  
 `char *positive_sign, wchar_t *_W_positive_sign`  
 Stringa che denota il segno per quantità monetarie non negative.  
  
 `char *negative_sign, wchar_t *_W_negative_sign`  
 Stringa che denota il segno per quantità monetarie negative.  
  
 `char int_frac_digits`  
 Numero di cifre a destra del separatore decimale in quantità monetarie formattate a livello internazionale.  
  
 `char frac_digits`  
 Numero di cifre a destra del separatore decimale in quantità monetarie formattate.  
  
 `char p_cs_precedes`  
 Impostato ad 1 se il simbolo di valuta precede il valore per quantità monetaria formattata non negativa.  Impostato a 0 se il simbolo segue il valore.  
  
 `char p_sep_by_space`  
 Impostato ad 1 se il simbolo di valuta è separato tramite uno spazio dal valore per la quantità monetaria formattata non negativa.  Impostato a 0 se non è presente una separazione tramite uno spazio.  
  
 `char n_cs_precedes`  
 Impostato ad 1 se il simbolo di valuta precede il valore per quantità monetaria formattata negativa.  Impostato a 0 se il simbolo segue il valore.  
  
 `char n_sep_by_space`  
 Impostato ad 1 se il simbolo di valuta è separato tramite uno spazio dal valore per la quantità monetaria formattata negativa.  Impostato a 0 se non è presente una separazione tramite uno spazio.  
  
 `char p_sign_posn`  
 Posizione del segno positivo in quantità monetaria formattata non negativa.  
  
 `char n_sign_posn`  
 Posizione del segno positivo in quantità monetaria formattata negativa.  
  
 I membri della struttura che hanno versioni `char` `*` e `wchar_t *` sono puntatori a stringhe.  Qualsiasi di questi che equivalga a `""` \(o `L""` per `wchar_t *`\) è di lunghezza zero oppure non supportato nelle impostazioni locali correnti.  Si noti che `decimal_point` e `_W_decimal_point` sono sempre supportati e di lunghezza diversa da zero.  
  
 I membri `char` della struttura sono numeri piccoli non negativi, non caratteri.  Qualsiasi di questi che equivalga a **CHAR\_MAX** non è supportato nelle impostazioni locali correnti.  
  
 Gli elementi di **grouping** e **mon\_grouping** vengono interpretati secondo le regole seguenti.  
  
 **CHAR\_MAX**  
 Non eseguire alcun raggruppamento ulteriore.  
  
 0  
 Utilizzare l'elemento precedente per ognuna delle cifre rimanenti.  
  
 *n*  
 Numero di cifre che costituisce il gruppo corrente.  L'elemento seguente viene esaminato per determinare la dimensione del gruppo successivo di cifre prima del gruppo corrente.  
  
 I valori per **int\_curr\_symbol** vengono interpretati secondo le regole seguenti:  
  
-   I primi tre caratteri specificano il simbolo di valuta internazionale alfabetico come definito nello standard *ISO 4217 Codici per la rappresentazione di valuta e fondi*.  
  
-   Il quarto carattere \(immediatamente prima del carattere null\) separa il simbolo di valuta internazionale dalla quantità monetaria.  
  
 I valori per **p\_cs\_precedes** e **n\_cs\_precedes** vengono interpretati secondo le regole seguenti \(la regola di **n\_cs\_precedes** è tra parentesi\):  
  
 0  
 Il simbolo di valuta segue il valore per il valore monetario formattato non negativo \(negativo\).  
  
 1  
 Il simbolo di valuta precede il valore per il valore monetario formattato non negativo \(negativo\).  
  
 I valori per **p\_sep\_by\_space** e **n\_sep\_by\_space** vengono interpretati secondo le regole seguenti \(la regola di **n\_sep\_by\_space** è tra parentesi\):  
  
 0  
 Il simbolo di valuta è separato dal valore tramite uno spazio per il valore monetario formattato non negativo \(negativo\).  
  
 1  
 Non vi è separazione tramite spazio tra il simbolo di valuta ed il valore del valore monetario formattato non negativo \(negativo\).  
  
 I valori per **p\_sign\_posn** e **n\_sign\_posn** vengono interpretati secondo le regole seguenti:  
  
 0  
 Quantità e simbolo di valuta sono tra parentesi.  
  
 1  
 La stringa del segno precede la quantità ed il simbolo di valuta.  
  
 2  
 La stringa del segno segue la quantità ed il simbolo di valuta.  
  
 3  
 La stringa del segno precede immediatamente il simbolo di valuta.  
  
 4  
 La stringa del segno segue immediatamente il simbolo di valuta.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`localeconv`|\<locale.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Vedere anche  
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [setlocale](../../preprocessor/setlocale.md)   
 [Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)   
 [strftime, wcsftime, \_strftime\_l, \_wcsftime\_l](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)   
 [strxfrm, wcsxfrm, \_strxfrm\_l, \_wcsxfrm\_l](../../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)