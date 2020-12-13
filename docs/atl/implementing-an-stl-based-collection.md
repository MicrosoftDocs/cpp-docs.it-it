---
description: 'Altre informazioni su: implementazione di una raccolta di Library-Based C++ standard'
title: Implementazione di una raccolta di Library-Based C++ standard
ms.date: 11/04/2016
helpviewer_keywords:
- ICollectionOnSTLImpl interface
ms.assetid: 6d49f819-1957-4813-b074-3f12c494d8ca
ms.openlocfilehash: 4a403885a6fe66bf8e8578deeab05c7fc08e88a5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97152854"
---
# <a name="implementing-a-c-standard-library-based-collection"></a>Implementazione di una raccolta di Library-Based C++ standard

ATL fornisce l' `ICollectionOnSTLImpl` interfaccia per consentire di implementare rapidamente le interfacce di raccolta basate su libreria standard C++ negli oggetti. Per comprendere il funzionamento di questa classe, è possibile usare un semplice esempio (sotto) che usa questa classe per implementare una raccolta di sola lettura destinata ai client di automazione.

Il codice di esempio è riportato nell' [esempio ATLCollections](../overview/visual-cpp-samples.md).

Per completare questa procedura, è necessario:

- [Genera un nuovo oggetto semplice](#vccongenerating_an_object).

- [Modificare il file IDL](#vcconedit_the_idl) per l'interfaccia generata.

- [Creare cinque typedef](#vcconstorage_and_exposure_typedefs) che descrivono la modalità di archiviazione degli elementi della raccolta e il modo in cui verranno esposti ai client tramite le interfacce com.

- [Creare due typedef per le classi di criteri di copia](#vcconcopy_classes).

- [Creare typedef per le implementazioni dell'enumeratore e della raccolta](#vcconenumeration_and_collection).

- [Modificare il codice C++ generato dalla procedura guidata per usare il typedef della raccolta](#vcconedit_the_generated_code).

- [Aggiungere il codice per popolare la raccolta](#vcconpopulate_the_collection).

## <a name="generating-a-new-simple-object"></a><a name="vccongenerating_an_object"></a> Generazione di un nuovo oggetto semplice

Creare un nuovo progetto, assicurandosi che la casella attributi in Impostazioni applicazione sia deselezionata. Utilizzare la finestra di dialogo Aggiungi classe ATL e aggiungere creazione guidata oggetto semplice per generare un oggetto semplice denominato `Words` . Assicurarsi che venga generata una doppia interfaccia denominata `IWords` . Gli oggetti della classe generata verranno usati per rappresentare una raccolta di parole (ovvero stringhe).

## <a name="editing-the-idl-file"></a><a name="vcconedit_the_idl"></a> Modifica del file IDL

A questo punto, aprire il file IDL e aggiungere le tre proprietà necessarie per trasformare `IWords` un'interfaccia di raccolta di sola lettura, come illustrato di seguito:

[!code-cpp[NVC_ATL_COM#24](../atl/codesnippet/cpp/implementing-an-stl-based-collection_1.idl)]

Questo è il formato standard per un'interfaccia di raccolta di sola lettura progettata tenendo conto dei client di automazione. I commenti numerati in questa definizione di interfaccia corrispondono ai commenti seguenti:

1. Le interfacce di raccolta sono in genere doppie perché i client di automazione accedono alla `_NewEnum` proprietà tramite `IDispatch::Invoke` . Tuttavia, i client di automazione possono accedere ai metodi rimanenti tramite vtable, quindi le interfacce duali sono preferibili a dispinterfaces.

1. Se una doppia interfaccia o un'interfaccia dispatch non verrà estesa in fase di esecuzione (ovvero non si forniranno metodi o proprietà aggiuntive tramite `IDispatch::Invoke` ), è necessario applicare l'attributo non **estensibile** alla definizione. Questo attributo consente ai client di automazione di eseguire la verifica completa del codice in fase di compilazione. In questo caso, l'interfaccia non deve essere estesa.

1. Il DISPID corretto è importante se si vuole che i client di automazione possano usare questa proprietà. Si noti che in DISPID_NEWENUM è presente un solo carattere di sottolineatura.

1. È possibile specificare qualsiasi valore come DISPID della `Item` Proprietà. Tuttavia, `Item` in genere usa DISPID_VALUE per impostarla come proprietà predefinita della raccolta. Questo consente ai client di automazione di fare riferimento alla proprietà senza denominarla in modo esplicito.

1. Il tipo di dati usato per il valore restituito della `Item` proprietà è il tipo dell'elemento archiviato nella raccolta, per quanto riguarda i client com. L'interfaccia restituisce stringhe, quindi è necessario usare il tipo stringa COM standard, BSTR. È possibile archiviare i dati in un formato diverso internamente, come si vedrà a breve.

1. Il valore utilizzato per il DISPID della `Count` proprietà è completamente arbitrario. Non esiste alcun DISPID standard per questa proprietà.

## <a name="creating-typedefs-for-storage-and-exposure"></a><a name="vcconstorage_and_exposure_typedefs"></a> Creazione di typedef per l'archiviazione e l'esposizione

Una volta definita l'interfaccia della raccolta, è necessario decidere come verranno archiviati i dati e come i dati verranno esposti tramite l'enumeratore.

Le risposte a queste domande possono essere fornite sotto forma di un numero di typedef, che è possibile aggiungere nella parte superiore del file di intestazione per la classe appena creata:

[!code-cpp[NVC_ATL_COM#25](../atl/codesnippet/cpp/implementing-an-stl-based-collection_2.h)]

In questo caso, i dati vengono archiviati come **std:: Vector** di **std:: String** s. **std:: Vector** è una classe contenitore della libreria standard C++ che si comporta come una matrice gestita. **std:: String** è la classe String della libreria standard C++. Queste classi semplificano l'utilizzo di una raccolta di stringhe.

Poiché Visual Basic supporto è essenziale per il successo di questa interfaccia, l'enumeratore restituito dalla `_NewEnum` proprietà deve supportare l' `IEnumVARIANT` interfaccia. Si tratta dell'unica interfaccia dell'enumeratore riconosciuta dal Visual Basic.

## <a name="creating-typedefs-for-copy-policy-classes"></a><a name="vcconcopy_classes"></a> Creazione di typedef per le classi di criteri di copia

I typedef creati finora forniscono tutte le informazioni necessarie per creare ulteriori typedef per le classi Copy che verranno utilizzate dall'enumeratore e dalla raccolta:

[!code-cpp[NVC_ATL_COM#26](../atl/codesnippet/cpp/implementing-an-stl-based-collection_3.h)]

In questo esempio, è possibile usare la `GenericCopy` classe personalizzata definita in VCUE_Copy. h e VCUE_CopyString. h dall'esempio [ATLCollections](../overview/visual-cpp-samples.md) . È possibile usare questa classe in altro codice, ma potrebbe essere necessario definire altre specializzazioni di `GenericCopy` per supportare i tipi di dati usati nelle raccolte. Per ulteriori informazioni, vedere [classi di criteri di copia ATL](../atl/atl-copy-policy-classes.md).

## <a name="creating-typedefs-for-enumeration-and-collection"></a><a name="vcconenumeration_and_collection"></a> Creazione di typedef per l'enumerazione e la raccolta

Ora tutti i parametri di modello necessari per specializzare `CComEnumOnSTL` le `ICollectionOnSTLImpl` classi e per questa situazione sono stati forniti sotto forma di typedef. Per semplificare l'uso delle specializzazioni, creare altri due typedef, come illustrato di seguito:

[!code-cpp[NVC_ATL_COM#27](../atl/codesnippet/cpp/implementing-an-stl-based-collection_4.h)]

Ora `CollectionType` è un sinonimo di una specializzazione di `ICollectionOnSTLImpl` che implementa l' `IWords` interfaccia definita in precedenza e fornisce un enumeratore che supporta `IEnumVARIANT` .

## <a name="editing-the-wizard-generated-code"></a><a name="vcconedit_the_generated_code"></a> Modifica del codice Wizard-Generated

A questo punto è necessario derivare `CWords` dall'implementazione dell'interfaccia rappresentata dal `CollectionType` typedef anziché `IWords` , come illustrato di seguito:

[!code-cpp[NVC_ATL_COM#28](../atl/codesnippet/cpp/implementing-an-stl-based-collection_5.h)]

## <a name="adding-code-to-populate-the-collection"></a><a name="vcconpopulate_the_collection"></a> Aggiunta di codice per popolare la raccolta

L'unica cosa che rimane consiste nel popolare il vettore con i dati. In questo semplice esempio, è possibile aggiungere alcune parole alla raccolta nel costruttore per la classe:

[!code-cpp[NVC_ATL_COM#29](../atl/codesnippet/cpp/implementing-an-stl-based-collection_6.h)]

A questo punto, è possibile testare il codice con il client desiderato.

## <a name="see-also"></a>Vedi anche

[Raccolte ed enumeratori](../atl/atl-collections-and-enumerators.md)<br/>
[Esempio ATLCollections](../overview/visual-cpp-samples.md)<br/>
[Classi di criteri di copia ATL](../atl/atl-copy-policy-classes.md)
