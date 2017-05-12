---
title: "Classi e struct di riferimento (C++-CX) | Microsoft Docs"
ms.custom: ""
ms.date: "01/22/2017"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 3d736b82-0bf0-48cf-bac1-cc9d110b70d1
caps.latest.revision: 42
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 42
---
# Classi e struct di riferimento (C++-CX)
[!INCLUDE[cppwrt](../cppcx/includes/cppwrt-md.md)] \([!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]\) supporta *classi* e *struct di riferimento* definiti dall'utente e *classi* e *struct di valore* definiti dall'utente. Queste strutture di dati sono contenitori primari tramite i quali [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] supporta il sistema di tipi [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]. I relativi contenuti vengono emessi nei metadati in base ad alcune regole specifiche e ciò ne consente il passaggio tra i componenti [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] e le app di [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] scritte in C\+\+ o in altri linguaggi.  
  
 Le classi e gli struct di riferimento presentano le seguenti caratteristiche principali:  
  
-   Devono essere dichiarati in uno spazio dei nomi, nell'ambito dello spazio dei nomi, e in tale spazio possono avere accessibilità pubblica o privata. Solo i tipi pubblici vengono emessi nei metadati. Le definizioni delle classi pubbliche annidate non sono consentite, incluse le classi [enum](../cppcx/enums-c-cx.md) pubbliche annidate. Per ulteriori informazioni, vedi [Spazi dei nomi e visibilità del tipo](../cppcx/namespaces-and-type-visibility-c-cx.md).  
  
-   Può contenere come membri [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] incluse classi di riferimento, classi di valore, struct di riferimento, di valore o nullable. Può inoltre contenere tipi scalari quali float64, bool e così via. Può inoltre contenere tipi C\+\+ standard come `std::vector` o una classe personalizzata, purché non siano pubblici. I costrutti [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] potrebbero avere accessibilità `public`, `protected`, `internal`, `private` o `protected private`. Tutti i membri `public` o `protected` vengono emessi nei metadati. I tipi C\+\+ standard devono avere accessibilità `private`, `internal` o `protected private`, che ne impedisce l'emissione nei metadati.  
  
-   Possono implementare una o più *classi di interfaccia* o *struct di interfaccia*.  
  
-   Possono ereditare da una classe base e le classi base a loro volta presentano ulteriori restrizioni. L'ereditarietà nelle gerarchie di classi di riferimento pubbliche ha più restrizioni rispetto all'ereditarietà nelle classi di riferimento private.  
  
-   Non possono essere dichiarati come generici. Se dispongono di accessibilità privata, possono essere modelli.  
  
-   La relativa durata è gestita dal conteggio dei riferimenti automatico.  
  
## Dichiarazione  
 Nel frammento di codice riportato di seguito viene dichiarata la classe di riferimento `Person`. Il tipo `std::map` C\+\+ standard viene usato nei membri privati e l'interfaccia di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]`IMapView` è usata nell'interfaccia pubblica. Nota inoltre che il simbolo "^" è accodato alle dichiarazioni dei tipi di riferimento.  
  
 [!code-cpp[cx_classes#03](../snippets/cpp/VS_Snippets_Misc/cx_classes/cpp/class1.h#03)]  
  
## Implementazione  
 In questo esempio di codice viene illustrata un'implementazione della classe di riferimento `Person`:  
  
 [!code-cpp[cx_classes#04](../snippets/cpp/VS_Snippets_Misc/cx_classes/cpp/class1.cpp#04)]  
  
## Utilizzo  
 Nell'esempio di codice riportato di seguito viene illustrato l'utilizzo della classe di riferimento `Person` da parte del codice client.  
  
 [!code-cpp[cx_classes#05](../snippets/cpp/VS_Snippets_Misc/cx_classes/cpp/class1.cpp#05)]  
  
 Puoi anche utilizzare la semantica dello stack per dichiarare una variabile della classe di riferimento locale. Un oggetto di questo tipo si comporta come una variabile basata su stack anche se la memoria viene ancora allocata in modo dinamico. Una differenza importante è che non puoi assegnare un riferimento di rilevamento \(%\) a una variabile dichiarata con la semantica dello stack; ciò garantisce l'azzeramento del conteggio dei riferimenti al termine della funzione. In questo esempio vengono illustrate una classe di riferimento di base `Uri`e una funzione che la utilizza con la semantica dello stack:  
  
 [!code-cpp[cx_classes#06](../snippets/cpp/VS_Snippets_Misc/cx_classes/cpp/class1.cpp#06)]  
  
## Gestione della memoria  
 Per allocare una classe di riferimento nella memoria dinamica utilizzi la parola chiave `ref new`.  
  
 [!code-cpp[cx_classes#01](../snippets/cpp/VS_Snippets_Misc/cx_classes/cpp/class1.h#01)]  
  
 L'operatore handle a oggetto ^ è denominato anche "hat" e fondamentalmente è un puntatore intelligente di C\+\+. La memoria a cui punta viene automaticamente distrutta quando l'ultimo handle a oggetto esce dall'ambito o viene impostato in modo esplicito su `nullptr`.  
  
 Per definizione, una classe di riferimento contiene semantica di riferimento. Quando assegni una variabile della classe di riferimento, è l'handle ad essere copiato, non l'oggetto stesso. Nell'esempio riportato di seguito, dopo l'assegnazione sia `myClass` che `myClass2` puntano alla stessa posizione in memoria.  
  
 [!code-cpp[cx_classes#02](../snippets/cpp/VS_Snippets_Misc/cx_classes/cpp/class1.h#02)]  
  
 Se viene creata un'istanza di una classe di riferimento C\+\+\/CX, la relativa memoria viene inizializzata sullo zero prima di chiamare il costruttore, pertanto non è necessario inizializzare sullo zero i singoli membri, incluse le proprietà. Se la classe C\+\+\/CX deriva da una classe della libreria C\+\+ di Windows Runtime \(WRL\), viene inizializzata sullo zero solo la parte della classe derivata da C\+\+\/CX.  
  
## Membri  
 Una classe di riferimento può contenere i membri di funzioni `public`, `protected` e `private`; solo i membri `public` e `protected` vengono emessi nei metadati. Le classi annidate e le classi di riferimento sono consentite ma non possono essere `public`. I campi pubblici non sono consentiti; i membri dati pubblici devono essere dichiarati come proprietà. I membri dati interni protetti o privati possono essere dei campi. Per impostazione predefinita, in una classe di riferimento l'accessibilità di tutti i membri è `private`.  
  
 Uno struct di riferimento equivale a una classe di riferimento, ad eccezione del fatto che per impostazione predefinita i relativi membri hanno accessibilità `public`.  
  
 Una classe di riferimento o uno struct di riferimento `public` viene emesso nei metadati, ma affinché possa essere usato da altre app [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] e componenti di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] deve presentare almeno un costruttore pubblico o protetto. Una classe di riferimento pubblica con un costruttore pubblico deve inoltre essere dichiarata come `sealed`, per impedire un'ulteriore derivazione attraverso l'interfaccia applicativa binaria \(ABI, Application Binary Interface\).  
  
 I membri pubblici non possono essere dichiarati come const in quanto il sistema di tipi [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] non supporta const. Puoi usare una proprietà statica per dichiarare un membro dati pubblico con un valore costante.  
  
 Quando definisci uno struct o una classe di riferimento pubblica, tramite il compilatore vengono applicati alla classe gli attributi obbligatori e le informazioni vengono archiviate nel file con estensione winmd dell'app. Tuttavia, quando definisci una classe di riferimento non sealed pubblica, applica manualmente l'attributo `Windows::Foundation::Metadata::WebHostHidden` per assicurarti che la classe non sia visibile alle app in [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] scritte in JavaScript.  
  
 Una classe di riferimento può avere tipi C\+\+ standard, inclusi i tipi `const`, in qualsiasi membro `private`, `internal` o `protected private`.  
  
 Non è consentito l'utilizzo di classi di riferimento pubbliche che dispongono di parametri di tipo. Le classi di riferimento generiche definite dall'utente non sono consentite. Una classe di riferimento privata, interna o privata protetta può essere un modello.  
  
## Distruttori  
 In [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] la chiamata a `delete` in un distruttore pubblico richiama il distruttore indipendentemente dal conteggio dei riferimenti dell'oggetto. Questo comportamento ti consente di definire un distruttore che esegue la pulizia personalizzata delle risorse non RAII in modo deterministico. Tuttavia, anche in questo caso, l'oggetto stesso non viene eliminato dalla memoria. La memoria per l'oggetto viene liberata solo quando il conteggio dei riferimenti raggiunge zero.  
  
 Se il distruttore di una classe non è pubblico, viene richiamato solo quando il conteggio dei riferimenti raggiunge zero. Se chiami `delete` su un oggetto con un distruttore privato, il compilatore genera l'avviso C4493, in cui è indicato che "l'espressione delete non ha effetto poiché il distruttore di \<nome tipo\> non dispone di accessibilità 'pubblica'".  
  
 Un distruttore della classe di riferimento può essere dichiarato solo nei seguenti modi:  
  
-   pubblico e virtuale \(consentito su tipi sealed o non sealed\)  
  
-   privato protetto e non virtuale \(consentito solo sui tipi non sealed\)  
  
-   privato e non virtuale \(consentito solo sui tipi sealed\)  
  
 Non sono consentite altre combinazioni.  Se non dichiari un distruttore in modo esplicito, il compilatore genera un distruttore virtuale pubblico se qualsiasi membro o la classe base del tipo ha un distruttore pubblico. In caso contrario, il compilatore genera un distruttore non virtuale privato protetto per i tipi non sealed oppure un distruttore non virtuale privato per i tipi sealed.  
  
 Il comportamento non è definito se tenti di accedere ai membri di una classe il cui distruttore è già stato eseguito; ciò potrebbe provocare un arresto anomalo del programma. La chiamata a `delete t` su un tipo senza un distruttore pubblico non ha alcun effetto. Anche la chiamata a `delete this` su un tipo o una classe base con un distruttore `private` o `protected private` noto dalla gerarchia dei tipi non ha alcun effetto.  
  
 Quando dichiari un distruttore pubblico, il compilatore genera il codice in modo che la classe di riferimento implementi `Platform::IDisposable` e il distruttore implementi il metodo `Dispose`.`Platform::IDisposable` è la proiezione [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] di `Windows::Foundation::IClosable`. Non implementare mai tali interfacce in modo esplicito.  
  
## Ereditarietà  
 Platform::Object è la classe di base universale per tutte le classi di riferimento. Tutte le classi di riferimento sono implicitamente convertibili in Platform::Object e possono eseguire l'override di [Object::ToString](../cppcx/object-tostring-method-c-cx.md). Tuttavia, il modello di ereditarietà di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] non è concepito come modello di ereditarietà generale. In C\+\+\/CX ciò significa che una classe di riferimento pubblica definita dall'utente non può essere usata come classe di base.  
  
 Se si stai creando un controllo utente XAML e l'oggetto fa parte del sistema di proprietà delle dipendenze, puoi usare `Windows::UI::Xaml::DependencyObject` come classe base.  
  
 In seguito alla definizione di una classe `MyBase` non sealed che eredita da `DependencyObject`, altre classi di riferimento pubbliche o private nel componente o nell'app possono ereditare da `MyBase`. L'ereditarietà nelle classi di riferimento pubbliche deve essere effettuata solo per supportare l'override di metodi virtuali, l'identità polimorfica e l'incapsulamento.  
  
 Non è necessario che una classe base di riferimento derivi da una classe non sealed esistente. Se è necessaria una gerarchia di oggetti per modellare la struttura del programma o consentire il riutilizzo del codice, utilizza classi di riferimento private o interne o, meglio ancora, classi C\+\+ standard. Puoi esporre la funzionalità della gerarchia di oggetti privati tramite un wrapper di classe di riferimento sealed pubblico.  
  
 Una classe di riferimento che dispone di un costruttore pubblico o protetto in [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] deve essere dichiarata come sealed. Questa restrizione impedisce che classi scritte in altri linguaggi come C\# o Visual Basic ereditino da tipi dichiarati in un componente [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] scritto in [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)].  
  
 Di seguito sono riportate le regole di base per l'ereditarietà in [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]:  
  
-   Le classi di riferimento possono ereditare direttamente solo da una classe base di riferimento, ma possono implementare un numero indefinito di interfacce.  
  
-   Se una classe di riferimento dispone di un costruttore pubblico, deve essere dichiarata come sealed per impedire ulteriori derivazioni.  
  
-   È possibile creare classi base non sealed pubbliche che dispongono di costruttori privati interni o protetti, a condizione che la classe base derivi in modo diretto o indiretto da una classe base non sealed esistente come `Windows::UI::Xaml::DependencyObject`. L'ereditarietà delle classi di riferimento definite dall'utente tra file con estensione winmd non è supportata; tuttavia, una classe di riferimento può ereditare da un'interfaccia definita in un altro file con estensione winmd. È possibile creare classi derivate da una classe base di riferimento definita dall'utente solo all'interno dello stesso componente [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] o della stessa app in [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)].  
  
-   Per le classi di riferimento, è supportata solo l'ereditarietà pubblica.  
  
     [!code-cpp[cx_classes#08](../snippets/cpp/VS_Snippets_Misc/cx_classes/cpp/class1.h#08)]  
  
 Nell'esempio riportato di seguito viene mostrato come esporre una classe di riferimento pubblica che deriva da altre classi di riferimento in una gerarchia di ereditarietà.  
  
 [!code-cpp[cx_classes#09](../snippets/cpp/VS_Snippets_Misc/cx_classes/cpp/class1.h#09)]  
  
## Vedere anche  
 [Sistema di tipi](../cppcx/type-system-c-cx.md)   
 [Classi e struct di valore](../cppcx/value-classes-and-structs-c-cx.md)   
 [Riferimenti al linguaggio Visual C\+\+](../cppcx/visual-c-language-reference-c-cx.md)   
 [Riferimenti a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)