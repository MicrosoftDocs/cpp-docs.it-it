---
title: 'Procedura: Fornire funzioni lavoro alle classi call e transformer'
ms.date: 11/04/2016
helpviewer_keywords:
- call class, example
- using the transformer class [Concurrency Runtime]
- using the call class [Concurrency Runtime]
ms.assetid: df715ce4-8507-41ca-b204-636d11707a73
ms.openlocfilehash: 4d2b7b3c88b51003a96526ef14d9940a8c26c3b3
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142493"
---
# <a name="how-to-provide-work-functions-to-the-call-and-transformer-classes"></a>Procedura: Fornire funzioni lavoro alle classi call e transformer

In questo argomento vengono illustrati diversi modi per fornire funzioni lavoro alle classi [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) e [Concurrency:: Transformer](../../parallel/concrt/reference/transformer-class.md) .

Nel primo esempio viene illustrato come passare un'espressione lambda a un oggetto `call`. Nel secondo esempio viene illustrato come passare un oggetto funzione a un oggetto `call`. Nel terzo esempio viene illustrato come associare un metodo di classe a un oggetto `call`.

Per illustrazione, in ogni esempio di questo argomento viene usata la classe `call`. Per un esempio che usa la classe `transformer`, vedere [procedura: usare Transformer in una pipeline di dati](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato un modo comune per utilizzare la classe `call`. Questo esempio passa una funzione lambda al costruttore `call`.

[!code-cpp[concrt-call-lambda#1](../../parallel/concrt/codesnippet/cpp/how-to-provide-work-functions-to-the-call-and-transformer-classes_1.cpp)]

Questo esempio produce il seguente output:

```Output
13 squared is 169.
```

## <a name="example"></a>Esempio

L'esempio seguente è simile a quello precedente, ad eccezione del fatto che usa la classe `call` insieme a un oggetto funzione (functor).

[!code-cpp[concrt-call-functor#1](../../parallel/concrt/codesnippet/cpp/how-to-provide-work-functions-to-the-call-and-transformer-classes_2.cpp)]

## <a name="example"></a>Esempio

L'esempio seguente è simile a quello precedente, ad eccezione del fatto che usa le funzioni [std:: bind1st](../../standard-library/functional-functions.md#bind1st) e [std:: mem_fun](../../standard-library/functional-functions.md#mem_fun) per associare un oggetto `call` a un metodo della classe.

Usare questa tecnica se è necessario associare un oggetto `call` o `transformer` a un metodo della classe specifico anziché l'operatore di chiamata di funzione, `operator()`.

[!code-cpp[concrt-call-method#1](../../parallel/concrt/codesnippet/cpp/how-to-provide-work-functions-to-the-call-and-transformer-classes_3.cpp)]

È anche possibile assegnare il risultato della funzione `bind1st` a un oggetto [std:: Function](../../standard-library/function-class.md) oppure usare la parola chiave `auto`, come illustrato nell'esempio seguente.

[!code-cpp[concrt-call-method#2](../../parallel/concrt/codesnippet/cpp/how-to-provide-work-functions-to-the-call-and-transformer-classes_4.cpp)]

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `call.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **CL. exe/EHsc Call. cpp**

## <a name="see-also"></a>Vedere anche

[Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Procedura: Usare la classe transformer in una pipeline di dati](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md)<br/>
[Classe call](../../parallel/concrt/reference/call-class.md)<br/>
[Classe transformer](../../parallel/concrt/reference/transformer-class.md)
