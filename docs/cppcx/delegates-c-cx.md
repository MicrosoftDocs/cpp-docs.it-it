---
title: "Delegati (C++-CX) | Microsoft Docs"
ms.custom: ""
ms.date: "01/22/2017"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 3175bf1c-86d8-4eda-8d8f-c5b6753d8e38
caps.latest.revision: 30
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 30
---
# Delegati (C++-CX)
La parola chiave `delegate` viene utilizzata per dichiarare un tipo di riferimento che è l'equivalente di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] di un oggetto funzione in C\+\+ standard. Dichiarazione di un delegato simile a una firma della funzione. Specifica il tipo restituito e i tipi di parametro per la relativa funzione di cui è stato eseguito il wrapping. Si tratta di una dichiarazione di un delegato definita dall'utente:  
  
<!-- TODO: review snippet reference  [!CODE [cpp_winrtcomp#02](cpp_winrtcomp#02)]  -->  
  
 I delegati sono utilizzati in genere insieme agli eventi. Un evento dispone di un tipo delegato, nello stesso modo in cui una classe può avere un tipo di interfaccia. Il delegato rappresenta un contratto che gestori eventi deve soddisfare. Di seguito è riportato un membro della classe di eventi il cui tipo è il delegato definito precedentemente:  
  
```  
event PrimeFoundHandler^ primeFoundEvent;  
```  
  
 Quando si dichiarano delegati che saranno esposti ai client nell'interfaccia ABI \(Application Binary Interface\) di Windows Runtime, usare [Windows::Foundation::TypedEventHandler\<TSender, TResult\>](http://msdn.microsoft.com/%20library/windows/apps/br225997.aspx). I binari proxy e stub usati come prefisso per questo delegato ne permettono l'uso da parte di client Javascript.  
  
## Utilizzo dei delegati  
 Quando crei un'app di [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)], uso spesso un delegato come tipo di evento esposto da una classe [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]. Per sottoscrivere un evento, crea un'istanza del relativo tipo di delegato specificando una funzione, o lambda, che corrisponda alla firma del delegato. Utilizza quindi l'operatore `+=` per passare l'oggetto delegato al membro dell'evento nella classe. Questo processo è noto come sottoscrizione dell'evento. Quando l'istanza della classe genera l'evento, viene chiamata la funzione insieme a tutti gli altri gestori aggiunti dal tuo oggetto o da altri oggetti.  
  
> [!TIP]
>  In Visual Studio molte operazioni vengono eseguite automaticamente durante la creazione di un gestore eventi. Ad esempio, se specifichi un gestore eventi nel markup XAML, compare una descrizione comandi. Se scegli la descrizione comandi, viene creato automaticamente il metodo del gestore eventi, che viene quindi associato all'evento nella classe di pubblicazione.  
  
 L'esempio seguente mostra il modello di base.`Windows::Foundation::TypedEventHandler` è il tipo delegato. La funzione del gestore viene creata utilizzando una funzione denominata.  
  
 In app.h:  
  
 [!code-cpp[cx_delegates#120](../snippets/cpp/VS_Snippets_Misc/cx_delegates/cpp/delegatesevents/class1.h#120)]  
  
 In app.cpp:  
  
 [!code-cpp[cx_delegates#121](../snippets/cpp/VS_Snippets_Misc/cx_delegates/cpp/delegatesevents/class1.cpp#121)]  
  
> [!WARNING]
>  In genere, per un gestore di eventi è preferibile utilizzare una funzione denominata anziché una funzione lambda, a meno di non prestare molta attenzione a evitare i riferimenti circolari. Una funzione denominata acquisisce il puntatore "this" per riferimento debole, ma una funzione lambda lo acquisisce per riferimento forte e crea un riferimento circolare. Per altre informazioni, vedere [Riferimenti deboli e cicli di interruzione](../cppcx/weak-references-and-breaking-cycles-c-cx.md).  
  
 Per convenzione, i nomi dei delegati del gestore eventi definiti da [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] hanno il formato \*EventHandler, ad esempio RoutedEventHandler, SizeChangedEventHandler o SuspendingEventHandler. Sempre per convenzione, i delegati del gestore eventi accettano due parametri e restituiscono void. In un delegato privo di parametri di tipo, il primo parametro è di tipo [Platform::Object^](../cppcx/platform-object-class.md) e contiene un riferimento al mittente, ossia l'oggetto che ha generato l'evento. Prima di utilizzare l'argomento nel metodo del gestore dell'evento, devi eseguire il cast del tipo originale. In un delegato del gestore eventi che dispone di parametri di tipo, il primo parametro di tipo specifica il tipo del mittente, mentre il secondo è un handle a una classe di riferimento che contiene informazioni sull'evento. Per convenzione, questa classe è denominata \*EventArgs. Ad esempio, un delegato RoutedEventHandler dispone di un secondo parametro di tipo RoutedEventArgs^ e DragEventHander dispone di un secondo parametro di tipo DragEventArgs^.  
  
 Per convenzione, i delegati che eseguono il wrapping del codice eseguito quando viene completata un'operazione asincrona sono denominati \*CompletedHandler. Questi delegati sono definiti come proprietà della classe, non come eventi. Pertanto, non utilizzare l'operatore `+=` per sottoscriverli; assegna semplicemente un oggetto delegato alla proprietà.  
  
> [!TIP]
>  IntelliSense per C\+\+ non visualizza la firma completa del delegato, pertanto non consente di determinare il tipo specifico del parametro EventArgs. Per trovare il tipo, puoi passare al **Visualizzatore oggetti** ed esaminare il metodo `Invoke` per il delegato.  
  
## Creazione di delegati personalizzati  
 È possibile definire dei delegati personali, per definire i gestori eventi o per consentire agli utenti di passare la funzionalità personalizzata al componente di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]. Come qualsiasi altro tipo di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)], un delegato pubblico non può essere dichiarato come generico.  
  
### Dichiarazione  
 La dichiarazione di un delegato è simile a una dichiarazione di funzione eccetto per il fatto che il delegato è un tipo. In genere, la dichiarazione di un delegato viene eseguita nell'ambito dello spazio dei nomi, sebbene sia possibile anche annidarla in una dichiarazione di classe. Il seguente delegato incapsula qualsiasi funzione che accetta un oggetto `ContactInfo^` come input e restituisce `Platform::String^`.  
  
 [!code-cpp[cx_delegates#111](../snippets/cpp/VS_Snippets_Misc/cx_delegates/cpp/delegatesevents/class1.h#111)]  
  
 Una volta dichiarato un tipo di delegato, puoi dichiarare i membri della classe dello stesso tipo o metodi che accettano oggetti del tipo specificato come parametri. Un metodo o una funzione può restituire anche un tipo di delegato. Nell'esempio seguente, il parametro di input del metodo `ToCustomString` è un delegato. Il metodo consente al codice client di fornire una funzione personalizzata che crea una stringa utilizzando alcune o tutte le proprietà pubbliche dell'oggetto `ContactInfo`.  
  
 [!code-cpp[Cx_delegates#112](../snippets/cpp/VS_Snippets_Misc/cx_delegates/cpp/delegatesevents/class1.h#112)]  
  
> [!NOTE]
>  Il simbolo "^" serve a fare riferimento al tipo del delegato, analogamente a quanto si fa con qualsiasi tipo di riferimento di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)].  
  
 Una dichiarazione di evento contiene sempre un tipo di delegato. Nell'esempio riportato di seguito viene illustrata una firma di un tipico tipo di delegato in [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]:  
  
 [!code-cpp[cx_delegates#122](../snippets/cpp/VS_Snippets_Misc/cx_delegates/cpp/delegatesevents/class1.h#122)]  
  
 L'evento `Click` nella classe `Windows:: UI::Xaml::Controls::Primitives::ButtonBase` è di tipo `RoutedEventHandler`. Per altre informazioni, vedere [Eventi](../cppcx/events-c-cx.md).  
  
 Tramite il codice client viene innanzitutto creata l'istanza del delegato utilizzando `ref new` e fornendo un'espressione lambda compatibile con la firma del delegato e successivamente viene definito il comportamento personalizzato.  
  
 [!code-cpp[Cx_delegates#113](../snippets/cpp/VS_Snippets_Misc/cx_delegates/cpp/delegatesevents/class1.cpp#113)]  
  
 Il codice chiama quindi la funzione membro e passa il delegato. Supponi che `ci` sia un'istanza di `ContactInfo^` e che `textBlock` sia un oggetto `TextBlock^` XAML.  
  
 [!code-cpp[Cx_delegates#114](../snippets/cpp/VS_Snippets_Misc/cx_delegates/cpp/delegatesevents/class1.cpp#114)]  
  
 Nell'esempio seguente, un'applicazione client passa un delegato personalizzato a un metodo pubblico in un componente [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] che esegue il delegato rispetto a ogni elemento in `Vector`:  
  
 [!code-cpp[Cx_delegates#118](../snippets/cpp/VS_Snippets_Misc/cx_delegates/cpp/clientapp/mainpage.xaml.cpp#118)]  
  
 [!code-cpp[Cx_delegates#119](../snippets/cpp/VS_Snippets_Misc/cx_delegates/cpp/delegatesevents/class1.cpp#119)]  
  
### Costruzione  
 Puoi creare un delegato da uno qualsiasi di questi oggetti:  
  
-   funzione lambda  
  
-   funzione statica  
  
-   puntatore a membro  
  
-   std::function  
  
 Nell'esempio riportato di seguito viene illustrato come costruire un delegato da ognuno di questi oggetti. Puoi utilizzare il delegato esattamente nello stesso modo indipendentemente dal tipo di oggetto utilizzato per crearlo.  
  
 [!code-cpp[Cx_delegates#115](../snippets/cpp/VS_Snippets_Misc/cx_delegates/cpp/delegatesevents/class1.cpp#115)]  
  
> [!WARNING]
>  Se usi un'espressione lambda che acquisisce il puntatore "this", assicurati di utilizzare l'operatore `-=` per annullare in modo esplicito la registrazione dall'evento prima di uscire da lambda. Per altre informazioni, vedere [Eventi](../cppcx/events-c-cx.md).  
  
### Delegati generici  
 I delegati generici in C\+\+\/CX presentano restrizioni simili alle dichiarazioni di classi generiche. Non possono essere dichiarati come pubblici. Puoi dichiarare un delegato generico privato o interno e utilizzarlo da C\+\+, ma i client .NET or JavaScript non possono utilizzarlo in quanto non viene generato nei metadati .winmd. Questo esempio dichiara un delegato generico che può essere utilizzato solo da C\+\+:  
  
 [!code-cpp[Cx_delegates#116](../snippets/cpp/VS_Snippets_Misc/cx_delegates/cpp/delegatesevents/class1.h#116)]  
  
 L'esempio successivo dichiara un'istanza specifica del delegato all'interno di una definizione di classe:  
  
 [!code-cpp[Cx_delegates#117](../snippets/cpp/VS_Snippets_Misc/cx_delegates/cpp/delegatesevents/class1.h#117)]  
  
## Delegati e thread  
 Un delegato, analogamente a un oggetto funzione, contiene del codice che verrà eseguito in un momento futuro. Se il codice che crea e passa il delegato e la funzione che accetta ed esegue il delegato sono in esecuzione nello stesso thread, diventa tutto relativamente semplice. Se il thread è il thread UI, gli oggetti dell'interfaccia utente come i controlli XAML possono essere modificati direttamente dal delegato.  
  
 Se un'app client carica un componente [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] eseguito in un apartment a thread e fornisce un delegato a tale componente, per impostazione predefinita il delegato viene richiamato direttamente sul thread STA. La maggior parte dei componenti di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] può essere eseguita in STA o MTA.  
  
 Se il codice che esegue il delegato è in esecuzione in un thread differente, ad esempio all'interno di un contesto di oggetto concurrency::task, sarà necessario sincronizzare l'accesso ai dati condivisi. Ad esempio, se il delegato e un controllo XAML contengono un riferimento a uno stesso vettore, è necessario evitare i deadlock e le race condition che potrebbero verificarsi nel momento in cui sia il delegato che il controllo XAML tentano di accedere contemporaneamente al vettore. Devi inoltre assicurarti che il delegato non tenti di acquisire tramite riferimenti le variabili locali che potrebbe uscire di ambito prima che il delegato sia richiamato.  
  
 Se desideri che il delegato sia chiamato di nuovo sullo stesso thread in cui è stato creato, ad esempio se lo passi a un componente che viene eseguito in apartment MTA, e desideri che venga richiamato sullo stesso thread dell'autore, utilizza l'overload del costruttore di delegato che accetta un secondo parametro `CallbackContext`. Utilizza questo overload solo su delegati che dispongono di un proxy o uno stub registrato. Non tutti i delegati definiti in Windows.winmd sono registrati.  
  
 Se hai familiarità con i gestori eventi di .NET, saprai che è preferibile creare una copia locale di un evento prima di generarlo. Questo evita race condition in cui un gestore eventi viene rimosso appena prima che l'evento venga richiamato. Non è necessario eseguire questa operazione in C\+\+\/CX, perché quando i gestori eventi vengono aggiunti o rimossi, viene creato un nuovo elenco di gestori. Poiché un oggetto c\+\+ incrementa il conteggio dei riferimenti nell'elenco di gestori prima di richiamare un evento, viene garantito che i gestori saranno validi. Tuttavia, questo significa anche che se rimuovi un gestore eventi nel thread consumer, il gestore può comunque continuare a essere richiamato se l'oggetto di pubblicazione è ancora in esecuzione nella propria copia dell'elenco, che a questo punto non è aggiornato. L'oggetto di pubblicazione non riceverà l'elenco aggiornato fino alla successiva generazione dell'evento.  
  
## Vedere anche  
 [Sistema di tipi](../cppcx/type-system-c-cx.md)   
 [Riferimenti al linguaggio Visual C\+\+](../cppcx/visual-c-language-reference-c-cx.md)   
 [Riferimenti a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)