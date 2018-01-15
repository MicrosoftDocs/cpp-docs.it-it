---
title: 'Procedura dettagliata: Creazione di un''applicazione basata su agente | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- asynchronous agents, creating
- agent class, example
ms.assetid: 730f42ce-6d58-4753-b948-fd9c9ef2ce6c
caps.latest.revision: "24"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a49c8deb9185b024dfcca977ab229bf594e05101
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="walkthrough-creating-an-agent-based-application"></a>Procedura dettagliata: Creazione di un'applicazione basata sugli agenti
In questo argomento viene descritto come creare un'applicazione basata su agente base. In questa procedura dettagliata, è possibile creare un agente che legge i dati da un file di testo in modo asincrono. L'applicazione utilizza l'algoritmo di checksum Adler-32 per il calcolo del checksum del contenuto del file.  
  
## <a name="prerequisites"></a>Prerequisiti  
 È necessario comprendere i seguenti argomenti per completare questa procedura dettagliata:  
  
- [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)  
  
- [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)  
  
- [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)  
  
- [Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)  
  
##  <a name="top"></a> Sezioni  
 Questa procedura dettagliata viene illustrato come eseguire le attività seguenti:  
  
- [Creazione dell'applicazione Console](#createapplication)  
  
- [Creazione della classe file_reader](#createagentclass)  
  
- [Utilizzo della classe file_reader nell'applicazione](#useagentclass)  
  
##  <a name="createapplication"></a>Creazione dell'applicazione Console  
 In questa sezione viene illustrato come creare un'applicazione console Visual C++ che fa riferimento ai file di intestazione che verrà utilizzato il programma.  
  
#### <a name="to-create-a-visual-c-application-by-using-the-win32-console-application-wizard"></a>Per creare un'applicazione Visual C++ tramite la creazione guidata applicazione Console Win32  
  
1.  Nel **File** menu, fare clic su **New**e quindi fare clic su **progetto** per visualizzare il **nuovo progetto** la finestra di dialogo.  
  
2.  Nel **nuovo progetto** la finestra di dialogo, seleziona il **Visual C++** nodo il **tipi di progetto** riquadro, quindi selezionare **applicazione Console Win32** nel **modelli** riquadro. Digitare un nome per il progetto, ad esempio, `BasicAgent`, quindi fare clic su **OK** per visualizzare il **Creazione guidata di applicazione Console Win32**.  
  
3.  Nel **Creazione guidata di applicazione Console Win32** la finestra di dialogo, fare clic su **fine**.  
  
4.  In stdafx. h, aggiungere il codice seguente.  
  
 [!code-cpp[concrt-basic-agent#1](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_1.h)]  
  
     Il file di intestazione Agents. h contiene le funzionalità del [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md) classe.  
  
5.  Verificare che l'applicazione è stato creato correttamente per la creazione e l'esecuzione. Per compilare l'applicazione, scegliere il **compilare** menu, fare clic su **Compila soluzione**. Se l'applicazione viene compilata correttamente, eseguire l'applicazione facendo clic su **Avvia debug** sul **Debug** menu.  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="createagentclass"></a>Creazione della classe file_reader  
 In questa sezione viene illustrato come creare la `file_reader` classe. Il runtime Pianifica ogni agente per eseguire operazioni in un contesto specifico. Pertanto, è possibile creare un agente che esegue il lavoro in modo sincrono, ma che interagisce con altri componenti in modo asincrono. La `file_reader` classe legge i dati da un file di input specificato e invia i dati da tale file al componente di destinazione specificato.  
  
#### <a name="to-create-the-filereader-class"></a>Per creare la classe file_reader  
  
1.  Aggiungere un nuovo file di intestazione C++ al progetto. A tale scopo, fare doppio clic su di **file di intestazione** nodo **Esplora**, fare clic su **Aggiungi**e quindi fare clic su **nuovo elemento**. Nel **modelli** riquadro, selezionare **File di intestazione (h)**. Nel **Aggiungi nuovo elemento** della finestra di dialogo tipo `file_reader.h` nel **nome** casella e quindi fare clic su **Aggiungi**.  
  
2.  In file_reader, aggiungere il codice seguente.  
  
 [!code-cpp[concrt-basic-agent#17](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_2.h)]  
  
3.  In file_reader, creare una classe denominata `file_reader` che deriva da `agent`.  
  
 [!code-cpp[concrt-basic-agent#2](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_3.h)]  
  
4.  Aggiungere i seguenti membri di dati per il `private` sezione della classe.  
  
 [!code-cpp[concrt-basic-agent#3](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_4.h)]  
  
     Il `_file_name` membro è il nome del file da cui legge l'agente. Il `_target` membro è un [Concurrency:: ITarget](../../parallel/concrt/reference/itarget-class.md) che l'agente scrive il contenuto del file dell'oggetto. Il `_error` membro gestisce gli errori che si verifica durante il ciclo di vita dell'agente.  
  
5.  Aggiungere il codice seguente per il `file_reader` costruttori per la `public` sezione la `file_reader` classe.  
  
 [!code-cpp[concrt-basic-agent#4](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_5.h)]  
  
     Ogni overload del costruttore imposta la `file_reader` membri dati. L'overload del costruttore secondo e terzo consente all'applicazione di utilizzare un'utilità di pianificazione specifico con l'agente. Il primo overload utilizza l'utilità di pianificazione predefinita con l'agente.  
  
6.  Aggiungere il `get_error` metodo alla sezione pubblica del `file_reader` classe.  
  
 [!code-cpp[concrt-basic-agent#5](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_6.h)]  
  
     Il `get_error` che consente di recuperare qualsiasi errore che si verifica durante il ciclo di vita dell'agente.  
  

7.  Implementare il [concurrency::agent::run](reference/agent-class.md#run) metodo il `protected` sezione della classe.  

  
 [!code-cpp[concrt-basic-agent#6](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_7.h)]  
  
Il `run` metodo apre il file e legge i dati da esso. Il `run` metodo utilizza la gestione delle eccezioni per acquisire gli errori che si verificano durante l'elaborazione del file.  
  
   Ogni volta che legge i dati dal file, questo metodo chiama il [Concurrency:: asend](reference/concurrency-namespace-functions.md#asend) funzione per inviare i dati nel buffer di destinazione. Invia una stringa vuota al buffer di destinazione per indicare la fine dell'elaborazione.  

  
 Nell'esempio seguente viene illustrato il contenuto completo di file_reader.  
  
 [!code-cpp[concrt-basic-agent#7](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_8.h)]  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="useagentclass"></a>Utilizzo della classe file_reader nell'applicazione  
 In questa sezione viene illustrato come utilizzare il `file_reader` per leggere il contenuto di un file di testo. Viene inoltre illustrato come creare un [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) oggetto che riceve i dati del file e calcola il relativo checksum Adler-32.  
  
#### <a name="to-use-the-filereader-class-in-your-application"></a>Per utilizzare la classe file_reader nell'applicazione  
  
1.  In BasicAgent., aggiungere la seguente `#include` istruzione.  
  
 [!code-cpp[concrt-basic-agent#8](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_9.cpp)]  
  
2.  In BasicAgent., aggiungere la seguente `using` direttive.  
  
 [!code-cpp[concrt-basic-agent#9](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_10.cpp)]  
  
3.  Nel `_tmain` funzionamento, creare un [Concurrency:: event](../../parallel/concrt/reference/event-class.md) oggetto che segnala la fine dell'elaborazione.  
  
 [!code-cpp[concrt-basic-agent#10](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_11.cpp)]  
  
4.  Creare un `call` oggetto che aggiorna il valore di checksum quando riceve i dati.  
  
 [!code-cpp[concrt-basic-agent#11](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_12.cpp)]  
  
     Questo `call` oggetto imposta inoltre il `event` quando riceve una stringa vuota per segnalare la fine dell'elaborazione dell'oggetto.  
  
5.  Creare un `file_reader` oggetto che legge dal file test.txt e scrive il contenuto del file per il `call` oggetto.  
  
 [!code-cpp[concrt-basic-agent#12](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_13.cpp)]  
  
6.  Avviare l'agente e attendere il completamento.  
  
 [!code-cpp[concrt-basic-agent#13](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_14.cpp)]  
  
7.  Attendere il `call` riceva tutti i dati e di fine dell'oggetto.  
  
 [!code-cpp[concrt-basic-agent#14](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_15.cpp)]  
  
8.  Controllare il lettore di file per gli errori. Se si è verificato alcun errore, calcolare la somma Adler-32 e stampare la somma nella console.  
  
 [!code-cpp[concrt-basic-agent#15](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_16.cpp)]  
  
 Nell'esempio seguente viene illustrato il file BasicAgent completo.  
  
 [!code-cpp[concrt-basic-agent#16](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_17.cpp)]  
  
 [[Torna all'inizio](#top)]  
  
## <a name="sample-input"></a>Input di esempio  
 Si tratta del contenuto di esempio di text.txt il file di input:  
  
```Output  
The quick brown fox  
jumps  
over the lazy dog  
```  
  
## <a name="sample-output"></a>Esempio di output  
 Se utilizzato con l'input di esempio, il programma produce il seguente output:  
  
```Output  
Adler-32 sum is fefb0d75  
```  
  
## <a name="robust-programming"></a>Programmazione efficiente  
 Per impedire l'accesso simultaneo ai membri dati, è consigliabile aggiungere i metodi che vengono eseguite per la `protected` o `private` sezione della classe. Aggiungere solo i metodi che inviano o ricevono messaggi da e verso l'agente di `public` sezione della classe.  
  

 Chiamare sempre il [Concurrency:: agent::](reference/agent-class.md#done) metodo per spostare lo stato completato dell'agente. Chiamare questo metodo in genere prima della restituzione dal `run` metodo.  

  
## <a name="next-steps"></a>Passaggi successivi  
 Per un altro esempio di un'applicazione basata sugli agenti, vedere [procedura dettagliata: utilizzo della classe join per impedire un Deadlock](../../parallel/concrt/walkthrough-using-join-to-prevent-deadlock.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)   
 [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)   
 [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)   
 [Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)   
 [Procedura dettagliata: uso della classe join per impedire un deadlock](../../parallel/concrt/walkthrough-using-join-to-prevent-deadlock.md)

