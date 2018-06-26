---
title: 'Procedura: creazione di una raccolta indipendente dai tipi | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- type-safe collections [MFC]
- serializing collection-class elements [MFC]
- collection classes [MFC], type safety
- SerializeElements function [MFC]
- collection classes [MFC], template-based
- serialization [MFC], collection classes
- collection classes [MFC], deriving from nontemplate
ms.assetid: 7230b2db-4283-4083-b098-eb231bf5b89e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1cbcdeec6e39e104625d1b5d47c494915a821d38
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930033"
---
# <a name="how-to-make-a-type-safe-collection"></a>Procedura: creazione di una raccolta indipendente dai tipi
In questo articolo viene illustrato come creare raccolte indipendenti dai tipi per i tipi di dati. Gli argomenti trattati includono:  
  
-   [Utilizzo delle classi basate su modelli per tipo (protezione)](#_core_using_template.2d.based_classes_for_type_safety)  
  
-   [Implementazione di funzioni di supporto](#_core_implementing_helper_functions)  
  
-   [Utilizzo delle classi di raccolta non basate su modelli](#_core_using_nontemplate_collection_classes)  
  
 La libreria Microsoft Foundation Class fornisce raccolte indipendenti dai tipi predefinite basate su modelli C++. Poiché si tratta di modelli, queste classi forniscono indipendenza dai tipi e facilità d'uso senza il cast del tipo e le altre operazioni correlati all'utilizzo di una classe non basate su modelli per questo scopo. L'esempio MFC [raccogliere](../visual-cpp-samples.md) illustra l'uso di classi collection basate su modello in un'applicazione MFC. Usare queste classi in generale, ogni volta che si scrive nuovo codice di raccolte.  
  
##  <a name="_core_using_template.2d.based_classes_for_type_safety"></a> Utilizzo delle classi basate su modelli per tipo (protezione)  
  
#### <a name="to-use-template-based-classes"></a>Per usare le classi basate su modello  
  
1.  Dichiarare una variabile del tipo di classe di raccolta. Ad esempio:  
  
     [!code-cpp[NVC_MFCCollections#7](../mfc/codesnippet/cpp/how-to-make-a-type-safe-collection_1.cpp)]  
  
2.  Chiamare le funzioni membro dell'oggetto della raccolta. Ad esempio:  
  
     [!code-cpp[NVC_MFCCollections#8](../mfc/codesnippet/cpp/how-to-make-a-type-safe-collection_2.cpp)]  
  
3.  Se necessario, implementare il [funzioni di supporto](../mfc/reference/collection-class-helpers.md) e [SerializeElements](../mfc/reference/collection-class-helpers.md#serializeelements). Per informazioni sull'implementazione di queste funzioni, vedere [implementazione delle funzioni di supporto](#_core_implementing_helper_functions).  
  
 Questo esempio illustra la dichiarazione di un elenco di numeri interi. Il primo parametro nel passaggio 1 è il tipo di dati archiviati come elementi dell'elenco. Il secondo parametro specifica come i dati deve essere passati e restituiti dalle funzioni membro della classe di raccolta, ad esempio `Add` e `GetAt`.  
  
##  <a name="_core_implementing_helper_functions"></a> Implementazione di funzioni di supporto  
 Le classi collection basate su modelli `CArray`, `CList`, e `CMap` utilizzare cinque funzioni di supporto globali che è possibile personalizzare in base alle esigenze per la classe di raccolta derivata. Per informazioni su queste funzioni di supporto, vedere [classi Collection](../mfc/reference/collection-class-helpers.md) nel *riferimenti alla libreria MFC*. Implementazione della funzione di serializzazione è necessaria per la maggior parte degli utilizzi delle classi collection basate su modello.  
  
###  <a name="_core_serializing_elements"></a> Serializzazione di elementi  
 Il `CArray`, `CList`, e `CMap` classi chiamata `SerializeElements` per archiviare gli elementi della raccolta a o leggerli da un archivio.  
  
 L'implementazione predefinita del `SerializeElements` funzione helper esegue un'operazione di scrittura bit per bit dagli oggetti dell'archivio o bit per bit letto dall'archivio agli oggetti, a seconda se vengono archiviati gli oggetti o da recuperare dall'archivio. Eseguire l'override `SerializeElements` se questa azione non è appropriata.  
  
 Se la raccolta contiene oggetti derivati da `CObject` e si utilizza il `IMPLEMENT_SERIAL` macro nell'implementazione della classe di elementi insieme, è possibile sfruttare le funzionalità di serializzazione incorporate in `CArchive` e `CObject`:  
  
 [!code-cpp[NVC_MFCCollections#9](../mfc/codesnippet/cpp/how-to-make-a-type-safe-collection_3.cpp)]  
  
 Gli operatori di inserimento di overload per `CArchive` chiamare `CObject::Serialize` (o un override di tale funzione) per ogni `CPerson` oggetto.  
  
##  <a name="_core_using_nontemplate_collection_classes"></a> Utilizzo delle classi di raccolta non basate su modelli  
 MFC supporta anche le classi collection introdotte con versione 1.0 di MFC. Queste classi non sono basate su modelli. Possono essere utilizzati per contenere i dati dei tipi supportati `CObject*`, `UINT`, `DWORD`, e `CString`. È possibile utilizzare queste raccolte predefinite (ad esempio `CObList`) per contenere raccolte di qualsiasi oggetto derivato da `CObject`. MFC fornisce anche altre raccolte predefinite per tipi primitivi, ad esempio `UINT` e void puntatori (`void`*). In generale, tuttavia, è spesso utile definire le proprie raccolte indipendenti dai tipi che contengono oggetti di una classe più specifica e i suoi derivati. Si noti che in questo modo con le classi collection non basate su modelli è più operazioni rispetto alla utilizzando le classi basate su modello.  
  
 Esistono due modi per creare raccolte indipendenti dai tipi con le raccolte non basate su modelli:  
  
1.  Utilizzare le raccolte non basate su modelli, con il cast di tipo se necessario. Si tratta dell'approccio più semplice.  
  
2.  Derivare da ed estendere una raccolta indipendente dai tipi non basate su modelli.  
  
#### <a name="to-use-the-nontemplate-collections-with-type-casting"></a>Per usare le raccolte non basate su modelli con tipo (cast)  
  
1.  Utilizzare una delle classi non basate su modelli, ad esempio `CWordArray`, direttamente.  
  
     Ad esempio, è possibile creare un `CWordArray` e aggiungervi tutti i valori a 32 bit e quindi recuperarli. Non vi sono altre da eseguire. È sufficiente utilizzare le funzionalità predefinite.  
  
     È anche possibile utilizzare un insieme predefinito, ad esempio `CObList`, per contenere gli oggetti derivati da `CObject`. Un `CObList` insieme viene definito per contenere i puntatori a `CObject`. Quando si recupera un oggetto dall'elenco, potrebbe essere necessario il cast del risultato nel tipo appropriato perché il `CObList` funzioni restituiscono puntatori a `CObject`. Ad esempio, se si archiviano `CPerson` gli oggetti in un `CObList` raccolta, è necessario eseguire il cast di un elemento recuperato per essere un puntatore a un `CPerson` oggetto. L'esempio seguente usa un' `CObList` insieme per contenere `CPerson` oggetti:  
  
     [!code-cpp[NVC_MFCCollections#10](../mfc/codesnippet/cpp/how-to-make-a-type-safe-collection_4.cpp)]  
  
     Questa tecnica di utilizzo di un tipo di raccolta predefinita ed esegue il cast come necessario potrebbe essere sufficiente per la maggior parte delle esigenze di raccolta. Se si desiderano ulteriori funzionalità o altre indipendenza dai tipi, usare una classe basata sul modello o attenersi alla procedura descritta di seguito.  
  
#### <a name="to-derive-and-extend-a-nontemplate-type-safe-collection"></a>Per derivare ed estendere una raccolta indipendente dai tipi non basate su modelli  
  
1.  Derivare la propria classe di raccolta da una delle classi non basate su modelli predefiniti.  
  
     Quando si deriva una classe, è possibile aggiungere le funzioni wrapper indipendente dai tipi per fornire un'interfaccia indipendente dai tipi di funzioni esistenti.  
  
     Ad esempio, se è derivato da un elenco `CObList` per contenere `CPerson` oggetti, è possibile aggiungere le funzioni wrapper `AddHeadPerson` e `GetHeadPerson`, come illustrato di seguito.  
  
     [!code-cpp[NVC_MFCCollections#11](../mfc/codesnippet/cpp/how-to-make-a-type-safe-collection_5.h)]  
  
     Queste funzioni wrapper consentono di aggiungere e recuperare in modo indipendente dai tipi `CPerson` oggetti nell'elenco derivata. È possibile vedere che per il `GetHeadPerson` funzione, sono semplicemente che incapsula il cast del tipo.  
  
     È anche possibile aggiungere nuove funzionalità con la definizione di nuove funzioni che estendono le capacità della raccolta anziché semplicemente di wrapping delle funzionalità esistenti nei wrapper indipendente dai tipi. Ad esempio, l'articolo [l'eliminazione di tutti gli oggetti in una raccolta CObject](../mfc/deleting-all-objects-in-a-cobject-collection.md) descrive una funzione per eliminare tutti gli oggetti contenuti in un elenco. Questa funzione è stato possibile aggiungere alla classe derivata come una funzione membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Raccolte](../mfc/collections.md)

