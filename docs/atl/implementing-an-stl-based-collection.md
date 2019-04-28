---
title: Implementazione di una raccolta basata sulla libreria Standard C++
ms.date: 11/04/2016
helpviewer_keywords:
- ICollectionOnSTLImpl interface
ms.assetid: 6d49f819-1957-4813-b074-3f12c494d8ca
ms.openlocfilehash: 609ec2547cf7a8ab93ef757f7a8e460542c9de28
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62197497"
---
# <a name="implementing-a-c-standard-library-based-collection"></a>Implementazione di una raccolta basata sulla libreria Standard C++

ATL fornisce il `ICollectionOnSTLImpl` interfaccia che consentono di implementare rapidamente le interfacce di raccolta basata su libreria Standard C++ per gli oggetti. Per comprendere il funzionamento di questa classe, sarà necessario utilizzare un semplice esempio (sotto) che utilizza questa classe per implementare una raccolta di sola lettura mira a client di automazione.

Il codice di esempio è il [esempio ATLCollections](../overview/visual-cpp-samples.md).

Per completare questa procedura, si apprenderà come:

- [Generare un nuovo oggetto semplice](#vccongenerating_an_object).

- [Modificare il file IDL](#vcconedit_the_idl) per l'interfaccia generata.

- [Creare oggetti cinque typedef](#vcconstorage_and_exposure_typedefs) che descrive come vengono archiviati gli elementi della raccolta e modo in cui vengono esposti ai client tramite interfacce COM.

- [Creare due typedef per la copia di classi di criteri](#vcconcopy_classes).

- [Creare oggetti TypeDef per le implementazioni di enumeratore e raccolta](#vcconenumeration_and_collection).

- [Modificare il codice di C++ generato dalla procedura guidata per l'utilizzo di typedef raccolta](#vcconedit_the_generated_code).

- [Aggiungere il codice per popolare la raccolta](#vcconpopulate_the_collection).

##  <a name="vccongenerating_an_object"></a> Generazione di un nuovo oggetto semplice

Creare un nuovo progetto, assicurando che la casella di attributi nelle impostazioni dell'applicazione sia deselezionata. Utilizzare la finestra di dialogo Aggiungi classe ATL e guidata oggetto semplice per generare un semplice oggetto chiamato `Words`. Assicurarsi che un'interfaccia duale chiamato `IWords` viene generato. Gli oggetti della classe generata verranno usati per rappresentare una raccolta di parole (vale a dire, stringhe).

##  <a name="vcconedit_the_idl"></a> Modifica del File IDL

A questo punto, aprire il file IDL e aggiungere le tre proprietà necessarie per trasformare `IWords` in un'interfaccia di raccolta di sola lettura, come illustrato di seguito:

[!code-cpp[NVC_ATL_COM#24](../atl/codesnippet/cpp/implementing-an-stl-based-collection_1.idl)]

Questo è il modulo standard per un'interfaccia di raccolta di sola lettura progettato con client di automazione. I commenti numerati in questa definizione di interfaccia corrispondono ai commenti riportati di seguito:

1. Interfacce di raccolta sono in genere due perché accede ai client di automazione di `_NewEnum` proprietà tramite `IDispatch::Invoke`. I client di automazione, tuttavia, è possono accedere a dei rimanenti metodi tramite vtable, in modo che le interfacce duali sono preferibili alle interfacce dispatch.

1. Se un'interfaccia duale o interfaccia dispatch verrà esteso non in fase di esecuzione (vale a dire, se non sono forniti metodi aggiuntivi o le proprietà tramite `IDispatch::Invoke`), è consigliabile applicare la **nonextensible** la definizione dell'attributo. Questo attributo consente ai client di automazione eseguire la verifica del codice completo in fase di compilazione. In questo caso, l'interfaccia non deve essere esteso.

1. I DISPID corretto è importante se si desidera che i client di automazione per poter utilizzare questa proprietà. Si noti che nel DISPID_NEWENUM sia presente un solo carattere di sottolineatura.

1. È possibile specificare qualsiasi valore come il DISPID del `Item` proprietà. Tuttavia, `Item` utilizza in genere DISPID_VALUE per rendere la proprietà predefinita della raccolta. In questo modo i client di automazione fare riferimento alla proprietà senza denominarlo in modo esplicito.

1. Il tipo di dati utilizzato per il valore restituito del `Item` proprietà è il tipo di elemento archiviato nella raccolta per quanto riguarda i client COM sono interessati. L'interfaccia restituisce stringhe, è necessario utilizzare il tipo di stringa COM standard, BSTR. È possibile archiviare i dati in un formato diverso internamente come si vedrà a breve.

1. Il valore usato per il DISPID del `Count` proprietà è del tutto arbitraria. Non è disponibile alcun DISPID standard per questa proprietà.

##  <a name="vcconstorage_and_exposure_typedefs"></a> Creazione per l'archiviazione e l'esposizione di typedef

Una volta definito l'interfaccia di raccolta, è necessario decidere come verranno archiviati i dati e come i dati saranno esposti tramite l'enumeratore.

Le risposte a queste domande possono essere fornite sotto forma di un numero di typedef, che è possibile aggiungere all'inizio del file di intestazione per la classe appena creata:

[!code-cpp[NVC_ATL_COM#25](../atl/codesnippet/cpp/implementing-an-stl-based-collection_2.h)]

In questo caso, si archivieranno i dati come una **std:: Vector** dei **std:: String**s. **std:: Vector** è una classe contenitore della libreria Standard C++ che si comporta come una matrice gestita. **std:: String** è una classe di stringa della libreria Standard C++. Queste classi rendono più semplice lavorare con una raccolta di stringhe.

Poiché il supporto di Visual Basic è fondamentale per il successo di questa interfaccia, enumeratore restituito dal `_NewEnum` deve supportare proprietà di `IEnumVARIANT` interfaccia. Questo è l'interfaccia dell'enumeratore solo riconosciuta da Visual Basic.

##  <a name="vcconcopy_classes"></a> Creazione di TypeDef per classi di criteri di copia

Il typedef creati finora fornire tutte le informazioni necessarie per creare altre TypeDef per le classi di copia che verranno usate per l'enumeratore e la raccolta:

[!code-cpp[NVC_ATL_COM#26](../atl/codesnippet/cpp/implementing-an-stl-based-collection_3.h)]

In questo esempio, è possibile usare l'oggetto personalizzato `GenericCopy` classe definita in VCUE_Copy e VCUE_CopyString. h dal [ATLCollections](../overview/visual-cpp-samples.md) esempio. È possibile usare questa classe in un altro codice, ma potrebbe essere necessario definire ulteriori specializzazioni di `GenericCopy` per supportare tipi di dati utilizzati nelle raccolte personalizzate. Per altre informazioni, vedere [classi di criteri di copia ATL](../atl/atl-copy-policy-classes.md).

##  <a name="vcconenumeration_and_collection"></a> Creazione di TypeDef per la raccolta e di enumerazione

A questo punto tutti i parametri del modello necessari per specializzare il `CComEnumOnSTL` e `ICollectionOnSTLImpl` classi per questa situazione viene fornite sotto forma di typedef. Per semplificare l'uso di specializzazioni, creare due ulteriori TypeDef come illustrato di seguito:

[!code-cpp[NVC_ATL_COM#27](../atl/codesnippet/cpp/implementing-an-stl-based-collection_4.h)]

A questo punto `CollectionType` è un sinonimo per una specializzazione dello `ICollectionOnSTLImpl` che implementa il `IWords` interfaccia definita in precedenza e fornisce un enumeratore che supporta `IEnumVARIANT`.

##  <a name="vcconedit_the_generated_code"></a> La modifica del codice generato dalla procedura guidata

A questo punto è necessario derivare `CWords` rispetto all'implementazione di interfaccia rappresentata dal `CollectionType` typedef anziché `IWords`, come illustrato di seguito:

[!code-cpp[NVC_ATL_COM#28](../atl/codesnippet/cpp/implementing-an-stl-based-collection_5.h)]

##  <a name="vcconpopulate_the_collection"></a> Aggiunta di codice per popolare la raccolta

L'unica cosa che rimane è per popolare il vettore con dei dati. In questo semplice esempio, è possibile aggiungere alcune parole nella raccolta nel costruttore della classe:

[!code-cpp[NVC_ATL_COM#29](../atl/codesnippet/cpp/implementing-an-stl-based-collection_6.h)]

A questo punto, è possibile testare il codice con il client di propria scelta.

## <a name="see-also"></a>Vedere anche

[Raccolte ed enumeratori](../atl/atl-collections-and-enumerators.md)<br/>
[Nell'esempio ATLCollections](../overview/visual-cpp-samples.md)<br/>
[Classi di criteri di copia ATL](../atl/atl-copy-policy-classes.md)
