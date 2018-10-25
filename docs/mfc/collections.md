---
title: Le raccolte | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 72bae0d985c81478321109c3c02c07e6b1386028
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50069906"
---
# <a name="collections"></a>Raccolte

La libreria MFC fornisce classi Collection per la gestione di gruppi di oggetti. Queste classi sono di due tipi:

- [Classi Collection create da modelli C++](#_core_the_template_based_collection_classes)

- [Classi Collection non create da modelli](#_core_the_collection_classes_not_based_on_templates)

> [!NOTE]
>  Se nel codice vengono già utilizzate le classi Collection non create da modelli, è possibile continuare a utilizzarle. Se si scrivono nuove classi Collection indipendenti dai tipi per i tipi di dati personalizzati, si consiglia di utilizzare le classi basate su modelli, che sono più recenti.

##  <a name="_core_collection_shapes"></a> Forme di raccolta

Una classe Collection è caratterizzata dalla "forma" e dai tipi dei relativi elementi. La forma fa riferimento al modo in cui gli oggetti sono organizzati e archiviati dalla raccolta. MFC offre tre forme base di raccolta: elenchi, matrici e mappe (denominate anche dizionari). È possibile selezionare la forma di raccolta più appropriata al problema di programmazione specifico.

Più avanti in questo argomento viene descritta brevemente ciascuna delle forme di raccolta fornite. Per confrontare le funzionalità delle forme che consentono di decidere quale sia ottimale per il programma, vedere [suggerimenti per la scelta di una classe Collection](../mfc/recommendations-for-choosing-a-collection-class.md).

- List

   La classe elenco fornisce un elenco di elementi ordinato e non indicizzato, implementato come elenco a doppio collegamento. Un elenco ha un inizio e una fine e aggiungere o rimuovere elementi dall'inizio o dalla fine o inserire o eliminare elementi al centro è molto veloce.

- Matrice

   La classe array fornisce una matrice di oggetti dinamicamente ridimensionata, ordinata e indicizzata per interi.

- Mappa (denominata anche dizionario)

   Una mappa è una raccolta che associa un oggetto chiave a un oggetto valore.

##  <a name="_core_the_template_based_collection_classes"></a> Le classi Collection basate su modello

Il modo più semplice per implementare una raccolta indipendente dai tipi che contiene oggetti di qualsiasi tipo consiste nell'utilizzare una delle classi MFC basate su modelli. Per esempi di queste classi, vedere l'esempio MFC [raccogliere](../visual-cpp-samples.md).

Nella tabella seguente vengono elencate le classi Collection MFC basate su modelli.

### <a name="collection-template-classes"></a>Classi modello di raccolta

|Contenuto della raccolta|Matrici|Elenchi|Mappe|
|-------------------------|------------|-----------|----------|
|Raccolte di oggetti di qualsiasi tipo|`CArray`|`CList`|`CMap`|
|Raccolte di puntatori a oggetti di qualsiasi tipo|`CTypedPtrArray`|`CTypedPtrList`|`CTypedPtrMap`|

##  <a name="_core_the_collection_classes_not_based_on_templates"></a> Le classi Collection non basate su modelli

Se nell'applicazione vengono utilizzate già le classi di raccolta MFC non create da modelli, è possibile continuare a utilizzarle. Tuttavia, per le nuove raccolte, si consiglia di utilizzare le classi basate su modelli. Nella tabella seguente sono elencate le classi di raccolta MFC che non sono basate su modelli.

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

Nella tabella caratteristiche delle classi di raccolta MFC [suggerimenti per la scelta di una classe Collection](../mfc/recommendations-for-choosing-a-collection-class.md) vengono descritte le classi di raccolta MFC in termini di queste caratteristiche (diverse dalla forma):

- Se la classe utilizza modelli C++

- Se gli elementi archiviati nella raccolta possono essere serializzati

- Se per gli elementi archiviati nella raccolta è possibile eseguire il dump per la diagnostica

- Se la raccolta è indipendente dai tipi

### <a name="what-do-you-want-to-do"></a>Ciò che si desidera eseguire

#### <a name="general-collection-class-tasks"></a>Attività generali della classe di raccolta

- [Suggerimenti per la scelta di una classe Collection](../mfc/recommendations-for-choosing-a-collection-class.md)

- [Procedura: Creare una raccolta indipendente dai tipi](../mfc/how-to-make-a-type-safe-collection.md)

- [Creazione di raccolte di stack e code](../mfc/creating-stack-and-queue-collections.md)

- [CArray::Add](../mfc/reference/carray-class.md#add)

#### <a name="template-based-collection-class-tasks"></a>Attività delle classi Collection basate su modello

- [Classi basate su modello](../mfc/template-based-classes.md)

#### <a name="accessing-the-members-of-a-collection-template-based-or-not"></a>Accesso ai membri di una raccolta (basata o meno su modello)

- [Accesso a tutti i membri di una raccolta](../mfc/accessing-all-members-of-a-collection.md)

- [Eliminazione di tutti gli oggetti in una raccolta CObject](../mfc/deleting-all-objects-in-a-cobject-collection.md)

## <a name="see-also"></a>Vedere anche

[Concetti](../mfc/mfc-concepts.md)<br/>
[Argomenti MFC generali](../mfc/general-mfc-topics.md)

