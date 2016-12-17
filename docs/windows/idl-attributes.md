---
title: "IDL Attributes | Microsoft Docs"
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
  - "attributes [C++], reference topics"
  - "IDL attributes"
  - ".idl files, attributes"
  - "IDL files, attributes"
  - ".idl files"
ms.assetid: 04c596f4-c97b-4952-8053-316678b1d0b6
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IDL Attributes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In genere, gestire un file IDL è opportuno che è necessario:  
  
-   Conoscere la struttura e la sintassi di un file idl in grado di modificarlo.  
  
-   Basarsi su una procedura guidata, che consente lascerebbe modificare alcuni aspetti del file .idl.  
  
 A questo punto, è possibile modificare il file IDL in un file di codice sorgente utilizzando gli attributi di Visual C\+\+ IDL.  In molti casi, gli attributi di Visual C\+\+ IDL hanno lo stesso nome degli attributi di MIDL.  Quando il nome di un attributo di Visual C\+\+ IDL e un attributo di MIDL sono uguali, significa che inserire l'attributo di Visual C\+\+ nel file di codice sorgente restituisce un file.IDL contenente il relativo attributo dell'omonimo MIDL.  Tuttavia, un attributo di Visual C\+\+ IDL non può fornire tutte le funzionalità di un attributo MIDL.  
  
 una volta non utilizzato con [Attributi COM](../windows/com-attributes.md), Gli attributi IDL consentono di definire le interfacce.  Quando il codice sorgente viene compilato, gli attributi vengono utilizzati per definire il file generato con estensione .idl.  Una volta utilizzato con gli attributi COM in un progetto ATL, attributi di un IDL, ad esempio **coclasse**, codice del test da inserire nel progetto.  
  
 si noti che [idl\_quote](../windows/idl-quote.md) consente di utilizzare i costrutti di MIDL non sono supportati nella versione corrente di Visual C\+\+.  Questo e altri attributi come [importlib](../windows/importlib.md) e  [includelib](../windows/includelib-cpp.md) consentire di utilizzare i file esistenti idl in Visual C\+\+ corrente di un progetto.  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[cui aggregatable](../windows/aggregatable.md)|indica che un controllo può essere aggregatoe da un altro controllo.|  
|[appobject](../windows/appobject.md)|Identifica la coclasse come oggetto applicazione, associato a un'applicazione completa EXE e indica che le funzioni e le proprietà della coclasse vengono globalmente disponibili in questa libreria dei tipi.|  
|[async\_uuid](../windows/async-uuid.md)|Specifica il UUID che indica al compilatore MIDL per definire sia le versioni sincrone che asincrone di un'interfaccia COM.|  
|[bindable](../windows/bindable.md)|Indica che la proprietà supporta l'associazione dati.|  
|[call\_as](../windows/call-as.md)|Abilita una funzione non utilizzabile in modalità remota da eseguire il mapping a una funzione remota.|  
|[case](../windows/case-cpp.md)|utilizzato con [switch\_type](../windows/switch-type.md) attributo in un'unione.|  
|[coclasse](../windows/coclass.md)|Definizione della classe dei punti in un file idl come coclasse.|  
|[Controllo](../windows/control.md)|Specifica che il tipo definito dall'utente è un controllo.|  
|[cpp\_quote](../windows/cpp-quote.md)|Genera la stringa specificata, senza i caratteri virgoletta, nel file di intestazione generato.|  
|[defaultbind](../windows/defaultbind.md)|Indica la singola proprietà, associabile che rappresenta il metodo migliore per l'oggetto.|  
|[defaultcollelem](../windows/defaultcollelem.md)|Utilizzato per l'ottimizzazione del codice di Visual Basic.|  
|[valore predefinito](../windows/defaultvalue.md)|Consente la specifica di un valore predefinito per un parametro facoltativo tipizzato.|  
|[default](../windows/default-cpp.md)|Indica che una personalizzata o l'interfaccia dispatch definita all'interno di una coclasse rappresenta l'interfaccia predefinita di programmazione.|  
|[defaultvtable](../windows/defaultvtable.md)|Definisce un'interfaccia come interfaccia vtable predefinita per un controllo.|  
|[dispinterface](../windows/dispinterface.md)|Posiziona un'interfaccia nel file IDL come interfaccia dispatch.|  
|[displaybind](../windows/displaybind.md)|Indica una proprietà che deve essere visualizzati come associabile.|  
|[dual](../windows/dual.md)|Posiziona un'interfaccia nel file IDL come interfaccia duale.|  
|[voce](../windows/entry.md)|Specifica una funzione o una costante esportata in un modulo identificando il punto di ingresso nella DLL.|  
|[first\_is](../windows/first-is.md)|Specifica l'indice del primo elemento di matrice da un flusso.|  
|[helpcontext](../windows/helpcontext.md)|Specifica un ID di contesto che consente di visualizzare le informazioni utente su questo elemento nel file della Guida.|  
|[file di](../windows/helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|  
|[helpstringcontext](../windows/helpstringcontext.md)|Specifica l'ID di un argomento della Guida in un file CHM o di .hlp.|  
|[helpstringdll](../windows/helpstringdll.md)|Specifica il nome della DLL da utilizzare per eseguire la ricerca di stringhe di documento \(localizzazione\).|  
|[helpstring](../windows/helpstring.md)|Consente di specificare la stringa di caratteri utilizzata per descrivere l'elemento cui è associata.|  
|[hidden](../windows/hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzata in un browser orientati a tramite.|  
|[idl\_module](../windows/idl-module.md)|Specifica un punto di ingresso in una DLL.|  
|[idl\_quote](../windows/idl-quote.md)|Consente agli attributi di utilizzo o ai costrutti IDL non sono supportati nella versione corrente di Visual C\+\+.|  
|[id](../windows/id.md)|Specifica un DISPID per una funzione membro \(una proprietà o un metodo, in un'interfaccia o dispinterface\).|  
|[iid\_is](../windows/iid-is.md)|Specifica l'IID dell'interfaccia COM a cui fa riferimento un puntatore a interfaccia.|  
|[immediatebind](../windows/immediatebind.md)|Indica che il database verrà avvisati immediatamente di tutte le modifiche a una proprietà di un oggetto con associazione a dati.|  
|[importlib](../windows/importlib.md)|Rende i tipi che sono già stati compilati in un'altra libreria dei tipi disponibile nella libreria dei tipi creata.|  
|[import](../windows/import.md)|Specifica un altro IDL, .odl, o file di intestazione contenente le definizioni che si desidera fare riferimento nel file principale IDL.|  
|[importare](../windows/include-cpp.md)|Specifica uno o più file di intestazione da includere nel file generato con estensione .idl.|  
|[includelib](../windows/includelib-cpp.md)|Genera un file con estensione h o IDL da includere nel file generato con estensione .idl.|  
|[in](../windows/in-cpp.md)|Indica che un parametro deve essere passato dalla routine chiamante alla routine chiamata.|  
|[last\_is](../windows/last-is.md)|Specifica l'indice dell'ultimo elemento di matrice da un flusso.|  
|[LCID](../windows/lcid.md)|Consente di passare un identificatore delle impostazioni locali a una funzione.|  
|[length\_is](../windows/length-is.md)|Specifica il numero di elementi di matrice da un flusso.|  
|[concesso in licenza](../windows/licensed.md)|Indica che la coclasse a cui è applicato è concesso in licenza e deve essere creata un'istanza utilizzando **IClassFactory2**.|  
|[local](../windows/local-cpp.md)|Consente di utilizzare il compilatore MIDL come generatore di intestazione una volta utilizzato nell'intestazione dell'interfaccia.  Quando viene utilizzato in una singola funzione, definisce una routine locale per il quale non stub viene generato.|  
|[max\_is](../windows/max-is.md)|definisce il valore massimo per un indice valido di matrice.|  
|[modulo](../windows/module-cpp.md)|Definisce il blocco di libreria nel file IDL.|  
|[ms\_union](../windows/ms-union.md)|Controllare l'allineamento della rappresentazione dei dati della rete di unioni nonencapsulated.|  
|[no\_injected\_text](../windows/no-injected-text.md)|Impedisce il compilatore di inserire il codice riportato di seguito all'utilizzo dell'attributo.|  
|[nonbrowsable](../windows/nonbrowsable.md)|Indica che un membro di interfaccia non deve essere visualizzato in un Visualizzatore proprietà.|  
|[attribuire la non creabilità](../windows/noncreatable.md)|Definisce un oggetto che non è possibile creare un'istanza propria.|  
|[non estensibile](../windows/nonextensible.md)|specifica che `IDispatch` l'implementazione include solo le proprietà e i metodi elencati nella descrizione dell'interfaccia e non può essere estesa con i membri aggiuntivi in fase di esecuzione.|  
|[object](../windows/object-cpp.md)|identifica un'interfaccia personalizzata; sinonimo con l'attributo personalizzato.|  
|[odl](../windows/odl.md)|identifica un'interfaccia come interfaccia \(ODL\) di ODL.|  
|[oleautomation](../windows/oleautomation.md)|Indica che un'interfaccia è compatibile con l'automazione.|  
|[facoltativo](../windows/optional-cpp.md)|specifica un parametro facoltativo per una funzione membro.|  
|[out](../windows/out-cpp.md)|Identifica i parametri del puntatore restituiti dalla routine chiamata alla routine chiamante \(dal server al client\).|  
|[pointer\_default](../windows/pointer-default.md)|Specifica l'attributo predefinito del puntatore per tutti i puntatori a eccezione dei puntatori di livello superiore che vengono visualizzati gli elenchi di parametri.|  
|[pragma](../windows/pragma.md)|Genera la stringa specificata, senza i caratteri virgoletta, nel file generato con estensione .idl.|  
|[progid](../windows/progid.md)|specifica il ProgID per un oggetto COM.|  
|[propget](../windows/propget.md)|Specifica una funzione di accesso della proprietà \(get\).|  
|[propputref](../windows/propputref.md)|Specifica una funzione di impostazione delle proprietà contenente un riferimento anziché un valore.|  
|[set](../windows/propput.md)|Specifica una funzione di impostazione delle proprietà.|  
|[stampante](../windows/ptr.md)|definisce un puntatore come puntatore completo.|  
|[public](../windows/public-cpp-attributes.md)|Garantisce che un typedef entrerà nella libreria dei tipi anche se non viene fatto riferimento nel file IDL.|  
|[intervallo](../windows/range-cpp.md)|Specifica un intervallo di valori validi per gli argomenti o i campi i cui valori vengono impostati in fase di esecuzione.|  
|[readonly](../windows/readonly-cpp.md)|Non consente l'assegnazione a una variabile.|  
|[ref](../windows/ref-cpp.md)|Identifica un puntatore di riferimento.|  
|[requestedit](../windows/requestedit.md)|indica che la proprietà supporta **OnRequestEdit** notifica.|  
|[restricted](../windows/restricted.md)|Specifica che una raccolta, o il membro del modulo, di interfaccia, o di interfaccia dispatch non può essere chiamato in modo arbitrario.|  
|[retval](../windows/retval.md)|Definisce il parametro che riceve il valore restituito del membro.|  
|[size\_is](../windows/size-is.md)|Specifica la dimensione della memoria allocata per i puntatori con dimensioni, puntatori con dimensioni a puntatori con dimensioni e naturale o matrici multidimensionali.|  
|[source](../windows/source-cpp.md)|Indica che un membro di una classe, una proprietà, o del metodo è un'origine eventi.|  
|[string](../windows/string-cpp.md)|indica che l'unidimensionale `char`,  `wchar_t`,  **byte**in caso contrario, la matrice equivale al puntatore a una matrice deve essere considerato come stringa.|  
|[switch\_is](../windows/switch-is.md)|Specifica l'espressione o identificatore che agisce come un'unione discriminante che seleziona un'unione.|  
|[switch\_type](../windows/switch-type.md)|Identifica il tipo della variabile utilizzata come un'unione discriminante.|  
|[transmit\_as](../windows/transmit-as.md)|Indica al compilatore di associare un tipo interno, che le applicazioni client e server modifica, con un tipo di trasmissione.|  
|[uidefault](../windows/uidefault.md)|Indica che i membri di informazioni sul tipo è il membro predefinito per la visualizzazione nell'interfaccia utente.|  
|[univoco](../windows/unique-cpp.md)|specifica un puntatore univoco.|  
|[usesgetlasterror](../windows/usesgetlasterror.md)|Indica al chiamante che se c " è un errore durante la chiamata alla funzione, il chiamante può quindi chiamare `GetLastError` per recuperare il codice di errore.|  
|[uuid](../windows/uuid-cpp-attributes.md)|Specifica l'ID univoco per una classe o l'interfaccia.|  
|[v1\_enum](../windows/v1-enum.md)|Ordina che il tipo enumerato specificato sia trasmesse come entità a 32 bit, anziché il valore predefinito di 16 bit.|  
|[vararg](../windows/vararg.md)|Specifica che la funzione accetta un numero variabile di argomenti.|  
|[vi\_progid](../windows/vi-progid.md)|Specifica un form dell'versione\-indipendente del ProgID.|  
|[wire\_marshal](../windows/wire-marshal.md)|Specifica un tipo di dati che verrà utilizzato per la trasmissione anziché un tipo di dati specifico dell'applicazione.|  
  
## Vedere anche  
 [Attributes by Group](../windows/attributes-by-group.md)   
 [Attribute Limitations](http://msdn.microsoft.com/it-it/6e6c4329-f667-4869-b991-cbe9cb7a8f61)