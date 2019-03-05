---
title: Suggerimenti per la scelta di una classe di raccolte
ms.date: 11/04/2016
helpviewer_keywords:
- type safety of collection classes [MFC]
- collection classes [MFC], serialization
- collection classes [MFC], speed
- collection classes [MFC], type safety
- collection classes [MFC], choosing
- collection classes [MFC], functionality
- shapes, collection
- collection classes [MFC], template-based
- MFC collection classes [MFC], characteristics
- collection classes [MFC], about collection classes [MFC]
- serialization [MFC], collection classes
- collection classes [MFC], duplicates allowed
- collection classes [MFC], shapes
ms.assetid: a82188cd-443f-40d8-a244-edf292a53db4
ms.openlocfilehash: c72a57385b0036d98629d1ee24111500b9d2f8ad
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57288038"
---
# <a name="recommendations-for-choosing-a-collection-class"></a>Suggerimenti per la scelta di una classe di raccolte

Questo articolo contiene informazioni dettagliate che consentono di scegliere una classe di raccolta per una particolare applicazione.

La scelta di una classe di raccolta dipende da diversi fattori, tra cui:

- Le funzionalità della forma della classe: ordinamento, indicizzazione e prestazioni, come illustrato nella tabella [Funzionalità delle forme di raccolta](#_core_collection_shape_features) più avanti in questo argomento

- Se la classe utilizza modelli C++

- Se gli elementi archiviati nella raccolta possono essere serializzati

- Se per gli elementi archiviati nella raccolta è possibile eseguire il dump per la diagnostica

- Se la raccolta è indipendente dai tipi

Nella tabella seguente, [Funzionalità delle forme di raccolta](#_core_collection_shape_features), sono riepilogate le caratteristiche delle forme di raccolta disponibili.

- Le colonne 2 e 3 descrivono le caratteristiche di ordinamento e accesso di ogni forma. Nella tabella il termine "ordine" significa che l'ordine di inserimento ed eliminazione degli elementi determina il relativo ordine nella raccolta. Non significa che gli elementi sono ordinati in base al rispettivo contenuto. Il termine "indicizzazione" significa che è possibile recuperare gli elementi nella raccolta da un indice Integer, analogamente agli elementi in una matrice standard.

- Le colonne 4 e 5 descrivono le prestazioni di ogni forma. In applicazioni che richiedono molte operazioni di inserimento nella raccolta, la velocità di inserimento potrebbe essere particolarmente importante. In altre applicazioni potrebbe essere più importante la velocità di ricerca.

- La colonna 6 indica se ogni forma consente elementi duplicati.

### <a name="_core_collection_shape_features"></a>  Funzionalità delle forme di raccolta

|Forma|Ordered|Indicizzati|Inserimento di un elemento|Ricerca di un elemento specificato|Elementi duplicati|
|-----------|--------------|--------------|-----------------------|----------------------------------|-------------------------|
|List|Sì|No|Fast|Lento|Sì|
|Matrice|Sì|Tramite valore Integer|Lento|Lento|Sì|
|Mappa|No|Tramite chiave|Fast|Fast|No (chiavi) Sì (valori)|

Nella tabella seguente, [Caratteristiche delle classi di raccolta MFC](#_core_characteristics_of_mfc_collection_classes), vengono riepilogate altre importanti caratteristiche di classi della raccolta MFC specifiche come guida alla selezione. La scelta può variare a seconda se la classe è basata su modelli C++, se gli elementi possono essere serializzati tramite il meccanismo di [serializzazione](../mfc/serialization-in-mfc.md) dei documenti MFC, se è possibile eseguire il dump dei relativi elementi tramite il meccanismo di dump diagnostico di MFC o se la classe è indipendente dai tipi, ovvero se è in grado di garantire il tipo di elementi archiviati in e recuperati da una raccolta basata sulla classe.

### <a name="_core_characteristics_of_mfc_collection_classes"></a>  Caratteristiche delle classi di raccolta MFC

|Classe|Usa C++<br /><br /> modelli|Può essere<br /><br /> serializzato|Può essere<br /><br /> oggetto di dump|È<br /><br /> indipendente dai tipi|
|-----------|------------------------------|---------------------------|-----------------------|-----------------------|
|`CArray`|Sì|Sì 1|Sì 1|No|
|`CByteArray`|No|Yes|Sì|Sì 3|
|`CDWordArray`|No|Yes|Sì|Sì 3|
|`CList`|Sì|Sì 1|Sì 1|No|
|`CMap`|Sì|Sì 1|Sì 1|No|
|`CMapPtrToPtr`|No|No|Sì|No|
|`CMapPtrToWord`|No|No|Sì|No|
|`CMapStringToOb`|No|Yes|Yes|No|
|`CMapStringToPtr`|No|No|Sì|No|
|`CMapStringToString`|No|Yes|Sì|Sì 3|
|`CMapWordToOb`|No|Yes|Yes|No|
|`CMapWordToPtr`|No|No|Sì|No|
|`CObArray`|No|Yes|Yes|No|
|`CObList`|No|Yes|Yes|No|
|`CPtrArray`|No|No|Sì|No|
|`CPtrList`|No|No|Sì|No|
|`CStringArray`|No|Yes|Sì|Sì 3|
|`CStringList`|No|Yes|Sì|Sì 3|
|`CTypedPtrArray`|Sì|Dipende 2|Sì|Yes|
|`CTypedPtrList`|Sì|Dipende 2|Sì|Yes|
|`CTypedPtrMap`|Sì|Dipende 2|Sì|Yes|
|`CUIntArray`|No|No|Sì|Sì 3|
|`CWordArray`|No|Yes|Sì|Sì 3|

1. Per serializzare, è necessario chiamare in modo esplicito la funzione `Serialize` dell'oggetto raccolta. Per eseguire il dump, è necessario chiamare esplicitamente la funzione `Dump`. Non è possibile usare il modulo `ar << collObj` per la serializzazione o il modulo `dmp` `<< collObj` per eseguire il dump.

2. La serializzabilità dipende infatti dal tipo di raccolta sottostante. Ad esempio, se una matrice di puntatori tipizzata è basata su `CObArray`, è serializzabile, mentre se è basata su `CPtrArray`, non è serializzabile. In generale, le classi "Ptr" non possono essere serializzate.

3. Se in questa colonna è contrassegnato Sì, una classe Collection non basata su modelli è indipendente dai tipi purché usata per lo scopo previsto. Ad esempio, se si archiviano byte in una classe `CByteArray`, la matrice è indipendente dai tipi. Al contrario, se si usa per archiviare caratteri, la sua indipendenza dai tipi è meno sicura.

## <a name="see-also"></a>Vedere anche

[Raccolte](../mfc/collections.md)<br/>
[Classi basate su modello](../mfc/template-based-classes.md)<br/>
[Procedura: Creazione di una raccolta indipendente dai tipi](../mfc/how-to-make-a-type-safe-collection.md)<br/>
[Accesso a tutti i membri di una raccolta](../mfc/accessing-all-members-of-a-collection.md)
