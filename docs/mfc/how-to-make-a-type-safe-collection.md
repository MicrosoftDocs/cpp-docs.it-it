---
title: 'Procedura: creazione di una raccolta indipendente dai tipi'
ms.date: 11/04/2016
helpviewer_keywords:
- type-safe collections [MFC]
- serializing collection-class elements [MFC]
- collection classes [MFC], type safety
- SerializeElements function [MFC]
- collection classes [MFC], template-based
- serialization [MFC], collection classes
- collection classes [MFC], deriving from nontemplate
ms.assetid: 7230b2db-4283-4083-b098-eb231bf5b89e
ms.openlocfilehash: 6ee4603f03ef8a95c218b0fe040e9606aab99ebb
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84620020"
---
# <a name="how-to-make-a-type-safe-collection"></a>Procedura: creazione di una raccolta indipendente dai tipi

Questo articolo illustra come creare raccolte indipendenti dai tipi per i tipi di dati personalizzati. Gli argomenti includono:

- [Utilizzo di classi basate su modello per l'indipendenza dai tipi](#_core_using_template.2d.based_classes_for_type_safety)

- [Implementazione di funzioni helper](#_core_implementing_helper_functions)

- [Utilizzo di classi Collection non basate su modelli](#_core_using_nontemplate_collection_classes)

Il libreria Microsoft Foundation Class fornisce raccolte predefinite indipendenti dai tipi basate sui modelli C++. Poiché si tratta di modelli, queste classi consentono di garantire l'indipendenza dai tipi e la semplicità di utilizzo senza il cast dei tipi e altre operazioni aggiuntive necessarie per l'utilizzo di una classe non modello a questo scopo. Nell'esempio MFC [Collect](../overview/visual-cpp-samples.md) viene illustrato l'utilizzo delle classi Collection basate su modello in un'applicazione MFC. In generale, usare queste classi ogni volta che si scrive il codice di nuove raccolte.

## <a name="using-template-based-classes-for-type-safety"></a><a name="_core_using_template.2d.based_classes_for_type_safety"></a>Utilizzo di classi basate su modello per l'indipendenza dai tipi

#### <a name="to-use-template-based-classes"></a>Per usare classi basate su modello

1. Dichiarare una variabile del tipo di classe di raccolta. Ad esempio:

   [!code-cpp[NVC_MFCCollections#7](codesnippet/cpp/how-to-make-a-type-safe-collection_1.cpp)]

1. Chiamare le funzioni membro dell'oggetto Collection. Ad esempio:

   [!code-cpp[NVC_MFCCollections#8](codesnippet/cpp/how-to-make-a-type-safe-collection_2.cpp)]

1. Se necessario, implementare le [funzioni di supporto](reference/collection-class-helpers.md) e [SerializeElements](reference/collection-class-helpers.md#serializeelements). Per informazioni sull'implementazione di queste funzioni, vedere [implementazione di funzioni helper](#_core_implementing_helper_functions).

In questo esempio viene illustrata la dichiarazione di un elenco di numeri interi. Il primo parametro nel passaggio 1 è il tipo di dati archiviati come elementi dell'elenco. Il secondo parametro specifica il modo in cui i dati devono essere passati e restituiti dalle funzioni membro della classe Collection, ad esempio `Add` e `GetAt` .

## <a name="implementing-helper-functions"></a><a name="_core_implementing_helper_functions"></a>Implementazione di funzioni helper

Le classi di raccolta basate su modello `CArray` , `CList` e `CMap` usano cinque funzioni helper globali che è possibile personalizzare in base alle esigenze per la classe della raccolta derivata. Per informazioni su queste funzioni helper, vedere la pagina relativa agli [helper della classe Collection](reference/collection-class-helpers.md) in *riferimenti a MFC*. L'implementazione della funzione di serializzazione è necessaria per la maggior parte degli utilizzi delle classi di raccolta basate su modello.

### <a name="serializing-elements"></a><a name="_core_serializing_elements"></a>Serializzazione di elementi

Le `CArray` `CList` classi, e `CMap` chiamano `SerializeElements` per archiviare o leggere gli elementi della raccolta da un archivio.

L'implementazione predefinita della `SerializeElements` funzione helper esegue una scrittura bit per bit dagli oggetti nell'archivio o una lettura bit per bit dall'archivio agli oggetti, a seconda che gli oggetti vengano archiviati o recuperati dall'archivio. Eseguire l'override `SerializeElements` se questa azione non è appropriata.

Se la raccolta Archivia oggetti derivati da `CObject` e si usa la `IMPLEMENT_SERIAL` macro nell'implementazione della classe dell'elemento della raccolta, è possibile sfruttare la funzionalità di serializzazione incorporata in `CArchive` e `CObject` :

[!code-cpp[NVC_MFCCollections#9](codesnippet/cpp/how-to-make-a-type-safe-collection_3.cpp)]

Gli operatori di inserimento di overload per la `CArchive` chiamata `CObject::Serialize` (o un override della funzione) per ogni `CPerson` oggetto.

## <a name="using-nontemplate-collection-classes"></a><a name="_core_using_nontemplate_collection_classes"></a>Utilizzo di classi Collection non basate su modelli

MFC supporta inoltre le classi di raccolta introdotte con MFC versione 1,0. Queste classi non sono basate su modelli. Possono essere utilizzati per contenere i dati dei tipi supportati `CObject*` ,, `UINT` `DWORD` e `CString` . È possibile utilizzare queste raccolte predefinite, ad esempio, `CObList` per conservare raccolte di tutti gli oggetti derivati da `CObject` . MFC fornisce anche altre raccolte predefinite per mantenere i tipi primitivi, ad esempio `UINT` e i puntatori void ( `void` *). In generale, tuttavia, è spesso utile definire raccolte indipendenti dai tipi per mantenere gli oggetti di una classe più specifica e i relativi derivati. Si noti che questa operazione con le classi di raccolta non basate su modelli è più lavoro rispetto all'uso delle classi basate su modello.

Esistono due modi per creare raccolte indipendenti dai tipi con le raccolte non basate su modelli:

1. Usare le raccolte nontemplate, con il cast del tipo, se necessario. Questo è l'approccio più semplice.

1. Derivare da ed estendere una raccolta indipendente dai tipi non di modello.

#### <a name="to-use-the-nontemplate-collections-with-type-casting"></a>Per utilizzare le raccolte non basate su modelli con cast di tipo

1. Usare una delle classi non template, ad esempio `CWordArray` , direttamente.

   Ad esempio, è possibile creare un oggetto `CWordArray` e aggiungere eventuali valori a 32 bit, quindi recuperarli. Non c'è altro da fare. È sufficiente usare la funzionalità predefinita.

   È anche possibile usare una raccolta predefinita, ad esempio `CObList` , per conservare tutti gli oggetti derivati da `CObject` . Una `CObList` raccolta viene definita per il mantenimento di puntatori a `CObject` . Quando si recupera un oggetto dall'elenco, potrebbe essere necessario eseguire il cast del risultato al tipo appropriato poiché le `CObList` funzioni restituiscono puntatori a `CObject` . Se ad esempio si archiviano `CPerson` oggetti in una `CObList` raccolta, è necessario eseguire il cast di un elemento recuperato in modo che sia un puntatore a un `CPerson` oggetto. Nell'esempio seguente viene utilizzata una `CObList` raccolta per conservare `CPerson` gli oggetti:

   [!code-cpp[NVC_MFCCollections#10](codesnippet/cpp/how-to-make-a-type-safe-collection_4.cpp)]

   Questa tecnica di utilizzo di un tipo di raccolta predefinito e il casting, se necessario, possono essere adeguati per molte delle esigenze di raccolta. Se sono necessarie altre funzionalità o maggiore indipendenza dai tipi, utilizzare una classe basata su modelli o attenersi alla procedura successiva.

#### <a name="to-derive-and-extend-a-nontemplate-type-safe-collection"></a>Per derivare ed estendere una raccolta indipendente dai tipi non modello

1. Derivare la propria classe Collection da una delle classi non template predefinite.

   Quando si deriva la classe, è possibile aggiungere funzioni wrapper indipendenti dai tipi per fornire un'interfaccia indipendente dai tipi alle funzioni esistenti.

   Se, ad esempio, è stato derivato un elenco da `CObList` per ospitare `CPerson` oggetti, è possibile aggiungere le funzioni wrapper `AddHeadPerson` e `GetHeadPerson` , come illustrato di seguito.

   [!code-cpp[NVC_MFCCollections#11](codesnippet/cpp/how-to-make-a-type-safe-collection_5.h)]

   Queste funzioni wrapper forniscono una modalità indipendente dai tipi per aggiungere e recuperare `CPerson` oggetti dall'elenco derivato. Come si può notare, per la `GetHeadPerson` funzione è sufficiente incapsulare il cast del tipo.

   È anche possibile aggiungere nuove funzionalità definendo nuove funzioni che estendono le funzionalità della raccolta anziché semplicemente racchiudere le funzionalità esistenti nei wrapper indipendenti dai tipi. L'articolo [eliminazione di tutti gli oggetti in una raccolta CObject](deleting-all-objects-in-a-cobject-collection.md) , ad esempio, descrive una funzione per l'eliminazione di tutti gli oggetti contenuti in un elenco. Questa funzione può essere aggiunta alla classe derivata come funzione membro.

## <a name="see-also"></a>Vedere anche

[raccolte](collections.md)
