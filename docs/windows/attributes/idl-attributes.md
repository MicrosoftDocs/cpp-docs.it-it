---
title: Attributi IDL (C++ COM)
ms.date: 10/02/2018
helpviewer_keywords:
- attributes [C++/CLI], reference topics
- IDL attributes
- .idl files [C++], attributes
- IDL files [C++], attributes
- .idl files [C++]
ms.assetid: 04c596f4-c97b-4952-8053-316678b1d0b6
ms.openlocfilehash: a699e327eec056bbb36747840990bb9c7ccc259b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62409551"
---
# <a name="idl-attributes"></a>Attributi IDL

In genere, la conservazione di un file con estensione idl significava che era necessario:

- Acquisire familiarità con la struttura e sintassi di un file IDL per essere in grado di modificarlo.

- Si basano su una procedura guidata, che consente di modificare alcuni aspetti del file IDL.

A questo punto, è possibile modificare il file con estensione idl all'interno di un file di codice sorgente utilizzando attributi IDL di Visual C++. In molti casi, gli attributi di Visual C++ IDL hanno lo stesso nome come attributi MIDL. Quando il nome di un attributo di Visual C++ IDL e un attributo MIDL sono uguali, significa che l'inserimento dell'attributo di Visual C++ in file del codice sorgente avrà come risultato in un file IDL che contiene l'attributo MIDL snella. Tuttavia, un attributo di Visual C++ IDL potrebbe non fornire tutte le funzionalità di un attributo MIDL.

Se non è stato usato con [attributi COM](com-attributes.md), attributi IDL consentono di definire le interfacce. Quando viene compilato il codice sorgente, gli attributi vengono usati per definire il file con estensione IDL generato. Se usato con gli attributi COM in un progetto ATL, alcuni IDL attributi, ad esempio `coclass`, che il codice venga inserito nel progetto.

Si noti che [idl_quote](idl-quote.md) consente di usare costrutti MIDL che non sono supportati nella versione corrente dell'oggetto visivo C++. Questo e altri attributi, ad esempio [importlib](importlib.md) e [includelib](includelib-cpp.md) sarà possibile utilizzare i file con estensione idl esistenti nel progetto Visual C++ corrente.

|Attributo|Descrizione|
|---------------|-----------------|
|[aggregatable](aggregatable.md)|Indica che un controllo può essere aggregato da un altro controllo.|
|[appobject](appobject.md)|Identifica la coclasse come un oggetto applicazione che è associato a un'applicazione EXE completa e indica che le funzioni e le proprietà della coclasse sono disponibili a livello globale in questa libreria dei tipi.|
|[async_uuid](async-uuid.md)|Specifica l'UUID che indica al compilatore MIDL per definire le versioni sincrone e asincrone di un'interfaccia COM.|
|[bindable](bindable.md)|Indica che la proprietà supporta il data binding.|
|[call_as](call-as.md)|Consente a una funzione non utilizzabili in remoto per eseguire il mapping a una funzione remota.|
|[case](case-cpp.md)|Utilizzato con il [switch_type](switch-type.md) attributo in un'unione.|
|[coclass](coclass.md)|Definizione in un file con estensione idl come (coclasse) della classe posizioni.|
|[control](control.md)|Specifica che il tipo definito dall'utente è un controllo.|
|[cpp_quote](cpp-quote.md)|Genera la stringa specificata, senza i caratteri virgoletta, nel file di intestazione generato.|
|[defaultbind](defaultbind.md)|Indica la singola proprietà associabile che meglio rappresenta l'oggetto.|
|[defaultcollelem](defaultcollelem.md)|Utilizzato per l'ottimizzazione del codice Visual Basic.|
|[defaultvalue](defaultvalue.md)|Consente di specificare un valore predefinito per un parametro facoltativo tipizzato.|
|[default](default-cpp.md)|Indica che l'interfaccia personalizzata o dispatch definita in una coclasse rappresenta l'interfaccia di programmabilità predefinita.|
|[defaultvtable](defaultvtable.md)|Definisce un'interfaccia come interfaccia predefinita vtable per un controllo.|
|[dispinterface](dispinterface.md)|Inserisce un'interfaccia nel file con estensione idl come interfaccia di dispatch.|
|[displaybind](displaybind.md)|Indica una proprietà che deve essere visualizzata all'utente come associabile.|
|[dual](dual.md)|Inserisce un'interfaccia nel file con estensione idl come interfaccia duale.|
|[entry](entry.md)|Specifica una costante o alla funzione esportata in un modulo identificando il punto di ingresso nella DLL.|
|[first_is](first-is.md)|Specifica l'indice del primo elemento della matrice deve essere trasmesso.|
|[helpcontext](helpcontext.md)|Specifica un ID di contesto che consente all'utente di visualizzare informazioni sull'elemento corrente nel file della Guida.|
|[helpfile](helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|
|[helpstringcontext](helpstringcontext.md)|Specifica l'ID di un argomento della Guida in un file con estensione chm o. hlp.|
|[helpstringdll](helpstringdll.md)|Specifica il nome della DLL da usare per eseguire la ricerca della stringa di documento (localizzazione).|
|[helpstring](helpstring.md)|Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata.|
|[hidden](hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzato in un browser orientate all'utente.|
|[idl_module](idl-module.md)|Specifica un punto di ingresso in una DLL.|
|[idl_quote](idl-quote.md)|Consente di usare gli attributi o IDL costrutti che non sono supportati nella versione corrente di Visual C++.|
|[ID](id.md)|Specifica un DISPID per una funzione membro (una proprietà o un metodo, in un'interfaccia o interfaccia dispatch).|
|[iid_is](iid-is.md)|Specifica l'IID dell'interfaccia COM a cui punta un puntatore a interfaccia.|
|[immediatebind](immediatebind.md)|Indica che il database verrà immediatamente notificato tutte le modifiche apportate a una proprietà di un oggetto con associazione a dati.|
|[importlib](importlib.md)|Rende i tipi già compilati in un'altra libreria dei tipi disponibili per la libreria dei tipi da creare.|
|[import](import.md)|Specifica un altro file con estensione idl o ODL intestazione che contiene le definizioni che si desidera fare riferimento dal file con estensione idl principale.|
|[include](include-cpp.md)|Specifica uno o più file di intestazione da includere nel file IDL generato.|
|[includelib](includelib-cpp.md)|Fa sì che un file con estensione idl o con estensione h da includere nel file IDL generato.|
|[in](in-cpp.md)|Indica che un parametro deve essere passato dalla routine chiamante alla routine chiamata.|
|[last_is](last-is.md)|Specifica l'indice dell'ultimo elemento di matrice deve essere trasmesso.|
|[lcid](lcid.md)|Consente di passare un identificatore delle impostazioni locali a una funzione.|
|[length_is](length-is.md)|Specifica il numero di elementi della matrice deve essere trasmesso.|
|[licensed](licensed.md)|Indica che la coclasse al quale viene applicato è concesso in licenza e deve essere implementata con `IClassFactory2`.|
|[local](local-cpp.md)|Consente di usare il compilatore MIDL come generatore di intestazione quando usato nell'intestazione dell'interfaccia. Se usato in una singola funzione, designa una procedura locale per cui non gli stub vengono generati.|
|[max_is](max-is.md)|Definisce il valore massimo per un indice di matrice valida.|
|[module](module-cpp.md)|Definisce il blocco di libreria nel file IDL.|
|[ms_union](ms-union.md)|Controlla l'allineamento di rappresentazione dei dati di rete di unioni nonencapsulated.|
|[no_injected_text](no-injected-text.md)|Impedisce al compilatore di inserire codice in seguito a uso dell'attributo.|
|[nonbrowsable](nonbrowsable.md)|Indica che un membro di interfaccia non deve essere visualizzato in un visualizzatore proprietà.|
|[noncreatable](noncreatable.md)|Definisce un oggetto che non è possibile creare istanze di se stesso.|
|[nonextensible](nonextensible.md)|Specifica che il `IDispatch` implementazione include solo le proprietà e i metodi elencati nella descrizione dell'interfaccia e non possono essere estese con membri aggiuntivi in fase di esecuzione.|
|[object](object-cpp.md)|Identifica un'interfaccia personalizzata. sinonimo di attributo personalizzato.|
|[odl](odl.md)|Identifica un'interfaccia come interfaccia oggetto Description Language (ODL).|
|[oleautomation](oleautomation.md)|Indica che un'interfaccia è compatibile con l'automazione.|
|[optional](optional-cpp.md)|Specifica un parametro facoltativo per una funzione membro.|
|[out](out-cpp.md)|Identifica i parametri dei puntatori restituiti dalla routine chiamata alla routine chiamante (dal server al client).|
|[pointer_default](pointer-default.md)|Specifica l'attributo di puntatore predefinite per tutti i puntatori ad eccezione dei puntatori di primo livello che vengono visualizzati nell'elenco di parametri.|
|[pragma](pragma.md)|Genera la stringa specificata, senza i caratteri virgoletta, nel file con estensione IDL generato.|
|[progid](progid.md)|Specifica il ProgID di un oggetto COM.|
|[propget](propget.md)|Specifica una funzione di accesso (get) di proprietà.|
|[propputref](propputref.md)|Specifica una funzione di impostazione di proprietà che utilizza un riferimento anziché un valore.|
|[propput](propput.md)|Specifica un funzione di impostazione delle proprietà.|
|[ptr](ptr.md)|Definisce un puntatore come puntatore completo.|
|[public](public-cpp-attributes.md)|Assicura che un typedef entra in libreria dei tipi anche se non è presente all'interno del file con estensione idl.|
|[range](range-cpp.md)|Specifica un intervallo di valori consentiti per gli argomenti o i campi i cui valori vengono impostati in fase di esecuzione.|
|[readonly](readonly-cpp.md)|Non consente l'assegnazione a una variabile.|
|[ref](ref-cpp.md)|Identifica un puntatore di riferimento.|
|[requestedit](requestedit.md)|Indica che la proprietà supporta la notifica `OnRequestEdit`.|
|[restricted](restricted.md)|Specifica che una libreria o membro di un modulo, interfaccia o interfaccia dispatch non può essere chiamato in modo arbitrario.|
|[retval](retval.md)|Specifica il parametro che riceve il valore restituito del membro.|
|[size_is](size-is.md)|Specifica le dimensioni della memoria allocata per i puntatori con dimensioni, ridimensionati i puntatori ai puntatori a dimensioni e unidimensionali o le matrici multidimensionali.|
|[source](source-cpp.md)|Indica che un membro di una classe, proprietà o metodo è un'origine di eventi.|
|[string](string-cpp.md)|Indica che l'oggetto unidimensionale **char**, **wchar_t**, `byte`, o equivalente matrice o del puntatore a una matrice di questo tipo deve essere considerato una stringa.|
|[switch_is](switch-is.md)|Specifica l'espressione o un identificatore che agisce come l'unione discriminante che consente di selezionare il membro dell'unione.|
|[switch_type](switch-type.md)|Identifica il tipo della variabile utilizzata come l'unione discriminante.|
|[transmit_as](transmit-as.md)|Indica al compilatore di associare un tipo presentato, modificano le applicazioni client e server, con un tipo trasmesso.|
|[uidefault](uidefault.md)|Indica che il membro delle informazioni sul tipo è il membro predefinito per la visualizzazione nell'interfaccia utente.|
|[unique](unique-cpp.md)|Specifica un puntatore univoco.|
|[usesgetlasterror](usesgetlasterror.md)|Indica al chiamante che, se si verifica un errore quando si chiama tale funzione, il chiamante può chiamare quindi `GetLastError` per recuperare il codice di errore.|
|[uuid](uuid-cpp-attributes.md)|Specifica l'ID univoco per una classe o interfaccia.|
|[v1_enum](v1-enum.md)|Indica che il tipo enumerato specificato deve essere trasmessi come un'entità a 32 bit, anziché il valore predefinito di 16 bit.|
|[vararg](vararg.md)|Specifica che la funzione accetta un numero variabile di argomenti.|
|[vi_progid](vi-progid.md)|Specifica una forma indipendente dalla versione di ProgID.|
|[wire_marshal](wire-marshal.md)|Specifica un tipo di dati che verrà usato per la trasmissione anziché un tipo di dati specifici dell'applicazione.|

## <a name="see-also"></a>Vedere anche

[Attributi per gruppo](attributes-by-group.md)
