---
title: 'Procedura: Usare la classe transformer in una pipeline di dati'
ms.date: 11/04/2016
helpviewer_keywords:
- transformer class, example
- data pipelines, using transformer [Concurrency Runtime]
- using transformer in data pipelines [Concurrency Runtime]
ms.assetid: ca49cb3f-4dab-4b09-a9c9-d3a109ae4c29
ms.openlocfilehash: b94cf3fb7554ba32c03a404fa6616ef1b187e008
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50461425"
---
# <a name="how-to-use-transformer-in-a-data-pipeline"></a>Procedura: Usare la classe transformer in una pipeline di dati

In questo argomento contiene un esempio di base che illustra come usare il [Concurrency:: transformer](../../parallel/concrt/reference/transformer-class.md) classe in una pipeline di dati. Per un esempio più completo che usa una pipeline di dati per eseguire l'elaborazione di immagini, vedere [procedura dettagliata: creazione di una rete di elaborazione di immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md).

*Il pipelining dati* è una prassi comune nella programmazione simultanea. Una pipeline di dati è costituito da una serie di fasi, in cui ogni fase esegue il lavoro e quindi passa il risultato dell'operazione alla fase successiva. Il `transformer` classe un componente chiave nei dati pipeline poiché riceve un valore di input, esegue un lavoro a tale valore e quindi produce un risultato per un altro componente da utilizzare.

## <a name="example"></a>Esempio

In questo esempio Usa la pipeline di dati seguenti per eseguire una serie di trasformazioni in base a un valore di input iniziale:

1. La prima fase calcola il valore assoluto del relativo input.

1. La seconda fase calcola la radice quadrata del relativo input.

1. La terza fase consente di calcolare il quadrato del relativo input.

1. La quarta fase viene negato il relativo input.

1. Nella quinta fase scrive il risultato finale in un buffer dei messaggi.

Infine, l'esempio visualizza il risultato della pipeline nella console.

[!code-cpp[concrt-data-pipeline#1](../../parallel/concrt/codesnippet/cpp/how-to-use-transformer-in-a-data-pipeline_1.cpp)]

Questo esempio produce il seguente output:

```Output
The result is -42.
```

È comune per una fase in una pipeline di dati per restituire un valore il cui tipo è diverso dal relativo valore di input. In questo esempio, la seconda fase accetta un valore di tipo `int` come input e produce la radice quadrata del valore di (una `double`) come output.

> [!NOTE]
>  La pipeline di dati in questo esempio è a scopo illustrativo. Poiché ogni operazione di trasformazione esegue sforzo, il sovraccarico necessario per eseguire il trasferimento di messaggi può annullare i vantaggi dell'uso di una pipeline di dati.

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `data-pipeline.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc data-pipeline. cpp**

## <a name="see-also"></a>Vedere anche

[Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Procedura dettagliata: creazione di una rete per l'elaborazione di immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md)

