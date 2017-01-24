---
title: "Typedef, Enum, Union, and Struct Attributes | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "union attributes"
  - "attributes [C++], reference topics"
  - "struct attributes"
  - "typedef attributes"
  - "enum attributes"
ms.assetid: f8a4fe94-dc02-4aed-bc31-3e500d42f4c7
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Typedef, Enum, Union, and Struct Attributes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I seguenti attributi vengono applicati a [typedef](http://msdn.microsoft.com/it-it/cc96cf26-ba93-4179-951e-695d1f5fdcf1),  [struttura](../cpp/struct-cpp.md)e  [enum](../cpp/enumerations-cpp.md) Parole chiave C\+\+.  
  
### typedef  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[case](../windows/case-cpp.md)|utilizzato con [switch\_type](../windows/switch-type.md) attributo a l  **unione**.|  
|[custom](../windows/custom-cpp.md)|Consente di definire il proprio attributo.|  
|[export](../windows/export.md)|Determina una struttura di dati venga inserita nel file IDL.|  
|[first\_is](../windows/first-is.md)|Specifica l'indice del primo elemento di matrice da un flusso.|  
|[helpcontext](../windows/helpcontext.md)|Specifica un ID di contesto che consente di visualizzare le informazioni utente su questo elemento nel file della Guida.|  
|[file di](../windows/helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|  
|[helpstring](../windows/helpstring.md)|Consente di specificare la stringa di caratteri utilizzata per descrivere l'elemento cui è associata.|  
|[library\_block](../windows/library-block.md)|Inserisce un costrutto nel blocco di libreria del file IDL.|  
|[stampante](../windows/ptr.md)|definisce un puntatore come puntatore completo.|  
|[public](../windows/public-cpp-attributes.md)|Garantisce che un typedef entrerà nella libreria dei tipi anche se non viene fatto riferimento nel file IDL.|  
|[ref](../windows/ref-cpp.md)|Identifica un puntatore di riferimento.|  
|[switch\_is](../windows/switch-is.md)|Specifica l'espressione o identificatore che agisce come un'unione discriminante che seleziona un'unione.|  
|[switch\_type](../windows/switch-type.md)|Identifica il tipo della variabile utilizzata come un'unione discriminante.|  
|[univoco](../windows/unique-cpp.md)|specifica un puntatore univoco.|  
|[wire\_marshal](../windows/wire-marshal.md)|Specifica un tipo di dati che verrà utilizzato per la trasmissione anziché un tipo di dati specifico dell'applicazione.|  
  
### enum  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[custom](../windows/custom-cpp.md)|Consente di definire il proprio attributo.|  
|[export](../windows/export.md)|Determina una struttura di dati venga inserita nel file IDL.|  
|[uuid](../windows/uuid-cpp-attributes.md)|Specifica l'ID univoco per una classe o l'interfaccia.|  
|[v1\_enum](../windows/v1-enum.md)|Ordina che il tipo enumerato specificato sia trasmesse come entità a 32 bit, anziché il valore predefinito di 16 bit.|  
  
### union  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[custom](../windows/custom-cpp.md)|Consente di definire il proprio attributo.|  
|[export](../windows/export.md)|Determina una struttura di dati venga inserita nel file IDL.|  
|[first\_is](../windows/first-is.md)|Specifica l'indice del primo elemento di matrice da un flusso.|  
|[last\_is](../windows/last-is.md)|Specifica l'indice dell'ultimo elemento di matrice da un flusso.|  
|[length\_is](../windows/length-is.md)|Specifica il numero di elementi di matrice da un flusso.|  
|[max\_is](../windows/max-is.md)|definisce il valore massimo per un indice valido di matrice.|  
|[size\_is](../windows/size-is.md)|Specifica la dimensione della memoria allocata per i puntatori con dimensioni, puntatori con dimensioni a puntatori con dimensioni e naturale o matrici multidimensionali.|  
|[univoco](../windows/unique-cpp.md)|specifica un puntatore univoco.|  
|[uuid](../windows/uuid-cpp-attributes.md)|Specifica l'ID univoco per una classe o l'interfaccia.|  
  
### unione di Nonencapsulated  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[ms\_union](../windows/ms-union.md)|Controllare l'allineamento della rappresentazione dei dati della rete di unioni nonencapsulated.|  
|[no\_injected\_text](../windows/no-injected-text.md)|Impedisce il compilatore di inserire il codice riportato di seguito all'utilizzo dell'attributo.|  
  
### struct  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[cui aggregatable](../windows/aggregatable.md)|Indica che la classe supporta aggregato.|  
|[aggrega](../windows/aggregates.md)|indica che un controllo aggrega la classe di destinazione.|  
|[appobject](../windows/appobject.md)|Identifica la coclasse come oggetto applicazione, associato a un'applicazione completa con estensione exe e indica che le funzioni e le proprietà della coclasse vengono globalmente disponibili in questa libreria dei tipi.|  
|[coclasse](../windows/coclass.md)|Creazione di un controllo ActiveX.|  
|[com\_interface\_entry](../windows/com-interface-entry-cpp.md)|Aggiunge una voce dell'interfaccia in una mappa COM.|  
|[Controllo](../windows/control.md)|Specifica che il tipo definito dall'utente è un controllo.|  
|[custom](../windows/custom-cpp.md)|Consente di definire il proprio attributo.|  
|[db\_column](../windows/db-column.md)|Associa una colonna specificata il rowset.|  
|[db\_command](../windows/db-command.md)|Crea un comando OLE DB.|  
|[db\_param](../windows/db-param.md)|Associa la variabile membro specificato con un input o di output e delimita la variabile.|  
|[db\_source](../windows/db-source.md)|Crea una connessione a un'origine dati.|  
|[db\_table](../windows/db-table.md)|apre una tabella di OLE DB.|  
|[default](../windows/default-cpp.md)|Indica che una personalizzata o l'interfaccia dispatch definita all'interno di una coclasse rappresenta l'interfaccia predefinita di programmazione.|  
|[defaultvtable](../windows/defaultvtable.md)|Definisce un'interfaccia come interfaccia vtable predefinita per un controllo.|  
|[event\_receiver](../windows/event-receiver.md)|crea un ricevitore di eventi.|  
|[un event\_source](../windows/event-source.md)|crea un'origine evento.|  
|[export](../windows/export.md)|Determina una struttura di dati venga inserita nel file IDL.|  
|[first\_is](../windows/first-is.md)|Specifica l'indice del primo elemento di matrice da un flusso.|  
|[hidden](../windows/hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzata in un browser orientati a tramite.|  
|[implements\_category](../windows/implements-category.md)|Specifica ha implementato le categorie componenti per la classe.|  
|[last\_is](../windows/last-is.md)|Specifica l'indice dell'ultimo elemento di matrice da un flusso.|  
|[length\_is](../windows/length-is.md)|Specifica il numero di elementi di matrice da un flusso.|  
|[max\_is](../windows/max-is.md)|definisce il valore massimo per un indice valido di matrice.|  
|[requires\_category](../windows/requires-category.md)|Specifica le categorie componenti necessari della classe di destinazione.|  
|[size\_is](../windows/size-is.md)|Specifica la dimensione della memoria allocata per i puntatori con dimensioni, puntatori con dimensioni a puntatori con dimensioni e naturale o matrici multidimensionali.|  
|[source](../windows/source-cpp.md)|In una classe, specifica le interfacce di origine oggetto COM per i punti di connessione.  In una proprietà o un metodo, indica che il membro restituisce un oggetto o un VARIANT che rappresentano un database di origine eventi.|  
|[il threading](../windows/threading-cpp.md)|Specifica il modello di threading su un oggetto COM.|  
|[univoco](../windows/unique-cpp.md)|specifica un puntatore univoco.|  
|[uuid](../windows/uuid-cpp-attributes.md)|Specifica l'ID univoco per una classe o l'interfaccia.|  
|[version](../windows/version-cpp.md)|Identifica una versione specifica tra più versioni di una classe.|  
|[vi\_progid](../windows/vi-progid.md)|Specifica un form dell'versione\-indipendente del ProgID.|  
  
## Vedere anche  
 [Attributes by Usage](../windows/attributes-by-usage.md)