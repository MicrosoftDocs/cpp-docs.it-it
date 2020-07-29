---
title: Sistema di tipi (C++/CX)
ms.date: 02/03/2017
ms.assetid: b67bee8a-b526-4872-969e-ef22724e88fe
ms.openlocfilehash: b9d26f0fc79b2dc5000be6e6a06f51efd3f0b53f
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87221549"
---
# <a name="type-system-ccx"></a>Sistema di tipi (C++/CX)

Usando l'architettura di Windows Runtime, è possibile usare C++/CX, Visual Basic, Visual C# e JavaScript per scrivere app e componenti che accedono direttamente all'API Windows e interagiscono con altre app e componenti di Windows Runtime. Piattaforma UWP (Universal Windows Platform) le app scritte in C++ vengono compilate in codice nativo eseguito direttamente nella CPU. Piattaforma UWP (Universal Windows Platform) le app scritte in C# o Visual Basic compilate in Microsoft Intermediate Language (MSIL) ed eseguite nel Common Language Runtime (CLR). Piattaforma UWP (Universal Windows Platform) le app scritte in JavaScript vengono eseguite in un ambiente di Runtime. I Windows Runtime componenti del sistema operativo sono scritti in C++ ed eseguiti come codice nativo. Tutti questi componenti e piattaforma UWP (Universal Windows Platform) app comunicano direttamente tramite l'interfaccia ABI (Windows Runtime Application Binary Interface).

Per abilitare il supporto per la Windows Runtime in un linguaggio C++ moderno, Microsoft ha creato il/CX. C++ C++/CX fornisce tipi di base incorporati e implementazioni di tipi di Windows Runtime fondamentali che consentono alle app e ai componenti C++ di comunicare attraverso l'interfaccia ABI con le app scritte in altri linguaggi. È possibile utilizzare qualsiasi tipo di Windows Runtime o creare classi, struct, interfacce e altri tipi definiti dall'utente che possono essere utilizzati da altre app e componenti di piattaforma UWP (Universal Windows Platform). una piattaforma UWP (Universal Windows Platform) app scritta in C++/CX può anche usare classi e struct C++ regolari, purché non dispongano di accessibilità pubblica.

Per un'analisi approfondita della proiezione del linguaggio C++/CX e del modo in cui funziona, vedi questi post di blog:

- [C++/CX parte 0 di \[ n \] : introduzione](https://devblogs.microsoft.com/cppblog/ccx-part-0-of-n-an-introduction/)

- [C++/CX parte 1 di \[ n \] : classe semplice](https://devblogs.microsoft.com/cppblog/ccx-part-1-of-n-a-simple-class/)

- [C++/CX-parte 2 di \[ n \] : tipi che indossano cappelli](https://devblogs.microsoft.com/cppblog/ccx-part-2-of-n-types-that-wear-hats/)

- [C++/CX-parte 3 di \[ n \] : in fase di costruzione](https://devblogs.microsoft.com/cppblog/ccx-part-3-of-n-under-construction/)

- [C++/CX parte 4 di \[ n \] : funzioni membro statiche](https://devblogs.microsoft.com/cppblog/ccx-part-4-of-n-static-member-functions/)

## <a name="windows-metadata-winmd-files"></a>File di metadati di Windows (.winmd)

Quando si compila un'app piattaforma UWP (Universal Windows Platform) scritta in C++, il compilatore genera l'eseguibile nel codice della macchina nativa e genera anche un file di metadati di Windows (con estensione winmd) separato che contiene le descrizioni dei tipi di Windows Runtime pubblici, che includono classi, struct, enumerazioni, interfacce, interfacce con parametri e delegati. Il formato dei metadati è simile a quello utilizzato negli assembly .NET Framework.  In un componente C++, il file .winmd contiene solo metadati. Il codice eseguibile risiede in un file separato. Questo è il caso per i componenti Windows Runtime inclusi in Windows. Il nome del file WinMD deve corrispondere o essere un prefisso dello spazio dei nomi radice nel codice sorgente. Per i linguaggi .NET Framework, il file .winmd contiene sia il codice che i metadati, come in un assembly .NET Framework).

I metadati nel file .winmd rappresentano l'area pubblicata del codice. I tipi pubblicati sono visibili ad altre piattaforme Windows universali indipendentemente dalla lingua in cui sono scritte le altre app. Pertanto, i metadati, o il codice pubblicato, possono contenere solo tipi specificati dal sistema di tipi di Windows Runtime. I costrutti di linguaggio che sono specifici al linguaggio C++, quali i normali contenitori STL, i modelli, le matrici e le classi, non possono essere pubblicati nei metadati in quanto un'applicazione client scritta in C# o Javascript non li riconoscerebbe.

La visibilità di un tipo o di un metodo nei metadati dipende da quali modificatori di accessibilità sono ad esso applicati. Per essere visibile, un tipo deve essere dichiarato in uno spazio dei nomi e deve essere dichiarato come pubblico. È possibile utilizzare una classe di riferimento non pubblica come tipo di supporto interno nel codice, tuttavia non sarà visibile nei metadati. Anche in una classe di riferimento pubblica, non tutti i membri sono necessariamente visibili. La tabella seguente elenca la relazione tra gli identificatori di accesso C++ in una classe di riferimento pubblica e la visibilità dei metadati Windows Runtime:

|||
|-|-|
|**Pubblicato nei metadati**|**Non pubblicato nei metadati**|
|public|private|
|protected|interno|
|protetto pubblico|protetto privato|

È possibile utilizzare il **Visualizzatore oggetti** per visualizzare il contenuto dei file .winmd. I componenti di Windows Runtime inclusi in Windows si trovano nel file Windows. winmd. Il file con estensione WinMD predefinito contiene i tipi fondamentali usati in C++/CX e Platform. winmd contiene tipi aggiuntivi dello spazio dei nomi Platform. Per impostazione predefinita, questi tre file. winmd sono inclusi in ogni progetto C++ per le app piattaforma UWP (Universal Windows Platform).

> [!TIP]
> I tipi nell'oggetto [Platform::Collections Namespace](../cppcx/platform-collections-namespace.md) non sono presenti nel file .winmd perché non sono pubblici. Sono implementazioni specifiche di C++ private delle interfacce definite in `Windows::Foundation::Collections`. Un'app Windows Runtime scritta in JavaScript o C# non conosce la [Classe Platform:: Collections:: Vector](../cppcx/platform-collections-vector-class.md) , ma può utilizzare un oggetto `Windows::Foundation::Collections::IVector` . I tipi `Platform::Collections` sono definiti nel file collection.h.

## <a name="windows-runtime-type-system-in-ccx"></a>Sistema di tipi di Windows Runtime in C++/CX

Le sezioni seguenti descrivono le principali funzionalità del sistema di tipi di Windows Runtime e il modo in cui sono supportate in C++/CX.

### <a name="namespaces"></a>Spazi dei nomi

Tutti i tipi di Windows Runtime devono essere dichiarati in uno spazio dei nomi; l'API di Windows è organizzata in base agli spazi dei nomi. Un file .winmd deve avere lo stesso nome dello spazio dei nomi radice. Ad esempio, è possibile creare un'istanza di una classe denominata A.B.C.MyClass solo se è definita in un file di metadati denominato A.winmd o A.B.winmd o A.B.C.winmd. Il nome della DLL non deve necessariamente corrispondere al nome del file con estensione winmd.

La stessa interfaccia API di Windows è stata ripensata come libreria di classi con corretto factoring organizzata per spazio dei nomi.  Tutti i componenti Windows Runtime sono dichiarati negli spazi dei nomi Windows. *.

Per ulteriori informazioni, vedere [spazi dei nomi e visibilità del tipo](../cppcx/namespaces-and-type-visibility-c-cx.md).

### <a name="fundamental-types"></a>Tipi fondamentali

Il Windows Runtime definisce i seguenti tipi fondamentali: UInt8, Int16, UInt16, Int32, UInt32, Int64, UInt64, Single, Double, Char16, Boolean e String. C++/CX supporta i tipi numerici fondamentali nello spazio dei nomi predefinito come UInt16, UInt32, UInt64, Int16, Int32, Int64, float32, float64 e Char16. Boolean e String sono inoltre definiti nello spazio dei nomi Platform.

C++/CX definisce anche Uint8, equivalente a **`unsigned char`** , che non è supportato nell'Windows Runtime e non può essere usato in API pubbliche.

Un tipo fondamentale può essere reso nullable mediante il wrapping in un'interfaccia [Platform::IBox](../cppcx/platform-ibox-interface.md) . Per ulteriori informazioni, vedi [Classi e struct di valore](../cppcx/value-classes-and-structs-c-cx.md).

Per ulteriori informazioni sui tipi fondamentali, vedi [Tipi fondamentali](../cppcx/fundamental-types-c-cx.md)

### <a name="strings"></a>Stringhe

Una stringa di Windows Runtime è una sequenza non modificabile di caratteri UNICODE a 16 bit. Una stringa di Windows Runtime viene proiettata come `Platform::String^` . Questa classe fornisce metodi per la creazione, la manipolazione e la conversione di stringhe da e verso **`wchar_t`** .

Per ulteriori informazioni, vedi [Stringhe](../cppcx/strings-c-cx.md).

### <a name="arrays"></a>Matrici

Il Windows Runtime supporta matrici unidimensionali di qualsiasi tipo. Le matrici di matrici non sono supportate.  In C++/CX, le matrici di Windows Runtime vengono proiettate come [Classe Platform:: Array](../cppcx/platform-array-class.md).

Per ulteriori informazioni, vedere [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md)

### <a name="ref-classes-and-structs"></a>Classi e struct di riferimento

Una classe Windows Runtime viene proiettata in C++/CX come una classe di riferimento o uno struct di riferimento, perché vengono copiati in base al riferimento. La gestione della memoria per le classi e gli struct di riferimento avviene in modo trasparente attraverso il conteggio dei riferimenti. Quando l'ultimo riferimento a un oggetto esce dall'ambito, l'oggetto viene rimosso. Una classe o uno struct di riferimento presenta le seguenti caratteristiche:

- Contengono costruttori, metodi, proprietà ed eventi come membri. Questi membri possono avere accessibilità interna, protetta, privata o pubblica.

- Possono contenere definizioni annidati private di enumerazione, struct o classe.

- Possono ereditare direttamente da una classe di base e implementare un numero indefinito di interfacce. Tutte le classi di riferimento sono implicitamente convertibili in [Platform::Object Class](../cppcx/platform-object-class.md) e possono eseguire l'override dei relativi metodi virtuali, ad esempio [Object::ToString](../cppcx/platform-object-class.md#tostring).

Una classe di riferimento che dispone di un costruttore pubblico deve essere dichiarata come sealed, per impedire ulteriori derivazioni.

Per altre informazioni, vedere [classi e struct di riferimento](../cppcx/ref-classes-and-structs-c-cx.md)

### <a name="value-classes-and-structs"></a>Classi e struct di valore

Uno struct o una classe di valore rappresenta una struttura di dati di base e contiene solo i campi, che possono essere classi di valore, struct di valore o tipi `Platform::String^`.  Gli struct di valore e le classi di valore vengono copiati in base al valore.

Uno struct di valore può essere reso nullable mediante il wrapping in un'interfaccia IBox.

Per ulteriori informazioni, vedi [Classi e struct di valore](../cppcx/value-classes-and-structs-c-cx.md).

### <a name="partial-classes"></a>Classi parziali

La funzionalità classe parziale consente la definizione di una classe su più file. Viene usata principalmente per consentire agli strumenti di generazione del codice come l'editor XAML di modificare un file senza interessare il file modificato.

Per ulteriori informazioni, vedi [Classi parziali](../cppcx/partial-classes-c-cx.md)

### <a name="properties"></a>Proprietà

Una proprietà è un membro dati pubblico di qualsiasi tipo di Windows Runtime e viene implementata come coppia di metodi get/set. Il codice client accede a una proprietà come se fosse un campo pubblico. Una proprietà che non richiede istruzioni Get o Set personalizzate nel codice è nota come *proprietà semplice* e può essere dichiarata senza i metodi Get e Set espliciti.

Per ulteriori informazioni, vedi [Proprietà](../cppcx/properties-c-cx.md).

### <a name="windows-runtime-collections-in-ccx"></a>Raccolte di Windows Runtime in C++/CX

Il Windows Runtime definisce un set di interfacce per i tipi di raccolta che ogni linguaggio implementa in modo autonomo. C++/CX fornisce implementazioni nella classe [Platform:: Collections:: Vector class](../cppcx/platform-collections-vector-class.md), [Platform:: Collections:: Map](../cppcx/platform-collections-map-class.md)e in altri tipi di raccolta concreti correlati, compatibili con le rispettive controparti STL (Standard Template Library).

Per ulteriori informazioni, vedere [raccolte](../cppcx/collections-c-cx.md).

### <a name="template-ref-classes"></a>Classi di riferimento del modello

Le classi di riferimento private e interne possono essere basate su modelli e rese più specifiche.

Per ulteriori informazioni, vedi [Classi di riferimento del modello](../cppcx/template-ref-classes-c-cx.md).

### <a name="interfaces"></a>Interfacce

Un'interfaccia Windows Runtime definisce un set di proprietà, metodi ed eventi pubblici che devono essere implementati da una classe di riferimento o da uno struct di riferimento se ereditano dall'interfaccia.

Per ulteriori informazioni, vedi [Interfacce](../cppcx/interfaces-c-cx.md).

### <a name="enums"></a>Enumerazioni

Una classe enum in Windows Runtime è simile a un'enumerazione con ambito in C++. Il tipo sottostante è int32, a meno che non venga applicato l'attributo [Flags], in tal caso il tipo sottostante è uint32.

Per ulteriori informazioni, vedi [Enumerazioni](../cppcx/enums-c-cx.md).

### <a name="delegates"></a>Delegati

Un delegato nel Windows Runtime è analogo a un oggetto std:: Function in C++. È un genere speciale di classe di riferimento utilizzato per funzioni fornite dal client che hanno firme compatibili.  I delegati vengono usati più comunemente nell'Windows Runtime come tipo di un evento.

Per ulteriori informazioni, vedi [Delegati](../cppcx/delegates-c-cx.md).

### <a name="exceptions"></a>Eccezioni

In C++/CX, è possibile intercettare i tipi di eccezione personalizzati, i tipi [std::exception](../standard-library/exception-class.md) e i tipi [Platform::Exception](../cppcx/platform-exception-class.md) .

Per ulteriori informazioni, vedi [Eccezioni](../cppcx/exceptions-c-cx.md).

### <a name="events"></a>Eventi

Un evento è un membro pubblico in una classe o uno struct di riferimento il cui tipo è un tipo di delegato. Un evento può essere richiamato, ovvero generato, dalla classe proprietaria. Tuttavia, il codice client può fornire funzioni proprie, che sono note come gestori eventi e vengono richiamate quando la classe proprietaria genera l'evento.

Per altre informazioni, vedere [Eventi](../cppcx/events-c-cx.md).

### <a name="casting"></a>Cast

C++/CX supporta gli operatori cast C++ standard [static_cast](../cpp/static-cast-operator.md), [dynamic_cast](../cpp/dynamic-cast-operator.md)e [reinterpret_cast](../cpp/reinterpret-cast-operator.md)e l'operatore **safe_cast** specifico di C++/CX.

Per ulteriori informazioni, vedi [Cast](../cppcx/casting-c-cx.md).

### <a name="boxing"></a>Boxing

Una variabile boxed è un tipo di valore di cui è stato eseguito il wrapping in un tipo di riferimento in situazioni in cui è richiesta la semantica dei riferimenti.

Per ulteriori informazioni, vedi [Boxing](../cppcx/boxing-c-cx.md).

### <a name="attributes"></a>Attributi

Un attributo è un valore di metadati che può essere applicato a qualsiasi tipo Windows Runtime o membro di tipo e può essere esaminato in fase di esecuzione. Il Windows Runtime definisce un set di attributi comuni nello `Windows::Foundation::Metadata` spazio dei nomi. Gli attributi definiti dall'utente nelle interfacce pubbliche non sono supportati da Windows Runtime in questa versione.

## <a name="api-deprecation"></a>Deprecazione di API

Viene descritto come contrassegnare le API pubbliche come deprecate usando lo stesso attributo usato dai tipi di sistema Windows Runtime.

Per ulteriori informazioni, vedere [deprecazione di tipi e membri](../cppcx/deprecating-types-and-members-c-cx.md).

## <a name="see-also"></a>Vedere anche

[Riferimenti per il linguaggio C++/CX](../cppcx/visual-c-language-reference-c-cx.md)
