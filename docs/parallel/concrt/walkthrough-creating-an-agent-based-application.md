---
title: "Procedura dettagliata: Creazione di un&#39;applicazione basata sugli agenti | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "agenti asincroni, creazione"
  - "agent (classe), esempio"
ms.assetid: 730f42ce-6d58-4753-b948-fd9c9ef2ce6c
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# Procedura dettagliata: Creazione di un&#39;applicazione basata sugli agenti
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene descritto come creare un'applicazione di base basata sugli agenti.  In questa procedura dettagliata è possibile creare un agente che legge i dati da un file di testo in modo asincrono.  L'applicazione utilizza l'algoritmo di checksum Adler\-32 per calcolare il checksum del contenuto del file.  
  
## Prerequisiti  
 Per completare questa procedura dettagliata, è necessario comprendere gli argomenti seguenti:  
  
-   [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)  
  
-   [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)  
  
-   [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)  
  
-   [Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)  
  
##  <a name="top"></a> Sezioni  
 In questa procedura dettagliata viene illustrato come eseguire le attività seguenti:  
  
-   [Creazione dell'applicazione console](#createApplication)  
  
-   [Creazione della classe file\_reader](#createAgentClass)  
  
-   [Utilizzo della classe file\_reader nell'applicazione](#useAgentClass)  
  
##  <a name="createApplication"></a> Creazione dell'applicazione console  
 In questa sezione viene illustrato come creare un'applicazione console Visual C\+\+ che fa riferimento ai file di intestazione utilizzati dal programma.  
  
#### Per creare un'applicazione Visual C\+\+ tramite la Creazione guidata applicazione console Win32  
  
1.  Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**. Verrà visualizzata la finestra di dialogo **Nuovo progetto**.  
  
2.  Nella riquadro **Tipi progetto** della finestra di dialogo **Nuovo progetto** selezionare il nodo **Visual C\+\+**, quindi selezionare **Progetto console Win32** nel riquadro **Modelli**.  Digitare un nome per il progetto, ad esempio, `BasicAgent`, quindi fa clic **su OK** per visualizzare la **Creazione guidata applicazione console Win32**.  
  
3.  Nella finestra di dialogo **Creazione guidata applicazione console Win32** fare clic su **Fine**.  
  
4.  In stdafx.h aggiungere il codice seguente.  
  
     [!code-cpp[concrt-basic-agent#1](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-an-agent-based-application_1.h)]  
  
     Il file di intestazione agents.h contiene le funzionalità della classe [concurrency::agent](../../parallel/concrt/reference/agent-class.md).  
  
5.  Verificare che l'applicazione sia stata creata correttamente compilandola ed eseguendola.  Per compilare l'applicazione, scegliere **Compila soluzione** dal menu **Compila**.  Se l'applicazione viene compilata correttamente, eseguirla scegliendo **Avvia debug** dal menu **Debug**.  
  
 \[[Top](#top)\]  
  
##  <a name="createAgentClass"></a> Creazione della classe file\_reader  
 In questa sezione viene illustrato come creare la classe `file_reader`.  Il runtime pianifica ogni agente per l'esecuzione del lavoro in un contesto specifico.  Pertanto, è possibile creare un agente che esegue il lavoro in modo sincrono, ma interagisce con gli altri componenti in modo asincrono.  La classe `file_reader` legge i dati da un file di input specificato e invia i dati del file a un componente di destinazione specificato.  
  
#### Per creare la classe file\_reader  
  
1.  Aggiungere un nuovo file di intestazione C\+\+ al progetto.  A tale scopo, fare clic con il pulsante destro del mouse sul nodo **File di intestazione** in **Esplora soluzioni**, scegliere **Aggiungi**, quindi fare clic su **Nuovo elemento**.  Nel riquadro **Modelli** selezionare **File di intestazione \(.h\)**.  Nella finestra di dialogo **Aggiungi nuovo elemento** digitare `file_reader.h` nella casella **Nome**, quindi scegliere **Aggiungi**.  
  
2.  In file\_reader.h aggiungere il codice seguente.  
  
     [!code-cpp[concrt-basic-agent#17](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-an-agent-based-application_2.h)]  
  
3.  In file\_reader.h creare una classe denominata `file_reader` che deriva da `agent`.  
  
     [!code-cpp[concrt-basic-agent#2](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-an-agent-based-application_3.h)]  
  
4.  Nella sezione `private` della classe aggiungere i membri dati seguenti.  
  
     [!code-cpp[concrt-basic-agent#3](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-an-agent-based-application_4.h)]  
  
     Il membro `_file_name` è il nome file da cui legge l'agente.  Il membro `_target` è un oggetto [concurrency::ITarget](../../parallel/concrt/reference/itarget-class.md) in cui l'agente scrive il contenuto del file.  Il membro `_error` gestisce gli errori che possono verificarsi per tutta la durata dell'agente.  
  
5.  Nella sezione `public` della classe `file_reader` aggiungere il codice seguente per il costruttore `file_reader`.  
  
     [!code-cpp[concrt-basic-agent#4](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-an-agent-based-application_5.h)]  
  
     Ogni overload del costruttore imposta i membri dati `file_reader`.  Il secondo e terzo overload del costruttore consente all'applicazione di utilizzare un'utilità di pianificazione specifica con l'agente.  Il primo overload utilizza l'utilità di pianificazione predefinita con l'agente.  
  
6.  Nella sezione public della classe `file_reader` aggiungere il metodo `get_error`.  
  
     [!code-cpp[concrt-basic-agent#5](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-an-agent-based-application_6.h)]  
  
     Il metodo `get_error` recupera gli errori che possono verificarsi per tutta la durata dell'agente.  
  
7.  Nella sezione `protected` della classe implementare il metodo [concurrency::agent::run](../Topic/agent::run%20Method.md).  
  
     [!code-cpp[concrt-basic-agent#6](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-an-agent-based-application_7.h)]  
  
     Il metodo `run` apre il file da cui vengono letti i dati.  Il metodo `run` utilizza la gestione delle eccezioni per acquisire gli errori che possono verificarsi durante l'elaborazione del file.  
  
     Ogni volta che questo metodo legge i dati dal file, chiama la funzione [concurrency::asend](../Topic/asend%20Function.md) per inviare i dati al buffer di destinazione.  Per indicare la fine dell'elaborazione il metodo invia al buffer di destinazione una stringa vuota.  
  
 Nell'esempio seguente viene illustrato il contenuto completo di file\_reader.h.  
  
 [!code-cpp[concrt-basic-agent#7](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-an-agent-based-application_8.h)]  
  
 \[[Top](#top)\]  
  
##  <a name="useAgentClass"></a> Utilizzo della classe file\_reader nell'applicazione  
 In questa sezione viene illustrato come utilizzare la classe `file_reader` per leggere il contenuto di un file di testo.  Viene inoltre illustrato come creare un oggetto [concurrency::call](../../parallel/concrt/reference/call-class.md) che riceve i dati del file e calcola il relativo checksum Adler\-32.  
  
#### Per utilizzare la classe file\_reader nell'applicazione  
  
1.  In BasicAgent.cpp aggiungere l'istruzione `#include` seguente.  
  
     [!code-cpp[concrt-basic-agent#8](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-an-agent-based-application_9.cpp)]  
  
2.  In BasicAgent.cpp aggiungere le direttive `using` seguenti.  
  
     [!code-cpp[concrt-basic-agent#9](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-an-agent-based-application_10.cpp)]  
  
3.  Nella funzione `_tmain` creare un oggetto [concurrency::event](../../parallel/concrt/reference/event-class.md) che segnala la fine dell'elaborazione.  
  
     [!code-cpp[concrt-basic-agent#10](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-an-agent-based-application_11.cpp)]  
  
4.  Creare un oggetto `call` che aggiorna il checksum quando riceve i dati.  
  
     [!code-cpp[concrt-basic-agent#11](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-an-agent-based-application_12.cpp)]  
  
     L'oggetto `call` imposta inoltre l'oggetto `event` quando riceve la stringa vuota per segnalare la fine dell'elaborazione.  
  
5.  Creare un oggetto `file_reader` che legge dal file test.txt e scrive il contenuto del file nell'oggetto `call`.  
  
     [!code-cpp[concrt-basic-agent#12](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-an-agent-based-application_13.cpp)]  
  
6.  Avviare l'agente e attenderne il completamento.  
  
     [!code-cpp[concrt-basic-agent#13](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-an-agent-based-application_14.cpp)]  
  
7.  Attendere che l'oggetto `call` riceva tutti i dati e completi l'esecuzione.  
  
     [!code-cpp[concrt-basic-agent#14](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-an-agent-based-application_15.cpp)]  
  
8.  Verificare la presenza di errori nel lettore di file.  Se non si è verificato alcun errore, calcolare il checksum Adler\-32 finale e visualizzarlo sulla console.  
  
     [!code-cpp[concrt-basic-agent#15](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-an-agent-based-application_16.cpp)]  
  
 Nell'esempio seguente viene illustrato il file BasicAgent.cpp completo.  
  
 [!code-cpp[concrt-basic-agent#16](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-an-agent-based-application_17.cpp)]  
  
 \[[Top](#top)\]  
  
## Input di esempio  
 Di seguito viene riportato il contenuto di esempio del file di input text.txt:  
  
  **The quick brown fox**  
**jumps**  
**over the lazy dog**   
## Esempio di output  
 Se utilizzato con l'input di esempio, questo programma produce l'output seguente:  
  
  **Adler\-32 sum is fefb0d75**   
## Programmazione robusta  
 Per impedire l'accesso simultaneo ai membri dati, è consigliabile aggiungere i metodi che eseguono il lavoro nella sezione `protected` o `private` della classe.  Aggiungere solo i metodi che inviano o ricevono messaggi dall'agente nella sezione `public` della classe.  
  
 Chiamare sempre il metodo [concurrency::agent::done](../Topic/agent::done%20Method.md) per impostare lo stato completato dell'agente.  Questo metodo viene in genere chiamato prima del completamento del metodo `run`.  
  
## Passaggi successivi  
 Per un altro esempio di un'applicazione basata sugli agenti, vedere [Procedura dettagliata: Uso della classe join per impedire un deadlock](../../parallel/concrt/walkthrough-using-join-to-prevent-deadlock.md).  
  
## Vedere anche  
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)   
 [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)   
 [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)   
 [Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)   
 [Procedura dettagliata: Uso della classe join per impedire un deadlock](../../parallel/concrt/walkthrough-using-join-to-prevent-deadlock.md)