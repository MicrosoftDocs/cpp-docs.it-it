---
title: 'Procedura: Fornire funzioni lavoro alle classi call e transformer'
ms.date: 11/04/2016
helpviewer_keywords:
- call class, example
- using the transformer class [Concurrency Runtime]
- using the call class [Concurrency Runtime]
ms.assetid: df715ce4-8507-41ca-b204-636d11707a73
ms.openlocfilehash: c41c29dae277105f268171503e662e2a02e3857e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62205790"
---
# <a name="how-to-provide-work-functions-to-the-call-and-transformer-classes"></a>Procedura: Fornire funzioni lavoro alle classi call e transformer

In questo argomento vengono illustrati vari modi per fornire funzioni lavoro per le [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) e [Concurrency:: transformer](../../parallel/concrt/reference/transformer-class.md) classi.

Nel primo esempio viene illustrato come passare un'espressione lambda a un `call` oggetto. Nel secondo esempio viene illustrato come passare un oggetto funzione a un `call` oggetto. Il terzo esempio illustra come associare un metodo della classe per un `call` oggetto.

A scopo illustrativo, ogni esempio in questo argomento viene usato il `call` classe. Per un esempio che usa il `transformer` classe, vedere [come: Usare la classe transformer in una Pipeline di dati](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato un modo comune per utilizzare il `call` classe. Questo esempio passa una funzione lambda di `call` costruttore.

[!code-cpp[concrt-call-lambda#1](../../parallel/concrt/codesnippet/cpp/how-to-provide-work-functions-to-the-call-and-transformer-classes_1.cpp)]

Questo esempio produce il seguente output:

```Output
13 squared is 169.
```

## <a name="example"></a>Esempio

Nell'esempio seguente è simile a quello precedente, ad eccezione del fatto che usi il `call` classe insieme a un oggetto funzione (functor).

[!code-cpp[concrt-call-functor#1](../../parallel/concrt/codesnippet/cpp/how-to-provide-work-functions-to-the-call-and-transformer-classes_2.cpp)]

## <a name="example"></a>Esempio

Nell'esempio seguente è simile a quello precedente, ad eccezione del fatto che usa il [std::bind1st](../../standard-library/functional-functions.md#bind1st) e [std:: mem_fun](../../standard-library/functional-functions.md#mem_fun) funzioni per associare un `call` oggetto da un metodo della classe.

Usare questa tecnica, se è necessario associare un `call` oppure `transformer` a un metodo di classe specifico anziché l'operatore di chiamata di funzione, oggetto `operator()`.

[!code-cpp[concrt-call-method#1](../../parallel/concrt/codesnippet/cpp/how-to-provide-work-functions-to-the-call-and-transformer-classes_3.cpp)]

È anche possibile assegnare il risultato del `bind1st` funzionare per un [std:: Function](../../standard-library/function-class.md) dell'oggetto oppure usare il `auto` (parola chiave), come illustrato nell'esempio seguente.

[!code-cpp[concrt-call-method#2](../../parallel/concrt/codesnippet/cpp/how-to-provide-work-functions-to-the-call-and-transformer-classes_4.cpp)]

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `call.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc Call. cpp**

## <a name="see-also"></a>Vedere anche

[Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Procedura: Usare la classe transformer in una pipeline di dati](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md)<br/>
[Classe call](../../parallel/concrt/reference/call-class.md)<br/>
[Classe transformer](../../parallel/concrt/reference/transformer-class.md)
