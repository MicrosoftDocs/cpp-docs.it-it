---
title: "&lt;locale&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "<locale>"
  - "std.<locale>"
  - "locale/std::<locale>"
  - "std::<locale>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "locale (intestazione)"
ms.assetid: ca56f9d2-7128-44da-8df1-f4c78c17fbf2
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# &lt;locale&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce le classi modello e le funzioni che possono essere utilizzate dai programmi C\+\+ per incapsulare e modificare le diverse convenzioni culturali relative alla rappresentazione e alla formattazione dei dati numerici, monetari e di calendario, inclusi il supporto per l'internazionalizzazione della classificazione dei caratteri e l'ordinamento delle stringhe.  
  
## Sintassi  
  
```  
  
#include <locale>  
  
```  
  
### Funzioni  
  
|||  
|-|-|  
|[has\_facet](../Topic/has_facet.md)|Verifica se un facet specifico viene archiviato nelle impostazioni locali specificate.|  
|[isalnum](../Topic/isalnum.md)|Verifica se un elemento delle impostazioni locali è un carattere alfabetico o numerico.|  
|[isalpha](../Topic/isalpha.md)|Verifica se un elemento delle impostazioni locali è un carattere alfabetico.|  
|[iscntrl](../Topic/iscntrl.md)|Verifica se un elemento delle impostazioni locali è un carattere di controllo.|  
|[isdigit](../Topic/isdigit.md)|Verifica se un elemento delle impostazioni locali è un carattere numerico.|  
|[isgraph](../Topic/isgraph.md)|Verifica se un elemento delle impostazioni locali è un carattere alfanumerico o di punteggiatura.|  
|[islower](../Topic/islower.md)|Verifica se un elemento delle impostazioni locali è un carattere minuscolo.|  
|[isprint](../Topic/isprint.md)|Verifica se un elemento delle impostazioni locali è un carattere stampabile.|  
|[ispunct](../Topic/ispunct.md)|Verifica se un elemento delle impostazioni locali è un carattere di punteggiatura.|  
|[isspace](../Topic/isspace.md)|Verifica se un elemento delle impostazioni locali è uno spazio vuoto.|  
|[isupper](../Topic/isupper.md)|Verifica se un elemento delle impostazioni locali è un carattere maiuscolo.|  
|[isxdigit](../Topic/isxdigit.md)|Verifica se un elemento delle impostazioni locali è un carattere utilizzato per rappresentare un numero esadecimale.|  
|[tolower](../Topic/tolower.md)|Converte un carattere in minuscolo.|  
|[toupper](../Topic/toupper.md)|Converte un carattere in maiuscolo.|  
|[use\_facet](../Topic/use_facet.md)|Restituisce un riferimento a un facet di un tipo specificato archiviato nelle impostazioni locali.|  
  
### Classi  
  
|||  
|-|-|  
|[codecvt](../standard-library/codecvt-class.md)|Classe modello che fornisce un facet utilizzato per eseguire la conversione tra codifiche di caratteri interne ed esterne.|  
|[codecvt\_base](../standard-library/codecvt-base-class.md)|Classe di base per la classe codecvt utilizzata per definire un tipo di enumerazione definito **result**, utilizzato come tipo restituito per le funzioni membro facet per indicare il risultato di una conversione.|  
|[codecvt\_byname](../standard-library/codecvt-byname-class.md)|Classe modello derivata che descrive un oggetto che può essere utilizzato come facet di ordinamento delle impostazioni locali specificate, consentendo il recupero di informazioni relative alle conversioni specifiche di un'area culturale.|  
|[collate](../standard-library/collate-class.md)|Classe modello di ordinamento che fornisce un facet che gestisce le convenzioni di ordinamento delle stringhe.|  
|[collate\_byname](../standard-library/collate-byname-class.md)|Classe modello derivata che descrive un oggetto che può essere utilizzato come facet di ordinamento delle impostazioni locali specificate, consentendo il recupero di informazioni relative alle convenzioni di ordinamento delle stringhe specifiche di un'area culturale.|  
|[ctype](../standard-library/ctype-class.md)|Classe modello che fornisce un facet utilizzato per classificare i caratteri, eseguire la conversione dalle lettere maiuscole e minuscole e tra il set di caratteri nativi e il set utilizzato dalle impostazioni locali.|  
|[ctype\<char\>](../standard-library/ctype-char-class.md)|Classe che costituisce una specializzazione esplicita della classe modello **ctype\<CharType**\> per il tipo `char`, che descrive un oggetto che può essere usato come facet delle impostazioni locali per caratterizzare le varie proprietà di un carattere di tipo `char`.|  
|[ctype\_base](../standard-library/ctype-base-class.md)|Classe base della classe ctype utilizzata per definire i tipi di enumerazione utilizzati per classificare o verificare i caratteri singolarmente o all'interno di intervalli completi.|  
|[ctype\_byname](../standard-library/ctype-byname-class.md)|Classe modello derivata che descrive un oggetto che può essere utilizzato come facet ctype delle impostazioni locali specificate, consentendo la classificazione dei caratteri e la relativa conversione tra maiuscole e minuscole e tra set di caratteri nativi e set specificati dalle impostazioni locali.|  
|[locale](../standard-library/locale-class.md)|Classe che descrive un oggetto delle impostazioni locali che incapsula le informazioni specifiche delle impostazioni locali come set di facet che definiscono collettivamente un ambiente localizzato specifico.|  
|[messaggi](../standard-library/messages-class.md)|Classe modello descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per recuperare i messaggi localizzati da un catalogo di messaggi internazionalizzati per le impostazioni locali specificate.|  
|[messages\_base](../standard-library/messages-base-class.md)|Classe base che descrive un tipo di `int` per il catalogo dei messaggi.|  
|[messages\_byname](../standard-library/messages-byname-class.md)|Classe modello derivata che descrive un oggetto che può essere utilizzato come facet dei messaggi delle impostazioni locali specificate, consentendo il recupero dei messaggi localizzati.|  
|[money\_base](../standard-library/money-base-class.md)|Classe base della classe ctype utilizzata per definire i tipi di enumerazione utilizzati per classificare o verificare i caratteri singolarmente o all'interno di intervalli completi.|  
|[money\_get](../standard-library/money-get-class.md)|Classe modello che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni delle sequenze di tipo **CharType** in valori monetari.|  
|[money\_put](../standard-library/money-put-class.md)|Classe modello che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni dei valori monetari in sequenze di tipo **CharType**.|  
|[moneypunct](../standard-library/moneypunct-class.md)|Classe modello che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per descrivere sequenze di tipo **CharType** utilizzate per rappresentare un campo di input o output monetario.|  
|[moneypunct\_byname](../standard-library/moneypunct-byname-class.md)|Classe modello derivata che descrive un oggetto che può essere utilizzato come facet moneypunct delle impostazioni locali specificate, consentendo la formattazione dei campi di input o output monetari.|  
|[num\_get](../standard-library/num-get-class.md)|Classe modello che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni delle sequenze di tipo **CharType** in valori numerici.|  
|[num\_put](../standard-library/num-put-class.md)|Classe modello che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni dei valori numerici in sequenze di tipo **CharType**.|  
|[numpunct](../standard-library/numpunct-class.md)|Classe modello che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per descrivere le sequenze di tipo **CharType** utilizzate per rappresentare le informazioni sulla formattazione e la punteggiatura di espressioni numeriche e booleane.|  
|[numpunct\_byname](../standard-library/numpunct-byname-class.md)|Classe modello derivata che descrive un oggetto che può essere utilizzato come facet moneypunct delle impostazioni locali specificate, consentendo la formattazione e la punteggiatura delle espressioni numeriche e booleane.|  
|[time\_base](../standard-library/time-base-class.md)|Classe utilizzata come classe base per i facet della classe modello time\_get, la quale definisce solo l'ordine della data di tipo enumerato e diverse costanti di questo tipo.|  
|[time\_get](../standard-library/time-get-class.md)|Classe modello che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni delle sequenze di tipo **CharType** in valori temporali.|  
|[time\_get\_byname](../standard-library/time-get-byname-class.md)|Classe modello derivata che descrive un oggetto che può essere usato come facet delle impostazioni locali di tipo time\_get\<**CharType**, **InputIterator**\>.|  
|[time\_put](../standard-library/time-put-class.md)|Classe modello che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni dei valori temporali in sequenze di tipo **CharType**.|  
|[time\_put\_byname](../standard-library/time-put-byname-class.md)|Classe modello derivata che descrive un oggetto che può essere usato come facet delle impostazioni locali di tipo `time_put`\<**CharType**, **OutputIterator**\>.|  
|[Classe wbuffer\_convert](../standard-library/wbuffer-convert-class.md)|Descrive un buffer del flusso che controlla la trasmissione di elementi da e verso un buffer del flusso di byte.|  
|[Classe wstring\_convert](../standard-library/wstring-convert-class.md)|Classe modello che esegue le conversioni tra una stringa di caratteri "wide" e una stringa di byte.|  
  
## Vedere anche  
 [Tabelle codici](../c-runtime-library/code-pages.md)   
 [Nomi delle impostazioni locali, lingue e stringhe relative a paesi](../c-runtime-library/locale-names-languages-and-country-region-strings.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)