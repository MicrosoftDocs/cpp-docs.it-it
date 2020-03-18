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
ms.openlocfilehash: 38642906b0973730149ed0de5381519f06d69fe5
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79442033"
---
# <a name="two-ways-to-create-a-carchive-object"></a>Due modi per creare un oggetto CArchive

Esistono due modi per creare un oggetto `CArchive`:

- [Creazione implicita di un oggetto CArchive tramite il Framework](#_core_implicit_creation_of_a_carchive_object_via_the_framework)

- [Creazione esplicita di un oggetto CArchive](#_core_explicit_creation_of_a_carchive_object)

##  <a name="_core_implicit_creation_of_a_carchive_object_via_the_framework"></a>Creazione implicita di un oggetto CArchive tramite il Framework

Il modo più comune e più semplice consiste nel consentire al Framework di creare un oggetto `CArchive` per il documento per conto dei comandi Salva, Salva con nome e Apri nel menu file.

Ecco cosa fa il Framework quando l'utente dell'applicazione rilascia il comando Salva con nome dal menu file:

1. Visualizza la finestra di dialogo **Salva con** nome e ottiene il nome del file dall'utente.

1. Apre il file denominato dall'utente come oggetto `CFile`.

1. Crea un `CArchive` oggetto che punta a questo oggetto `CFile`. Quando si crea l'oggetto `CArchive`, il Framework imposta la modalità su "Store" (Write, Serialize), anziché "Load" (Read, Deserialize).

1. Chiama la funzione `Serialize` definita nella classe derivata da `CDocument`, passando un riferimento all'oggetto `CArchive`.

La funzione `Serialize` del documento scrive quindi i dati nell'oggetto `CArchive`, come illustrato a breve. Al ritorno dalla funzione `Serialize`, il Framework Elimina l'oggetto `CArchive` e quindi l'oggetto `CFile`.

Se quindi si lascia che il framework crei l'oggetto `CArchive` per il documento, è sufficiente implementare la funzione di `Serialize` del documento che scrive e legge da e verso l'archivio. È anche necessario implementare `Serialize` per tutti gli oggetti derivati da `CObject`che la funzione `Serialize` del documento a sua volta serializza direttamente o indirettamente.

##  <a name="_core_explicit_creation_of_a_carchive_object"></a>Creazione esplicita di un oggetto CArchive

Oltre a serializzare un documento tramite il Framework, in altre occasioni potrebbe essere necessario un oggetto `CArchive`. È ad esempio possibile che si voglia serializzare i dati da e verso gli appunti, rappresentati da un oggetto `CSharedFile`. In alternativa, è consigliabile usare un'interfaccia utente per salvare un file diverso da quello offerto dal Framework. In questo caso, è possibile creare in modo esplicito un oggetto `CArchive`. Questa operazione viene eseguita nello stesso modo del Framework, usando la procedura seguente.

#### <a name="to-explicitly-create-a-carchive-object"></a>Per creare in modo esplicito un oggetto CArchive

1. Costruisce un oggetto `CFile` o un oggetto derivato da `CFile`.

1. Passare l'oggetto `CFile` al costruttore per `CArchive`, come illustrato nell'esempio seguente:

   [!code-cpp[NVC_MFCSerialization#5](../mfc/codesnippet/cpp/two-ways-to-create-a-carchive-object_1.cpp)]

   Il secondo argomento del costruttore `CArchive` è un valore enumerato che specifica se l'archivio verrà usato per archiviare o caricare dati da o verso il file. La funzione `Serialize` di un oggetto controlla questo stato chiamando la funzione `IsStoring` per l'oggetto Archive.

Al termine dell'archiviazione o del caricamento dei dati da o verso l'oggetto `CArchive`, chiuderlo. Sebbene gli oggetti `CArchive` (e `CFile`) chiudano automaticamente l'archivio (e il file), è consigliabile eseguire questa operazione in modo esplicito perché semplifica il ripristino dagli errori. Per ulteriori informazioni sulla gestione degli errori, vedere l'articolo [eccezioni: catching and Deleting Exceptions](../mfc/exceptions-catching-and-deleting-exceptions.md).

#### <a name="to-close-the-carchive-object"></a>Per chiudere l'oggetto CArchive

1. Nell'esempio seguente viene illustrato come chiudere l'oggetto `CArchive`:

   [!code-cpp[NVC_MFCSerialization#6](../mfc/codesnippet/cpp/two-ways-to-create-a-carchive-object_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)
