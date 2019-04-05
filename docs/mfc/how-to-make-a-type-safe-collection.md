---
title: 'Procedura: Creazione di una raccolta indipendente dai tipi'
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
ms.openlocfilehash: c8be781bad699edb8cb0be844d79802269c3e0c5
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "58781523"
---
# <a name="how-to-make-a-type-safe-collection"></a>Procedura: Creazione di una raccolta indipendente dai tipi

Questo articolo illustra come rendere le raccolte indipendente dai tipi per i tipi di dati. Gli argomenti trattati includono:

- [Uso delle classi basate su modelli per indipendenza dai tipi](#_core_using_template.2d.based_classes_for_type_safety)

- [Implementazione di funzioni di supporto](#_core_implementing_helper_functions)

- [Uso di classi collection non basate su modelli](#_core_using_nontemplate_collection_classes)

La libreria Microsoft Foundation Class fornisce gli insiemi indipendente dai tipi predefiniti basati su modelli C++. Poiché sono modelli, queste classi forniscono indipendenza dai tipi e semplicità d'uso senza il cast del tipo e le altre operazioni correlati all'utilizzo di una classe non basate su modelli per questo scopo. L'esempio MFC [raccogliere](../overview/visual-cpp-samples.md) illustra l'uso di classi collection basate su modello in un'applicazione MFC. Usare queste classi in generale, ogni volta che si scrive nuovo codice di raccolte.

##  <a name="_core_using_template.2d.based_classes_for_type_safety"></a> Uso delle classi basate su modelli per indipendenza dai tipi

#### <a name="to-use-template-based-classes"></a>Per utilizzare classi basate su modello

1. Dichiarare una variabile del tipo di classe della raccolta. Ad esempio:

   [!code-cpp[NVC_MFCCollections#7](../mfc/codesnippet/cpp/how-to-make-a-type-safe-collection_1.cpp)]

1. Chiamare le funzioni membro dell'oggetto della raccolta. Ad esempio:

   [!code-cpp[NVC_MFCCollections#8](../mfc/codesnippet/cpp/how-to-make-a-type-safe-collection_2.cpp)]

1. Se necessario, implementare il [funzioni helper](../mfc/reference/collection-class-helpers.md) e [SerializeElements](../mfc/reference/collection-class-helpers.md#serializeelements). Per informazioni sull'implementazione di queste funzioni, vedere [implementazione di funzioni di supporto](#_core_implementing_helper_functions).

In questo esempio illustra la dichiarazione di un elenco di numeri interi. Il primo parametro nel passaggio 1 è il tipo di dati archiviati come elementi dell'elenco. Il secondo parametro specifica come i dati deve essere passati e restituiti dalle funzioni membro della classe di raccolta, ad esempio `Add` e `GetAt`.

##  <a name="_core_implementing_helper_functions"></a> Implementazione di funzioni di supporto

Le classi collection basate su modelli `CArray`, `CList`, e `CMap` Usa cinque funzioni helper globali che è possibile personalizzare in base alle esigenze per la classe di raccolta derivata. Per informazioni su queste funzioni helper, vedere [supporti delle classi Collection](../mfc/reference/collection-class-helpers.md) nel *riferimento MFC*. Implementazione della funzione di serializzazione è necessaria per la maggior parte degli utilizzi delle classi collection basate su modello.

###  <a name="_core_serializing_elements"></a> La serializzazione di elementi

Il `CArray`, `CList`, e `CMap` classi chiamata `SerializeElements` per archiviare gli elementi insieme a o leggerli da un archivio.

L'implementazione predefinita del `SerializeElements` funzione helper esegue un'operazione OR bit per bit di scrittura dagli oggetti dell'archivio o bit per bit dall'archivio di lettura agli oggetti, a seconda del fatto che gli oggetti vengono archiviati in o da recuperare dall'archivio. Eseguire l'override `SerializeElements` se questa azione non è appropriata.

Se la raccolta archivia gli oggetti derivati da `CObject` e userai i `IMPLEMENT_SERIAL` macro nell'implementazione della classe dell'elemento della raccolta, è possibile sfruttare le funzionalità di serializzazione incorporate in `CArchive` e `CObject`:

[!code-cpp[NVC_MFCCollections#9](../mfc/codesnippet/cpp/how-to-make-a-type-safe-collection_3.cpp)]

Gli operatori di inserimento di overload per `CArchive` chiamare `CObject::Serialize` (o un override della funzione) per ogni `CPerson` oggetto.

##  <a name="_core_using_nontemplate_collection_classes"></a> Uso di classi Collection non basate su modelli

MFC supporta anche le classi di raccolta introdotte dalla versione 1.0. Queste classi non sono basate su modelli. Possono essere usati per contenere i dati dei tipi supportati `CObject*`, `UINT`, `DWORD`, e `CString`. È possibile usare queste raccolte predefinite (ad esempio `CObList`) per contenere raccolte di tutti gli oggetti derivati da `CObject`. MFC fornisce anche altre raccolte predefinite per tipi primitivi, ad esempio `UINT` e i puntatori void (`void`*). In generale, tuttavia, è spesso utile definire le proprie raccolte indipendente dai tipi che contengono oggetti di una classe più specifica e i suoi derivati. Si noti che questa operazione con le classi collection non basata su modelli è più di lavoro usando le classi basate su modello.

Esistono due modi per creare raccolte indipendente dai tipi con le raccolte non basate su modelli:

1. Usare le raccolte non basate su modelli, con il cast di tipo se necessario. Questo è l'approccio più semplice.

1. Derivare da ed estendere una raccolta indipendente dai tipi non basate su modelli.

#### <a name="to-use-the-nontemplate-collections-with-type-casting"></a>Per utilizzare le raccolte non basate su modelli con cast dei tipi

1. Usare una delle classi non basate su modelli, ad esempio `CWordArray`direttamente.

   Ad esempio, è possibile creare un `CWordArray` e aggiungervi tutti i valori a 32 bit, quindi recuperarli. Non è nient'altro per eseguire operazioni. È sufficiente utilizzare le funzionalità predefinite.

   È anche possibile usare una raccolta predefinita, ad esempio `CObList`, per contenere gli oggetti derivati da `CObject`. Oggetto `CObList` raccolta viene definita per contenere i puntatori a `CObject`. Quando si recupera un oggetto dall'elenco, potrebbe essere necessario il cast del risultato al tipo corretto poiché il `CObList` funzioni restituiscono puntatori a `CObject`. Ad esempio, se si archiviano `CPerson` oggetti un `CObList` raccolta, è necessario eseguire il cast di un elemento recuperato in un puntatore a un `CPerson` oggetto. L'esempio seguente usa un' `CObList` insieme in cui contenere `CPerson` oggetti:

   [!code-cpp[NVC_MFCCollections#10](../mfc/codesnippet/cpp/how-to-make-a-type-safe-collection_4.cpp)]

   Questa tecnica di utilizzo di un tipo di raccolta predefiniti e il cast necessario potrebbe essere sufficiente per molte delle esigenze di raccolta. Se è necessario maggiore controllo dei tipi o ulteriori funzionalità, usare una classe di base del modello o seguire la procedura successiva.

#### <a name="to-derive-and-extend-a-nontemplate-type-safe-collection"></a>Per derivare ed estendere una raccolta indipendente dai tipi non basate su modelli

1. Derivare la propria classe di raccolta da una delle classi non basate su modelli predefiniti.

   Quando si deriva una classe, è possibile aggiungere le funzioni wrapper indipendente dai tipi per fornire un'interfaccia indipendente dai tipi per le funzioni esistenti.

   Ad esempio, se si deriva un elenco dal `CObList` per contenere `CPerson` oggetti, è possibile aggiungere le funzioni wrapper `AddHeadPerson` e `GetHeadPerson`, come illustrato di seguito.

   [!code-cpp[NVC_MFCCollections#11](../mfc/codesnippet/cpp/how-to-make-a-type-safe-collection_5.h)]

   Queste funzioni wrapper forniscono un modo indipendente dai tipi per aggiungere e recuperare `CPerson` oggetti nell'elenco derivata. È possibile notare che per il `GetHeadPerson` (funzione), si incapsula semplicemente il cast del tipo.

   È anche possibile aggiungere nuove funzionalità che definisce nuove funzioni che estendono le funzionalità della raccolta invece di limitarsi a inserire le funzionalità esistenti nei wrapper indipendente dai tipi. Ad esempio, l'articolo [l'eliminazione di tutti gli oggetti in una raccolta CObject](../mfc/deleting-all-objects-in-a-cobject-collection.md) descrive una funzione per eliminare tutti gli oggetti contenuti in un elenco. Questa funzione è stato possibile aggiungere alla classe derivata come una funzione membro.

## <a name="see-also"></a>Vedere anche

[Raccolte](../mfc/collections.md)
