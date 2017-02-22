---
title: "Method Attributes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "method attributes"
  - "attributes [C++], reference topics"
ms.assetid: b2313352-480d-488b-8c35-6242ffd3a549
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Method Attributes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I seguenti attributi vengono applicati ai metodi in una classe, in coclasse, o in un'interfaccia.  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[bindable](../windows/bindable.md)|Indica che la proprietà supporta l'associazione dati.|  
|[call\_as](../windows/call-as.md)|Abilita una funzione non utilizzabile in modalità remota da eseguire il mapping a una funzione remota.|  
|[custom](../windows/custom-cpp.md)|Consente di definire il proprio attributo.|  
|[db\_column](../windows/db-column.md)|Associa una colonna specificata il rowset.|  
|[db\_command](../windows/db-command.md)|Crea un comando OLE DB.|  
|[db\_param](../windows/db-param.md)|Associa la variabile membro specificato con un input o di output e delimita la variabile.|  
|[db\_source](../windows/db-source.md)|Crea una connessione a un'origine dati.|  
|[db\_table](../windows/db-table.md)|apre una tabella di OLE DB.|  
|[defaultbind](../windows/defaultbind.md)|Indica la singola proprietà, associabile che rappresenta il metodo migliore per l'oggetto.|  
|[defaultcollelem](../windows/defaultcollelem.md)|Utilizzato per l'ottimizzazione del codice di Visual Basic.|  
|[displaybind](../windows/displaybind.md)|Indica una proprietà che deve essere visualizzati come associabile.|  
|[helpcontext](../windows/helpcontext.md)|Specifica un ID di contesto che consente di visualizzare le informazioni utente su questo elemento nel file della Guida.|  
|[file di](../windows/helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|  
|[helpstring](../windows/helpstring.md)|Consente di specificare la stringa di caratteri utilizzata per descrivere l'elemento cui è associata.|  
|[helpstringcontext](../windows/helpstringcontext.md)|Specifica l'ID di un argomento della Guida in un file CHM o di .hlp.|  
|[helpstringdll](../windows/helpstringdll.md)|Specifica il nome della DLL da utilizzare per eseguire la ricerca di stringhe di documento \(localizzazione\).|  
|[hidden](../windows/hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzata in un browser orientati a tramite.|  
|[id](../windows/id.md)|Specifica un DISPID per una funzione membro \(una proprietà o un metodo, in un'interfaccia o dispinterface\).|  
|[immediatebind](../windows/immediatebind.md)|Indica che il database verrà avvisati immediatamente di tutte le modifiche a una proprietà di un oggetto con associazione a dati.|  
|[in](../windows/in-cpp.md)|Indica che un parametro deve essere passato dalla routine chiamante alla routine chiamata.|  
|[local](../windows/local-cpp.md)|Consente di utilizzare il compilatore MIDL come generatore di intestazione una volta utilizzato nell'intestazione dell'interfaccia.  Quando viene utilizzato in una singola funzione, definisce una routine locale per il quale non stub viene generato.|  
|[nonbrowsable](../windows/nonbrowsable.md)|Indica che un membro di interfaccia non deve essere visualizzato in un Visualizzatore proprietà.|  
|[propget](../windows/propget.md)|Specifica una funzione di accesso della proprietà.|  
|[set](../windows/propput.md)|specifica una funzione di impostazione di proprietà.|  
|[propputref](../windows/propputref.md)|Specifica una funzione di impostazione di proprietà che utilizza un riferimento anziché un valore.|  
|[stampante](../windows/ptr.md)|definisce un puntatore come puntatore completo.|  
|[intervallo](../windows/range-cpp.md)|Specifica un intervallo di valori validi per gli argomenti o i campi i cui valori vengono impostati in fase di esecuzione.|  
|[requestedit](../windows/requestedit.md)|indica che la proprietà supporta **OnRequestEdit** notifica.|  
|[restricted](../windows/restricted.md)|Specifica che un membro di un modulo, di un'interfaccia, o di un'interfaccia dispatch non può essere chiamato in modo arbitrario.|  
|[satype](../windows/satype.md)|Specifica il tipo di dati **SAFEARRAY** struttura.|  
|[source](../windows/source-cpp.md)|Specifica le interfacce di origine del controllo per i punti di connessione in una classe.  In una proprietà o un metodo, **database di origine** l'attributo indica che il membro restituisce un oggetto o un VARIANT che rappresentano un database di origine eventi.|  
|[sincronizzare](../windows/synchronize.md)|Sincronizza l'accesso al metodo di destinazione.|  
|[vararg](../windows/vararg.md)|Specifica che la funzione accetta un numero variabile di argomenti.|  
  
## Vedere anche  
 [Attributes by Usage](../windows/attributes-by-usage.md)