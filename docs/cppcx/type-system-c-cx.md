---
title: Sistema di tipi (C + + CX) | Documenti Microsoft
ms.custom: 
ms.date: 02/03/2017
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: b67bee8a-b526-4872-969e-ef22724e88fe
caps.latest.revision: "28"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.openlocfilehash: c1839fad0c929f6e24b74f74c2cc91e29e07005b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="type-system-ccx"></a>Sistema di tipi (C++/CX)
Tramite l'architettura di Windows Runtime, è possibile utilizzare C + + CX, Visual Basic, Visual c# e JavaScript per scrivere App e componenti che direttamente accedere all'API Windows e interagiscono con altri componenti e App di Windows Runtime. Piattaforma Windows universale che vengono scritti in C++ compilata nel codice nativo eseguibile direttamente nella CPU. Piattaforma Windows universale che vengono scritti in c# o Visual Basic compilate in Microsoft intermediate language (MSIL) ed eseguite in common language runtime (CLR). Piattaforma Windows universale che vengono scritte in JavaScript eseguite in un ambiente di runtime. Componenti stessi del sistema operativo Windows Runtime sono scritti in C++ ed eseguiti come codice nativo. Tutti questi componenti e App Universal Windows Platform comunicano direttamente attraverso l'interfaccia di Windows Runtime application binaria (ABI).  
  
 Per abilitare il supporto per Windows Runtime in un linguaggio C++ moderno, Microsoft ha creato il C + + CX. C + + CX fornisce tipi di base incorporati e implementazioni di tipi fondamentali di Windows Runtime che consentono alle applicazioni C++ e componenti di comunicare attraverso l'interfaccia ABI con applicazioni scritte in altri linguaggi. È possibile utilizzare qualsiasi tipo di Windows Runtime o creare classi, struct, interfacce e altri tipi definiti dall'utente che possono essere utilizzati da altri componenti e App Universal Windows Platform. un'app Universal Windows Platform che viene scritto in C + + CX può utilizzare anche struct e classi C++ regolari fino a quando non dispone di accessibilità pubblica.  
  
 Per un'analisi approfondita della proiezione del linguaggio C++/CX e del modo in cui funziona, vedi questi post di blog:  
  
1.  [C + + CX parte 0 di \[ n \]: introduzione](https://blogs.msdn.microsoft.com/vcblog/2012/08/29/ccx-part-0-of-n-an-introduction)  
  
2.  [C + + CX parte 1 di \[ n \]: una classe semplice di](https://blogs.msdn.microsoft.com/vcblog/2012/09/05/ccx-part-1-of-n-a-simple-class)  
  
3.  [C + + CX parte 2 di \[ n \]: tipi Hat](https://blogs.msdn.microsoft.com/vcblog/2012/09/17/ccx-part-2-of-n-types-that-wear-hats)  
  
4.  [C + + CX parte 3 di \[ n \]: in fase di costruzione](https://blogs.msdn.microsoft.com/vcblog/2012/10/05/ccx-part-3-of-n-under-construction/)  
  
5.  [C + + CX parte 4 di \[ n \]: funzioni membro statiche](https://blogs.msdn.microsoft.com/vcblog/2012/10/19/ccx-part-4-of-n-static-member-functions)  
  
## <a name="windows-metadata-winmd-files"></a>File di metadati di Windows (.winmd)  
 Quando si compila un'app Universal Windows Platform che viene scritto in C++, il compilatore genera il file eseguibile in codice macchina nativo e genera inoltre un file di metadati (con estensione winmd) di Windows distinto contenente le descrizioni dei tipi Windows Runtime pubblici, che includono classi, struct, enumerazioni, interfacce, interfacce parametrizzate e delegati. Il formato dei metadati è simile a quello utilizzato negli assembly .NET Framework.  In un componente C++, il file .winmd contiene solo metadati. Il codice eseguibile risiede in un file separato. Questo vale per i componenti Windows Runtime inclusi in Windows. Il nome del file WinMD deve corrispondere o essere un prefisso dello spazio dei nomi radice nel codice sorgente. Per i linguaggi .NET Framework, il file .winmd contiene sia il codice che i metadati, come in un assembly .NET Framework).  
  
 I metadati nel file .winmd rappresentano l'area pubblicata del codice. I tipi pubblicati sono visibili ad altre piattaforme di Windows universale indipendentemente dal linguaggio in cui sono scritte queste altre app. Pertanto, i metadati o il codice pubblicato, può contenere solo tipi specificati dal sistema di tipi Windows Runtime. I costrutti di linguaggio che sono specifici al linguaggio C++, quali i normali contenitori STL, i modelli, le matrici e le classi, non possono essere pubblicati nei metadati in quanto un'applicazione client scritta in C# o Javascript non li riconoscerebbe.  
  
 La visibilità di un tipo o di un metodo nei metadati dipende da quali modificatori di accessibilità sono ad esso applicati. Per essere visibile, un tipo deve essere dichiarato in uno spazio dei nomi e deve essere dichiarato come pubblico. È possibile utilizzare una classe di riferimento non pubblica come tipo di supporto interno nel codice, tuttavia non sarà visibile nei metadati. Anche in una classe di riferimento pubblica, non tutti i membri sono necessariamente visibili. La tabella seguente elenca la relazione tra gli identificatori di accesso C++ in una classe di riferimento pubblica e visibilità dei metadati di Windows Runtime:  
  
|||  
|-|-|  
|**Pubblicato nei metadati**|**Non pubblicato nei metadati**|  
|public|private|  
|protected|internal|  
|protetto pubblico|protetto privato|  
  
 È possibile utilizzare il **Visualizzatore oggetti** per visualizzare il contenuto dei file .winmd. I componenti Windows Runtime inclusi in Windows sono nel file winmd. Il file default contiene i tipi fondamentali utilizzati in C + + CX e Platform. winmd contiene i tipi aggiuntivi dallo spazio dei nomi di piattaforma. Per impostazione predefinita, questi tre file. winmd sono inclusi in tutti i progetti C++ per le app Universal Windows Platform.  
  
> [!TIP]
>  I tipi nell'oggetto [Platform::Collections Namespace](../cppcx/platform-collections-namespace.md) non sono presenti nel file .winmd perché non sono pubblici. Sono implementazioni specifiche di C++ private delle interfacce definite in `Windows::Foundation::Collections`. Un'app di Windows Runtime scritta in JavaScript o c# non riconosce un [Platform::Collections::Vector classe](../cppcx/platform-collections-vector-class.md) è, ma può utilizzare un `Windows::Foundation::Collections::IVector`. I tipi `Platform::Collections` sono definiti nel file collection.h.  
  
## <a name="windows-runtime-type-system-in-ccx"></a>Sistema di tipi Windows Runtime in C + + CX  
 Nelle sezioni seguenti descrivono le funzionalità principali di sistema di tipi Windows Runtime e in che modo sono supportati in C + + CX.  
  
### <a name="namespaces"></a>Spazi dei nomi  
 Tutti i tipi di Windows Runtime devono essere dichiarati all'interno di uno spazio dei nomi; la stessa interfaccia API di Windows è organizzata per spazio dei nomi. Un file .winmd deve avere lo stesso nome dello spazio dei nomi radice. Ad esempio, è possibile creare un'istanza di una classe denominata A.B.C.MyClass solo se è definita in un file di metadati denominato A.winmd o A.B.winmd o A.B.C.winmd. Il nome della DLL non deve necessariamente corrispondere al nome del file con estensione winmd.  
  
 La stessa interfaccia API di Windows è stata ripensata come libreria di classi con corretto factoring organizzata per spazio dei nomi.  Tutti i componenti Windows Runtime vengono dichiarati negli spazi dei nomi Windows.  
  
 Per ulteriori informazioni, vedere [gli spazi dei nomi e visibilità del tipo](../cppcx/namespaces-and-type-visibility-c-cx.md).  
  
### <a name="fundamental-types"></a>Tipi fondamentali  
 Windows Runtime definisce i seguenti tipi fondamentali, UInt8, Int16, UInt16, Int32, UInt32, Int64, UInt64, Single, Double, Char16, valore booleano e stringa. C + + CX supporta i tipi numerici fondamentali nello spazio dei nomi predefinito come uint16, uint32, uint64, int16, int32, int64, float32, float64 e char16. Boolean e String sono inoltre definiti nello spazio dei nomi Platform.  
  
 C + + CX anche definisce il tipo uint8, equivalente a `unsigned char`, che non è supportata in Windows Runtime e non può essere utilizzato nelle API pubbliche.  
  
 Un tipo fondamentale può essere reso nullable mediante il wrapping in un'interfaccia [Platform::IBox](../cppcx/platform-ibox-interface.md) . Per ulteriori informazioni, vedi [Classi e struct di valore](../cppcx/value-classes-and-structs-c-cx.md).  
  
 Per ulteriori informazioni sui tipi fondamentali, vedi [Tipi fondamentali](../cppcx/fundamental-types-c-cx.md)  
  
### <a name="strings"></a>Stringhe  
 Una stringa di Windows Runtime è una sequenza non modificabile di caratteri UNICODE a 16 bit. Una stringa di Windows Runtime viene proiettata come `Platform::String^`. Questa classe fornisce i metodi per la creazione, la modifica e la conversione di stringhe verso e da `wchar_t`.  
  
 Per ulteriori informazioni, vedi [Stringhe](../cppcx/strings-c-cx.md).  
  
### <a name="arrays"></a>Matrici  
 Windows Runtime supporta le matrici multidimensionali con 1 di qualsiasi tipo. Le matrici di matrici non sono supportate.  In C + + CX, matrici di Windows Runtime vengono proiettate come il [classe platform:: Array](../cppcx/platform-array-class.md).  
  
 Per ulteriori informazioni, vedere [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md)  
  
### <a name="ref-classes-and-structs"></a>Classi e struct di riferimento  
 Una classe di Runtime di Windows viene proiettata in C + + CX come una classe di riferimento o uno struct, perché questi elementi vengono copiati dal riferimento. La gestione della memoria per le classi e gli struct di riferimento avviene in modo trasparente attraverso il conteggio dei riferimenti. Quando l'ultimo riferimento a un oggetto esce dall'ambito, l'oggetto viene rimosso. Una classe o uno struct di riferimento presenta le seguenti caratteristiche:  
  
-   Contengono costruttori, metodi, proprietà ed eventi come membri. Questi membri possono avere accessibilità interna, protetta, privata o pubblica.  
  
-   Possono contenere definizioni annidati private di enumerazione, struct o classe.  
  
-   Possono ereditare direttamente da una classe di base e implementare un numero indefinito di interfacce. Tutte le classi di riferimento sono implicitamente convertibili in [Platform::Object Class](../cppcx/platform-object-class.md) e possono eseguire l'override dei relativi metodi virtuali, ad esempio [Object::ToString](../cppcx/platform-object-class.md#tostring).  
  
 Una classe di riferimento che dispone di un costruttore pubblico deve essere dichiarata come sealed, per impedire ulteriori derivazioni.  
  
 Per ulteriori informazioni, vedi [Classi e struct di riferimento](../cppcx/ref-classes-and-structs-c-cx.md)  
  
### <a name="value-classes-and-structs"></a>Classi e struct di valore  
 Uno struct o una classe di valore rappresenta una struttura di dati di base e contiene solo i campi, che possono essere classi di valore, struct di valore o tipi `Platform::String^`.  Gli struct di valore e le classi di valore vengono copiati in base al valore.  
  
 Uno struct di valore può essere reso nullable mediante il wrapping in un'interfaccia IBox.  
  
 Per ulteriori informazioni, vedi [Classi e struct di valore](../cppcx/value-classes-and-structs-c-cx.md).  
  
### <a name="partial-classes"></a>Classi parziali  
 La funzionalità classe parziale consente la definizione di una classe su più file. Viene usata principalmente per consentire agli strumenti di generazione del codice come l'editor XAML di modificare un file senza interessare il file modificato.  
  
 Per ulteriori informazioni, vedi [Classi parziali](../cppcx/partial-classes-c-cx.md)  
  
### <a name="properties"></a>Proprietà  
 Una proprietà è un membro dati pubblico di qualsiasi tipo di Windows Runtime e viene implementata come una coppia di metodi get e set. Il codice client accede a una proprietà come se fosse un campo pubblico. Una proprietà che non richiede istruzioni Get o Set personalizzate nel codice è nota come *proprietà semplice* e può essere dichiarata senza i metodi Get e Set espliciti.  
  
 Per ulteriori informazioni, vedi [Proprietà](../cppcx/properties-c-cx.md).  
  
### <a name="windows-runtime-collections-in-ccx"></a>Le raccolte di Windows Runtime in C + + CX  
 Windows Runtime definisce un set di interfacce per i tipi di raccolta che ogni linguaggio implementa secondo le proprie regole. C + + CX fornisce le implementazioni nel [Platform::Collections::Vector classe](../cppcx/platform-collections-vector-class.md), [Platform::Collections::Map classe](../cppcx/platform-collections-map-class.md)e altri tipi di raccolta concreti correlati, che sono compatibili con i relativi Standard rispettive controparti della libreria STL (Template).  
  
 Per ulteriori informazioni, vedere [raccolte](../cppcx/collections-c-cx.md).  
  
### <a name="template-ref-classes"></a>Classi di riferimento del modello  
 Le classi di riferimento private e interne possono essere basate su modelli e rese più specifiche.  
  
 Per ulteriori informazioni, vedi [Classi di riferimento del modello](../cppcx/template-ref-classes-c-cx.md).  
  
### <a name="interfaces"></a>Interfacce  
 Un'interfaccia di Windows Runtime definisce un set di proprietà pubbliche, metodi ed eventi che una classe di riferimento o uno struct deve implementare se eredita dall'interfaccia.  
  
 Per altre informazioni, vedere [Interfacce](../cppcx/interfaces-c-cx.md).  
  
### <a name="enums"></a>Enumerazioni  
 Una classe di enumerazione in Windows Runtime è simile a un'enumerazione con ambito in C++. Il tipo sottostante è int32, a meno che non venga applicato l'attributo [Flags], in tal caso il tipo sottostante è uint32.  
  
 Per ulteriori informazioni, vedi [Enumerazioni](../cppcx/enums-c-cx.md).  
  
### <a name="delegates"></a>Delegati  
 Un delegato in Windows Runtime è analogo a un oggetto std:: Function in C++. È un genere speciale di classe di riferimento utilizzato per funzioni fornite dal client che hanno firme compatibili.  I delegati sono utilizzati più di frequente in Windows Runtime come tipo di un evento.  
  
 Per altre informazioni, vedere [Delegati](../cppcx/delegates-c-cx.md).  
  
### <a name="exceptions"></a>Eccezioni  
 In C++/CX, è possibile intercettare i tipi di eccezione personalizzati, i tipi [std::exception](../standard-library/exception-class.md) e i tipi [Platform::Exception](../cppcx/platform-exception-class.md) .  
  
 Per ulteriori informazioni, vedi [Eccezioni](../cppcx/exceptions-c-cx.md).  
  
### <a name="events"></a>Eventi  
 Un evento è un membro pubblico in una classe o uno struct di riferimento il cui tipo è un tipo di delegato. Un evento può essere richiamato, ovvero generato, dalla classe proprietaria. Tuttavia, il codice client può fornire funzioni proprie, che sono note come gestori eventi e vengono richiamate quando la classe proprietaria genera l'evento.  
  
 Per ulteriori informazioni, vedi [Eventi](../cppcx/events-c-cx.md).  
  
### <a name="casting"></a>Cast  
 C++/CX supporta gli operatori cast C++ standard [static_cast](../cpp/static-cast-operator.md), [dynamic_cast](../cpp/dynamic-cast-operator.md)e [reinterpret_cast](../cpp/reinterpret-cast-operator.md)e l'operatore **safe_cast** specifico di C++/CX.  
  
 Per ulteriori informazioni, vedi [Cast](../cppcx/casting-c-cx.md).  
  
### <a name="boxing"></a>Boxing  
 Una variabile boxed è un tipo di valore di cui è stato eseguito il wrapping in un tipo di riferimento in situazioni in cui è richiesta la semantica dei riferimenti.  
  
 Per ulteriori informazioni, vedi [Boxing](../cppcx/boxing-c-cx.md).  
  
### <a name="attributes"></a>Attributi  
 Un attributo è un valore di metadati che può essere applicato a qualsiasi tipo di Windows Runtime o un membro del tipo e può essere esaminato in fase di esecuzione. Windows Runtime definisce un set di attributi comuni nel `Windows::Foundation::Metadata` dello spazio dei nomi. Attributi definiti dall'utente nelle interfacce pubbliche non sono supportati da Windows Runtime in questa versione.  
  
## <a name="api-deprecation"></a>Deprecazione di API  
 Viene descritto come contrassegnare le API pubbliche come deprecate usando lo stesso attributo usato dai tipi di sistema di Windows Runtime.  
  
 Per ulteriori informazioni, vedere [deprecazione di tipi e membri](../cppcx/deprecating-types-and-members-c-cx.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio di Visual C++](../cppcx/visual-c-language-reference-c-cx.md)
