---
title: Gli attributi di riferimento alfabetico | Microsoft Docs
ms.custom: index-page
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.attributes
dev_langs:
- C++
helpviewer_keywords:
- attributes [C++/CLI]
ms.assetid: fb2216ef-9fbd-44f4-afed-732aa99450e2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e2353b952964ffe6b8078f688b4ac8e129d891d7
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44314685"
---
# <a name="attributes-alphabetical-reference"></a>Riferimento alfabetico agli attributi

Gli attributi seguenti sono disponibili in Visual C++.

|Attributo|Descrizione|
|---------------|-----------------|
|[aggregatable](../windows/aggregatable.md)|Indica che un controllo può essere aggregato da un altro controllo.|
|[aggregates](../windows/aggregates.md)|Indica che un controllo viene aggregata la classe di destinazione.|
|[appobject](../windows/appobject.md)|Identifica la coclasse come un oggetto applicazione che è associato a un'applicazione EXE completa e indica che le funzioni e le proprietà della coclasse sono disponibili a livello globale in questa libreria dei tipi.|
|[async_uuid](../windows/async-uuid.md)|Specifica l'UUID che indica al compilatore MIDL per definire le versioni sincrone e asincrone di un'interfaccia COM.|
|[attribute](../windows/attribute.md)|Consente di creare un attributo personalizzato.|
|[bindable](../windows/bindable.md)|Indica che la proprietà supporta il data binding.|
|[call_as](../windows/call-as.md)|Consente a una funzione non utilizzabili in remoto per eseguire il mapping a una funzione remota.|
|[case](../windows/case-cpp.md)|Utilizzato con il [switch_type](../windows/switch-type.md) attributo in un'unione.|
|[coclass](../windows/coclass.md)|Crea un oggetto COM, che è possibile implementare un'interfaccia COM.|
|[COM_INTERFACE_ENTRY](../windows/com-interface-entry-cpp.md)|Aggiunge una voce di interfaccia a una mappa COM.|
|[control](../windows/control.md)|Specifica che il tipo definito dall'utente è un controllo.|
|[cpp_quote](../windows/cpp-quote.md)|Genera la stringa specificata, senza i caratteri virgoletta, nel file di intestazione generato.|
|[custom](../windows/custom-cpp.md)|Consente di definire attributi personalizzati.|
|[db_accessor](../windows/db-accessor.md)|Associa le colonne in un set di righe e li associa ai mapping di funzione di accesso corrispondente.|
|[db_column](../windows/db-column.md)|Associa una colonna specificata al set di righe.|
|[db_command](../windows/db-command.md)|Esegue un comando OLE DB.|
|[db_param](../windows/db-param.md)|Associa un parametro di input o output la variabile di membro specificato.|
|[db_source](../windows/db-source.md)|Crea e incapsula una connessione, tramite un provider, a un'origine dati.|
|[db_table](../windows/db-table.md)|Apre una tabella di OLE DB.|
|[default](../windows/default-cpp.md)|Indica che l'interfaccia personalizzata o dispatch definita in una coclasse rappresenta l'interfaccia di programmabilità predefinita.|
|[defaultbind](../windows/defaultbind.md)|Indica la singola proprietà associabile che meglio rappresenta l'oggetto.|
|[defaultcollelem](../windows/defaultcollelem.md)|Utilizzato per l'ottimizzazione del codice Visual Basic.|
|[defaultvalue](../windows/defaultvalue.md)|Consente di specificare un valore predefinito per un parametro facoltativo tipizzato.|
|[defaultvtable](../windows/defaultvtable.md)|Definisce un'interfaccia come interfaccia predefinita vtable per un controllo.|
|[dispinterface](../windows/dispinterface.md)|Inserisce un'interfaccia nel file con estensione idl come interfaccia di dispatch.|
|[displaybind](../windows/displaybind.md)|Indica una proprietà che deve essere visualizzata all'utente come associabile.|
|[dual](../windows/dual.md)|Inserisce un'interfaccia nel file con estensione idl come interfaccia duale.|
|[emitidl](../windows/emitidl.md)|Determina se tutti gli attributi IDL successivi verranno elaborati e inseriti nel file con estensione IDL generato.|
|[entry](../windows/entry.md)|Specifica una costante o alla funzione esportata in un modulo identificando il punto di ingresso nella DLL.|
|[event_receiver](../windows/event-receiver.md)|Crea un ricevitore di eventi.|
|[event_source](../windows/event-source.md)|Crea un'origine evento.|
|[export](../windows/export.md)|Fa sì che una struttura di dati da inserire nel file IDL.|
|[first_is](../windows/first-is.md)|Specifica l'indice del primo elemento della matrice deve essere trasmesso.|
|[helpcontext](../windows/helpcontext.md)|Specifica un ID di contesto che consente all'utente di visualizzare informazioni sull'elemento corrente nel file della Guida.|
|[helpfile](../windows/helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|
|[helpstring](../windows/helpstring.md)|Specifica l'ID di un argomento della Guida in un file con estensione chm o. hlp.|
|[helpstringdll](../windows/helpstringdll.md)|Specifica il nome della DLL da usare per eseguire la ricerca della stringa di documento (localizzazione).|
|[hidden](../windows/hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzato in un browser orientate all'utente.|
|[ID](../windows/id.md)|Specifica un DISPID per una funzione membro (una proprietà o un metodo, in un'interfaccia o interfaccia dispatch).|
|[idl_module](../windows/idl-module.md)|Specifica un punto di ingresso in una DLL.|
|[idl_quote](../windows/idl-quote.md)|Consente di usare gli attributi o IDL costrutti che non sono supportati nella versione corrente di Visual C++.|
|[iid_is](../windows/iid-is.md)|Specifica l'IID dell'interfaccia COM a cui punta un puntatore a interfaccia.|
|[immediatebind](../windows/immediatebind.md)|Indica che il database verrà immediatamente notificato tutte le modifiche apportate a una proprietà di un oggetto con associazione a dati.|
|[Implementa](../windows/implements-cpp.md)|Specifica le interfacce dispatch che vengono forzate per essere membri della coclasse IDL.|
|[implements_category](../windows/implements-category.md)|Specifica le categorie di componenti implementate per la classe.|
|[import](../windows/import.md)|Specifica un altro file con estensione idl o ODL intestazione che contiene le definizioni che si desidera fare riferimento dal file con estensione idl principale.|
|[importidl](../windows/importidl.md)|Inserisce il file con estensione idl specificato nel file con estensione IDL generato.|
|[importlib](../windows/importlib.md)|Rende i tipi già compilati in un'altra libreria dei tipi disponibili per la libreria dei tipi da creare.|
|[in](../windows/in-cpp.md)|Indica che un parametro deve essere passato dalla routine chiamante alla routine chiamata.|
|[include](../windows/include-cpp.md)|Specifica uno o più file di intestazione da includere nel file IDL generato.|
|[includelib](../windows/includelib-cpp.md)|Fa sì che un file con estensione idl o con estensione h da includere nel file IDL generato.|
|[last_is](../windows/last-is.md)|Specifica l'indice dell'ultimo elemento di matrice deve essere trasmesso.|
|[lcid](../windows/lcid.md)|Consente di passare un identificatore delle impostazioni locali a una funzione.|
|[length_is](../windows/length-is.md)|Specifica il numero di elementi della matrice deve essere trasmesso.|
|[library_block](../windows/library-block.md)|Inserisce un costrutto nel blocco di libreria del file con estensione idl.|
|[licensed](../windows/licensed.md)|Indica che la coclasse al quale viene applicato è concesso in licenza e deve essere implementata con `IClassFactory2`.|
|[local](../windows/local-cpp.md)|Consente di usare il compilatore MIDL come generatore di intestazione quando usato nell'intestazione dell'interfaccia. Se usato in una singola funzione, designa una procedura locale per cui non gli stub vengono generati.|
|[max_is](../windows/max-is.md)|Definisce il valore massimo per un indice di matrice valida.|
|[modulo](../windows/module-cpp.md)|Definisce il blocco di libreria nel file IDL.|
|[ms_union](../windows/ms-union.md)|Controlla l'allineamento di rappresentazione dei dati di rete di unioni nonencapsulated.|
|[no_injected_text](../windows/no-injected-text.md)|Impedisce al compilatore di inserire codice in seguito a uso dell'attributo.|
|[nonbrowsable](../windows/nonbrowsable.md)|Indica che un membro di interfaccia non deve essere visualizzato in un visualizzatore proprietà.|
|[noncreatable](../windows/noncreatable.md)|Definisce un oggetto che non è possibile creare istanze di se stesso.|
|[nonextensible](../windows/nonextensible.md)|Specifica che il `IDispatch` implementazione include solo le proprietà e i metodi elencati nella descrizione dell'interfaccia e non possono essere estese con membri aggiuntivi in fase di esecuzione.|
|[object](../windows/object-cpp.md)|Identifica un'interfaccia personalizzata. sinonimo di attributo personalizzato.|
|[odl](../windows/odl.md)|Identifica un'interfaccia come interfaccia oggetto Description Language (ODL).|
|[oleautomation](../windows/oleautomation.md)|Indica che un'interfaccia è compatibile con l'automazione.|
|[Facoltativo](../windows/optional-cpp.md)|Specifica un parametro facoltativo per una funzione membro.|
|[out](../windows/out-cpp.md)|Identifica i parametri dei puntatori restituiti dalla routine chiamata alla routine chiamante (dal server al client).|
|[pointer_default](../windows/pointer-default.md)|Specifica l'attributo di puntatore predefinite per tutti i puntatori ad eccezione dei puntatori di primo livello che vengono visualizzati nell'elenco di parametri.|
|[pragma](../windows/pragma.md)|Genera la stringa specificata, senza i caratteri virgoletta, nel file con estensione IDL generato.|
|[progid](../windows/progid.md)|Specifica il ProgID di un oggetto COM.|
|[propget](../windows/propget.md)|Specifica una funzione di accesso (get) di proprietà.|
|[propput](../windows/propput.md)|Specifica un funzione di impostazione delle proprietà.|
|[propputref](../windows/propputref.md)|Specifica una funzione di impostazione di proprietà che utilizza un riferimento anziché un valore.|
|[ptr](../windows/ptr.md)|Definisce un puntatore come puntatore completo.|
|[public](../windows/public-cpp-attributes.md)|Assicura che un typedef entra in libreria dei tipi anche se non è presente all'interno del file con estensione idl.|
|[Intervallo](../windows/range-cpp.md)|Specifica un intervallo di valori consentiti per gli argomenti o i campi i cui valori vengono impostati in fase di esecuzione.|
|[rdx](../windows/rdx.md)|Crea o modifica una chiave del Registro di sistema.|
|[readonly](../windows/readonly-cpp.md)|Non consente l'assegnazione a una variabile.|
|[ref](../windows/ref-cpp.md)|Identifica un puntatore di riferimento.|
|[registration_script](../windows/registration-script.md)|Esegue lo script di registrazione specificata.|
|[requestedit](../windows/requestedit.md)|Indica che la proprietà supporta il `OnRequestEdit` notifica.|
|[requires_category](../windows/requires-category.md)|Specifica le categorie di componenti necessari per la classe.|
|[restricted](../windows/restricted.md)|Specifica che una libreria o membro di un modulo, interfaccia o interfaccia dispatch non può essere chiamato in modo arbitrario.|
|[retval](../windows/retval.md)|Specifica il parametro che riceve il valore restituito del membro.|
|[satype](../windows/satype.md)|Specifica il tipo di dati di `SAFEARRAY`.|
|[size_is](../windows/size-is.md)|Specifica le dimensioni della memoria allocata per i puntatori con dimensioni, ridimensionati i puntatori ai puntatori a dimensioni e unidimensionali o le matrici multidimensionali.|
|[source](../windows/source-cpp.md)|Indica che un membro di una classe, proprietà o metodo è un'origine di eventi.|
|[string](../windows/string-cpp.md)|Indica che l'oggetto unidimensionale **char**, **wchar_t**, `byte`, o equivalente matrice o del puntatore a una matrice di questo tipo deve essere considerato una stringa.|
|[support_error_info](../windows/support-error-info.md)|Supporta la segnalazione degli errori per l'oggetto di destinazione.|
|[switch_is](../windows/switch-is.md)|Specifica l'espressione o un identificatore che agisce come l'unione discriminante che consente di selezionare il membro dell'unione.|
|[switch_type](../windows/switch-type.md)|Identifica il tipo della variabile utilizzata come l'unione discriminante.|
|[synchronize](../windows/synchronize.md)|Sincronizza l'accesso a un metodo.|
|[Threading](../windows/threading-cpp.md)|Specifica il modello di threading per un oggetto COM.|
|[transmit_as](../windows/transmit-as.md)|Indica al compilatore di associare un tipo presentato, modificano le applicazioni client e server, con un tipo trasmesso.|
|[uidefault](../windows/uidefault.md)|Indica che il membro delle informazioni sul tipo è il membro predefinito per la visualizzazione nell'interfaccia utente.|
|[unique](../windows/unique-cpp.md)|Specifica un puntatore univoco.|
|[usesgetlasterror](../windows/usesgetlasterror.md)|Indica al chiamante che, se si verifica un errore quando si chiama tale funzione, il chiamante può chiamare quindi `GetLastError` per recuperare il codice di errore.|
|[uuid](../windows/uuid-cpp-attributes.md)|Specifica l'ID univoco per una classe o interfaccia.|
|[v1_enum](../windows/v1-enum.md)|Indica che il tipo enumerato specificato deve essere trasmessi come un'entità a 32 bit, anziché il valore predefinito di 16 bit.|
|[vararg](../windows/vararg.md)|Specifica che la funzione accetta un numero variabile di argomenti.|
|[version](../windows/version-cpp.md)|Identifica una particolare versione tra più versioni di un'interfaccia o classe.|
|[vi_progid](../windows/vi-progid.md)|Specifica una forma indipendente dalla versione di ProgID.|
|[wire_marshal](../windows/wire-marshal.md)|Specifica un tipo di dati che verrà usato per la trasmissione anziché un tipo di dati specifici dell'applicazione.|

## <a name="see-also"></a>Vedere anche

[Riferimenti relativi agli attributi di C++](../windows/cpp-attributes-reference.md)  
[Concetti](../windows/attributed-programming-concepts.md)  
[Attributi per gruppo](../windows/attributes-by-group.md)  
[Attributi per utilizzo](../windows/attributes-by-usage.md)