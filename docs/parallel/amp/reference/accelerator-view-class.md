---
title: "Classe accelerator_view | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amprt/Concurrency::accelerator_view"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "accelerator_view (classe)"
ms.assetid: 9f298c21-bf62-46e0-88b8-01c5c78ef144
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# Classe accelerator_view
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un'astrazione del dispositivo virtuale in un acceleratore di dati paralleli AMP C\+\+ .  
  
## Sintassi  
  
```  
class accelerator_view;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore accelerator\_view::accelerator\_view](../Topic/accelerator_view::accelerator_view%20Constructor.md)|Inizializza una nuova istanza della classe `accelerator_view`.|  
|[Distruttore accelerator\_view::~accelerator\_view](../Topic/accelerator_view::~accelerator_view%20Destructor.md)|Elimina l'oggetto `accelerator_view`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo accelerator\_view::create\_marker](../Topic/accelerator_view::create_marker%20Method.md)|Restituisce una future per tenere traccia del completamento di tutti i comandi inviati finora a questo oggetto `accelerator_view`.|  
|[Metodo accelerator\_view::flush](../Topic/accelerator_view::flush%20Method.md)|Invia tutti i comandi in sospeso in coda all'oggetto `accelerator_view`, all'acceleratore per l'esecuzione.|  
|[Metodo accelerator\_view::get\_accelerator](../Topic/accelerator_view::get_accelerator%20Method.md)|Restituisce l'oggetto `accelerator` per l'oggetto `accelerator_view`.|  
|[Metodo accelerator\_view::get\_is\_auto\_selection](../Topic/accelerator_view::get_is_auto_selection%20Method.md)|Restituisce un valore booleano che indica se il runtime selezionerà automaticamente un tasto di scelta appropriato quando l'oggetto `accelerator_view` viene passato a un oggetto [parallel\_for\_each](../Topic/parallel_for_each%20Function%20\(C++%20AMP\).md).|  
|[Metodo accelerator\_view::get\_is\_debug](../Topic/accelerator_view::get_is_debug%20Method.md)|Restituisce un valore booleano che indica se l'oggetto `accelerator_view` dispone del livello DEBUG abilitato per la segnalazione estensiva di errori.|  
|[Metodo accelerator\_view::get\_queuing\_mode](../Topic/accelerator_view::get_queuing_mode%20Method.md)|Restituisce la modalità di accodamento per l'oggetto `accelerator_view`.|  
|[Metodo accelerator\_view::get\_version](../Topic/accelerator_view::get_version%20Method.md)|Restituisce la versione dell' `accelerator_view`.|  
|[Metodo accelerator\_view::wait](../Topic/accelerator_view::wait%20Method.md)|Attende tutti i comandi inviati all'oggetto `accelerator_view` per il completamento.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore accelerator\_view::operator\!\=](../Topic/accelerator_view::operator!=%20Operator.md)|Confronta questo oggetto `accelerator_view` con un altro e ritorna `false` se sono uguali; altrimenti, ritorna `true`.|  
|[Operatore accelerator\_view::operator\=](../Topic/accelerator_view::operator=%20Operator.md)|Copia il contenuto dell'oggetto `accelerator_view` specificato in questo oggetto.|  
|[Operatore accelerator\_view::operator\=\=](../Topic/accelerator_view::operator==%20Operator.md)|Confronta questo oggetto `accelerator_view` con un altro e ritorna `true` se sono uguali; altrimenti, ritorna `false`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati accelerator\_view::accelerator](../Topic/accelerator_view::accelerator%20Data%20Member.md)|Ottiene l'oggetto `accelerator` per l'oggetto `accelerator_view` .|  
|[Membro dati accelerator\_view::is\_auto\_selection](../Topic/accelerator_view::is_auto_selection%20Data%20Member.md)|Ottiene un valore booleano che indica se il runtime selezionerà automaticamente un tasto di scelta rapida appropriato quando l'oggetto `accelerator_view` viene passato a un oggetto [parallel\_for\_each](../Topic/parallel_for_each%20Function%20\(C++%20AMP\).md).|  
|[Membro dati accelerator\_view::is\_debug](../Topic/accelerator_view::is_debug%20Data%20Member.md)|Ottiene un valore booleano che indica se l'oggetto `accelerator_view` dispone del livello DEBUG abilitato per la segnalazione estensiva di errori.|  
|[Membro dati accelerator\_view::queuing\_mode](../Topic/accelerator_view::queuing_mode%20Data%20Member.md)|Ottiene la modalità di accodamento per l'oggetto `accelerator_view`.|  
|[Membro dati accelerator\_view::version](../Topic/accelerator_view::version%20Data%20Member.md)|Ottiene la versione dell'acceleratore.|  
  
## Gerarchia di ereditarietà  
 `accelerator_view`  
  
## Note  
 Un oggetto `accelerator_view` rappresenta una visualizzazione logica e isolata di un accelerator.  Un singolo dispositivo fisico di calcolo può includere più oggetti `accelerator_view` logici e isolati.  Ogni acceleratore ha un oggetto `accelerator_view` predefinito.  Possono essere creati ulteriori oggetti `accelerator_view`.  
  
 I dispositivi fisici possono essere condivisi tra più thread client.  I thread client possono utilizzare lo stesso oggetto `accelerator_view` di un accelerator in modo cooperativo, oppure ogni client può comunicare con un dispositivo di calcolo mediante un oggetto `accelerator_view` indipendente per l'isolamento da altri thread client.  
  
 Un oggetto `accelerator_view` può assumere uno dei due stati [Enumerazione queuing\_mode](../../../parallel/amp/reference/queuing-mode-enumeration.md).  Se la modalità di accodamento è `immediate`, controlli come `copy` e `parallel_for_each` vengono inviati al dispositivo acceleratore corrispondente non appena vengono restituiti al chiamante.  Se la modalità di accodamento è `deferred`, tali controlli sono in coda in un comando per la gestione delle code che corrisponde all'oggetto `accelerator_view`.  I controlli non sono effettivamente inviati al dispositivo finché non viene chiamato `flush()`.  
  
## Requisiti  
 **Intestazione:** amprt.h  
  
 **Spazio dei nomi:** Concurrency  
  
## Vedere anche  
 [Spazio dei nomi Concurrency \(C\+\+ AMP\)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)