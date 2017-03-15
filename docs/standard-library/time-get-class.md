---
title: "Classe time_get | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.time_get"
  - "xloctime/std::time_get"
  - "time_get"
  - "std::time_get"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "time_get (classe)"
ms.assetid: 869d5f5b-dbab-4628-8333-bdea7e272023
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 21
---
# Classe time_get
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni delle sequenze di tipo `CharType` in valori temporali.  
  
## Sintassi  
  
```  
template <  
   class CharType,  
   class InputIterator = istreambuf_iterator<CharType>  
> class time_get : public time_base;  
```  
  
#### Parametri  
 `CharType`  
 Tipo utilizzato all'interno di un programma per codificare i caratteri.  
  
 `InputIterator`  
 Iteratore da cui vengono letti i valori temporali.  
  
## Note  
 Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero.  Il primo tentativo di accedere al relativo valore archiviato consente di archiviare un valore positivo univoco in **id.**  
  
### Costruttori  
  
|||  
|-|-|  
|[time\_get](../Topic/time_get::time_get.md)|Costruttore per oggetti di tipo `time_get`.|  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[char\_type](../Topic/time_get::char_type.md)|Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.|  
|[iter\_type](../Topic/time_get::iter_type.md)|Tipo che descrive un iteratore di input.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[date\_order](../Topic/time_get::date_order.md)|Restituisce l'ordine della data utilizzato da un facet.|  
|[do\_date\_order](../Topic/time_get::do_date_order.md)|Funzione membro virtuale protetta chiamata per restituire l'ordine della data utilizzato da un facet.|  
|[do\_get](../Topic/time_get::do_get.md)|Legge e converte i dati di tipo carattere in un valore di ora.|  
|[do\_get\_date](../Topic/time_get::do_get_date.md)|Funzione membro virtuale protetta chiamata per analizzare una stringa come la data generata dall'identificatore `x` per `strftime`.|  
|[do\_get\_monthname](../Topic/time_get::do_get_monthname.md)|Funzione membro virtuale protetta chiamata per analizzare una stringa come il nome del mese.|  
|[do\_get\_time](../Topic/time_get::do_get_time.md)|Funzione membro virtuale protetta chiamata per analizzare una stringa come la data generata dall'identificatore `X` per `strftime`.|  
|[do\_get\_weekday](../Topic/time_get::do_get_weekday.md)|Funzione membro virtuale protetta chiamata per analizzare una stringa come il nome del giorno della settimana.|  
|[do\_get\_year](../Topic/time_get::do_get_year.md)|Funzione membro virtuale protetta chiamata per analizzare una stringa come il nome dell'anno.|  
|[get](../Topic/time_get::get.md)|Legge da un'origine di dati di tipo carattere e converte tali dati in un'ora archiviata in una struct temporale.|  
|[get\_date](../Topic/time_get::get_date.md)|Analizza una stringa come la data generata dall'identificatore `x` per `strftime`.|  
|[get\_monthname](../Topic/time_get::get_monthname.md)|Analizza una stringa come il nome del mese.|  
|[get\_time](../Topic/time_get::get_time.md)|Analizza una stringa come la data generata dall'identificatore `X` per `strftime`.|  
|[get\_weekday](../Topic/time_get::get_weekday.md)|Analizza una stringa come il nome del giorno della settimana.|  
|[get\_year](../Topic/time_get::get_year.md)|Analizza una stringa come il nome dell'anno.|  
  
## Requisiti  
 **Intestazione:** \<locale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<locale\>](../standard-library/locale.md)   
 [Classe time\_base](../standard-library/time-base-class.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)