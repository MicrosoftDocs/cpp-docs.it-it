---
title: Raccolte
ms.date: 11/04/2016
helpviewer_keywords:
- MFC, collections
- arrays [MFC], classes
- MFC collection classes
- shapes, collection
- collection classes [MFC], MFC
- collections, about collections
- array templates [MFC]
- collection classes [MFC], template-based
- collection classes [MFC], about collection classes
- collection classes [MFC], maps
- collection classes [MFC], arrays
- shapes
- collection classes [MFC], lists
- collection classes [MFC], shapes
ms.assetid: 02586e4c-851d-41d0-a722-feb11c17c74c
ms.openlocfilehash: f2cd03afbb09dff38298454658c3d3dc2dfa6a8a
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619354"
---
# <a name="collections"></a>Raccolte

La libreria MFC fornisce classi Collection per la gestione di gruppi di oggetti. Queste classi sono di due tipi:

- [Classi Collection create da modelli C++](#_core_the_template_based_collection_classes)

- [Classi di raccolta non create da modelli C++](#_core_the_collection_classes_not_based_on_templates)

> [!NOTE]
> Se nel codice vengono già utilizzate le classi Collection non create da modelli, è possibile continuare a utilizzarle. Se si scrivono nuove classi di raccolta indipendenti dai tipi per i tipi di dati personalizzati, si consiglia di utilizzare le classi basate su modelli, che sono più recenti.

## <a name="collection-shapes"></a><a name="_core_collection_shapes"></a>Forme raccolta

Una classe di raccolta è caratterizzata dalla "forma" e dai tipi dei relativi elementi. La forma fa riferimento al modo in cui gli oggetti sono organizzati e archiviati dalla raccolta. MFC offre tre forme base di raccolta: elenchi, matrici e mappe (denominate anche dizionari). È possibile selezionare la forma di raccolta più appropriata al problema di programmazione specifico.

Più avanti in questo argomento viene descritta brevemente ciascuna delle forme di raccolta fornite. Per confrontare le funzionalità delle forme per decidere quale sia la scelta migliore per il programma, vedere [Suggerimenti per la scelta di una classe di raccolta](recommendations-for-choosing-a-collection-class.md).

- Elenco

   La classe elenco fornisce un elenco di elementi ordinato e non indicizzato, implementato come elenco a doppio collegamento. Un elenco ha un inizio e una fine e aggiungere o rimuovere elementi dall'inizio o dalla fine o inserire o eliminare elementi al centro è molto veloce.

- Array

   La classe array fornisce una matrice di oggetti dinamicamente ridimensionata, ordinata e indicizzata per interi.

- Mappa (denominata anche dizionario)

   Una mappa è una raccolta che associa un oggetto chiave a un oggetto valore.

## <a name="the-template-based-collection-classes"></a><a name="_core_the_template_based_collection_classes"></a>Classi Collection basate su modello

Il modo più semplice per implementare una raccolta indipendente dai tipi che contiene oggetti di qualsiasi tipo consiste nell'utilizzare una delle classi MFC basate su modelli. Per esempi di queste classi, vedere l'esempio MFC [Collect](../overview/visual-cpp-samples.md).

Nella tabella seguente vengono elencate le classi Collection MFC basate su modelli.

### <a name="collection-template-classes"></a>Classi modello di raccolta

|Contenuto della raccolta|Matrici|Elenchi|Mappe|
|-------------------------|------------|-----------|----------|
|Raccolte di oggetti di qualsiasi tipo|`CArray`|`CList`|`CMap`|
|Raccolte di puntatori a oggetti di qualsiasi tipo|`CTypedPtrArray`|`CTypedPtrList`|`CTypedPtrMap`|

## <a name="the-collection-classes-not-based-on-templates"></a><a name="_core_the_collection_classes_not_based_on_templates"></a>Classi Collection non basate su modelli

Se nell'applicazione vengono utilizzate già le classi di raccolta MFC non create da modelli, è possibile continuare a utilizzarle. Tuttavia, per le nuove raccolte, si consiglia di utilizzare le classi basate su modelli. Nella tabella seguente sono elencate le classi Collection MFC che non sono basate su modelli.

### <a name="nontemplate-collection-classes"></a>Classi Collection non basate su modelli

|Matrici|Elenchi|Mappe|
|------------|-----------|----------|
|`CObArray`|`CObList`|`CMapPtrToWord`|
|`CByteArray`|`CPtrList`|`CMapPtrToPtr`|
|`CDWordArray`|`CStringList`|`CMapStringToOb`|
|`CPtrArray`||`CMapStringToPtr`|
|`CStringArray`||`CMapStringToString`|
|`CWordArray`||`CMapWordToOb`|
|`CUIntArray`||`CMapWordToPtr`|

Le caratteristiche della tabella delle classi di raccolta MFC in [raccomandazioni per la scelta di una classe di raccolta](recommendations-for-choosing-a-collection-class.md) descrivono le classi della raccolta MFC in termini di queste caratteristiche (diverse dalla forma):

- Se la classe utilizza modelli C++

- Se gli elementi archiviati nella raccolta possono essere serializzati

- Se per gli elementi archiviati nella raccolta è possibile eseguire il dump per la diagnostica

- Se la raccolta è indipendente dai tipi

### <a name="what-do-you-want-to-do"></a>Cosa si vuole fare

#### <a name="general-collection-class-tasks"></a>Attività generali della classe Collection

- [Suggerimenti per la scelta di una classe Collection](recommendations-for-choosing-a-collection-class.md)

- [Procedura: Creare una raccolta indipendente dai tipi](how-to-make-a-type-safe-collection.md)

- [Creazione di raccolta Stack e Code](creating-stack-and-queue-collections.md)

- [CArray:: Add](reference/carray-class.md#add)

#### <a name="template-based-collection-class-tasks"></a>Attività delle classi di raccolta basate su modello

- [Classi basate su modello](template-based-classes.md)

#### <a name="accessing-the-members-of-a-collection-template-based-or-not"></a>Accesso ai membri di una raccolta (basata o meno su modello)

- [Accesso a tutti i membri di una raccolta](accessing-all-members-of-a-collection.md)

- [Eliminazione di tutti gli oggetti in una raccolta CObject](deleting-all-objects-in-a-cobject-collection.md)

## <a name="see-also"></a>Vedere anche

[Concetti](mfc-concepts.md)<br/>
[Argomenti MFC generali](general-mfc-topics.md)
