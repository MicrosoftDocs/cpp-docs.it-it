---
description: 'Altre informazioni su: due modi per creare un oggetto CArchive'
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
ms.openlocfilehash: 21a4321eef2d93cf0b37d157f57e12fa1ba940c8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97263855"
---
# <a name="two-ways-to-create-a-carchive-object"></a>Due modi per creare un oggetto CArchive

Esistono due modi per creare un `CArchive` oggetto:

- [Creazione implicita di un oggetto CArchive tramite il Framework](#_core_implicit_creation_of_a_carchive_object_via_the_framework)

- [Creazione esplicita di un oggetto CArchive](#_core_explicit_creation_of_a_carchive_object)

## <a name="implicit-creation-of-a-carchive-object-via-the-framework"></a><a name="_core_implicit_creation_of_a_carchive_object_via_the_framework"></a> Creazione implicita di un oggetto CArchive tramite il Framework

Il modo più comune e più semplice consiste nel consentire al Framework di creare un `CArchive` oggetto per il documento per conto dei comandi Salva, Salva con nome e Apri nel menu file.

Ecco cosa fa il Framework quando l'utente dell'applicazione rilascia il comando Salva con nome dal menu file:

1. Visualizza la finestra di dialogo **Salva con** nome e ottiene il nome del file dall'utente.

1. Apre il file denominato dall'utente come un `CFile` oggetto.

1. Crea un `CArchive` oggetto che punta a questo `CFile` oggetto. Quando si crea l' `CArchive` oggetto, il Framework imposta la modalità su "Store" (Write, Serialize), anziché "Load" (Read, Deserialize).

1. Chiama la `Serialize` funzione definita nella `CDocument` classe derivata da, passando un riferimento all' `CArchive` oggetto.

La funzione del documento `Serialize` scrive quindi i dati nell' `CArchive` oggetto, come illustrato a breve. Al ritorno dalla `Serialize` funzione, il Framework Elimina l' `CArchive` oggetto e quindi l' `CFile` oggetto.

Se quindi si lascia che il framework crei l' `CArchive` oggetto per il documento, è sufficiente implementare la funzione del documento `Serialize` che scrive e legge da e verso l'archivio. È anche necessario implementare `Serialize` per tutti `CObject` gli oggetti derivati da che la `Serialize` funzione del documento a sua volta serializza direttamente o indirettamente.

## <a name="explicit-creation-of-a-carchive-object"></a><a name="_core_explicit_creation_of_a_carchive_object"></a> Creazione esplicita di un oggetto CArchive

Oltre a serializzare un documento tramite il Framework, in altre occasioni potrebbe essere necessario un `CArchive` oggetto. È ad esempio possibile che si voglia serializzare i dati da e verso gli appunti, rappresentati da un `CSharedFile` oggetto. In alternativa, è consigliabile usare un'interfaccia utente per salvare un file diverso da quello offerto dal Framework. In questo caso, è possibile creare in modo esplicito un `CArchive` oggetto. Questa operazione viene eseguita nello stesso modo del Framework, usando la procedura seguente.

#### <a name="to-explicitly-create-a-carchive-object"></a>Per creare in modo esplicito un oggetto CArchive

1. Costruisce un `CFile` oggetto o un oggetto derivato da `CFile` .

1. Passare l' `CFile` oggetto al costruttore per `CArchive` , come illustrato nell'esempio seguente:

   [!code-cpp[NVC_MFCSerialization#5](../mfc/codesnippet/cpp/two-ways-to-create-a-carchive-object_1.cpp)]

   Il secondo argomento del `CArchive` costruttore è un valore enumerato che specifica se l'archivio verrà usato per archiviare o caricare i dati da o verso il file. La `Serialize` funzione di un oggetto controlla questo stato chiamando la `IsStoring` funzione per l'oggetto Archive.

Al termine dell'archiviazione o del caricamento dei dati da o verso l' `CArchive` oggetto, chiuderlo. Sebbene gli `CArchive` oggetti (e `CFile` ) chiudano automaticamente l'archivio (e il file), è consigliabile eseguire questa operazione in modo esplicito poiché semplifica il ripristino dagli errori. Per ulteriori informazioni sulla gestione degli errori, vedere l'articolo [eccezioni: catching and Deleting Exceptions](../mfc/exceptions-catching-and-deleting-exceptions.md).

#### <a name="to-close-the-carchive-object"></a>Per chiudere l'oggetto CArchive

1. Nell'esempio seguente viene illustrato come chiudere l' `CArchive` oggetto:

   [!code-cpp[NVC_MFCSerialization#6](../mfc/codesnippet/cpp/two-ways-to-create-a-carchive-object_2.cpp)]

## <a name="see-also"></a>Vedi anche

[Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)
