---
title: Due modi per creare un oggetto CArchive
ms.date: 11/04/2016
helpviewer_keywords:
- CArchive class [MFC], closing CArchive objects
- CArchive objects [MFC], closing
- I/O [MFC], creating CArchive objects
- serialization [MFC], CArchive class
- CArchive objects [MFC]
- storage [MFC], CArchive class [MFC]
- data storage [MFC], CArchive class
- CArchive class [MFC], constructor
ms.assetid: aefa28ce-b55c-40dc-9e42-5f038030985d
ms.openlocfilehash: 71592584d4ecdd3169ad894861a97fa668c04ee8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370954"
---
# <a name="two-ways-to-create-a-carchive-object"></a>Due modi per creare un oggetto CArchive

Esistono due modi per `CArchive` creare un oggetto:

- [Creazione implicita di un oggetto CArchive tramite il framework](#_core_implicit_creation_of_a_carchive_object_via_the_framework)

- [Creazione esplicita di un oggetto CArchiveExplicit creation of a CArchive object](#_core_explicit_creation_of_a_carchive_object)

## <a name="implicit-creation-of-a-carchive-object-via-the-framework"></a><a name="_core_implicit_creation_of_a_carchive_object_via_the_framework"></a>Creazione implicita di un oggetto CArchive tramite il framework

Il modo più comune e più semplice consiste `CArchive` nel consentire al framework di creare un oggetto per il documento per conto dei comandi Salva, Salva con nome e Apri del menu File.

Ecco cosa fa il framework quando l'utente dell'applicazione emette il comando Salva con nome dal menu File:

1. Presenta la finestra di dialogo **Salva con nome** e ottiene il nome del file dall'utente.

1. Apre il file indicato dall'utente come `CFile` oggetto.

1. Crea `CArchive` un oggetto che `CFile` punta a questo oggetto. Durante la `CArchive` creazione dell'oggetto, il framework imposta la modalità per "archiviare" (scrivere, serializzare), anziché "caricare" (leggere, deserializzare).

1. Chiama `Serialize` la funzione `CDocument`definita nella classe derivata, `CArchive` passando un riferimento all'oggetto.

La funzione `Serialize` del documento scrive `CArchive` quindi i dati nell'oggetto, come spiegato a breve. Al ritorno `Serialize` dalla funzione, il `CArchive` framework elimina `CFile` l'oggetto e quindi l'oggetto.

Pertanto, se si lascia `CArchive` che il framework crei l'oggetto per `Serialize` il documento, è necessario implementare la funzione del documento che scrive e legge da e verso l'archivio. È inoltre necessario `Serialize` implementare per tutti `CObject`gli `Serialize` oggetti derivati che la funzione del documento a sua volta serializza direttamente o indirettamente.

## <a name="explicit-creation-of-a-carchive-object"></a><a name="_core_explicit_creation_of_a_carchive_object"></a>Creazione esplicita di un oggetto CArchiveExplicit Creation of a CArchive Object

Oltre a serializzare un documento tramite il framework, `CArchive` ci sono altre occasioni in cui potrebbe essere necessario un oggetto. Ad esempio, è possibile serializzare i dati da `CSharedFile` e verso gli Appunti, rappresentati da un oggetto . In alternativa, è possibile utilizzare un'interfaccia utente per il salvataggio di un file diverso da quello offerto dal framework. In questo caso, è `CArchive` possibile creare in modo esplicito un oggetto. Questa operazione viene eseguito allo stesso modo del framework, utilizzando la procedura seguente.

#### <a name="to-explicitly-create-a-carchive-object"></a>Per creare in modo esplicito un oggetto CArchiveTo explicitly create a CArchive object

1. Costruire `CFile` un oggetto o `CFile`un oggetto derivato da .

1. Passare `CFile` l'oggetto al `CArchive`costruttore per , come illustrato nell'esempio seguente:

   [!code-cpp[NVC_MFCSerialization#5](../mfc/codesnippet/cpp/two-ways-to-create-a-carchive-object_1.cpp)]

   Il secondo argomento `CArchive` del costruttore è un valore enumerato che specifica se l'archivio verrà utilizzato per l'archiviazione o il caricamento di dati in o dal file. La `Serialize` funzione di un oggetto controlla `IsStoring` questo stato chiamando la funzione per l'oggetto archivio.

Al termine dell'archiviazione o del `CArchive` caricamento dei dati da o verso l'oggetto, chiuderlo. Anche `CArchive` se `CFile`gli oggetti (e ) chiuderanno automaticamente l'archivio (e il file), è buona norma farlo in modo esplicito poiché semplifica il recupero dagli errori. Per ulteriori informazioni sulla gestione degli errori, vedere l'articolo [eccezioni: intercettazione ed eliminazione di eccezioni](../mfc/exceptions-catching-and-deleting-exceptions.md).

#### <a name="to-close-the-carchive-object"></a>Per chiudere l'oggetto CArchive

1. Nell'esempio seguente viene illustrato `CArchive` come chiudere l'oggetto:

   [!code-cpp[NVC_MFCSerialization#6](../mfc/codesnippet/cpp/two-ways-to-create-a-carchive-object_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)
