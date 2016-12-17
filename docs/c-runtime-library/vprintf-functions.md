---
title: "Funzioni vprintf | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr110.dll"
  - "msvcr120.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr80.dll"
apitype: "DLLExport"
f1_keywords: 
  - "vprintf"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "testo formattato [C++]"
  - "vprintf (funzione)"
ms.assetid: 02ac7c51-eab1-4bf0-bf4c-77065e3fa744
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Funzioni vprintf
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ognuna delle funzioni `vprintf` accetta un puntatore a un elenco di argomenti, quindi formatta e scrive i dati specificati in una particolare destinazione.  Le funzioni differiscono per la convalida dei parametri eseguita, per l'utilizzo da parte delle funzioni di stringhe di caratteri di tipo wide o a byte singolo, per la destinazione di output e per il supporto per specificare l'ordine in cui i parametri vengono tilizzati nella stringa di formato.  
  
|||  
|-|-|  
|[\_vcprintf, \_vcwprintf](../c-runtime-library/reference/vcprintf-vcprintf-l-vcwprintf-vcwprintf-l.md)|[vfprintf, vfwprintf](../c-runtime-library/reference/vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md)|  
|[\_vfprintf\_p, \_vfprintf\_p\_l, \_vfwprintf\_p, \_vfwprintf\_p\_l](../c-runtime-library/reference/vfprintf-p-vfprintf-p-l-vfwprintf-p-vfwprintf-p-l.md)|[vfprintf\_s, \_vfprintf\_s\_l, vfwprintf\_s, \_vfwprintf\_s\_l](../c-runtime-library/reference/vfprintf-s-vfprintf-s-l-vfwprintf-s-vfwprintf-s-l.md)|  
|[vprintf, vwprintf](../c-runtime-library/reference/vprintf-vprintf-l-vwprintf-vwprintf-l.md)|[\_vprintf\_p, \_vprintf\_p\_l, \_vwprintf\_p, \_vwprintf\_p\_l](../c-runtime-library/reference/vprintf-p-vprintf-p-l-vwprintf-p-vwprintf-p-l.md)|  
|[vprintf\_s, \_vprintf\_s\_l, vwprintf\_s, \_vwprintf\_s\_l](../c-runtime-library/reference/vprintf-s-vprintf-s-l-vwprintf-s-vwprintf-s-l.md)|[vsprintf, vswprintf](../c-runtime-library/reference/vsprintf-vsprintf-l-vswprintf-vswprintf-l-vswprintf-l.md)|  
|[\_vsprintf\_p, \_vsprintf\_p\_l, \_vswprintf\_p, \_vswprintf\_p\_l](../c-runtime-library/reference/vsprintf-p-vsprintf-p-l-vswprintf-p-vswprintf-p-l.md)|[vsprintf\_s, \_vsprintf\_s\_l, vswprintf\_s, \_vswprintf\_s\_l](../c-runtime-library/reference/vsprintf-s-vsprintf-s-l-vswprintf-s-vswprintf-s-l.md)|  
|[\_vscprintf, \_vscprintf\_l, \_vscwprintf, \_vscwprintf\_l](../c-runtime-library/reference/vscprintf-vscprintf-l-vscwprintf-vscwprintf-l.md)|[\_vsnprintf, \_vsnwprintf](../c-runtime-library/reference/vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l.md)|  
  
## Note  
 Le funzioni `vprintf` sono simili alle loro controparti come indicato nella seguente tabella.  Tuttavia, ogni funzione `vprintf` accetta un puntatore a una lista di argomenti, mentre ciascuna delle funzioni corrispondenti accetta una lista di argomenti.  
  
 Queste funzioni consentono di formattare i dati in l'output verso le destinazioni come indicato di seguito.  
  
|Funzione|Funzione della controparte|Destinazione di output|Convalida dei parametri|Supporto del parametro posizionale|  
|--------------|--------------------------------|----------------------------|-----------------------------|----------------------------------------|  
|`_vcprintf`|[\_cprintf](../c-runtime-library/reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md)|console|Controllo dei valori null.|no|  
|`_vcwprintf`|[\_cwprintf](../c-runtime-library/reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md)|console|Controllo dei valori null.|no|  
|`vfprintf`|[fprintf](../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)|*Stream*|Controllo dei valori null.|no|  
|**vfprintf\_p**|[fprintf\_p](../c-runtime-library/reference/fprintf-p-fprintf-p-l-fwprintf-p-fwprintf-p-l.md)|*Stream*|Controllo dei valori null e del formato valido.|sì|  
|`vfprintf_s`|[fprintf\_s](../c-runtime-library/reference/fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md)|*Stream*|Controllo dei valori null e del formato valido.|no|  
|`vfwprintf`|[fwprintf](../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)|*Stream*|Controllo dei valori null.|no|  
|**vfwprintf\_p**|[fwprintf\_p](../c-runtime-library/reference/fprintf-p-fprintf-p-l-fwprintf-p-fwprintf-p-l.md)|*Stream*|Controllo dei valori null e del formato valido.|sì|  
|`vfwprintf_s`|[fwprintf\_s](../c-runtime-library/reference/fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md)|*Stream*|Controllo dei valori null e del formato valido.|no|  
|`vprintf`|[printf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)|`Stdout`|Controllo dei valori null.|no|  
|**vprintf\_p**|[printf\_p](../c-runtime-library/reference/printf-p-printf-p-l-wprintf-p-wprintf-p-l.md)|`Stdout`|Controllo dei valori null e del formato valido.|sì|  
|`vprintf_s`|[printf\_s](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)|`Stdout`|Controllo dei valori null e del formato valido.|no|  
|`vwprintf`|[wprintf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)|`Stdout`|Controllo dei valori null.|no|  
|**vwprintf\_p**|[wprintf\_p](../c-runtime-library/reference/printf-p-printf-p-l-wprintf-p-wprintf-p-l.md)|`Stdout`|Controllo dei valori null e del formato valido.|sì|  
|`vwprintf_s`|[wprintf\_s](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)|`Stdout`|Controllo dei valori null e del formato valido.|no|  
|**vsprintf**|[sprintf](../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)|memoria a cui punta il *buffer*|Controllo dei valori null.|no|  
|**vsprintf\_p**|[sprintf\_p](../c-runtime-library/reference/sprintf-p-sprintf-p-l-swprintf-p-swprintf-p-l.md)|memoria a cui punta il *buffer*|Controllo dei valori null e del formato valido.|sì|  
|`vsprintf_s`|[sprintf\_s](../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md)|memoria a cui punta il *buffer*|Controllo dei valori null e del formato valido.|no|  
|`vswprintf`|[swprintf](../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)|memoria a cui punta il *buffer*|Controllo dei valori null.|no|  
|**vswprintf\_p**|[swprintf\_p](../c-runtime-library/reference/sprintf-p-sprintf-p-l-swprintf-p-swprintf-p-l.md)|memoria a cui punta il *buffer*|Controllo dei valori null e del formato valido.|sì|  
|`vswprintf_s`|[swprintf\_s](../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md)|memoria a cui punta il *buffer*|Controllo dei valori null e del formato valido.|no|  
|`_vscprintf`|[\_vscprintf](../c-runtime-library/reference/vscprintf-vscprintf-l-vscwprintf-vscwprintf-l.md)|memoria a cui punta il *buffer*|Controllo dei valori null.|no|  
|`_vscwprintf`|[\_vscwprintf](../c-runtime-library/reference/vscprintf-vscprintf-l-vscwprintf-vscwprintf-l.md)|memoria a cui punta il *buffer*|Controllo dei valori null.|no|  
|`_vsnprintf`|[\_snprintf](../c-runtime-library/reference/snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md)|memoria a cui punta il *buffer*|Controllo dei valori null.|no|  
|`_vsnwprintf`|[\_snwprintf](../c-runtime-library/reference/snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md)|memoria a cui punta il *buffer*|Controllo dei valori null.|no|  
  
 L'argomento `argptr` è di tipo `va_list`, definito in VARARGS.H e in STDARG.H.  La variabile `argptr` deve essere inizializzata da **va\_start,** e può essere reinizializzata da chiamate successive di `va_arg`; `argptr` quindi punterà all'inizio di un elenco di argomenti in cui vengono convertiti e trasmessi in output in base alle specifiche corrispondenti nell'argomento *formato*.  *formato* ha la stessa forma e la stessa funzione dell'argomento *formato* di [printf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md).  Nessuna queste funzioni richiama `va_end`.  Per una descrizione più completa di ogni funzione `vprintf`, vedere la descrizione della funzione corrispondente come indicato nella tabella precedente.  
  
 `_vsnprintf` differisce da **vsprintf** nel fatto che non scrive più di *count* bytes nel *buffer*.  
  
 Le versioni di queste funzioni con l'infisso **w** nel nome sono versioni a caratteri wide delle corrispondenti funzioni senza l'infisso **w**; in ognuna di queste funzioni a caratteri di tipo wide, il *buffer* e il *formato* sono stringhe di caratteri di tipo wide.  Ogni altra funzione a caratteri di tipo wide si comporta in modo identico alla funzione corrispondente di SBCS.  
  
 Le versioni di queste funzioni con suffissi **\_s** e **\_p** sono le versioni più sicure.  Queste versioni convalidano le stringhe di formato e generano un'eccezione se la stringa di formato non è ben formata \(ad esempio se vengono utilizzati caratteri di formattazione non validi\).  
  
 Le versioni di queste funzioni con il suffisso **\_p** consentono di specificare l'ordine in cui gli argomenti forniti vengono sostituiti nella stringa di formato.  Per ulteriori informazioni, vedere [Parametri posizionali printf\_p](../c-runtime-library/printf-p-positional-parameters.md).  
  
 Per **vsprintf**, `vswprintf`, `_vsnprintf` e `_vsnwprintf`, se si verifica una copia tra stringhe che si sovrappongono, il comportamento non è definito.  
  
> [!IMPORTANT]
>  Assicurarsi che *formato* non sia una stringa definita dall'utente.  Per ulteriori informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  Se si usano le versioni sicure di queste funzioni \(uno dei suffissi **\_p** o **\_s** \), una stringa di formato fornita dall'utente potrebbe generare un'eccezione di parametro non valido se la stringa fornita dall'utente contiene caratteri di formattazione non validi.  
  
## Vedere anche  
 [I\/O di flusso](../c-runtime-library/stream-i-o.md)   
 [fprintf, \_fprintf\_l, fwprintf, \_fwprintf\_l](../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)   
 [printf, \_printf\_l, wprintf, \_wprintf\_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [sprintf, \_sprintf\_l, swprintf, \_swprintf\_l, \_\_swprintf\_l](../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [va\_arg, va\_copy, va\_end, va\_start](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)