---
title: 'Procedura: usare la classe transformer in Pipeline di dati | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- transformer class, example
- data pipelines, using transformer [Concurrency Runtime]
- using transformer in data pipelines [Concurrency Runtime]
ms.assetid: ca49cb3f-4dab-4b09-a9c9-d3a109ae4c29
caps.latest.revision: "16"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 76c8a50bd5a58d9fe6e4a68f05d9732e50fd04e8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-use-transformer-in-a-data-pipeline"></a>Procedura: Usare la classe transformer in una pipeline di dati
In questo argomento contiene un esempio di base in cui viene illustrato come utilizzare il [Concurrency:: transformer](../../parallel/concrt/reference/transformer-class.md) classe in una pipeline di dati. Per un esempio più completo che utilizza una pipeline di dati per eseguire l'elaborazione di immagini, vedere [procedura dettagliata: creazione di una rete di elaborazione delle immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md).  
  
 *Dati pipelining* è un modello comune nella programmazione simultanea. Una pipeline di dati è costituito da una serie di fasi, in cui ogni fase esegue il lavoro e quindi passa il risultato dell'operazione alla fase successiva. La `transformer` classe un componente chiave nei dati pipeline poiché riceve un valore di input, esegue operazioni su tale valore e quindi produce un risultato per un altro componente da utilizzare.  
  
## <a name="example"></a>Esempio  
 In questo esempio Usa la pipeline di dati seguenti per eseguire una serie di trasformazioni in base a un valore di input iniziale:  
  
1.  La prima fase calcola il valore assoluto dell'input.  
  
2.  La seconda fase calcola la radice quadrata dell'input.  
  
3.  La terza fase calcola il quadrato dell'input.  
  
4.  La quarta fase viene negato l'input.  
  
5.  Nella quinta fase scrive il risultato finale in un buffer dei messaggi.  
  
 Infine, l'esempio visualizza il risultato della pipeline nella console.  
  
 [!code-cpp[concrt-data-pipeline#1](../../parallel/concrt/codesnippet/cpp/how-to-use-transformer-in-a-data-pipeline_1.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
The result is -42.  
```  
  
 È comune per una fase in una pipeline di dati per restituire un valore di tipo diverso rispetto al valore di input. In questo esempio, la seconda fase accetta un valore di tipo `int` come input e produce la radice quadrata del valore (un `double`) come output.  
  
> [!NOTE]
>  La pipeline di dati in questo esempio è a scopo illustrativo. Ogni operazione di trasformazione, poiché esegue un impegno minimo l'overhead necessario per eseguire il trasferimento di messaggi può annullare i vantaggi dell'utilizzo di una pipeline di dati.  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `data-pipeline.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc data-pipeline.cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)   
 [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)   
 [Procedura dettagliata: creazione di una rete per l'elaborazione di immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md)

