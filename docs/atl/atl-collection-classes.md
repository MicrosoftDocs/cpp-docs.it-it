---
title: Classi di raccolta ATL
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
ms.openlocfilehash: 70ca283468a51b4214273698a532ce2a85d52b44
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58774984"
---
# <a name="atl-collection-classes"></a>Classi di raccolta ATL

ATL fornisce molte classi per l'archiviazione e l'accesso ai dati. La classe a cui si decide di usare dipende da diversi fattori, tra cui:

- La quantità di dati da archiviare

- Efficienza e prestazioni nell'accesso ai dati

- La possibilità di accedere ai dati in base all'indice o chiave

- Ordinamento dei dati

- Preferenza personale

## <a name="small-collection-classes"></a>Classi di raccolta di piccole dimensioni

ATL fornisce le classi di matrice seguenti per la gestione di un numero limitato di oggetti. Tuttavia, queste classi sono limitate e progettato per essere utilizzato internamente da ATL. Non è consigliabile utilizzarle nei programmi.

|Classe|Tipo di archiviazione dei dati|
|-----------|--------------------------|
|[CSimpleArray](../atl/reference/csimplearray-class.md)|Implementa una classe di matrici per la gestione di un numero limitato di oggetti.|
|[CSimpleMap](../atl/reference/csimplemap-class.md)|Implementa una classe di mapping per la gestione di un numero limitato di oggetti.|

## <a name="general-purpose-collection-classes"></a>Classi di raccolta generico

Le classi seguenti implementano le matrici, elenchi e mappe e vengono fornite come classi di raccolta generico:

|Classe|Tipo di archiviazione dei dati|
|-----------|--------------------------|
|[CAtlArray](../atl/reference/catlarray-class.md)|Implementa una matrice.|
|[CAtlList](../atl/reference/catllist-class.md)|Implementa un elenco.|
|[CAtlMap](../atl/reference/catlmap-class.md)|Implementa una struttura di mapping, in base al quale i dati possono fare riferimento chiave o un valore.|
|[CRBMap](../atl/reference/crbmap-class.md)|Implementa una struttura di mapping utilizzando l'algoritmo rosso-bianco.|
|[CRBMultiMap](../atl/reference/crbmultimap-class.md)|Implementa una struttura di mapping multipla basata su Red-nero.|

Queste classi verranno intercettare molti errori di programmazione quando utilizzata nelle build di debug, ma viene prestazioni, questi controlli non verranno eseguiti nelle build di vendita al dettaglio.

## <a name="specialized-collection-classes"></a>Classi di raccolte specializzate

Altre classi collection sono anche disponibili per la gestione di puntatori alla memoria e i puntatori di interfaccia:

|Classe|Scopo|
|-----------|-------------|
|[CAutoPtrArray](../atl/reference/cautoptrarray-class.md)|Fornisce metodi utili per la costruzione di una matrice di puntatori intelligenti.|
|[CAutoPtrList](../atl/reference/cautoptrlist-class.md)|Fornisce metodi utili per la costruzione di un elenco di puntatori intelligenti.|
|[CComUnkArray](../atl/reference/ccomunkarray-class.md)|Gli archivi `IUnknown` puntatori ed è progettato per essere utilizzato come parametro per il [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md) classe modello.|
|[CHeapPtrList](../atl/reference/cheapptrlist-class.md)|Fornisce metodi utili quando si crea un elenco di puntatori di heap.|
|[CInterfaceArray](../atl/reference/cinterfacearray-class.md)|Fornisce metodi utili per la costruzione di una matrice di puntatori a interfaccia COM.|
|[CInterfaceList](../atl/reference/cinterfacelist-class.md)|Fornisce metodi utili per la costruzione di un elenco di puntatori a interfaccia COM.|

## <a name="choosing-a-collection-class"></a>Scelta di una classe di raccolta

Ognuna delle classi di raccolte disponibili offre caratteristiche di prestazioni differenti, come illustrato nella tabella seguente.

- Le colonne 2 e 3 descrivono ogni classe di ordinamento e le caratteristiche di accesso. Nella tabella il termine "ordine" significa che l'ordine di inserimento ed eliminazione degli elementi determina il relativo ordine nella raccolta. Non significa che gli elementi sono ordinati in base al rispettivo contenuto. Il termine "indicizzazione" significa che è possibile recuperare gli elementi nella raccolta da un indice Integer, analogamente agli elementi in una matrice standard.

- Le colonne 4 e 5 descrivono le prestazioni di ciascuna classe. In applicazioni che richiedono molte operazioni di inserimento nella raccolta, la velocità di inserimento potrebbe essere particolarmente importante. In altre applicazioni potrebbe essere più importante la velocità di ricerca.

- La colonna 6 indica se ogni forma consente elementi duplicati.

- Le prestazioni di un'operazione di classe della raccolta specificata sono espressi in termini la relazione tra il tempo necessario per completare l'operazione e il numero di elementi nella raccolta. Un'operazione che richiede una quantità di tempo che aumenta in modo lineare man mano il numero di elementi aumenta è descritta come un algoritmo o (n). Al contrario, un'operazione che richiede un periodo di tempo che aumenta meno come il numero di elementi aumenta viene descritto come un algoritmo O (log n). Pertanto, in termini di prestazioni, gli algoritmi O (log n) prestazioni agli algoritmi più come il numero di elementi aumenta.

### <a name="collection-shape-features"></a>Funzionalità delle forme di raccolta

|Forma|Ordered|Indicizzati|Inserire un<br /><br /> elemento|Ricerca<br /><br /> elemento specificato|Duplica<br /><br /> elementi|
|-----------|--------------|--------------|---------------------------|--------------------------------------|-----------------------------|
|List|Yes|No|Fast (tempo costante)|Lento o (n)|Yes|
|Matrice|Yes|Tramite valore integer (tempo costante)|Lento o (n), ad eccezione dell'inserimento finale, in cui un tempo costante case|Lento o (n)|Yes|
|Mappa|No|Da chiave (tempo costante)|Fast (tempo costante)|Fast (tempo costante)|No (chiavi) Sì (valori)|
|Mappa di rosso-bianco|Sì (per chiave)|Da chiave O (log n)|Veloce O (log n)|Veloce O (log n)|No|
|Oggetto Multimap rosso-bianco|Sì (per chiave)|Da chiave O(log n) (valori multipli per ogni chiave)|Veloce O (log n)|Veloce O (log n)|Sì (valori multipli per ogni chiave)|

## <a name="using-ctraits-objects"></a>Utilizzo di oggetti CTraits

Come le classi collection ATL possono essere usate per archiviare una vasta gamma di tipi di dati definito dall'utente, può essere utile essere in grado di eseguire l'override di funzioni importanti, ad esempio i confronti. Ciò si ottiene usando la CTraits (classi).

CTraits (classi) sono simili, ma più flessibile, le funzioni helper classi collection MFC; visualizzare [supporti delle classi Collection](../mfc/reference/collection-class-helpers.md) per altre informazioni.

Quando si crea una classe di insiemi, hai la possibilità di specificare una classe CTraits. Questa classe conterrà il codice per eseguire operazioni come la comparazione quando viene chiamato da altri metodi che costituiscono la classe di raccolta. Ad esempio, se l'oggetto elenco contiene il proprio strutture definite dall'utente, è possibile ridefinire il test di uguaglianza per confrontare solo determinate variabili membro. In questo modo, il metodo di ricerca dell'oggetto elenco funzionerà in modo più utile.

## <a name="example"></a>Esempio

### <a name="code"></a>Codice

[!code-cpp[NVC_ATL_Utilities#112](../atl/codesnippet/cpp/atl-collection-classes_1.cpp)]

## <a name="comments"></a>Commenti

Per un elenco di CTraits (classi), vedere [classi Collection](../atl/collection-classes.md).

Il diagramma seguente mostra la gerarchia di classi per il CTraits (classi).

![Gerarchia dei tratti per classi collection](../atl/media/vctraitscollectionclasseshierarchy.gif "gerarchia dei tratti per classi collection")

## <a name="collection-classes-samples"></a>Esempi di classi Collection

Gli esempi seguenti illustrano le classi di raccolta:

- [Esempio MMXSwarm](../overview/visual-cpp-samples.md)

- [Esempio DynamicConsumer](../overview/visual-cpp-samples.md)

- [Esempio UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV)

- [Esempio di testo scorrevole](../overview/visual-cpp-samples.md)

## <a name="see-also"></a>Vedere anche

[Concetti](../atl/active-template-library-atl-concepts.md)<br/>
[Classi di raccolta](../atl/collection-classes.md)
