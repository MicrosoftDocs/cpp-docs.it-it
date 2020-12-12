---
description: 'Altre informazioni su: classi Collection ATL'
title: Panoramica della classe di raccolta ATL
ms.date: 11/19/2018
helpviewer_keywords:
- DestructElements function
- collection classes, choosing
- ConstructElements function
- SerializeElements function
- traits classes
- collection classes, about collection classes
- CTraits classes
- collection classes
ms.assetid: 4d619d46-5b4e-41dd-b9fd-e86b1fbc00b5
ms.openlocfilehash: 32d9fe928024d82af7031fbbb8d88aba5e3eae31
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97166083"
---
# <a name="atl-collection-classes"></a>Classi di raccolta ATL

In ATL sono disponibili numerose classi per l'archiviazione e l'accesso ai dati. La classe che si decide di usare dipende da diversi fattori, tra cui:

- Quantità di dati da archiviare

- Efficienza rispetto alle prestazioni nell'accesso ai dati

- Possibilità di accedere ai dati in base all'indice o alla chiave

- Come vengono ordinati i dati

- Preferenza personale

## <a name="small-collection-classes"></a>Classi Collection di piccole dimensioni

ATL fornisce le classi di matrici seguenti per la gestione di un numero ridotto di oggetti. Tuttavia, queste classi sono limitate e progettate per essere utilizzate internamente da ATL. Non è consigliabile usarli nei programmi.

|Classe|Tipo di archiviazione dei dati|
|-----------|--------------------------|
|[CSimpleArray](../atl/reference/csimplearray-class.md)|Implementa una classe di matrici per la gestione di un numero ridotto di oggetti.|
|[CSimpleMap](../atl/reference/csimplemap-class.md)|Implementa una classe di mapping per gestire un numero ridotto di oggetti.|

## <a name="general-purpose-collection-classes"></a>Classi Collection per utilizzo generico

Le classi seguenti implementano matrici, elenchi e mappe e vengono fornite come classi di raccolta per utilizzo generico:

|Classe|Tipo di archiviazione dei dati|
|-----------|--------------------------|
|[CAtlArray](../atl/reference/catlarray-class.md)|Implementa una matrice.|
|[CAtlList](../atl/reference/catllist-class.md)|Implementa un elenco.|
|[CAtlMap](../atl/reference/catlmap-class.md)|Implementa una struttura di mapping, in base alla quale è possibile fare riferimento ai dati mediante chiave o valore.|
|[CRBMap](../atl/reference/crbmap-class.md)|Implementa una struttura di mapping utilizzando l'algoritmo Red-Black.|
|[CRBMultiMap](../atl/reference/crbmultimap-class.md)|Implementa una struttura di Red-Black multimapping.|

Queste classi intercettano molti errori di programmazione quando vengono usati nelle compilazioni di debug, ma, per motivi di prestazioni, questi controlli non verranno eseguiti nelle compilazioni finali.

## <a name="specialized-collection-classes"></a>Classi di raccolta specializzate

Sono inoltre disponibili classi di raccolte più specializzate per la gestione di puntatori di memoria e puntatori di interfaccia:

|Classe|Scopo|
|-----------|-------------|
|[CAutoPtrArray](../atl/reference/cautoptrarray-class.md)|Fornisce metodi utili per la creazione di una matrice di puntatori intelligenti.|
|[CAutoPtrList](../atl/reference/cautoptrlist-class.md)|Fornisce metodi utili per la creazione di un elenco di puntatori intelligenti.|
|[CComUnkArray](../atl/reference/ccomunkarray-class.md)|Archivia `IUnknown` i puntatori ed è progettato per essere utilizzato come parametro per la classe modello [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md) .|
|[CHeapPtrList](../atl/reference/cheapptrlist-class.md)|Fornisce metodi utili per la creazione di un elenco di puntatori dell'heap.|
|[CInterfaceArray](../atl/reference/cinterfacearray-class.md)|Fornisce metodi utili per la creazione di una matrice di puntatori di interfaccia COM.|
|[CInterfaceList](../atl/reference/cinterfacelist-class.md)|Fornisce metodi utili per la creazione di un elenco di puntatori a interfaccia COM.|

## <a name="choosing-a-collection-class"></a>Scelta di una classe Collection

Ognuna delle classi di raccolte disponibili offre diverse caratteristiche di prestazioni, come illustrato nella tabella seguente.

- Le colonne 2 e 3 descrivono le caratteristiche di ordinamento e accesso di ogni classe. Nella tabella il termine "ordine" significa che l'ordine di inserimento ed eliminazione degli elementi determina il relativo ordine nella raccolta. Non significa che gli elementi sono ordinati in base al rispettivo contenuto. Il termine "indicizzazione" significa che è possibile recuperare gli elementi nella raccolta da un indice Integer, analogamente agli elementi in una matrice standard.

- Le colonne 4 e 5 descrivono le prestazioni di ogni classe. In applicazioni che richiedono molte operazioni di inserimento nella raccolta, la velocità di inserimento potrebbe essere particolarmente importante. In altre applicazioni potrebbe essere più importante la velocità di ricerca.

- La colonna 6 indica se ogni forma consente elementi duplicati.

- Le prestazioni di una determinata operazione della classe Collection sono espresse in termini di relazione tra il tempo necessario per completare l'operazione e il numero di elementi nella raccolta. Un'operazione che richiede una quantità di tempo che aumenta in modo lineare man mano che aumenta il numero di elementi viene descritta come algoritmo O (n). Al contrario, un'operazione che richiede un periodo di tempo che aumenta minore e minore Man mano che aumenta il numero di elementi viene descritta come algoritmo O (log n). Pertanto, in termini di prestazioni, gli algoritmi O (log n) superano gli algoritmi O (n) più e più man mano che aumenta il numero di elementi.

### <a name="collection-shape-features"></a>Funzionalità delle forme di raccolta

|Con forme|Ordinato|Indicizzata|Inserire un<br /><br /> element|Ricerca<br /><br /> elemento specificato|Duplicare<br /><br /> Elementi figlio|
|-----------|--------------|--------------|---------------------------|--------------------------------------|-----------------------------|
|Elenco|Sì|No|Fast (tempo costante)|O lento (n)|Sì|
|Array|Sì|Per int (tempo costante)|Slow O (n) eccetto se si inserisce alla fine, nel qual caso l'ora costante|O lento (n)|Sì|
|Mappa|No|Per chiave (ora costante)|Fast (tempo costante)|Fast (tempo costante)|No (chiavi) Sì (valori)|
|Mappa Red-Black|Sì (per chiave)|Per chiave O (log n)|Veloce O (log n)|Veloce O (log n)|No|
|Multimap Red-Black|Sì (per chiave)|Per chiave O (log n) (più valori per chiave)|Veloce O (log n)|Veloce O (log n)|Sì (più valori per chiave)|

## <a name="using-ctraits-objects"></a>Uso di oggetti CTraits

Poiché le classi della raccolta ATL possono essere utilizzate per archiviare un'ampia gamma di tipi di dati definiti dall'utente, può essere utile poter eseguire l'override di funzioni importanti quali i confronti. Questa operazione viene eseguita utilizzando le classi CTraits.

Le classi CTraits sono simili a, ma più flessibili di, le funzioni di supporto della classe della raccolta MFC; Per ulteriori informazioni, vedere [helper della classe di raccolta](../mfc/reference/collection-class-helpers.md) .

Quando si costruisce la classe della raccolta, è possibile specificare una classe CTraits. Questa classe conterrà il codice che eseguirà operazioni quali i confronti quando viene chiamato dagli altri metodi che compongono la classe della raccolta. Se, ad esempio, l'oggetto elenco contiene le proprie strutture definite dall'utente, potrebbe essere necessario ridefinire il test di uguaglianza per confrontare solo determinate variabili membro. In questo modo, il metodo Find dell'oggetto elenco funzionerà in modo più utile.

## <a name="example"></a>Esempio

### <a name="code"></a>Codice

[!code-cpp[NVC_ATL_Utilities#112](../atl/codesnippet/cpp/atl-collection-classes_1.cpp)]

## <a name="comments"></a>Commenti

Per un elenco delle classi CTraits, vedere [classi Collection](../atl/collection-classes.md).

Nel diagramma seguente viene illustrata la gerarchia di classi per le classi CTraits.

![Gerarchia dei tratti per le classi di raccolte](../atl/media/vctraitscollectionclasseshierarchy.gif "Gerarchia dei tratti per le classi di raccolte")

## <a name="collection-classes-samples"></a>Esempi di classi di raccolta

Negli esempi seguenti vengono illustrate le classi di raccolta:

- [Esempio MMXSwarm](../overview/visual-cpp-samples.md)

- [Esempio DynamicConsumer](../overview/visual-cpp-samples.md)

- [Esempio UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV)

- [Esempio Marquee](../overview/visual-cpp-samples.md)

## <a name="see-also"></a>Vedi anche

[Concetti](../atl/active-template-library-atl-concepts.md)<br/>
[Classi Collection](../atl/collection-classes.md)
