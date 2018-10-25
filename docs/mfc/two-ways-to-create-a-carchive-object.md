---
title: Due modi per creare un oggetto CArchive | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CArchive
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 630cdd1614aa19ec3a5a654d7dc4bfe7336ce027
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50080585"
---
# <a name="two-ways-to-create-a-carchive-object"></a>Due modi per creare un oggetto CArchive

Esistono due modi per creare un `CArchive` oggetto:

- [Creazione implicita di un oggetto CArchive tramite il framework](#_core_implicit_creation_of_a_carchive_object_via_the_framework)

- [Creazione esplicita di un oggetto CArchive](#_core_explicit_creation_of_a_carchive_object)

##  <a name="_core_implicit_creation_of_a_carchive_object_via_the_framework"></a> Creazione implicita di un oggetto CArchive tramite il Framework

È il modo più comune e più semplice, per consentire il framework di creare un `CArchive` oggetto per il documento per conto di salvataggio, Salva con nome e comandi aperti dal menu File.

Ecco cosa eseguite dal framework quando l'utente dell'applicazione esegue il comando Salva dal menu File:

1. Presenta la **Salva con nome** nella finestra di dialogo e ottiene il nome del file da parte dell'utente.

1. Apre il file denominato dall'utente come un `CFile` oggetto.

1. Crea una `CArchive` che fa riferimento a questo oggetto `CFile` oggetto. Nella creazione di `CArchive` dell'oggetto, il framework imposta la modalità "store" (scrittura, serializzare), invece di "caricamento" (lettura, la deserializzazione).

1. Chiama il `Serialize` funzione definita nel `CDocument`-derivato (classe), passare un riferimento al `CArchive` oggetto.

Il documento `Serialize` funzione scrive quindi i dati per il `CArchive` dell'oggetto, come illustrato tra breve. Al momento della restituzione dalle `Serialize` Elimina definitivamente il framework di funzione, il `CArchive` oggetto e quindi il `CFile` oggetto.

Di conseguenza, se si lascia il framework crea il `CArchive` dell'oggetto per il documento, è sufficiente eseguire è l'implementazione del documento `Serialize` funzione che scrive e legge da e verso l'archivio. È inoltre necessario implementare `Serialize` per qualsiasi `CObject`-oggetti derivati che il documento `Serialize` funzione serializza a sua volta direttamente o indirettamente.

##  <a name="_core_explicit_creation_of_a_carchive_object"></a> Creazione esplicita di un oggetto CArchive

Oltre a potere serializzare un documento tramite il framework, esistono altre situazioni potrebbe essere necessario un `CArchive` oggetto. Potrebbe ad esempio, si desidera serializzare i dati da e verso gli Appunti, rappresentato da un `CSharedFile` oggetto. In alternativa, è possibile utilizzare un'interfaccia utente per il salvataggio di un file che è diverso da quello offerto dal framework. In questo caso, è possibile creare in modo esplicito un `CArchive` oggetto. A tale scopo allo stesso modo che il framework esegue, usando la procedura seguente.

#### <a name="to-explicitly-create-a-carchive-object"></a>Creare in modo esplicito un oggetto CArchive

1. Creare un `CFile` oggetto o un oggetto derivato da `CFile`.

1. Passare il `CFile` al costruttore per oggetti `CArchive`, come illustrato nell'esempio seguente:

   [!code-cpp[NVC_MFCSerialization#5](../mfc/codesnippet/cpp/two-ways-to-create-a-carchive-object_1.cpp)]

   Il secondo argomento di `CArchive` costruttore è un valore enumerato che specifica se l'archivio verrà usata per l'archiviazione o il caricamento di dati verso e dal file. Il `Serialize` funzione di un oggetto questo stato viene controllato tramite la chiamata di `IsStoring` funzione per l'oggetto di archiviazione.

Dopo aver terminato l'archiviazione o il caricamento dei dati da o verso il `CArchive` dell'oggetto, chiuderlo. Anche se il `CArchive` (e `CFile`) oggetti chiuderà automaticamente l'archivio (e file), è consigliabile farlo in modo esplicito poiché semplifica il recupero da errori. Per altre informazioni sulla gestione degli errori, vedere l'articolo [eccezioni: eccezioni di intercettazione ed eliminazione](../mfc/exceptions-catching-and-deleting-exceptions.md).

#### <a name="to-close-the-carchive-object"></a>Per chiudere l'oggetto CArchive

1. Nell'esempio seguente viene illustrato come chiudere il `CArchive` oggetto:

   [!code-cpp[NVC_MFCSerialization#6](../mfc/codesnippet/cpp/two-ways-to-create-a-carchive-object_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)

