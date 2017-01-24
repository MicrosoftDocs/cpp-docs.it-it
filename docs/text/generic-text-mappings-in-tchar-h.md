---
title: "Mappature di testo generico in Tchar.h | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - ""tchar.h""
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "set di caratteri [C++], mapping testo generico"
  - "mapping testo generico [C++]"
  - "mapping testo generico"
  - "mapping [C++], TCHAR.H"
  - "MBCS [C++], mapping testo generico"
  - "tipi di dati TCHAR.H, mapping"
  - "Unicode [C++], mapping testo generico"
ms.assetid: 01e1bb74-5a01-4093-8720-68b6c1fdda80
caps.latest.revision: 12
caps.handback.revision: 12
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Mappature di testo generico in Tchar.h
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Allo scopo di semplificare il trasporto del codice per l'utilizzo internazionale, la libreria di runtime [!INCLUDE[TLA#tla_ms](../text/includes/tlasharptla_ms_md.md)] fornisce mappature di testo generico specifiche di [!INCLUDE[TLA#tla_ms](../text/includes/tlasharptla_ms_md.md)] per molti tipi di dati, routine e altri oggetti.  È possibile utilizzare queste mappature, definite in Tchar.h, per scrivere codice generico che può essere compilato per il formato a byte singolo, multibyte o [!INCLUDE[TLA#tla_unicode](../cpp/includes/tlasharptla_unicode_md.md)], a seconda delle costanti di manifesto definite mediante un'istruzione `#define`.  Le mappature di testo generico sono estensioni [!INCLUDE[TLA#tla_ms](../text/includes/tlasharptla_ms_md.md)] non compatibili con lo standard [!INCLUDE[vcpransi](../preprocessor/includes/vcpransi_md.md)].  
  
 Se si utilizza il file di intestazione Tchar.h, è possibile compilare applicazioni a byte singolo, MBCS e [!INCLUDE[TLA#tla_unicode](../cpp/includes/tlasharptla_unicode_md.md)] a partire dallo stesso codice sorgente.  Il file Tchar.h definisce le macro caratterizzate dal prefisso `_tcs` che, con le corrette definizioni del preprocessore, corrispondono, a seconda dei casi, alla funzione `str`, `_mbs` o `wcs`.  Per compilare applicazioni per il formato MBCS, definire il simbolo `_MBCS`.  Per compilare applicazioni per il formato [!INCLUDE[TLA#tla_unicode](../cpp/includes/tlasharptla_unicode_md.md)], definire il simbolo `_UNICODE`.  Per compilare un'applicazione a byte singolo, non definire nessuno dei due formati; questa è l'impostazione predefinita.  In base all'impostazione predefinita, per le applicazioni MFC viene definito `_MBCS`.  
  
 Il tipo di dati `_TCHAR` è definito condizionatamente in Tchar.h.  Se il simbolo `_UNICODE` è definito per la build, `_TCHAR` viene definito come `wchar_t`; in caso contrario, per le build in formato a byte singolo e Multibyte Character Set, viene definito come `char`. `wchar_t`, il tipo di dati di base dei caratteri di tipo "wide" Unicode, è l'equivalente a 16 bit di un `char` con segno a 8 bit. Per le applicazioni internazionali, utilizzare la famiglia di funzioni `_tcs`, che opera con le unità di `_TCHAR` e non con i byte.  Ad esempio, `_tcsncpy` copia `n` `_TCHARs`, non `n` byte.  
  
 Poiché alcune funzioni di gestione delle stringhe SBCS utilizzano parametri `char*` \(con segno\), quando viene definito `_MBCS`, verrà visualizzato un messaggio di avviso del compilatore per segnalare un tipo non corrispondente.  È possibile evitare questo avviso in tre modi.  
  
1.  Utilizzare i thunk delle funzioni inline indipendenti dai tipi in Tchar.h.  Questo è il comportamento predefinito.  
  
2.  Utilizzare le macro dirette in Tchar.h definendo `_MB_MAP_DIRECT` nella riga di comando.  Se si esegue questa operazione, è necessario abbinare i tipi in modo manuale.  È il metodo più veloce, ma non è indipendente dai tipi.  
  
3.  Utilizzare i thunk delle funzioni della libreria collegata staticamente indipendente dai tipi in Tchar.h.  A tale scopo, definire costante `_NO_INLINING` sulla riga di comando.  Si tratta del metodo meno veloce, ma è anche quello che garantisce una maggiore indipendenza dai tipi.  
  
### Istruzioni del preprocessore per le mappature di testo generico  
  
|\#define|Versione compilata|Esempio|  
|--------------|------------------------|-------------|  
|`_UNICODE`|[!INCLUDE[TLA#tla_unicode](../cpp/includes/tlasharptla_unicode_md.md)] \(a caratteri "wide"\)|`_tcsrev` corrisponde a `_wcsrev`|  
|`_MBCS`|Caratteri multibyte|`_tcsrev` corrisponde a `_mbsrev`|  
|Nessuna definizione. Questa è l'impostazione predefinita: non viene definito né `_UNICODE` né `_MBCS`.|SBCS \([!INCLUDE[TLA#tla_ascii](../text/includes/tlasharptla_ascii_md.md)]\)|`_tcsrev` corrisponde a `strrev`|  
  
 Ad esempio, la funzione di testo generico `_tcsrev`, che è definita in Tchar.h, corrisponde a `_mbsrev` se nel programma è stato definito `_MBCS` oppure a `_wcsrev` se è stato definito `_UNICODE`.  In caso contrario, `_tcsrev` corrisponde a `strrev`.  Per facilitare la programmazione, vengono fornite in Tchar.h altre mappature di tipi di dati, ma `_TCHAR` costituisce la più utile.  
  
### Mappature di tipi di dati di testo generico  
  
|Testo generico<br /><br /> Nome tipo di dati|\_UNICODE &<br /><br /> \_MBCS non definito|\_MBCS<br /><br /> definito|\_UNICODE<br /><br /> definito|  
|------------------------------------------|-----------------------------------------|-------------------------|----------------------------|  
|`_TCHAR`|`char`|`char`|`wchar_t`|  
|`_TINT`|`int`|`unsigned int`|`wint_t`|  
|`_TSCHAR`|`signed char`|`signed char`|`wchar_t`|  
|`_TUCHAR`|`unsigned char`|`unsigned char`|`wchar_t`|  
|`_TXCHAR`|`char`|`unsigned char`|`wchar_t`|  
|`_T` o `_TEXT`|Nessun effetto \(eliminato dal preprocessore\)|Nessun effetto \(eliminato dal preprocessore\)|`L` \(converte il carattere o la stringa seguente nell'equivalente [!INCLUDE[TLA#tla_unicode](../cpp/includes/tlasharptla_unicode_md.md)]\)|  
  
 Per un elenco delle mappature di testo generico delle routine, delle variabili e di altri oggetti, vedere [Mapping testo generico](../c-runtime-library/generic-text-mappings.md) in Riferimenti alla libreria di runtime.  
  
> [!NOTE]
>  Non utilizzare la famiglia di funzioni `str` con le stringhe Unicode, che possono contenere byte null.  In modo analogo, non utilizzare la famiglia di funzioni `wcs` con le stringhe MBCS, o SBCS.  
  
 Nei seguenti frammenti di codice viene illustrato l'utilizzo di `_TCHAR` e `_tcsrev` per impostare mappature con modelli SBCS, [!INCLUDE[TLA#tla_unicode](../cpp/includes/tlasharptla_unicode_md.md)] e MBCS.  
  
```  
_TCHAR *RetVal, *szString;  
RetVal = _tcsrev(szString);  
```  
  
 Se è stato definito `_MBCS`, il preprocessore tradurrà il codice come segue:  
  
```  
char *RetVal, *szString;  
RetVal = _mbsrev(szString);  
```  
  
 Se è stato definito `_UNICODE`, il preprocessore tradurrà il codice come segue:  
  
```  
wchar_t *RetVal, *szString;  
RetVal = _wcsrev(szString);  
```  
  
 Se non è stato definito né `_MBCS` né `_UNICODE`, il preprocessore tradurrà il codice in modo da utilizzare il codice [!INCLUDE[TLA#tla_ascii](../text/includes/tlasharptla_ascii_md.md)] a byte singolo come segue:  
  
```  
char *RetVal, *szString;  
RetVal = strrev(szString);  
```  
  
 Di conseguenza, è possibile scrivere, gestire e compilare un unico file di codice sorgente per eseguirlo con routine specifiche per uno dei tre tipi di set di caratteri.  
  
## Vedere anche  
 [Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)   
 [Utilizzo dei tipi di dati di TCHAR.H con il codice \_MBCS](../text/using-tchar-h-data-types-with-mbcs-code.md)