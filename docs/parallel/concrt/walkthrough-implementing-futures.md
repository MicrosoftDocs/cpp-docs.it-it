---
title: 'Procedura dettagliata: Implementazione di future | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- implementing futures [Concurrency Runtime]
- futures, implementing [Concurrency Runtime]
ms.assetid: 82ea75cc-aaec-4452-b10d-8abce0a87e5b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 12f2bd5897945dec0045019462c2faeb665a19e4
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33690117"
---
# <a name="walkthrough-implementing-futures"></a>Procedura dettagliata: Implementazione di date future
In questo argomento viene illustrato come implementare ritardo nell'applicazione. L'argomento viene illustrato come combinare le funzionalità esistenti nel Runtime di concorrenza in modo ancora più avanzate.  
  
> [!IMPORTANT]
>  In questo argomento viene illustrato il concetto di future a scopo dimostrativo. È consigliabile utilizzare [std:: future](../../standard-library/future-class.md) o [Concurrency:: Task](../../parallel/concrt/reference/task-class.md) quando è necessario utilizzare un'attività asincrona che calcola un valore per un uso successivo.  
  
 Oggetto *attività* è riportato un calcolo che può essere scomposta in calcoli aggiuntivi più accurati. Oggetto *future* è un'attività asincrona che calcola un valore per un uso successivo.  
  
 Per implementare il ritardo, in questo argomento definisce la `async_future` classe. Il `async_future` classe utilizza questi componenti del Runtime di concorrenza: il [Concurrency:: task_group](reference/task-group-class.md) classe e [Concurrency:: single_assignment](../../parallel/concrt/reference/single-assignment-class.md) classe. Il `async_future` classe Usa il `task_group` classe per calcolare un valore in modo asincrono e `single_assignment` classe per archiviare il risultato del calcolo. Il costruttore del `async_future` classe accetta una funzione lavoro che calcola il risultato, e `get` metodo recupera il risultato.  
  
### <a name="to-implement-the-asyncfuture-class"></a>Per implementare la classe async_future  
  
1.  Dichiarare una classe di modello denominata `async_future` contenente i parametri per il tipo di calcolo risultante. Aggiungere `public` e `private` sezioni per questa classe.  
  
 [!code-cpp[concrt-futures#2](../../parallel/concrt/codesnippet/cpp/walkthrough-implementing-futures_1.cpp)]  
  
2.  Nel `private` sezione la `async_future` classe, dichiarare un `task_group` e un `single_assignment` (membro dati).  
  
 [!code-cpp[concrt-futures#3](../../parallel/concrt/codesnippet/cpp/walkthrough-implementing-futures_2.cpp)]  
  

3.  Nel `public` sezione la `async_future` classe, implementare il costruttore. Il costruttore è un modello contenente i parametri per la funzione lavoro che calcola il risultato. Il costruttore esegue in modo asincrono la funzione lavoro nel `task_group` (membro dati) e viene utilizzato il [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) funzione per scrivere il risultato di `single_assignment` (membro dati).  
  
 [!code-cpp[concrt-futures#4](../../parallel/concrt/codesnippet/cpp/walkthrough-implementing-futures_3.cpp)]  
  
4.  Nel `public` sezione la `async_future` classe, implementare il distruttore. Il distruttore attende il completamento dell'attività.  
  
 [!code-cpp[concrt-futures#5](../../parallel/concrt/codesnippet/cpp/walkthrough-implementing-futures_4.cpp)]  
  

5.  Nel `public` sezione la `async_future` classe, implementare il `get` (metodo). Questo metodo Usa il [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) funzione per recuperare il risultato della funzione lavoro.  

  
 [!code-cpp[concrt-futures#6](../../parallel/concrt/codesnippet/cpp/walkthrough-implementing-futures_5.cpp)]  
  
## <a name="example"></a>Esempio  
  
### <a name="description"></a>Descrizione  
 Nell'esempio seguente viene illustrato l'intero `async_future` classe e un esempio di utilizzo. Il `wmain` funzione Crea oggetto std::[vettore](../../standard-library/vector-class.md) oggetto che contiene 10.000 valori interi casuali. Viene quindi utilizzato `async_future` oggetti da trovare i valori minimo e massimo sono contenuti nel `vector` oggetto.  
  
### <a name="code"></a>Codice  
 [!code-cpp[concrt-futures#1](../../parallel/concrt/codesnippet/cpp/walkthrough-implementing-futures_6.cpp)]  
  
### <a name="comments"></a>Commenti  
 Questo esempio produce il seguente output:  
  
```Output  
smallest: 0  
largest:  9999  
average:  4981  
```  
  
 Nell'esempio viene utilizzato il `async_future::get` metodo per recuperare i risultati del calcolo. Il `async_future::get` metodo attende il completamento se il calcolo è ancora attivo.  
  
## <a name="robust-programming"></a>Programmazione efficiente  


 Per estendere il `async_future` classe per gestire le eccezioni generate dalla funzione lavoro, modificare il `async_future::get` metodo da chiamare il [Concurrency](reference/task-group-class.md#wait) metodo. Il `task_group::wait` metodo genera un'eccezione di eventuali eccezioni generate dalla funzione lavoro.  


  
 L'esempio seguente mostra la versione modificata della `async_future` classe. Il `wmain` funzione Usa un `try` - `catch` blocco per stampare il risultato del `async_future` oggetto o per stampare il valore dell'eccezione generata dalla funzione lavoro.  
  
 [!code-cpp[concrt-futures-with-eh#1](../../parallel/concrt/codesnippet/cpp/walkthrough-implementing-futures_7.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
caught exception: error  
```  
  
 Per ulteriori informazioni sul modello di gestione delle eccezioni nel Runtime di concorrenza, vedere [eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `futures.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc Futures. cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Procedure dettagliate del Runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)   
 [Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)   
 [Classe task_group](reference/task-group-class.md)   
 [Classe single_assignment](../../parallel/concrt/reference/single-assignment-class.md)
