---
title: "Utilizzo di mapping testo generico | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_UNICODE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_MBCS (tipo di dati)"
  - "_T (tipo)"
  - "_TCHAR (tipo)"
  - "_TEXT (tipo)"
  - "_TINT (tipo)"
  - "_TSCHAR (tipo)"
  - "_TUCHAR (tipo)"
  - "_TXCHAR (tipo)"
  - "_UNICODE (costante)"
  - "tipi di dati per testo generico"
  - "mapping testo generico"
  - "mapping, testo generico"
  - "MBCS (tipo di dati)"
  - "T (tipo)"
  - "TCHAR (tipo)"
  - "tipi di dati TCHAR.H, mapping definiti"
  - "TEXT (tipo)"
  - "TINT (tipo)"
  - "TSCHAR (tipo)"
  - "TUCHAR (tipo)"
  - "TXCHAR (tipo)"
  - "UNICODE (costante)"
ms.assetid: 2848121c-e51f-4b9b-a2e6-833ece4b0cb3
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Utilizzo di mapping testo generico
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Allo scopo di semplificare lo sviluppo di codice per diversi mercati internazionali, la libreria di runtime di Microsoft fornisce mappature di testo generico specifiche di Microsoft per molti tipi di dati, routine e altri oggetti.  I mapping sono definiti in TCHAR.H.  È possibile utilizzare questi mapping di nomi per produrre codice generico che può essere compilato per uno qualsiasi dei tre tipi di set di caratteri: ASCII \(SBCS\), MBCS, o Unicode, a seconda di una costante di manifesto definita utilizzando un'istruzione `#define`.  Le mappature di testo generico sono estensioni Microsoft non compatibili con lo standard ANSI.  
  
### Istruzioni del preprocessore per le mappature di testo generico  
  
|\#define|Versione compilata|Esempio|  
|--------------|------------------------|-------------|  
|`_UNICODE`|Unicode \(caratteri wide\)|`_tcsrev` corrisponde a `_wcsrev`|  
|`_MBCS`|Caratteri multibyte|`_tcsrev` corrisponde a `_mbsrev`|  
|Nessuna definizione. Questa è l'impostazione predefinita: non viene definito né `_UNICODE` né `_MBCS`.|SBCS \(ASCII\)|Viene eseguito il mapping dell'oggetto `_tcsrev` in `strrev`.|  
  
 Ad esempio, la funzione di testo generico `_tcsrev`, che è definita in TCHAR.H, corrisponde a `mbsrev` se nel programma è stato definito `MBCS` oppure a `_wcsrev` se è stato definito `_UNICODE` .  In caso contrario, viene eseguito il mapping di `_tcsrev` in `strrev`.  
  
 Il tipo di dati di testo generico `_TCHAR`, anche definito in TCHAR.H, viene mappato nel tipo `char` se `_MBCS` è definito, nel tipo `wchar_t` se `_UNICODE` è definito e nel tipo `char` se nessuna delle due costanti è definita.  Per facilitare la programmazione, vengono fornite in TCHAR.H altre mappature di tipi di dati, ma `_TCHAR` è il tipo più utile.  
  
### Mappature di tipi di dati di testo generico  
  
|Mappature di tipi di dati di testo generico|SBCS \(\_UNICODE, \_MBCS non definito\)|\_MBCS definito|\_UNICODE definito|  
|-------------------------------------------------|---------------------------------------------|---------------------|------------------------|  
|`_TCHAR`|`char`|`char`|`wchar_t`|  
|`_TINT`|`int`|`int`|`wint_t`|  
|`_TSCHAR`|`signed char`|`signed char`|`wchar_t`|  
|`_TUCHAR`|`unsigned char`|`unsigned char`|`wchar_t`|  
|`_TXCHAR`|`char`|`unsigned char`|`wchar_t`|  
|`_T` o `_TEXT`|Nessun effetto \(eliminato dal preprocessore\)|Nessun effetto \(eliminato dal preprocessore\)|`L` \(converte il carattere o la stringa seguente nell'equivalente Unicode\)|  
  
 Per un elenco completo delle mappature di testo generico di routine, variabili e altri oggetti, vedere [Mappature di testo generico](../c-runtime-library/generic-text-mappings.md).  
  
 Nei seguenti frammenti di codice viene illustrato l'utilizzo di `_TCHAR` e `_tcsrev` per impostare mappature con modelli MBSC, Unicode e SBCS.  
  
```  
_TCHAR *RetVal, *szString;  
RetVal = _tcsrev(szString);  
```  
  
 Se `MBCS` è stato definito, il preprocessore esegue il mapping del frammento precedente nel codice seguente:  
  
```  
char *RetVal, *szString;  
RetVal = _mbsrev(szString);  
```  
  
 Se `_UNICODE` è stato definito, il preprocessore esegue il mapping dello stesso frammento nel codice seguente:  
  
```  
wchar_t *RetVal, *szString;  
RetVal = _wcsrev(szString);  
```  
  
 Se non è stato definito né `_MBCS` né `_UNICODE`, il preprocessore tradurrà il codice in modo da utilizzare il codice ASCII a byte singolo come segue:  
  
```  
char *RetVal, *szString;  
RetVal = strrev(szString);  
```  
  
 Di conseguenza, è possibile scrivere, gestire e compilare un unico file di codice sorgente per eseguirlo con routine specifiche per uno dei tre tipi di set di caratteri.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Mapping testo generico](../c-runtime-library/generic-text-mappings.md)   
 [Mapping dei tipi di dati](../c-runtime-library/data-type-mappings.md)   
 [Mapping costanti e variabili globali](../c-runtime-library/constant-and-global-variable-mappings.md)   
 [Mapping di routine](../c-runtime-library/routine-mappings.md)   
 [Programma di testo generico di esempio](../c-runtime-library/a-sample-generic-text-program.md)