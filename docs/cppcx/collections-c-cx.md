---
title: Raccolte (C++/CX)
ms.date: 11/19/2018
ms.assetid: 914da30b-aac5-4cd7-9da3-a5ac08cdd72c
ms.openlocfilehash: ff3fb9899355ec05083dc15c16d74c9aa1d3fd8f
ms.sourcegitcommit: 180f63704f6ddd07a4172a93b179cf0733fd952d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2019
ms.locfileid: "70740324"
---
# <a name="collections-ccx"></a>Raccolte (C++/CX)

In un C++programma/CX è possibile usare gratuitamente i contenitori della libreria di modelli standard (STL) o qualsiasi altro tipo di raccolta definito dall'utente. Tuttavia, quando si passano le raccolte attraverso l'interfaccia ABI (Application Binary Interface) Windows Runtime (ABI), ad esempio a un controllo XAML o a un client JavaScript, è necessario usare Windows Runtime tipi di raccolta.

Il Windows Runtime definisce le interfacce per le raccolte e i tipi correlati C++e/CX fornisce le C++ implementazioni concrete nel file di intestazione Collection. h. Nella seguente immagine vengono mostrate le relazioni tra i tipi di raccolta:

![Albero&#43;&#43;&#47;di ereditarietà di c CX per i tipi di raccolta](../cppcx/media/cppcxcollectionsinheritancetree.png "albero di ereditarietà c&#43;&#43;&#47;CX per i tipi di raccolta")

- La classe [Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md) è simile alla classe [std::vector](../standard-library/vector-class.md).

- La classe [Platform::Collections::Map](../cppcx/platform-collections-map-class.md) è simile alla classe [std::map](../standard-library/map-class.md).

- Le classi[Platform::Collections::VectorView](../cppcx/platform-collections-vectorview-class.md) e[Platform::Collections::MapView](../cppcx/platform-collections-mapview-class.md) sono versioni in sola lettura di `Vector` e `Map`.

- Gli iteratori sono definiti nello [spazio dei nomi Platform::Collections](../cppcx/platform-collections-namespace.md). Questi iteratori soddisfano i requisiti per gli iteratori STL e consentono l'uso di [std::find](../standard-library/algorithm-functions.md#find),  [std::count_if](../standard-library/algorithm-functions.md#count_if)e di altri algoritmi STL su qualsiasi tipo di [Windows::Foundation::Collections](/uwp/api/windows.foundation.collections) o tipo concreto [Platform::Collections](../cppcx/platform-collections-namespace.md) . Questo significa, ad esempio, che è possibile eseguire l'iterazione di una raccolta in un componente C# Windows Runtime creato in e applicare un algoritmo STL.

   > [!IMPORTANT]
   > Gli iteratori proxy `VectorIterator` e `VectorViewIterator` usano oggetti proxy `VectoryProxy<T>` e `ArrowProxy<T>` per consentire l'uso con i contenitori STL. Per ulteriori informazioni, vedi "Elementi VectorProxy" più avanti in questo articolo.

- I C++tipi di raccolta/CX supportano lo stesso thread safety garantisce il supporto dei contenitori STL.

- [Windows::Foundation::Collections::IObservableVector](/uwp/api/Windows.Foundation.Collections.IObservableVector_T_) e [Windows::Foundation::Collections::IObservableMap](/uwp/api/Windows.Foundation.Collections.IObservableMap_K_V_) definiscono gli eventi che vengono generati quando la raccolta cambia in vari modi. Grazie all'implementazione di queste interfacce,  [Platform::Collections::Map](../cppcx/platform-collections-map-class.md) e [Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md) supportano l'associazione dati con le raccolte XAML. Se ad esempio disponi di un oggetto `Vector` con associazione dati a un oggetto `Grid`, quando aggiungi un elemento a una raccolta, la modifica viene riflessa nell'interfaccia utente della griglia.

## <a name="vector-usage"></a>Utilizzo dei vettori

Quando la classe deve passare un contenitore di sequenza a un altro componente Windows Runtime, [usare Windows:: Foundation:: Collections:: IVector\<t >](/uwp/api/Windows.Foundation.Collections.IVector_T_) come parametro o tipo restituito e [Platform:: Collections:: Vector\<T >](../cppcx/platform-collections-vector-class.md) come implementazione concreta. Se tenti di usare un tipo `Vector` in un parametro o in un valore restituito pubblico, viene generato l'errore del compilatore C3986. Puoi correggere l'errore modificando l'oggetto `Vector` in un oggetto `IVector`.

> [!IMPORTANT]
> Se passi una sequenza nel tuo programma, utilizza `Vector` o `std::vector` perché sono più efficienti rispetto a `IVector`. Utilizza `IVector` solo quando passi il contenitore nell'ABI.
>
> Il sistema di tipi Windows Runtime non supporta il concetto di matrici di matrici e pertanto non è possibile passare un IVector < Platform:: array\<T > > come valore restituito o parametro di metodo. Per passare una matrice di matrici o una sequenza di sequenze attraverso l'interfaccia applicativa binaria (ABI), usa `IVector<IVector<T>^>`.

`Vector<T>` fornisce i metodi necessari per l'aggiunta, la rimozione e l'accesso agli elementi nella raccolta ed è implicitamente convertibile in `IVector<T>`. Puoi anche utilizzare gli algoritmi STL nelle istanze di `Vector<T>`. Nell'esempio riportato di seguito viene illustrato l'utilizzo di base. Le funzioni [begin](../cppcx/begin-function.md) e [end](../cppcx/end-function.md) derivano qui dallo spazio dei nomi `Platform::Collections` , non dallo spazio dei nomi `std` .

[!code-cpp[cx_collections#01](../cppcx/codesnippet/CPP/collections/class1.cpp#01)]

Se si dispone di codice esistente che `std::vector` utilizza e si desidera riutilizzarlo in un componente di Windows Runtime, è sufficiente utilizzare `Vector` uno dei costruttori che accetta `std::vector` una o una coppia di iteratori per costruire `Vector` un oggetto nel punto in cui si passa il raccolta nell'ABI. Nell'esempio seguente viene illustrato come utilizzare il costruttore di spostamento `Vector` per ottenere un'inizializzazione efficiente da un oggetto `std::vector`. Dopo l'operazione di spostamento, la variabile `vec` originale non è più valida.

[!code-cpp[cx_collections#02](../cppcx/codesnippet/CPP/collections/class1.cpp#02)]

Se disponi di un vettore di stringhe da passare attraverso l'ABI in un dato momento futuro, devi decidere se creare le stringhe inizialmente come tipi `std::wstring` o come tipi `Platform::String^` . Se sono richieste numerose attività di elaborazione sulle stringhe, utilizza `wstring`. Altrimenti, crea le stringhe come tipi `Platform::String^` per evitare di doverle convertire in seguito. Devi inoltre decidere se inserire queste stringhe in un oggetto `std:vector` o `Platform::Collections::Vector` internamente. Come regola generale, utilizza `std::vector` e quindi crea da esso un oggetto `Platform::Vector` solo quando passi il contenitore nell'ABI.

## <a name="value-types-in-vector"></a>Tipi di valore in Vector

Qualsiasi elemento da archiviare in [Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md) deve supportare il confronto di uguaglianza, in modo implicito o tramite un criterio di confronto [std::equal_to](../standard-library/equal-to-struct.md) personalizzato specificato. Tutti i tipi di riferimento e tutti i tipi scalari supportano in modo implicito i confronti di uguaglianza. Per i tipi valore non scalari come [Windows::Foundation::DateTime](/uwp/api/windows.foundation.datetime)o per i confronti personalizzati, ad esempio `objA->UniqueID == objB->UniqueID`, è necessario fornire un oggetto funzione personalizzato.

## <a name="vectorproxy-elements"></a>Elementi VectorProxy

[Platform:: Collections:: oggetto VectorIterator](../cppcx/platform-collections-vectoriterator-class.md) e [Platform:: Collections:: oggetto VectorViewIterator](../cppcx/platform-collections-vectorviewiterator-class.md) consentono l' `range for` uso di cicli e algoritmi come [std:: Sort](../standard-library/algorithm-functions.md#sort) con un contenitore di [IVector\<T >](/uwp/api/Windows.Foundation.Collections.IVector_T_) . Tuttavia, gli elementi `IVector` non sono accessibili attraverso la dereferenziazione del puntatore C++, ma solo attraverso i metodi [GetAt](/uwp/api/windows.foundation.collections.ivector-1.getat) e [SetAt](/uwp/api/windows.foundation.collections.ivector-1.setat) . Pertanto, questi `Platform::Details::VectorProxy<T>` iteratori utilizzano le classi proxy e `Platform::Details::ArrowProxy<T>` per fornire l'accesso ai singoli elementi tramite __\*__ __->__ gli operatori, e  __\[]__ , come richiesto dalla libreria standard. In linea puramente teorica, dato un elemento `IVector<Person^> vec`, il tipo di `*begin(vec)` è `VectorProxy<Person^>`. L'oggetto proxy, tuttavia, è quasi sempre trasparente al codice utente. Questi oggetti proxy non sono documentati in quanto riservati al solo uso interno da parte degli iteratori, è tuttavia utile conoscere il funzionamento del meccanismo.

Quando usi un ciclo `range for` sui contenitori `IVector` , usa `auto&&` per consentire l'associazione corretta della variabile iteratore agli elementi `VectorProxy` . Se usi `auto` o `auto&`, viene generato il messaggio di avviso del compilatore C4239 nel cui testo è specificato `VectoryProxy` .

La figura seguente mostra un ciclo `range for` su un elemento `IVector<Person^>`. Come puoi notare, l'esecuzione si interrompe al punto di interruzione sulla linea 64. La finestra **Controllo immediato** mostra che la variabile iteratore `p` è di fatto `VectorProxy<Person^>` con le variabili membro `m_v` e `m_i` . Tuttavia, quando chiami `GetType` su questa variabile, restituisce il tipo identico all'istanza `Person` di `p2`. Il vantaggio è che sebbene `VectorProxy` e `ArrowProxy` possano apparire in **Controllo immediato**, il debugger individua alcuni errori del compilatore per cui non in genere necessario scrivere codice.

![VectorProxy in base&#45;all'intervallo per]VectorProxy di ciclo(../cppcx/media/vectorproxy-1.png "nel ciclo for basato su intervallo&#45;")

Uno scenario che richiede la scrittura di codice attorno all'oggetto proxy è quando è necessario eseguire il `dynamic_cast` sugli elementi, ad esempio quando si cercano oggetti XAML di un determinato tipo in una raccolta di elementi `UIElement` . In questo caso, è necessario eseguire il cast dell'elemento su [Platform::Object](../cppcx/platform-object-class.md)e quindi eseguire il cast dinamico:

```cpp
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

## <a name="map-usage"></a>Utilizzo del mapping

Questo esempio Mostra come inserire elementi e cercarli in un oggetto [Platform:: Collections:: Map](../cppcx/platform-collections-map-class.md), quindi `Map` come restituire come di sola lettura [Windows:: Foundation:: Collections:: IMapView]/UWP/API/Windows.Foundation.Collections.IMapView_K_V_) tipo.

[!code-cpp[cx_collections#04](../cppcx/codesnippet/CPP/collections/class1.cpp#04)]

In genere, per la funzionalità interna di mapping, è preferibile il tipo `std::map` per motivi di prestazioni. Se si deve passare il contenitore attraverso l'interfaccia ABI (Application Binary Interface), costruire un elemento [Platform::Collections::Map](../cppcx/platform-collections-map-class.md) da [std::map](../standard-library/map-class.md) e restituire `Map` come [Windows::Foundation::Collections::IMap](/uwp/api/Windows.Foundation.Collections.IMap_K_V_). Se tenti di usare un tipo `Map` in un parametro o in un valore restituito pubblico, viene generato l'errore del compilatore C3986. Puoi correggere l'errore modificando l'oggetto `Map` in un oggetto `IMap`. In alcuni casi, ad esempio quando si fanno poche ricerche o pochi inserimenti e si passa spesso la raccolta tramite l'interfaccia ABI, può essere più conveniente utilizzare `Platform::Collections::Map` dall'inizio ed evitare di dover convertire `std::map`. In ogni caso, è bene evitare operazioni di ricerca e di inserimento in un oggetto `IMap` perché queste offrono prestazioni più scarse tra i tre tipi. Esegui la conversione in `IMap` solo nel punto in cui passi il contenitore attraverso l'interfaccia ABI.

## <a name="value-types-in-map"></a>Tipi di valore in Map

Gli elementi in [Platform::Collections::Map](../cppcx/platform-collections-map-class.md) vengono ordinati. Qualsiasi elemento da archiviare in `Map` deve supportare l'ordinamento di tipo "strict weak", in modo implicito o tramite un criterio di confronto [stl::less](../standard-library/less-struct.md) personalizzato specificato. I tipi scalari supportano il confronto in modo implicito. Per i tipi di valore non scalari come `Windows::Foundation::DateTime`o per i confronti personalizzati, ad esempio `objA->UniqueID < objB->UniqueID`, devi fornire un criterio di confronto personalizzato.

## <a name="collection-types"></a>Tipi di raccolta

Le raccolte sono suddivise in quattro categorie: versioni modificabili e versioni di sola lettura di raccolte di sequenze e raccolte associative. Inoltre, C++/CX ottimizza le raccolte fornendo tre classi iteratore che semplificano l'accesso alle raccolte.

Gli elementi di una raccolta modificabile possono essere modificati, mentre gli elementi di una raccolta di sola lettura, nota come *visualizzazione*, possono solo essere letti. È possibile accedere agli elementi di una raccolta [Platform:: Collections:: Vector](../cppcx/platform-collections-vector-class.md) o[Platform:: Collections:: VectorView](../cppcx/platform-collections-vectorview-class.md) usando un iteratore o l'oggetto [vector:: Geta](../cppcx/platform-collections-vector-class.md#getat) della raccolta e un indice. È possibile accedere agli elementi di una raccolta associativa tramite la funzione [Map:: Lookup](../cppcx/platform-collections-map-class.md#lookup) e una chiave della raccolta.

[Platform::Collections::Map](../cppcx/platform-collections-map-class.md)<br/>
Raccolta associativa modificabile. Gli elementi della mappa sono coppie chiave-valore. Sono supportati sia la ricerca della chiave per recuperare il valore associato che lo scorrimento di tutte le coppie chiave-valore.

`Map` e `MapView` sono basati su modelli in `<K, V, C = std::less<K>>`; di conseguenza, è possibile personalizzare il criterio di confronto.  Inoltre, `Vector` e `VectorView` sono basati su modelli in `<T, E = std::equal_to<T>>` , pertanto puoi personalizzare il comportamento di `IndexOf()`. Ciò è importante soprattutto per gli struct di valore di `Vector` e `VectorView` . Ad esempio, per creare un vettore\<Windows:: Foundation::D atetime >, è necessario fornire un criterio di confronto personalizzato poiché DateTime non esegue l'overload dell'operatore = =.

[Platform::Collections::MapView](../cppcx/platform-collections-mapview-class.md)<br/>
Versione di sola lettura di un oggetto `Map`.

[Platform::Collections::Vector Class](../cppcx/platform-collections-vector-class.md)<br/>
Raccolta di sequenze modificabile. `Vector<T>` supporta operazioni [Append](../cppcx/platform-collections-vector-class.md#append) di accesso continuo casuale e accesso continuo ammortizzato.

[Platform::Collections::VectorView](../cppcx/platform-collections-vectorview-class.md)<br/>
Versione di sola lettura di un oggetto `Vector`.

[Classe Platform::Collections::InputIterator](../cppcx/platform-collections-inputiterator-class.md)<br/>
Iteratore STL che soddisfa le richieste di un iteratore di input STL.

[Classe Platform::Collections::VectorIterator](../cppcx/platform-collections-vectoriterator-class.md)<br/>
Iteratore STL che soddisfa le richieste di un iteratore STL di accesso causale modificabile.

[Classe Platform::Collections::VectorViewIterator](../cppcx/platform-collections-vectorviewiterator-class.md)<br/>
Iteratore STL che soddisfa le richieste di un iteratore STL di accesso causale modificabile  `const` .

### <a name="begin-and-end-functions"></a>Funzioni begin() ed end()

Per `Vector`semplificare l'uso di STL per elaborare `MapView` `VectorView` `Windows::Foundation::Collections` gli oggetti arbitrari `Map`,,, e C++,/CX supporta gli overload della [funzione begin](../cppcx/begin-function.md) e della [funzione end](../cppcx/end-function.md) non membro funzioni.

Nella tabella seguente sono elencati gli iteratori e le funzioni disponibili.

|Iterators|Funzioni|
|---------------|---------------|
|[Platform:: Collections::\<oggetto VectorIterator T >](../cppcx/platform-collections-vectoriterator-class.md)<br /><br /> (Archivia [internamente Windows:: Foundation:: Collections:: IVector\<T >](/uwp/api/Windows.Foundation.Collections.IVector_T_) e int).|[begin](../cppcx/begin-function.md)/ [end](../cppcx/end-function.md)([Windows:: Foundation:: Collections:: IVector\<T>](/uwp/api/Windows.Foundation.Collections.IVector_T_))|
|[Platform:: Collections::\<oggetto VectorViewIterator T >](../cppcx/platform-collections-vectorviewiterator-class.md)<br /><br /> (Archivia internamente [\<IVectorView T >](/uwp/api/Windows.Foundation.Collections.IVectorView_T_)^ e int).|[begin](../cppcx/begin-function.md)/ [end](../cppcx/end-function.md) ([IVectorView\<T>](/uwp/api/Windows.Foundation.Collections.IVectorView_T_)^)|
|[Platform:: Collections::\<InputIterator T >](../cppcx/platform-collections-inputiterator-class.md)<br /><br /> (Archivia internamente [\<IIterator t >](/uwp/api/Windows.Foundation.Collections.IIterator_T_)^ e t).|[begin](../cppcx/begin-function.md)/ [end](../cppcx/end-function.md) ([IIterable\<T>](/uwp/api/Windows.Foundation.Collections.IIterable_T_))|
|[Platform:: Collections:: InputIterator <\<IKeyValuePair K, V > ^ >](../cppcx/platform-collections-inputiterator-class.md)<br /><br /> (Archivia internamente [\<IIterator t >](/uwp/api/Windows.Foundation.Collections.IIterator_T_)^ e t).|[begin](../cppcx/begin-function.md)/ [end](../cppcx/end-function.md) ([IMap\<K,V>](/uwp/api/Windows.Foundation.Collections.IMap_K_V_).|
|[Platform:: Collections:: InputIterator <\<IKeyValuePair K, V > ^ >](../cppcx/platform-collections-inputiterator-class.md)<br /><br /> (Archivia internamente [\<IIterator t >](/uwp/api/Windows.Foundation.Collections.IIterator_T_)^ e t).|[begin](../cppcx/begin-function.md)/ [end](../cppcx/end-function.md) ([Windows::Foundation::Collections::IMapView]/uwp/api/Windows.Foundation.Collections.IMapView_K_V_))|

### <a name="collection-change-events"></a>Eventi di modifica della raccolta

`Vector` e `Map` supportano l'associazione dati nelle raccolte XAML mediante l'implementazione di eventi causati da modifiche o reimpostazioni di un oggetto Collection e da inserimento, rimozione o modifica di qualsiasi elemento di una raccolta. Puoi creare tipi personalizzati che supportano l'associazione dati, anche se non è possibile ereditare da `Map` o da `Vector` perché questi tipi sono sealed.

I delegati [Windows::Foundation::Collections::VectorChangedEventHandler](/uwp/api/windows.foundation.collections.vectorchangedeventhandler) e [Windows::Foundation::Collections::MapChangedEventHandler](/uwp/api/windows.foundation.collections.mapchangedeventhandler) specificano le firme per i gestori eventi per gli eventi di modifica delle raccolte. La classe di enumerazione pubblica [Windows::Foundation::Collections::CollectionChange](/uwp/api/windows.foundation.collections.collectionchange) e le classi di riferimento `Platform::Collection::Details::MapChangedEventArgs` e `Platform::Collections::Details::VectorChangedEventArgs` archiviano gli argomenti degli eventi per determinare la causa degli eventi. I `*EventArgs` tipi sono definiti `Details` nello spazio dei nomi perché non è necessario costruirli o utilizzarli in modo esplicito `Map` quando `Vector`si usa o.

## <a name="see-also"></a>Vedere anche

[Sistema di tipi](../cppcx/type-system-c-cx.md)<br/>
[Riferimenti al linguaggio C++/CX](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Riferimenti a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)
