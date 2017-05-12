---
title: "Raccolte (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "01/22/2017"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 914da30b-aac5-4cd7-9da3-a5ac08cdd72c
caps.latest.revision: 35
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 35
---
# Raccolte (C++/CX)
In un programma di [!INCLUDE[cppwrt](../cppcx/includes/cppwrt-md.md)] \([!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]\) puoi utilizzare liberamente i contenitori della libreria dei modelli standard \(STL, Standard Template Library\) o qualsiasi altro tipo di raccolta definita dall'utente. Tuttavia, quando si passano le raccolte attraverso l'interfaccia applicativa binaria ABI di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)], ad esempio a un controllo XAML o a un client JavaScript, è necessario utilizzare i tipi di raccolta di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)].  
  
 [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] definisce le interfacce per le raccolte e i tipi correlati e [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] fornisce le implementazioni concrete C\+\+ nel file di intestazione collection.h. Nella seguente immagine vengono mostrate le relazioni tra i tipi di raccolta:  
  
 ![Struttura ad albero di eredità C&#43;&#43;&#47;CX per tipi di raccolta](../cppcx/media/cppcxcollectionsinheritancetree.png "CPPCXCollectionsInheritanceTree")  
  
-   La classe [Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md) è simile alla classe [std::vector](../Topic/vector%20Class%201.md).  
  
-   La classe [Platform::Collections::Map](../cppcx/platform-collections-map-class.md) è simile alla classe [std::map](../standard-library/map-class.md).  
  
-   Le classi [Platform::Collections::VectorView](../cppcx/platform-collections-vectorview-class.md) e [Platform::Collections::MapView](../cppcx/platform-collections-mapview-class.md) sono versioni in sola lettura di `Vector` e `Map`.  
  
-   Gli iteratori sono definiti nello [spazio dei nomi Platform::Collections](../cppcx/platform-collections-namespace.md). Questi iteratori soddisfano i requisiti per gli iteratori STL e consentono l'uso di [std::find](http://msdn.microsoft.com/library/021e9ef9-8817-409f-92ee-cd7104867361), [std::count\_if](http://msdn.microsoft.com/library/b785887c-83cd-4099-becc-3284dee05295) e di altri algoritmi STL su qualsiasi tipo di [Windows::Foundation::Collections](http://msdn.microsoft.com/library/windows/apps/windows.foundation.collections.aspx) o tipo concreto [Platform::Collections](../cppcx/platform-collections-namespace.md). Questo significa, ad esempio, che è possibile eseguire l'iterazione di una raccolta in un componente [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] creato in C\# e applicare allo stesso un algoritmo STL.  
  
    > [!IMPORTANT]
    >  Gli iteratori proxy `VectorIterator` e `VectorViewIterator` usano oggetti proxy `VectoryProxy<T>` e `ArrowProxy<T>` per consentire l'uso con i contenitori STL. Per ulteriori informazioni, vedi "Elementi VectorProxy" più avanti in questo articolo.  
  
-   I tipi di raccolta [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] supportano le stesse garanzie di thread safety dei contenitori STL.  
  
-   [Windows::Foundation::Collections::IObservableVector](http://msdn.microsoft.com/library/windows/apps/br226052.aspx) e [Windows::Foundation::Collections::IObservableMap](http://msdn.microsoft.com/library/windows/apps/br226050.aspx) definiscono gli eventi che vengono generati quando la raccolta cambia in vari modi. Grazie all'implementazione di queste interfacce, [Platform::Collections::Map](../cppcx/platform-collections-map-class.md) e [Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md) supportano l'associazione dati con le raccolte XAML. Se ad esempio disponi di un oggetto `Vector` con associazione dati a un oggetto `Grid`, quando aggiungi un elemento a una raccolta, la modifica viene riflessa nell'interfaccia utente della griglia.  
  
## Utilizzo dei vettori  
 Quando la classe deve passare un contenitore di sequenza a un altro componente di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)], usare [Windows::Foundation::Collections:: IVector\<T\>](http://msdn.microsoft.com/library/windows/apps/br206631.aspx) come parametro o tipo restituito e [Platform::Collections::Vector\<T\>](../cppcx/platform-collections-vector-class.md) come implementazione concreta. Se tenti di usare un tipo `Vector` in un parametro o in un valore restituito pubblico, viene generato l'errore del compilatore C3986. Puoi correggere l'errore modificando l'oggetto `Vector` in un oggetto `IVector`.  
  
> [!IMPORTANT]
>  Se passi una sequenza nel tuo programma, utilizza `Vector` o `std::vector` perché sono più efficienti rispetto a `IVector`. Utilizza `IVector` solo quando passi il contenitore nell'ABI.  
>   
>  Il sistema di tipi Windows Runtime non supporta il concetto di matrici di matrici, pertanto non puoi passare un IVector\<Platform::Array\<T\>\> come valore restituito o parametro di metodo. Per passare una matrice di matrici o una sequenza di sequenze attraverso l'interfaccia applicativa binaria \(ABI\), usa `IVector<IVector<T>^>`.  
  
 `Vector<T>` fornisce i metodi necessari per l'aggiunta, la rimozione e l'accesso agli elementi nella raccolta ed è implicitamente convertibile in `IVector<T>`. Puoi anche utilizzare gli algoritmi STL nelle istanze di `Vector<T>`. Nell'esempio riportato di seguito viene illustrato l'utilizzo di base. Le funzioni [begin](../cppcx/begin-function.md) e [end](../cppcx/end-function.md) derivano qui dallo spazio dei nomi `Platform::Collections`, non dallo spazio dei nomi `std`.  
  
 [!code-cpp[cx_collections#01](../snippets/cpp/VS_Snippets_Misc/cx_collections/cpp/class1.cpp#01)]  
  
 Se desideri riutilizzare in un componente `std::vector` codice esistente in cui è presente [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)], utilizza solo uno dei costruttori `Vector` che accetta un oggetto `std::vector` o una coppia di iteratori per costruire un oggetto `Vector` nel punto in cui passi la raccolta nell'ABI. Nell'esempio seguente viene illustrato come utilizzare il costruttore di spostamento `Vector` per ottenere un'inizializzazione efficiente da un oggetto `std::vector`. Dopo l'operazione di spostamento, la variabile `vec` originale non è più valida.  
  
 [!code-cpp[cx_collections#02](../snippets/cpp/VS_Snippets_Misc/cx_collections/cpp/class1.cpp#02)]  
  
 Se disponi di un vettore di stringhe da passare attraverso l'ABI in un dato momento futuro, devi decidere se creare le stringhe inizialmente come tipi `std::wstring` o come tipi `Platform::String^`. Se sono richieste numerose attività di elaborazione sulle stringhe, utilizza `wstring`. Altrimenti, crea le stringhe come tipi `Platform::String^` per evitare di doverle convertire in seguito. Devi inoltre decidere se inserire queste stringhe in un oggetto `std:vector` o `Platform::Collections::Vector` internamente. Come regola generale, utilizza `std::vector` e quindi crea da esso un oggetto `Platform::Vector` solo quando passi il contenitore nell'ABI.  
  
## Tipi di valore in Vector  
 Qualsiasi elemento da archiviare in [Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md) deve supportare il confronto di uguaglianza, in modo implicito o tramite un criterio di confronto [std::equal\_to](../standard-library/equal-to-struct.md) personalizzato specificato. Tutti i tipi di riferimento e tutti i tipi scalari supportano in modo implicito i confronti di uguaglianza. Per i tipi valore non scalari come [Windows::Foundation::DateTime](http://msdn.microsoft.com/library/windows/apps/windows.foundation.datetime.aspx) o per i confronti personalizzati, ad esempio `objA->UniqueID == objB->UniqueID`, è necessario fornire un oggetto funzione personalizzato.  
  
  
  
## Elementi VectorProxy  
 [Platform::Collections::VectorIterator](../cppcx/platform-collections-vectoriterator-class.md) e [Platform::Collections::VectorViewIterator](../cppcx/platform-collections-vectorviewiterator-class.md) consentono l'uso di algoritmi e loop `range for` come [std::sort](http://msdn.microsoft.com/library/9b0a4fc1-5131-4c73-9c2e-d72211f2d0ae) con un contenitore [IVector\<T\>](http://msdn.microsoft.com/en-us/library/windows/apps/br206631.aspx). Tuttavia, gli elementi `IVector` non sono accessibili attraverso la dereferenziazione del puntatore C\+\+, ma solo attraverso i metodi [GetAt](http://msdn.microsoft.com/library/windows/apps/br206634.aspx) e [SetAt](http://msdn.microsoft.com/library/windows/apps/br206642.aspx). Di conseguenza, questi iteratori utilizzano le classi proxy `Platform::Details::VectorProxy<T>` e `Platform::Details::ArrowProxy<T>` per fornire l'accesso ai singoli elementi attraverso gli operatori `*`, `->` e `[]`, come richiesto da STL. In linea puramente teorica, dato un elemento `IVector<Person^> vec`, il tipo di `*begin(vec)` è `VectorProxy<Person^>`. L'oggetto proxy, tuttavia, è quasi sempre trasparente al codice utente. Questi oggetti proxy non sono documentati in quanto riservati al solo uso interno da parte degli iteratori, è tuttavia utile conoscere il funzionamento del meccanismo.  
  
 Quando usi un ciclo `range for` sui contenitori `IVector`, usa `auto&&` per consentire l'associazione corretta della variabile iteratore agli elementi `VectorProxy`. Se usi `auto` o `auto&`, viene generato il messaggio di avviso del compilatore C4239 nel cui testo è specificato `VectoryProxy`.  
  
 La figura seguente mostra un ciclo `range for` su un elemento `IVector<Person^>`. Come puoi notare, l'esecuzione si interrompe al punto di interruzione sulla linea 64. La finestra **Controllo immediato** mostra che la variabile iteratore `p` è di fatto `VectorProxy<Person^>` con le variabili membro `m_v` e `m_i`. Tuttavia, quando chiami `GetType` su questa variabile, restituisce il tipo identico all'istanza `Person` di `p2`. Il vantaggio è che sebbene `VectorProxy` e `ArrowProxy` possano apparire in **Controllo immediato**, il debugger individua alcuni errori del compilatore per cui non in genere necessario scrivere codice.  
  
 ![VectorProxy in ciclo for basato su intervallo](../cppcx/media/vectorproxy-1.png "VectorProxy\_1")  
  
 Uno scenario che richiede la scrittura di codice attorno all'oggetto proxy è quando è necessario eseguire il `dynamic_cast` sugli elementi, ad esempio quando si cercano oggetti XAML di un determinato tipo in una raccolta di elementi `UIElement`. In questo caso, è necessario eseguire il cast dell'elemento su [Platform::Object](../cppcx/platform-object-class.md) e quindi eseguire il cast dinamico:  
  
```  
  
void FindButton(UIElementCollection^ col)  
{  
    // Use auto&& to avoid warning C4239  
    for (auto&& elem : col)  
    {  
        Button^ temp = dynamic_cast<Button^>(static_cast<Object^>(elem));  
        if (nullptr != temp)  
        {  
            // Use temp...  
        }  
    }  
}  
```  
  
## Utilizzo del mapping  
 Questo esempio mostra come inserire gli elementi e come cercarli in [Platform::Collections::Map](../cppcx/platform-collections-map-class.md), quindi come restituire l'oggetto `Map` come tipo [Windows::Foundation::Collections::IMapView](http://msdn.microsoft.com/library/windows/apps/br226037.aspx) di sola lettura.  
  
 [!code-cpp[cx_collections#04](../snippets/cpp/VS_Snippets_Misc/cx_collections/cpp/class1.cpp#04)]  
  
 In genere, per la funzionalità interna di mapping, è preferibile il tipo `std::map` per motivi di prestazioni. Se si deve passare il contenitore attraverso l'interfaccia ABI \(Application Binary Interface\), costruire un elemento [Platform::Collections::Map](../cppcx/platform-collections-map-class.md) da [std::map](../standard-library/map-class.md) e restituire `Map` come [Windows::Foundation::Collections::IMap](http://msdn.microsoft.com/library/windows/apps/br226042.aspx). Se tenti di usare un tipo `Map` in un parametro o in un valore restituito pubblico, viene generato l'errore del compilatore C3986. Puoi correggere l'errore modificando l'oggetto `Map` in un oggetto `IMap`. In alcuni casi, ad esempio quando si fanno poche ricerche o pochi inserimenti e si passa spesso la raccolta tramite l'interfaccia ABI, può essere più conveniente utilizzare `Platform::Collections::Map` dall'inizio ed evitare di dover convertire `std::map`. In ogni caso, è bene evitare operazioni di ricerca e di inserimento in un oggetto `IMap` perché queste offrono prestazioni più scarse tra i tre tipi. Esegui la conversione in `IMap` solo nel punto in cui passi il contenitore attraverso l'interfaccia ABI.  
  
## Tipi di valore in Map  
 Gli elementi in [Platform::Collections::Map](../cppcx/platform-collections-map-class.md) vengono ordinati. Qualsiasi elemento da archiviare in `Map` deve supportare l'ordinamento di tipo "strict weak", in modo implicito o tramite un criterio di confronto [stl::less](../standard-library/less-struct.md) personalizzato specificato. I tipi scalari supportano il confronto in modo implicito. Per i tipi di valore non scalari come `Windows::Foundation::DateTime` o per i confronti personalizzati, ad esempio `objA->UniqueID < objB->UniqueID`, devi fornire un criterio di confronto personalizzato.  
  
## Tipi di raccolta  
 Le raccolte sono suddivise in quattro categorie: versioni modificabili e versioni di sola lettura di raccolte di sequenze e raccolte associative. Inoltre, [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] consente un migliore utilizzo delle raccolte in quanto fornisce delle classi di iteratore che semplificano l'accesso alle raccolte. Per una breve descrizione degli iteratori, vedi [Iteratori](../standard-library/iterators.md).  
  
 Gli elementi di una raccolta modificabile possono essere modificati, mentre gli elementi di una raccolta di sola lettura, nota come *visualizzazione*, possono solo essere letti. È possibile accedere agli elementi di una raccolta [Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md) o [Platform::Collections::VectorView](../cppcx/platform-collections-vectorview-class.md) attraverso un iteratore o un elemento [Vector::GetAt \(metodo\)](../cppcx/vector-getat-method.md) e un indice della raccolta. È possibile accedere agli elementi di una raccolta associativa utilizzando l'oggetto [Map::Lookup \(metodo\)](../cppcx/map-lookup-method.md) della raccolta e una chiave.  
  
 [Classe Platform::Collections::Map](../cppcx/platform-collections-map-class.md)  
 Raccolta associativa modificabile. Gli elementi della mappa sono coppie chiave\-valore. Sono supportati sia la ricerca della chiave per recuperare il valore associato che lo scorrimento di tutte le coppie chiave\-valore.  
  
 `Map` e `MapView` sono basati su modelli in `<K, V, C = std::less<K>>`; di conseguenza, è possibile personalizzare il criterio di confronto.  Inoltre, `Vector` e `VectorView` sono basati su modelli in `<T, E = std::equal_to<T>>`, pertanto puoi personalizzare il comportamento di `IndexOf()`. Ciò è importante soprattutto per gli struct di valore di `Vector` e `VectorView`. Ad esempio, per creare un vettore\<Windows::Foundation::DateTime\>, devi fornire un criterio di confronto personalizzato poiché DateTime non esegue l'overload dell'operatore \=\=.  
  
 [Classe Platform::Collections::MapView](../cppcx/platform-collections-mapview-class.md)  
 Versione di sola lettura di un oggetto `Map`.  
  
 [Classe Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md)  
 Raccolta di sequenze modificabile.`Vector<T>` supporta operazioni [Append](../cppcx/vector-append-method.md) di accesso continuo casuale e accesso continuo ammortizzato.  
  
 [Classe Platform::Collections::VectorView](../cppcx/platform-collections-vectorview-class.md)  
 Versione di sola lettura di un oggetto `Vector`.  
  
 [Classe Platform::Collections::InputIterator](../cppcx/platform-collections-inputiterator-class.md)  
 Iteratore STL che soddisfa le richieste di un iteratore di input STL.  
  
 [Classe Platform::Collections::VectorIterator](../cppcx/platform-collections-vectoriterator-class.md)  
 Iteratore STL che soddisfa le richieste di un iteratore STL di accesso causale modificabile.  
  
 [Classe Platform::Collections::VectorViewIterator](../cppcx/platform-collections-vectorviewiterator-class.md)  
 Iteratore STL che soddisfa le richieste di un iteratore STL di accesso causale modificabile `const`.  
  
### Funzioni begin\(\) ed end\(\)  
 Per semplificare l'utilizzo della libreria STL per elaborare oggetti `Vector`, `VectorView`, `Map`, `MapView` e oggetti `Windows::Foundation::Collections` arbitrari, [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] supporta gli overload delle funzioni non membro [begin \(funzione\)](../cppcx/begin-function.md) e [end \(funzione\)](../cppcx/end-function.md).  
  
 Nella tabella seguente sono elencati gli iteratori e le funzioni disponibili.  
  
|Iteratori|Funzioni|  
|---------------|--------------|  
|[Platform::Collections::VectorIterator\<T\>](../cppcx/platform-collections-vectoriterator-class.md)<br /><br /> Archivia internamente [Windows::Foundation::Collections:: IVector\<T\>](http://msdn.microsoft.com/library/windows/apps/br206631.aspx) e int.|[begin](../cppcx/begin-function.md)\/ [end](../cppcx/end-function.md)\([Windows::Foundation::Collections:: IVector\<T\>](http://msdn.microsoft.com/library/windows/apps/br206631.aspx)\)|  
|[Platform::Collections::VectorViewIterator\<T\>](../cppcx/platform-collections-vectorviewiterator-class.md)<br /><br /> Archivia internamente [IVectorView\<T\>](http://msdn.microsoft.com/library/windows/apps/br226058.aspx)^ e int.|[begin](../cppcx/begin-function.md)\/ [end](../cppcx/end-function.md) \([IVectorView\<T\>](http://msdn.microsoft.com/library/windows/apps/br226058.aspx)^\)|  
|[Platform::Collections::InputIterator\<T\>](../cppcx/platform-collections-inputiterator-class.md)<br /><br /> Archivia internamente [IIterator\<T\>](http://msdn.microsoft.com/library/windows/apps/br226026.aspx)^ e T.|[begin](../cppcx/begin-function.md)\/ [end](../cppcx/end-function.md) \([IIterable\<T\>](http://msdn.microsoft.com/library/windows/apps/br226024.aspx)\)|  
|[Platform::Collections::InputIterator\<IKeyValuePair\<K, V\>^\>](../cppcx/platform-collections-inputiterator-class.md)<br /><br /> Archivia internamente [IIterator\<T\>](http://msdn.microsoft.com/library/windows/apps/br226026.aspx)^ e T.|[begin](../cppcx/begin-function.md)\/ [end](../cppcx/end-function.md) \([IMap\<K,V\>](http://msdn.microsoft.com/library/windows/apps/br226042.aspx).|  
|[Platform::Collections::InputIterator\<IKeyValuePair\<K, V\>^\>](../cppcx/platform-collections-inputiterator-class.md)<br /><br /> Archivia internamente [IIterator\<T\>](http://msdn.microsoft.com/library/windows/apps/br226026.aspx)^ e T.|[begin](../cppcx/begin-function.md)\/ [end](../cppcx/end-function.md) \([Windows::Foundation::Collections::IMapView](http://msdn.microsoft.com/library/windows/apps/br226037.aspx)\)|  
  
### Eventi di modifica della raccolta  
 `Vector` e `Map` supportano l'associazione dati nelle raccolte XAML mediante l'implementazione di eventi causati da modifiche o reimpostazioni di un oggetto Collection e da inserimento, rimozione o modifica di qualsiasi elemento di una raccolta. Puoi creare tipi personalizzati che supportano l'associazione dati, anche se non è possibile ereditare da `Map` o da `Vector` perché questi tipi sono sealed.  
  
 I delegati [Windows::Foundation::Collections::VectorChangedEventHandler](http://msdn.microsoft.com/library/windows/apps/br206656.aspx) e [Windows::Foundation::Collections::MapChangedEventHandler](http://msdn.microsoft.com/library/windows/apps/br206644.aspx) specificano le firme per i gestori eventi per gli eventi di modifica delle raccolte. La classe di enumerazione pubblica [Windows::Foundation::Collections::CollectionChange](http://msdn.microsoft.com/library/windows/apps/windows.foundation.collections.collectionchange.aspx) e le classi di riferimento  `Platform::Collection::Details::MapChangedEventArgs` e `Platform::Collections::Details::VectorChangedEventArgs` archiviano gli argomenti degli eventi per determinare la causa degli eventi. I tipi \*`EventArgs` sono definiti nello spazio dei nomi `Details` poiché non è necessario costruirli o utilizzarli in modo esplicito quando si utilizza `Map` o `Vector`.  
  
## Vedere anche  
 [Sistema di tipi](../cppcx/type-system-c-cx.md)   
 [Built\-in Types](http://msdn.microsoft.com/it-it/acc196fd-09da-4882-b554-6c94685ec75f)   
 [Riferimenti al linguaggio Visual C\+\+](../cppcx/visual-c-language-reference-c-cx.md)   
 [Riferimenti a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)