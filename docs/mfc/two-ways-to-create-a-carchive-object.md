---
title: Due modi per creare un oggetto CArchive | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: CArchive
dev_langs: C++
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
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1b1db549544d421600ed6dae1a8a987006c2ab6c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="two-ways-to-create-a-carchive-object"></a>Due modi per creare un oggetto CArchive
Esistono due modi per creare un `CArchive` oggetto:  
  
-   [Creazione implicita di un oggetto CArchive tramite il framework](#_core_implicit_creation_of_a_carchive_object_via_the_framework)  
  
-   [Creazione esplicita di un oggetto CArchive](#_core_explicit_creation_of_a_carchive_object)  
  
##  <a name="_core_implicit_creation_of_a_carchive_object_via_the_framework"></a>Creazione implicita di un oggetto CArchive tramite il Framework  
 È il modo più comune e più semplice, per consentire il framework di creare un `CArchive` oggetto per il documento per conto di Save, Salva con nome e i comandi Apri dal menu File.  
  
 Ecco cosa eseguite dal framework quando l'utente dell'applicazione esegue il comando Salva dal menu File:  
  
1.  Viene presentato il **Salva con nome** la finestra di dialogo e ottiene il nome del file da parte dell'utente.  
  
2.  Apre il file denominato dall'utente come un `CFile` oggetto.  
  
3.  Crea un `CArchive` oggetto che fa riferimento a questo `CFile` oggetto. La creazione di `CArchive` dell'oggetto, il framework imposta la modalità di "archiviazione" (scrivere, serializzare), anziché "caricamento" (lettura, deserializzare).  
  
4.  Chiamate di `Serialize` funzione definita nel **CDocument**-passando un riferimento alla classe derivata la `CArchive` oggetto.  
  
 Il documento `Serialize` funzione quindi scrive i dati per il `CArchive` dell'oggetto, come spiegato più avanti. Al momento della restituzione dal `Serialize` funzione, il framework Elimina il `CArchive` oggetto e quindi la `CFile` oggetto.  
  
 Pertanto, se si sceglie la creazione di `CArchive` dell'oggetto per il documento, è necessario eseguire è l'implementazione del documento `Serialize` funzione che scrive e legge da e verso l'archivio. È inoltre necessario implementare `Serialize` per qualsiasi `CObject`-oggetti derivati che il documento `Serialize` (funzione) serializzati a sua volta direttamente o indirettamente.  
  
##  <a name="_core_explicit_creation_of_a_carchive_object"></a>Creazione esplicita di un oggetto CArchive  
 Oltre alla serializzazione di un documento tramite il framework, esistono altri casi potrebbe essere necessario un `CArchive` oggetto. Potrebbe ad esempio, si desidera serializzare i dati da e verso gli Appunti, rappresentato da un `CSharedFile` oggetto. In alternativa, si consiglia di utilizzare un'interfaccia utente per il salvataggio di un file che è diverso da quello fornito dal framework. In questo caso, è possibile creare in modo esplicito un `CArchive` oggetto. A tale scopo allo stesso modo il framework, con la procedura seguente.  
  
#### <a name="to-explicitly-create-a-carchive-object"></a>Per creare in modo esplicito un oggetto CArchive  
  
1.  Costruire un `CFile` oggetto o un oggetto derivato da `CFile`.  
  
2.  Passare il `CFile` oggetto per il costruttore `CArchive`, come illustrato nell'esempio seguente:  
  
     [!code-cpp[NVC_MFCSerialization#5](../mfc/codesnippet/cpp/two-ways-to-create-a-carchive-object_1.cpp)]  
  
     Il secondo argomento per il `CArchive` costruttore è un valore enumerato che specifica se l'archivio verrà usato per l'archiviazione o il caricamento di dati o dal file. Il `Serialize` funzione di un oggetto questo stato viene controllato tramite la chiamata di `IsStoring` funzione per l'oggetto di archiviazione.  
  
 Dopo aver terminato l'archiviazione o il caricamento dei dati da o verso il `CArchive` dell'oggetto, chiuderlo. Sebbene il `CArchive` (e `CFile`) oggetti verranno chiusa automaticamente l'archivio (e file), è consigliabile farlo in modo esplicito in quanto semplifica il recupero da errori. Per ulteriori informazioni sulla gestione degli errori, vedere l'articolo [eccezioni: eccezioni di intercettazione ed eliminazione](../mfc/exceptions-catching-and-deleting-exceptions.md).  
  
#### <a name="to-close-the-carchive-object"></a>Per chiudere l'oggetto CArchive  
  
1.  Nell'esempio seguente viene illustrato come chiudere la `CArchive` oggetto:  
  
     [!code-cpp[NVC_MFCSerialization#6](../mfc/codesnippet/cpp/two-ways-to-create-a-carchive-object_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)

