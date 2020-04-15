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
ms.openlocfilehash: 1901100996a776244b57efe0951795ceec3c630a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377253"
---
# <a name="how-to-make-a-type-safe-collection"></a>Procedura: creazione di una raccolta indipendente dai tipi

In questo articolo viene illustrato come creare raccolte indipendenti dai tipi per i propri tipi di dati. Gli argomenti includono:

- [Utilizzo di classi basate su modelli per l'indipendenza dai tipiUsing template-based classes for type safety](#_core_using_template.2d.based_classes_for_type_safety)

- [Implementazione di funzioni di supportoImplementing helper functions](#_core_implementing_helper_functions)

- [Utilizzo di classi di raccolte non templateUsing nontemplate collection classes](#_core_using_nontemplate_collection_classes)

La libreria Microsoft Foundation Class fornisce raccolte indipendenti dai tipi predefinite basate su modelli C . Poiché si tratta di modelli, queste classi consentono di fornire l'indipendenza dai tipi e la facilità d'uso senza il cast di tipo e altri processi aggiuntivi coinvolti nell'utilizzo di una classe non modello per questo scopo. Nell'esempio MFC [COLLECT](../overview/visual-cpp-samples.md) viene illustrato l'utilizzo di classi di raccolte basate su modelli in un'applicazione MFC. In generale, usare queste classi ogni volta che si scrive nuovo codice di raccolte.

## <a name="using-template-based-classes-for-type-safety"></a><a name="_core_using_template.2d.based_classes_for_type_safety"></a>Utilizzo di classi basate su modelli per l'indipendenza dai tipiUsing Template-Based Classes for Type Safety

#### <a name="to-use-template-based-classes"></a>Per utilizzare classi basate su modelli

1. Dichiarare una variabile del tipo di classe di raccolta. Ad esempio:

   [!code-cpp[NVC_MFCCollections#7](../mfc/codesnippet/cpp/how-to-make-a-type-safe-collection_1.cpp)]

1. Chiamare le funzioni membro dell'oggetto raccolta. Ad esempio:

   [!code-cpp[NVC_MFCCollections#8](../mfc/codesnippet/cpp/how-to-make-a-type-safe-collection_2.cpp)]

1. Se necessario, implementare le [funzioni di supporto](../mfc/reference/collection-class-helpers.md) e [SerializeElements](../mfc/reference/collection-class-helpers.md#serializeelements). Per informazioni sull'implementazione di queste funzioni, vedere [Implementazione di funzioni di supporto](#_core_implementing_helper_functions).

In questo esempio viene illustrata la dichiarazione di un elenco di numeri interi. Il primo parametro nel passaggio 1 è il tipo di dati archiviati come elementi dell'elenco. Il secondo parametro specifica come i dati devono essere passati e restituiti `Add` `GetAt`dalle funzioni membro della classe di raccolta, ad esempio e .

## <a name="implementing-helper-functions"></a><a name="_core_implementing_helper_functions"></a>Implementazione di funzioni di supportoImplementing Helper Functions

Le classi `CArray`di raccolte `CList`basate `CMap` su modelli , e utilizzano cinque funzioni di supporto globali che è possibile personalizzare in base alle esigenze per la classe di raccolta derivata. Per informazioni su queste funzioni di supporto, vedere Helper di [classi Collection](../mfc/reference/collection-class-helpers.md) in Riferimenti *a MFC*. L'implementazione della funzione di serializzazione è necessaria per la maggior parte degli utilizzi delle classi di raccolte basate su modelli.

### <a name="serializing-elements"></a><a name="_core_serializing_elements"></a>Serializzazione di elementiSerializing Elements

Le `CArray` `CList`classi `CMap` , `SerializeElements` e vengono chiamate per archiviare gli elementi dell'insieme o leggerli da un archivio.

L'implementazione `SerializeElements` predefinita della funzione di supporto esegue una scrittura bit per bit dagli oggetti all'archivio o una lettura bit per bit dall'archivio agli oggetti, a seconda che gli oggetti vengano archiviati o recuperati dall'archivio. Eseguire `SerializeElements` l'override se questa azione non è appropriata.

Se l'insieme archivia `CObject` oggetti `IMPLEMENT_SERIAL` derivati da e si utilizza la macro nell'implementazione `CArchive` della `CObject`classe dell'elemento della raccolta, è possibile sfruttare la funzionalità di serializzazione incorporata in e :

[!code-cpp[NVC_MFCCollections#9](../mfc/codesnippet/cpp/how-to-make-a-type-safe-collection_3.cpp)]

Operatori di inserimento `CArchive` `CObject::Serialize` di overload per la chiamata `CPerson` (o un override di tale funzione) per ogni oggetto.

## <a name="using-nontemplate-collection-classes"></a><a name="_core_using_nontemplate_collection_classes"></a>Utilizzo di classi di raccolte non templateUsing Nontemplate Collection Classes

MFC supporta inoltre le classi di raccolte introdotte con MFC versione 1.0. Queste classi non sono basate su modelli. Possono essere utilizzati per contenere `CObject*` `UINT`dati `DWORD`dei `CString`tipi supportati, , , e . È possibile utilizzare queste raccolte `CObList`predefinite (ad esempio ) `CObject`per contenere raccolte di qualsiasi oggetto derivato da . MFC fornisce anche altre raccolte predefinite per `UINT` contenere i`void`tipi primitivi, ad esempio e i puntatori void (Sezione ). In generale, tuttavia, è spesso utile definire raccolte indipendenti dai tipi per contenere gli oggetti di una classe più specifica e dei relativi derivati. Si noti che questa operazione con le classi di raccolta non basate su modelli è più lavoro rispetto all'utilizzo delle classi basate su modelli.

Esistono due modi per creare raccolte indipendenti dai tipi con le raccolte non modello:There are two ways to create type-safe collections with the nontemplate collections:

1. Utilizzare le raccolte non template, con il cast del tipo, se necessario. Questo è l'approccio più semplice.

1. Derivare da ed estendere una raccolta indipendente dai tipi non modello.

#### <a name="to-use-the-nontemplate-collections-with-type-casting"></a>Per utilizzare le raccolte non template con il cast dei tipiTo use the nontemplate collections with type casting

1. Utilizzare direttamente una delle classi `CWordArray`non template, ad esempio , .

   Ad esempio, è `CWordArray` possibile creare un e aggiungervi qualsiasi valore a 32 bit, quindi recuperarli. Non c'è più niente da fare. È sufficiente utilizzare la funzionalità predefinita.

   È inoltre possibile utilizzare un insieme `CObList`predefinito, ad esempio `CObject`, per contenere tutti gli oggetti derivati da . Un `CObList` insieme viene definito per `CObject`contenere i puntatori a . Quando si recupera un oggetto dall'elenco, potrebbe essere necessario eseguire `CObList` il cast `CObject`del risultato al tipo corretto poiché le funzioni restituiscono puntatori a . Ad esempio, se `CPerson` si `CObList` archiviano oggetti in una raccolta, è `CPerson` necessario eseguire il cast di un elemento recuperato per essere un puntatore a un oggetto. L'esempio seguente `CObList` usa `CPerson` una raccolta per contenere gli oggetti:The following example uses a collection to hold objects:

   [!code-cpp[NVC_MFCCollections#10](../mfc/codesnippet/cpp/how-to-make-a-type-safe-collection_4.cpp)]

   Questa tecnica di utilizzo di un tipo di raccolta predefinito e di cast in base alle esigenze potrebbe essere adeguata per molte delle esigenze di raccolta. Se sono necessarie ulteriori funzionalità o più indipendenza dai tipi, utilizzare una classe basata su modello o seguire la procedura successiva.

#### <a name="to-derive-and-extend-a-nontemplate-type-safe-collection"></a>Per derivare ed estendere una raccolta indipendente dai tipi non modelloTo derive and extend a nontemplate type-safe collection

1. Derivare la propria classe di raccolta da una delle classi non template predefinite.

   Quando si deriva la classe, è possibile aggiungere funzioni wrapper indipendenti dai tipi per fornire un'interfaccia indipendente dai tipi alle funzioni esistenti.

   Ad esempio, se è `CObList` stato `CPerson` derivato un elenco da `AddHeadPerson` `GetHeadPerson`per contenere gli oggetti, è possibile aggiungere le funzioni wrapper e , come illustrato di seguito.

   [!code-cpp[NVC_MFCCollections#11](../mfc/codesnippet/cpp/how-to-make-a-type-safe-collection_5.h)]

   Queste funzioni wrapper forniscono un modo `CPerson` indipendente dai tipi per aggiungere e recuperare oggetti dall'elenco derivato. Si può vedere `GetHeadPerson` che per la funzione, si sta semplicemente incapsulando il cast del tipo.

   È inoltre possibile aggiungere nuove funzionalità definendo nuove funzioni che estendono le funzionalità della raccolta anziché eseguire semplicemente il wrapping delle funzionalità esistenti in wrapper indipendenti dai tipi. Ad esempio, l'articolo [Eliminazione di tutti gli oggetti in un insieme CObject](../mfc/deleting-all-objects-in-a-cobject-collection.md) descrive una funzione per eliminare tutti gli oggetti contenuti in un elenco. Questa funzione può essere aggiunta alla classe derivata come funzione membro.

## <a name="see-also"></a>Vedere anche

[Raccolte](../mfc/collections.md)
