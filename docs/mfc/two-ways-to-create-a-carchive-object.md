---
title: "Due modi per creare un oggetto CArchive | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CArchive"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CArchive (classe), chiusura di oggetti CArchive"
  - "CArchive (classe), costruttore"
  - "oggetti CArchive"
  - "oggetti CArchive, chiusura"
  - "archivio dati [C++], CArchive (classe)"
  - "I/O [MFC], creazione di oggetti CArchive"
  - "serializzazione [C++], CArchive (classe)"
  - "archiviazione [C++], CArchive (classe)"
ms.assetid: aefa28ce-b55c-40dc-9e42-5f038030985d
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Due modi per creare un oggetto CArchive
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esistono due modi per creare un oggetto di `CArchive` :  
  
-   [Creazione implicita di un oggetto CArchive tramite il framework](#_core_implicit_creation_of_a_carchive_object_via_the_framework)  
  
-   [Creazione esplicita di un oggetto CArchive](#_core_explicit_creation_of_a_carchive_object)  
  
##  <a name="_core_implicit_creation_of_a_carchive_object_via_the_framework"></a> Creazione implicita di un oggetto CArchive tramite Framework  
 La più comune e il più semplice, modalità è consigliabile lasciare che il framework creare un oggetto di `CArchive` per il documento per conto di salva, salva e aprire i comandi del menu File.  
  
 Ecco cosa il framework è quando l'utente dell'applicazione pubblica comando salva con nome dal menu File:  
  
1.  Verifica la finestra di dialogo **Salva come** e ottiene il nome del file dall'utente.  
  
2.  Aprire il file denominato dall'utente come oggetto di `CFile`.  
  
3.  Crea un oggetto di `CArchive` che punti a questo `CFile` oggetto.  Quando si crea l'oggetto di `CArchive`, il framework imposta la modalità "in" \(write, serializzare\), anziché "al caricamento" \(read, deserializzarlo\).  
  
4.  Chiama la funzione di `Serialize` definita nel **CDocument**\- classe derivata, passando un riferimento all'oggetto di `CArchive`.  
  
 La funzione di `Serialize` del documento quindi scrive dati nell'oggetto di `CArchive`, come spiegato precedentemente.  Su reimposta dalla funzione di `Serialize`, il framework elimina l'oggetto di `CArchive` quindi l'oggetto di `CFile`.  
  
 Pertanto, se si lascia il framework creare l'oggetto di `CArchive` per il documento, è sufficiente consiste nell'implementazione della funzione di `Serialize` di documento che scrive e letto da e verso l'archivio.  È inoltre necessario implementare `Serialize` per qualsiasi `CObject`\- oggetti derivati dalla funzione di `Serialize` del documento a sua volta serializza direttamente o indirettamente.  
  
##  <a name="_core_explicit_creation_of_a_carchive_object"></a> Creazione esplicita di un oggetto CArchive  
 Oltre a serializzare un documento mediante il framework, esistono altre occasioni quando è possibile richiedere un oggetto di `CArchive`.  Ad esempio, è possibile serializzare i dati e dagli Appunti, rappresentati da un oggetto di `CSharedFile`.  In alternativa, è possibile utilizzare un'interfaccia utente per salvare un file diverso da quello offerto dal framework.  In questo caso, è possibile creare in modo esplicito un oggetto di `CArchive`.  Questa operazione viene eseguita in modo che il framework è possibile, tramite la procedura seguente.  
  
#### Per creare esplicitamente un oggetto CArchive  
  
1.  Costruisce un oggetto di `CFile` o un oggetto derivato da `CFile`.  
  
2.  Passare l'oggetto di `CFile` al costruttore per `CArchive`, come illustrato nel seguente esempio:  
  
     [!code-cpp[NVC_MFCSerialization#5](../mfc/codesnippet/CPP/two-ways-to-create-a-carchive-object_1.cpp)]  
  
     Il secondo argomento del costruttore di `CArchive` è un valore enumerato che specifica se l'archivio verrà utilizzato per archiviare o il caricamento dei dati o dal file.  La funzione di `Serialize` di un oggetto controlla questo stato chiamando la funzione di `IsStoring` per l'oggetto store.  
  
 Quando si archiviano completato o caricamento dei dati o da `CArchive` oggetto, chiuderlo.  Sebbene gli oggetti `CFile` e \( `CArchive` \) automaticamente chiudano l'archivio e \(file\), è consigliabile in modo esplicito esegue questa operazione rende poiché il recupero dagli errori più semplice.  Per ulteriori informazioni sulla gestione degli errori, vedere l'articolo [Eccezioni: Rilevazione e l'eliminazione delle eccezioni](../mfc/exceptions-catching-and-deleting-exceptions.md).  
  
#### Per chiudere un oggetto CArchive  
  
1.  Nell'esempio seguente viene illustrato come terminare l'oggetto di `CArchive` :  
  
     [!code-cpp[NVC_MFCSerialization#6](../mfc/codesnippet/CPP/two-ways-to-create-a-carchive-object_2.cpp)]  
  
## Vedere anche  
 [Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)