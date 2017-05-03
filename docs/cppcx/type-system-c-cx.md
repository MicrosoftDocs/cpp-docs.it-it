---
title: "Sistema di tipi (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "02/03/2017"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: b67bee8a-b526-4872-969e-ef22724e88fe
caps.latest.revision: 28
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 28
---
# Sistema di tipi (C++/CX)
Grazie all'architettura di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)], puoi usare [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)], Visual Basic, Visual C\# e JavaScript per scrivere app e componenti in grado di accedere direttamente all'API Windows e interagire con altri componenti e app di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]. Le app [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] scritte in C\+\+ possono essere compilate in codice nativo eseguibile direttamente nella CPU. Le app in [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] scritte in C\# o in Visual Basic sono compilate in Microsoft Intermediate Language \(MSIL\) ed eseguite in Common Language Runtime \(CLR\). Le app in [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] scritte in JavaScript sono eseguite in un ambiente di runtime. I componenti stessi del sistema operativo [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] sono scritti in C\+\+ ed eseguiti come codice nativo. Tutti questi componenti e le app in [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] possono comunicare direttamente tramite l'interfaccia applicativa binaria ABI di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)].  
  
 Per abilitare il supporto per [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] in un moderno linguaggio C\+\+, in Microsoft abbiamo creato [!INCLUDE[cppwrt](../cppcx/includes/cppwrt-md.md)] \([!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]\).[!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] fornisce tipi di base incorporati e le implementazioni di tipi fondamentali di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] che consentono alle applicazioni e ai componenti C\+\+ di comunicare attraverso l'interfaccia ABI con applicazioni scritte in altri linguaggi. È possibile utilizzare qualsiasi tipo di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] o creare classi, struct, interfacce e altri tipi definiti dall'utente che possono essere utilizzati da altri componenti e app in [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)]. Un'app in [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] scritta in [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] può inoltre utilizzare i normali struct e classi C\+\+ fintanto che non dispongono di accessibilità pubblica.  
  
 Per un'analisi approfondita della proiezione del linguaggio C\+\+\/CX e del modo in cui funziona, vedi questi post di blog:  
  
1.  [C\+\+\/CX \- Parte 0 di \[n\]: Introduzione](http://blogs.msdn.com/b/vcblog/archive/2012/08/29/cxxcxpart00anintroduction.aspx)  
  
2.  [C\+\+\/CX \- Parte 0 di \[n\]: Introduzione](http://blogs.msdn.com/b/vcblog/archive/2012/08/29/cxxcxpart00anintroduction.aspx)  
  
3.  [C\+\+\/CX \- Parte 2 di \[n\]: Tipi con accenti circonflessi](http://blogs.msdn.com/b/vcblog/archive/2012/09/17/cxxcxpart02typesthatwearhats.aspx)  
  
4.  [C\+\+\/CX \- Parte 3 di \[n\]: In costruzione](http://blogs.msdn.com/b/vcblog/archive/2012/10/05/cxxcxpart03underconstruction.aspx)  
  
5.  [C\+\+\/CX \- Parte 4 di \[n\]: Funzioni membro statiche](http://blogs.msdn.com/b/vcblog/archive/2012/10/19/cxxcxpart04staticmemberfunctions.aspx)  
  
## File di metadati di Windows \(.winmd\)  
 Durante la compilazione di un'app in [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] scritta in C\+\+, tramite il compilatore vengono generati il file eseguibile in codice macchina nativo e un file di metadati di Windows distinto contenente le descrizioni dei tipi [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] pubblici, che includono classi, struct, enumerazioni, interfacce, interfacce parametrizzate e delegati. Il formato dei metadati è simile a quello utilizzato negli assembly .NET Framework.  In un componente C\+\+, il file .winmd contiene solo metadati. Il codice eseguibile risiede in un file separato. Ciò avviene per i componenti di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] inclusi in Windows. Il nome del file WinMD deve corrispondere o essere un prefisso dello spazio dei nomi radice nel codice sorgente. Per i linguaggi .NET Framework, il file .winmd contiene sia il codice che i metadati, come in un assembly .NET Framework\).  
  
 I metadati nel file .winmd rappresentano l'area pubblicata del codice. I tipi generati sono visibili alle altre app in [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] indipendentemente dal linguaggio in cui sono state scritte. Pertanto, i metadati, o il codice pubblicato, possono contenere solo tipi specificati dal sistema di tipi di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]. I costrutti di linguaggio che sono specifici al linguaggio C\+\+, quali i normali contenitori STL, i modelli, le matrici e le classi, non possono essere pubblicati nei metadati in quanto un'applicazione client scritta in C\# o Javascript non li riconoscerebbe.  
  
 La visibilità di un tipo o di un metodo nei metadati dipende da quali modificatori di accessibilità sono ad esso applicati. Per essere visibile, un tipo deve essere dichiarato in uno spazio dei nomi e deve essere dichiarato come pubblico. È possibile utilizzare una classe di riferimento non pubblica come tipo di supporto interno nel codice, tuttavia non sarà visibile nei metadati. Anche in una classe di riferimento pubblica, non tutti i membri sono necessariamente visibili. Nella tabella riportata di seguito è indicata la relazione tra gli identificatori di accesso C\+\+ in una classe di riferimento pubblica e la visibilità dei metadati di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]:  
  
|||  
|-|-|  
|**Pubblicato nei metadati**|**Non pubblicato nei metadati**|  
|public|private|  
|protected|internal|  
|protetto pubblico|protetto privato|  
  
 È possibile utilizzare il **Visualizzatore oggetti** per visualizzare il contenuto dei file .winmd. Componenti di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] inclusi in Windows sono elencati nel file Windows.winmd. Il file default.winmd contiene i tipi fondamentali utilizzati in [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]e il file platform.winmd contiene i tipi aggiuntivi derivati dallo spazio dei nomi Platform. Per impostazione predefinita, questi tre file .winmd sono inclusi in tutti i progetti C\+\+ per app in [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)].  
  
> [!TIP]
>  I tipi nell'oggetto [Platform::Collections \(spazio dei nomi\)](../cppcx/platform-collections-namespace.md) non sono presenti nel file .winmd perché non sono pubblici. Sono implementazioni specifiche di C\+\+ private delle interfacce definite in `Windows::Foundation::Collections`. Un'app [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] scritta in JavaScript o C\# non riconosce un oggetto [Classe Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md), ma può utilizzare un oggetto `Windows::Foundation::Collections::IVector`. I tipi `Platform::Collections` sono definiti nel file collection.h.  
  
## Sistema di tipi di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] in [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]  
 Nelle sezioni seguenti vengono descritte le principali funzionalità del sistema di tipi di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] e il modo in cui sono supportate in [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)].  
  
### Spazi dei nomi  
 Tutti i tipi di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] devono essere dichiarati all'interno di uno spazio dei nomi. La stessa interfaccia API di Windows è organizzata in base agli spazi dei nomi. Un file .winmd deve avere lo stesso nome dello spazio dei nomi radice. Ad esempio, è possibile creare un'istanza di una classe denominata A.B.C.MyClass solo se è definita in un file di metadati denominato A.winmd o A.B.winmd o A.B.C.winmd. Il nome della DLL non deve necessariamente corrispondere al nome del file con estensione winmd.  
  
 La stessa interfaccia API di Windows è stata ripensata come libreria di classi con corretto factoring organizzata per spazio dei nomi.  Tutti i componenti di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] vengono dichiarati negli spazi dei nomi Windows.\*.  
  
 Per ulteriori informazioni, vedi [Spazi dei nomi e visibilità del tipo](../cppcx/namespaces-and-type-visibility-c-cx.md).  
  
### Tipi fondamentali  
 In [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] sono definiti i seguenti tipi fondamentali: UInt8, Int16, UInt16, UInt32, Int32, UInt64, Int64, Single, Double, Char16, Boolean e String.[!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] supporta nel proprio spazio dei nomi predefinito i tipi numerici di base, quali uint16, uint32, uint64, int16, int32, int64, float32, float64 e char16. Boolean e String sono inoltre definiti nello spazio dei nomi Platform.  
  
 [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] definisce inoltre il tipo uint8, equivalente a `unsigned char`, che non è supportato in [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] e non può essere utilizzato nelle API pubbliche.  
  
 Un tipo fondamentale può essere reso nullable mediante il wrapping in un'interfaccia [Platform::IBox](../cppcx/platform-ibox-interface.md). Per ulteriori informazioni, vedi [Classi e struct di valore](../cppcx/value-classes-and-structs-c-cx.md).  
  
 Per ulteriori informazioni sui tipi fondamentali, vedi [Tipi fondamentali](../cppcx/fundamental-types-c-cx.md).  
  
### Stringhe  
 Una stringa di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] è una sequenza non modificabile di caratteri UNICODE a 16 bit. Una stringa di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] viene proiettata come `Platform::String^`. Questa classe fornisce i metodi per la creazione, la modifica e la conversione di stringhe verso e da `wchar_t`.  
  
 Per ulteriori informazioni, vedi [Stringhe](../cppcx/strings-c-cx.md).  
  
### Matrici  
 [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] supporta le matrici unidimensionali di qualsiasi tipo. Le matrici di matrici non sono supportate.  In [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] le matrici di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] vengono proiettate come [Platform::Array \(classe\)](../cppcx/platform-array-class.md).  
  
 Per ulteriori informazioni, vedi [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).  
  
### Classi e struct di riferimento  
 Una classe di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] viene proiettata in [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] come classe di riferimento o struct di riferimento perché questi elementi vengono copiati in base al riferimento. La gestione della memoria per le classi e gli struct di riferimento avviene in modo trasparente attraverso il conteggio dei riferimenti. Quando l'ultimo riferimento a un oggetto esce dall'ambito, l'oggetto viene rimosso. Una classe o uno struct di riferimento presenta le seguenti caratteristiche:  
  
-   Contengono costruttori, metodi, proprietà ed eventi come membri. Questi membri possono avere accessibilità interna, protetta, privata o pubblica.  
  
-   Possono contenere definizioni annidati private di enumerazione, struct o classe.  
  
-   Possono ereditare direttamente da una classe di base e implementare un numero indefinito di interfacce. Tutte le classi di riferimento sono implicitamente convertibili in [Classe Platform::Object](../cppcx/platform-object-class.md) e possono eseguire l'override dei relativi metodi virtuali, ad esempio [Object::ToString](../cppcx/object-tostring-method-c-cx.md).  
  
 Una classe di riferimento che dispone di un costruttore pubblico deve essere dichiarata come sealed, per impedire ulteriori derivazioni.  
  
 Per ulteriori informazioni, vedi [Classi e struct di riferimento](../cppcx/ref-classes-and-structs-c-cx.md).  
  
### Classi e struct di valore  
 Uno struct o una classe di valore rappresenta una struttura di dati di base e contiene solo i campi, che possono essere classi di valore, struct di valore o tipi `Platform::String^`.  Gli struct di valore e le classi di valore vengono copiati in base al valore.  
  
 Uno struct di valore può essere reso nullable mediante il wrapping in un'interfaccia IBox.  
  
 Per ulteriori informazioni, vedi [Classi e struct di valore](../cppcx/value-classes-and-structs-c-cx.md).  
  
### Classi parziali  
 La funzionalità classe parziale consente la definizione di una classe su più file. Viene usata principalmente per consentire agli strumenti di generazione del codice come l'editor XAML di modificare un file senza interessare il file modificato.  
  
 Per ulteriori informazioni, vedi [Classi parziali](../cppcx/partial-classes-c-cx.md).  
  
### Proprietà  
 Una proprietà è un membro di dati pubblico di qualsiasi tipo di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] ed è implementata come coppia di metodi set\/get. Il codice client accede a una proprietà come se fosse un campo pubblico. Una proprietà che non richiede istruzioni Get o Set personalizzate nel codice è nota come *proprietà semplice* e può essere dichiarata senza i metodi Get e Set espliciti.  
  
 Per altre informazioni, vedere [Proprietà](../cppcx/properties-c-cx.md).  
  
### Raccolte di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] in [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]  
 [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] definisce un set di interfacce per i tipi di raccolta che ogni linguaggio implementa secondo le proprie regole.[!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] fornisce le implementazioni nei tipi [Classe Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md), in [Classe Platform::Collections::Map](../cppcx/platform-collections-map-class.md)e altri tipi di raccolta concreti correlati, che sono compatibili con le rispettive controparti della libreria dei modelli standard.  
  
 Per ulteriori informazioni, vedi [Raccolte](../cppcx/collections-c-cx.md).  
  
### Classi di riferimento del modello  
 Le classi di riferimento private e interne possono essere basate su modelli e rese più specifiche.  
  
 Per ulteriori informazioni, vedi [Classi di riferimento del modello](../cppcx/template-ref-classes-c-cx.md).  
  
### Interfacce  
 Un'interfaccia di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] definisce un set di proprietà pubbliche, metodi ed eventi che una classe o uno struct di riferimento deve implementare se eredita dall'interfaccia.  
  
 Per ulteriori informazioni, vedi [Interfacce](../cppcx/interfaces-c-cx.md).  
  
### Enumerazioni  
 Una classe di enumerazione in [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] è simile a un'enumerazione con ambito in C\+\+. Il tipo sottostante è int32, a meno che non venga applicato l'attributo \[Flags\], in tal caso il tipo sottostante è uint32.  
  
 Per ulteriori informazioni, vedi [Enumerazioni](../cppcx/enums-c-cx.md).  
  
### Delegati  
 Un delegato in [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] è analogo a un oggetto std::function in C\+\+. È un genere speciale di classe di riferimento utilizzato per funzioni fornite dal client che hanno firme compatibili.  I delegati sono normalmente più utilizzati in [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] come tipi di eventi.  
  
 Per ulteriori informazioni, vedi [Delegati](../cppcx/delegates-c-cx.md).  
  
### Eccezioni  
 In C\+\+\/CX, è possibile intercettare i tipi di eccezione personalizzati, i tipi [std::exception](../Topic/exception%20Class1.md) e i tipi [Platform::Exception](../cppcx/platform-exception-class.md).  
  
 Per ulteriori informazioni, vedi [Eccezioni](../cppcx/exceptions-c-cx.md).  
  
### Eventi  
 Un evento è un membro pubblico in una classe o uno struct di riferimento il cui tipo è un tipo di delegato. Un evento può essere richiamato, ovvero generato, dalla classe proprietaria. Tuttavia, il codice client può fornire funzioni proprie, che sono note come gestori eventi e vengono richiamate quando la classe proprietaria genera l'evento.  
  
 Per ulteriori informazioni, vedi [Eventi](../cppcx/events-c-cx.md).  
  
### Cast  
 C\+\+\/CX supporta gli operatori cast C\+\+ standard [static\_cast](../cpp/static-cast-operator.md), [dynamic\_cast](../cpp/dynamic-cast-operator.md) e [reinterpret\_cast](../cpp/reinterpret-cast-operator.md) e l'operatore [safe\_cast](../Topic/safe_cast%20\(C++%20Component%20Extensions\).md) specifico di C\+\+\/CX.  
  
 Per ulteriori informazioni, vedi [Cast](../cppcx/casting-c-cx.md).  
  
### Boxing  
 Una variabile boxed è un tipo di valore di cui è stato eseguito il wrapping in un tipo di riferimento in situazioni in cui è richiesta la semantica dei riferimenti.  
  
 Per ulteriori informazioni, vedi [Conversione boxing](../cppcx/boxing-c-cx.md).  
  
### Attributi  
 Un attributo è un valore di metadati che può essere applicato a qualsiasi tipo o membro di tipo di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] e può essere esaminato in fase di esecuzione.[!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] definisce un set di attributi comuni nello spazio dei nomi `Windows::Foundation::Metadata`. Gli attributi definiti dall'utente nelle interfacce pubbliche non sono supportati da [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] in questa versione.  
  
## Deprecazione di API  
 Descrive come contrassegnare le API pubbliche come deprecate usando lo stesso attributo usato dai tipi del sistema [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)].  
  
 Per ulteriori informazioni, vedi [Deprecazione di tipi e membri](../cppcx/deprecating-types-and-members-c-cx.md).  
  
## Vedere anche  
 [Riferimenti al linguaggio Visual C\+\+](../cppcx/visual-c-language-reference-c-cx.md)