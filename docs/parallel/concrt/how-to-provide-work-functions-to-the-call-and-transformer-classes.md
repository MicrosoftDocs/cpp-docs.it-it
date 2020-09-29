---
title: 'Procedura: Fornire funzioni lavoro alle classi call e transformer'
ms.date: 11/04/2016
helpviewer_keywords:
- call class, example
- using the transformer class [Concurrency Runtime]
- using the call class [Concurrency Runtime]
ms.assetid: df715ce4-8507-41ca-b204-636d11707a73
ms.openlocfilehash: b629d0e0e11388e212c56b8e1f6bea290368c884
ms.sourcegitcommit: 94893973211d0b254c8bcdcf0779997dcc136b0c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/28/2020
ms.locfileid: "91414347"
---
# <a name="how-to-provide-work-functions-to-the-call-and-transformer-classes"></a>Procedura: Fornire funzioni lavoro alle classi call e transformer

In questo argomento vengono illustrati diversi modi per fornire funzioni lavoro alle classi [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) e [Concurrency:: Transformer](../../parallel/concrt/reference/transformer-class.md) .

Nel primo esempio viene illustrato come passare un'espressione lambda a un `call` oggetto. Nel secondo esempio viene illustrato come passare un oggetto funzione a un `call` oggetto. Nel terzo esempio viene illustrato come associare un metodo di classe a un `call` oggetto.

Per illustrazione, in ogni esempio di questo argomento viene usata la `call` classe. Per un esempio che usa la `transformer` classe, vedere [procedura: usare Transformer in una pipeline di dati](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md).

## <a name="example-call-class"></a>Esempio: classe call

Nell'esempio seguente viene illustrato un modo comune per utilizzare la `call` classe. In questo esempio una funzione lambda viene passata al `call` costruttore.

[!code-cpp[concrt-call-lambda#1](../../parallel/concrt/codesnippet/cpp/how-to-provide-work-functions-to-the-call-and-transformer-classes_1.cpp)]

Questo esempio produce il seguente output:

```Output
13 squared is 169.
```

## <a name="example-call-class-with-function-object"></a>Esempio: chiamare una classe con un oggetto funzione

L'esempio seguente è simile a quello precedente, ad eccezione del fatto che usa la `call` classe insieme a un oggetto funzione (functor).

[!code-cpp[concrt-call-functor#1](../../parallel/concrt/codesnippet/cpp/how-to-provide-work-functions-to-the-call-and-transformer-classes_2.cpp)]

## <a name="example-functions-to-bind-call-object"></a>Esempio: funzioni per associare l'oggetto chiamata

L'esempio seguente è simile a quello precedente, ad eccezione del fatto che usa le funzioni [std:: bind1st](../../standard-library/functional-functions.md#bind1st) e [std:: mem_fun](../../standard-library/functional-functions.md#mem_fun) per associare un `call` oggetto a un metodo di classe.

Usare questa tecnica se è necessario associare un `call` oggetto o `transformer` a un metodo di classe specifico anziché l'operatore di chiamata di funzione, `operator()` .

[!code-cpp[concrt-call-method#1](../../parallel/concrt/codesnippet/cpp/how-to-provide-work-functions-to-the-call-and-transformer-classes_3.cpp)]

È anche possibile assegnare il risultato della `bind1st` funzione a un oggetto [std:: Function](../../standard-library/function-class.md) oppure usare la **`auto`** parola chiave, come illustrato nell'esempio seguente.

[!code-cpp[concrt-call-method#2](../../parallel/concrt/codesnippet/cpp/how-to-provide-work-functions-to-the-call-and-transformer-classes_4.cpp)]

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato, `call.cpp` quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **cl.exe/EHsc Call. cpp**

## <a name="see-also"></a>Vedere anche

[libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Procedura: usare Transformer in una pipeline di dati](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md)<br/>
[Classe call](../../parallel/concrt/reference/call-class.md)<br/>
[Classe transformer](../../parallel/concrt/reference/transformer-class.md)
