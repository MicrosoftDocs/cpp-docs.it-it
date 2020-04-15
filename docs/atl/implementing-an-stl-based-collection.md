---
title: Implementazione di una raccolta standard basata su libreria C
ms.date: 11/04/2016
helpviewer_keywords:
- ICollectionOnSTLImpl interface
ms.assetid: 6d49f819-1957-4813-b074-3f12c494d8ca
ms.openlocfilehash: e80ce5e7bbc6b9c6be1615dad1ea43c18e03eb55
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319434"
---
# <a name="implementing-a-c-standard-library-based-collection"></a>Implementazione di una raccolta standard basata su libreria C

ATL fornisce `ICollectionOnSTLImpl` l'interfaccia che consente di implementare rapidamente le interfacce di raccolta basate su libreria standard di C, per gli oggetti. Per comprendere il funzionamento di questa classe, si utilizzerà un semplice esempio (di seguito) che utilizza questa classe per implementare una raccolta di sola lettura destinata ai client di automazione.

Il codice di esempio è tratto [dall'esempio ATLCollections](../overview/visual-cpp-samples.md).

Per completare questa procedura, è necessario:

- [Generare un nuovo oggetto semplice](#vccongenerating_an_object).

- [Modificare il file IDL](#vcconedit_the_idl) per l'interfaccia generata.

- [Creare cinque typedef](#vcconstorage_and_exposure_typedefs) che descrivono come vengono archiviati gli elementi della raccolta e come verranno esposti ai client tramite interfacce COM.

- [Creare due typedef per le classi criteri di copia.](#vcconcopy_classes)

- [Creare typedef per le implementazioni dell'enumeratore e della raccolta.](#vcconenumeration_and_collection)

- [Modificare il codice generato dalla procedura guidata in](#vcconedit_the_generated_code)modo che utilizzi il typedef della raccolta .

- [Aggiungere il codice per popolare la raccolta](#vcconpopulate_the_collection).

## <a name="generating-a-new-simple-object"></a><a name="vccongenerating_an_object"></a>Generazione di un nuovo oggetto semplice

Creare un nuovo progetto, assicurandosi che la casella Attributi in Impostazioni applicazione sia deselezionata. Utilizzare la finestra di dialogo Aggiungi classe ATL e `Words`l'Aggiunta guidata oggetto semplice per generare un oggetto semplice denominato . Assicurarsi che `IWords` venga generata una doppia interfaccia. Gli oggetti della classe generata verranno utilizzati per rappresentare una raccolta di parole, ovvero stringhe.

## <a name="editing-the-idl-file"></a><a name="vcconedit_the_idl"></a>Modifica del file IDL

A questo punto, aprire il file IDL `IWords` e aggiungere le tre proprietà necessarie per trasformarsi in un'interfaccia di raccolta di sola lettura, come illustrato di seguito:Now, open the IDL file and add the three properties necessary to turn into a read-only collection interface, as shown below:

[!code-cpp[NVC_ATL_COM#24](../atl/codesnippet/cpp/implementing-an-stl-based-collection_1.idl)]

Questo è il modulo standard per un'interfaccia di raccolta di sola lettura progettata con i client di automazione in mente. I commenti numerati in questa definizione di interfaccia corrispondono ai commenti seguenti:The numbered comments in this interface definition correspond to the comments below:

1. Le interfacce di raccolta sono in `_NewEnum` genere `IDispatch::Invoke`doppie perché i client di automazione accedono alla proprietà tramite . Tuttavia, i client di automazione possono accedere ai metodi rimanenti tramite vtable, pertanto le interfacce duali sono preferibili alle interfacce dispatch.

1. Se un'interfaccia duale o un'interfaccia dispatch non verrà estesa in fase di `IDispatch::Invoke`esecuzione, ovvero non verranno forniti metodi o proprietà aggiuntivi tramite , è necessario applicare l'attributo **nonextensible** alla definizione. Questo attributo consente ai client di automazione di eseguire la verifica completa del codice in fase di compilazione. In questo caso, l'interfaccia non deve essere estesa.

1. Il DISPID corretto è importante se si desidera che i client di automazione siano in grado di utilizzare questa proprietà. (Si noti che è presente un solo sottolineatura in DISPID_NEWENUM.)

1. È possibile fornire qualsiasi valore come `Item` DISPID della proprietà. Tuttavia, `Item` in genere utilizza DISPID_VALUE per impostarla come proprietà predefinita della raccolta. Ciò consente ai client di automazione di fare riferimento alla proprietà senza denominarla in modo esplicito.

1. Il tipo di dati utilizzato `Item` per il valore restituito della proprietà è il tipo dell'elemento archiviato nella raccolta per quanto riguarda i client COM. L'interfaccia restituisce stringhe, pertanto è necessario utilizzare il tipo di stringa COM standard, BSTR. È possibile memorizzare i dati in un formato diverso internamente, come si vedrà a breve.

1. Il valore utilizzato per il `Count` DISPID della proprietà è completamente arbitrario. Non esiste un DISPID standard per questa proprietà.

## <a name="creating-typedefs-for-storage-and-exposure"></a><a name="vcconstorage_and_exposure_typedefs"></a>Creazione di typedef per l'archiviazione e l'esposizioneCreating Typedefs for Storage and Exposure

Una volta definita l'interfaccia di raccolta, è necessario decidere come verranno archiviati i dati e come i dati verranno esposti tramite l'enumeratore.

Le risposte a queste domande possono essere fornite sotto forma di un numero di typedef, che è possibile aggiungere nella parte superiore del file di intestazione per la classe appena creata:

[!code-cpp[NVC_ATL_COM#25](../atl/codesnippet/cpp/implementing-an-stl-based-collection_2.h)]

In questo caso, i dati verranno archiviati come **std::vector** di **std::string**s. **std::vector** è una classe contenitore della libreria standard di C, che si comporta come una matrice gestita. **std::string** è la classe di stringa della libreria standard di C. Queste classi semplificano l'utilizzo di una raccolta di stringhe.

Poiché il supporto visual Basic è fondamentale per la `_NewEnum` riuscita `IEnumVARIANT` di questa interfaccia, l'enumeratore restituito dalla proprietà deve supportare l'interfaccia. Questa è l'unica interfaccia dell'enumeratore riconosciuta da Visual Basic.

## <a name="creating-typedefs-for-copy-policy-classes"></a><a name="vcconcopy_classes"></a>Creazione di Typedef per le classi di criteri di copiaCreating Typedefs for Copy Policy Classes

I typedef creati finora forniscono tutte le informazioni necessarie per creare ulteriori typedef per le classi di copia che verranno utilizzate dall'enumeratore e dalla raccolta:

[!code-cpp[NVC_ATL_COM#26](../atl/codesnippet/cpp/implementing-an-stl-based-collection_3.h)]

In questo esempio è possibile `GenericCopy` utilizzare la classe personalizzata definita in VCUE_Copy.h e VCUE_CopyString.h dell'esempio [ATLCollections.](../overview/visual-cpp-samples.md) È possibile utilizzare questa classe in altro codice, ma potrebbe `GenericCopy` essere necessario definire ulteriori specializzazioni per supportare i tipi di dati utilizzati nelle raccolte personalizzate. Per ulteriori informazioni, vedere [Classi criteri di copia ATL](../atl/atl-copy-policy-classes.md).

## <a name="creating-typedefs-for-enumeration-and-collection"></a><a name="vcconenumeration_and_collection"></a>Creazione di typedef per l'enumerazione e la raccoltaCreating Typedefs for Enumeration and Collection

Ora tutti i parametri di `CComEnumOnSTL` modello `ICollectionOnSTLImpl` necessari per specializzare le classi e per questa situazione sono stati forniti sotto forma di typedef. Per semplificare l'utilizzo delle specializzazioni, creare altri due typedef come illustrato di seguito:

[!code-cpp[NVC_ATL_COM#27](../atl/codesnippet/cpp/implementing-an-stl-based-collection_4.h)]

A `CollectionType` questo punto è un sinonimo di `ICollectionOnSTLImpl` una `IWords` specializzazione di che implementa l'interfaccia definita in precedenza e fornisce un enumeratore che supporta `IEnumVARIANT`.

## <a name="editing-the-wizard-generated-code"></a><a name="vcconedit_the_generated_code"></a>Modifica del codice generato dalla procedura guidata

A questo `CWords` punto è necessario derivare dall'implementazione dell'interfaccia rappresentata dal `CollectionType` typedef anziché da `IWords`, come illustrato di seguito:

[!code-cpp[NVC_ATL_COM#28](../atl/codesnippet/cpp/implementing-an-stl-based-collection_5.h)]

## <a name="adding-code-to-populate-the-collection"></a><a name="vcconpopulate_the_collection"></a>Aggiunta di codice per popolare la raccoltaAdding Code to Populate the Collection

L'unica cosa che rimane è popolare il vettore con i dati. In questo semplice esempio, è possibile aggiungere alcune parole alla raccolta nel costruttore per la classe:In this simple example, you can add a few words to the collection in the constructor for the class:

[!code-cpp[NVC_ATL_COM#29](../atl/codesnippet/cpp/implementing-an-stl-based-collection_6.h)]

A questo punto, è possibile testare il codice con il client di propria scelta.

## <a name="see-also"></a>Vedere anche

[Raccolte ed enumeratori](../atl/atl-collections-and-enumerators.md)<br/>
[Esempio ATLCollections](../overview/visual-cpp-samples.md)<br/>
[Classi criteri di copia ATL](../atl/atl-copy-policy-classes.md)
