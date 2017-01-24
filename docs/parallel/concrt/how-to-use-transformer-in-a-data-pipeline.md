---
title: "Procedura: Usare la classe transformer in una pipeline di dati | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "transformer (classe), esempio"
  - "pipeline di dati, uso di transformer [Runtime di concorrenza]"
  - "utilizzo di transformer in pipeline di dati [Runtime di concorrenza]"
ms.assetid: ca49cb3f-4dab-4b09-a9c9-d3a109ae4c29
caps.latest.revision: 16
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: Usare la classe transformer in una pipeline di dati
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento è incluso un esempio di base in cui viene illustrato come utilizzare la classe [concurrency::transformer](../../parallel/concrt/reference/transformer-class.md) in una pipeline di dati.  Per un esempio più completo, in cui viene utilizzata una pipeline di dati per eseguire l'elaborazione di immagini, vedere [Procedura dettagliata: creazione di una rete per l'elaborazione di immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md).  
  
 Il *pipelining dei dati* è un modello comune nella programmazione simultanea.  Una pipeline di dati è costituita da una serie di fasi, in cui ogni fase esegue un lavoro e quindi passa il risultato del lavoro alla fase successiva.  La classe `transformer` è un componente chiave nelle pipeline di dati poiché riceve un valore di input, eseguire un lavoro su tale valore, quindi produce un risultato che verrà utilizzato da un altro componente.  
  
## Esempio  
 In questo esempio viene utilizzata la pipeline di dati seguente per effettuare una serie di trasformazioni in base a un valore di input iniziale:  
  
1.  Nella prima fase viene calcolato il valore assoluto dell'input.  
  
2.  Nella seconda fase viene calcolata la radice quadrata dell'input.  
  
3.  Nella terza fase viene calcolato il quadrato dell'input.  
  
4.  Nella quarta fase viene negato l'input.  
  
5.  Nella quinta fase viene scritto il risultato finale in un buffer dei messaggi.  
  
 Infine viene visualizzato il risultato della pipeline sulla console.  
  
 [!code-cpp[concrt-data-pipeline#1](../../parallel/concrt/codesnippet/CPP/how-to-use-transformer-in-a-data-pipeline_1.cpp)]  
  
 Questo esempio produce il seguente output:  
  
  **The result is \-42.** In genere una fase di una pipeline di dati restituisce un valore il cui tipo è diverso dal relativo valore di input.  In questo esempio la seconda fase accetta un valore di tipo `int` come input e produce la radice quadrata di tale valore \(`double`\) come output.  
  
> [!NOTE]
>  La pipeline di dati in questo esempio ha scopo illustrativo.  Poiché ogni operazione di trasformazione esegue una quantità minima di lavoro, il sovraccarico necessario per eseguire il passaggio dei messaggi può annullare i vantaggi derivanti dall'utilizzo di una pipeline di dati.  
  
## Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio o incollarlo in un file denominato `data-pipeline.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc data\-pipeline.cpp**  
  
## Vedere anche  
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)   
 [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)   
 [Procedura dettagliata: creazione di una rete per l'elaborazione di immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md)