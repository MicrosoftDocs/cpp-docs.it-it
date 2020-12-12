---
description: 'Altre informazioni su: attributi IDL'
title: Attributi IDL (C++ COM)
ms.date: 10/02/2018
helpviewer_keywords:
- attributes [C++/CLI], reference topics
- IDL attributes
- .idl files [C++], attributes
- IDL files [C++], attributes
- .idl files [C++]
ms.assetid: 04c596f4-c97b-4952-8053-316678b1d0b6
ms.openlocfilehash: 1db49b6c68d0dd4e4f4c6c5dcfb148cafc39159d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97275464"
---
# <a name="idl-attributes"></a>Attributi IDL

Tradizionalmente, la gestione di un file IDL significava che era necessario:

- Acquisire familiarità con la struttura e la sintassi di un file con estensione IDL per poterlo modificare.

- Utilizzare una procedura guidata che consente di modificare alcuni aspetti del file IDL.

A questo punto, è possibile modificare il file IDL dall'interno di un file di codice sorgente usando Visual C++ attributi IDL. In molti casi, gli attributi Visual C++ IDL hanno lo stesso nome degli attributi MIDL. Quando il nome di un attributo Visual C++ IDL e di un attributo MIDL è lo stesso, significa che l'inserimento dell'attributo Visual C++ nel file di codice sorgente genera un file con estensione IDL che contiene l'attributo MIDL omonimo. Tuttavia, un Visual C++ attributo IDL potrebbe non fornire tutte le funzionalità di un attributo MIDL.

Quando non vengono usati con [gli attributi com](com-attributes.md), gli attributi IDL consentono di definire le interfacce. Quando il codice sorgente viene compilato, gli attributi vengono utilizzati per definire il file IDL generato. Se utilizzati con attributi COM in un progetto ATL, alcuni attributi IDL, ad esempio `coclass` , determinano l'inserimento del codice nel progetto.

Si noti che [idl_quote](idl-quote.md) consente di usare costrutti MIDL non supportati nella versione corrente di Visual C++. Questo e altri attributi, ad esempio [importlib](importlib.md) e [INCLUDELIB (](includelib-cpp.md) , consentono di usare i file IDL esistenti nel progetto Visual Studio C++ corrente.

|Attributo|Descrizione|
|---------------|-----------------|
|[aggregatable](aggregatable.md)|Indica che un controllo può essere aggregato da un altro controllo.|
|[appobject](appobject.md)|Identifica la coclasse come oggetto applicazione, che è associato a un'applicazione EXE completa, e indica che le funzioni e le proprietà della coclasse sono disponibili a livello globale in questa libreria dei tipi.|
|[async_uuid](async-uuid.md)|Specifica l'UUID che indica al compilatore MIDL di definire versioni sincrone e asincrone di un'interfaccia COM.|
|[bindable](bindable.md)|Indica che la proprietà supporta il data binding.|
|[call_as](call-as.md)|Consente di eseguire il mapping di una funzione non a una funzione remota.|
|[case](case-cpp.md)|Utilizzato con l'attributo [switch_type](switch-type.md) in un'Unione.|
|[coclass](coclass.md)|Inserisce la definizione della classe in un file con estensione IDL come coclasse.|
|[control](control.md)|Specifica che il tipo definito dall'utente è un controllo.|
|[cpp_quote](cpp-quote.md)|Genera la stringa specificata, senza virgolette, nel file di intestazione generato.|
|[defaultbind](defaultbind.md)|Indica la singola proprietà associabile che meglio rappresenta l'oggetto.|
|[defaultcollelem](defaultcollelem.md)|Usato per l'ottimizzazione del codice Visual Basic.|
|[DefaultValue](defaultvalue.md)|Consente la specifica di un valore predefinito per un parametro facoltativo tipizzato.|
|[default](default-cpp.md)|Indica che l'interfaccia personalizzata o dispatch definita in una coclasse rappresenta l'interfaccia di programmabilità predefinita.|
|[defaultvtable](defaultvtable.md)|Definisce un'interfaccia come interfaccia vtable predefinita per un controllo.|
|[dispinterface](dispinterface.md)|Inserisce un'interfaccia nel file con estensione idl come interfaccia di dispatch.|
|[displaybind](displaybind.md)|Indica una proprietà che deve essere visualizzata all'utente come associabile.|
|[Dual](dual.md)|Inserisce un'interfaccia nel file con estensione IDL come interfaccia duale.|
|[voce](entry.md)|Specifica una funzione o una costante esportata in un modulo identificando il punto di ingresso nella DLL.|
|[first_is](first-is.md)|Specifica l'indice del primo elemento di matrice da trasmettere.|
|[helpcontext](helpcontext.md)|Specifica un ID di contesto che consente all'utente di visualizzare informazioni sull'elemento nel file della guida.|
|[helpfile](helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|
|[helpstringcontext](helpstringcontext.md)|Specifica l'ID di un argomento della Guida in un file con estensione hlp o CHM.|
|[helpstringdll](helpstringdll.md)|Specifica il nome della DLL da usare per eseguire la ricerca di stringhe di documento (localizzazione).|
|[helpstring](helpstring.md)|Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata.|
|[nascosto](hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzato in un browser orientato all'utente.|
|[idl_module](idl-module.md)|Specifica un punto di ingresso in una DLL.|
|[idl_quote](idl-quote.md)|Consente di utilizzare attributi o costrutti IDL non supportati nella versione corrente di Visual C++.|
|[id](id.md)|Specifica un DISPID per una funzione membro, ovvero una proprietà o un metodo, in un'interfaccia o in un'interfaccia dispatch.|
|[iid_is](iid-is.md)|Specifica l'IID dell'interfaccia COM a cui fa riferimento un puntatore a interfaccia.|
|[immediatebind](immediatebind.md)|Indica che il database riceverà immediatamente una notifica di tutte le modifiche apportate a una proprietà di un oggetto associato a dati.|
|[importlib](importlib.md)|Rende i tipi già compilati in un'altra libreria dei tipi disponibili per la libreria dei tipi da creare.|
|[import](import.md)|Specifica un altro file con estensione IDL, FAD o di intestazione contenente le definizioni a cui si desidera fare riferimento dal file Main. idl.|
|[includere](include-cpp.md)|Specifica uno o più file di intestazione da includere nel file con estensione IDL generato.|
|[includelib (](includelib-cpp.md)|Comporta l'inclusione di un file IDL o h nel file IDL generato.|
|[in](in-cpp.md)|Indica che un parametro deve essere passato dalla routine chiamante alla routine chiamata.|
|[last_is](last-is.md)|Specifica l'indice dell'ultimo elemento della matrice da trasmettere.|
|[lcid](lcid.md)|Consente di passare un identificatore delle impostazioni locali a una funzione.|
|[length_is](length-is.md)|Specifica il numero di elementi della matrice da trasmettere.|
|[licensed](licensed.md)|Indica che la coclasse a cui si applica è concessa in licenza ed è necessario crearne un'istanza usando `IClassFactory2` .|
|[locale](local-cpp.md)|Consente di usare il compilatore MIDL come generatore di intestazioni quando viene usato nell'intestazione dell'interfaccia. Se utilizzata in una singola funzione, definisce una procedura locale per la quale non vengono generati stub.|
|[max_is](max-is.md)|Definisce il valore massimo per un indice di matrice valido.|
|[modulo](module-cpp.md)|Definisce il blocco di libreria nel file IDL.|
|[ms_union](ms-union.md)|Controlla l'allineamento della rappresentazione dei dati di rete delle unioni non incapsulate.|
|[no_injected_text](no-injected-text.md)|Impedisce al compilatore di inserire codice come risultato dell'utilizzo dell'attributo.|
|[nonbrowsable](nonbrowsable.md)|Indica che un membro di interfaccia non deve essere visualizzato in un visualizzatore proprietà.|
|[noncreatable](noncreatable.md)|Definisce un oggetto di cui non è possibile creare un'istanza.|
|[nonextensible](nonextensible.md)|Specifica che l' `IDispatch` implementazione include solo le proprietà e i metodi elencati nella descrizione dell'interfaccia e che non possono essere estesi con membri aggiuntivi in fase di esecuzione.|
|[object](object-cpp.md)|Identifica un'interfaccia personalizzata. sinonimo di attributo personalizzato.|
|[ODL](odl.md)|Identifica un'interfaccia come interfaccia Object Description Language (FAD).|
|[oleautomation](oleautomation.md)|Indica che un'interfaccia è compatibile con l'automazione.|
|[opzionale](optional-cpp.md)|Specifica un parametro facoltativo per una funzione membro.|
|[out](out-cpp.md)|Identifica i parametri dei puntatori restituiti dalla routine chiamata alla routine chiamante (dal server al client).|
|[pointer_default](pointer-default.md)|Specifica l'attributo del puntatore predefinito per tutti i puntatori ad eccezione dei puntatori di primo livello visualizzati negli elenchi di parametri.|
|[pragma](pragma.md)|Genera la stringa specificata, senza virgolette, nel file con estensione IDL generato.|
|[ProgID](progid.md)|Specifica il ProgID per un oggetto COM.|
|[propget](propget.md)|Specifica una funzione di accesso alla proprietà (Get).|
|[propputref](propputref.md)|Specifica una funzione di impostazione di proprietà che usa un riferimento invece di un valore.|
|[propput](propput.md)|Specifica un funzione di impostazione delle proprietà.|
|[ptr](ptr.md)|Designa un puntatore come puntatore completo.|
|[public](public-cpp-attributes.md)|Assicura che un typedef entri nella libreria dei tipi anche se non vi viene fatto riferimento dall'interno del file IDL.|
|[range](range-cpp.md)|Specifica un intervallo di valori consentiti per argomenti o campi i cui valori sono impostati in fase di esecuzione.|
|[ReadOnly](readonly-cpp.md)|Impedisce l'assegnazione a una variabile.|
|[ref](ref-cpp.md)|Identifica un puntatore di riferimento.|
|[requestedit](requestedit.md)|Indica che la proprietà supporta la notifica `OnRequestEdit`.|
|[limitato](restricted.md)|Specifica che una libreria o un membro di un modulo, di un'interfaccia o di un'interfaccia dispatch non può essere chiamato in modo arbitrario.|
|[retval](retval.md)|Definisce il parametro che riceve il valore restituito del membro.|
|[size_is](size-is.md)|Specifica le dimensioni della memoria allocata per i puntatori dimensionati, i puntatori dimensionati ai puntatori di dimensione e le matrici mono o multidimensionali.|
|[source](source-cpp.md)|Indica che un membro di una classe, di una proprietà o di un metodo è un'origine di eventi.|
|[string](string-cpp.md)|Indica che la matrice unidimensionale **`char`** , **`wchar_t`** , `byte` o equivalente o il puntatore a tale matrice deve essere considerata come una stringa.|
|[switch_is](switch-is.md)|Specifica l'espressione o l'identificatore che funge da discriminante di Unione che seleziona il membro di Unione.|
|[switch_type](switch-type.md)|Identifica il tipo della variabile utilizzata come unione discriminante.|
|[transmit_as](transmit-as.md)|Indica al compilatore di associare un tipo presentato, che viene modificato dalle applicazioni client e server, con un tipo trasmesso.|
|[uidefault](uidefault.md)|Indica che il membro delle informazioni sul tipo è il membro predefinito per la visualizzazione nell'interfaccia utente.|
|[unique](unique-cpp.md)|Specifica un puntatore univoco.|
|[usesgetlasterror](usesgetlasterror.md)|Indica al chiamante che se si verifica un errore durante la chiamata a tale funzione, il chiamante può quindi chiamare `GetLastError` per recuperare il codice di errore.|
|[UUID](uuid-cpp-attributes.md)|Specifica l'ID univoco per una classe o un'interfaccia.|
|[v1_enum](v1-enum.md)|Indica che il tipo enumerato specificato deve essere trasmesso come entità a 32 bit, anziché come valore predefinito a 16 bit.|
|[vararg](vararg.md)|Specifica che la funzione accetta un numero variabile di argomenti.|
|[vi_progid](vi-progid.md)|Specifica una forma indipendente dalla versione del ProgID.|
|[wire_marshal](wire-marshal.md)|Specifica un tipo di dati che verrà utilizzato per la trasmissione anziché un tipo di dati specifico dell'applicazione.|

## <a name="see-also"></a>Vedi anche

[Attributi per gruppo](attributes-by-group.md)
