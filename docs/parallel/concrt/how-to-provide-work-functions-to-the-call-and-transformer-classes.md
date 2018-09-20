---
title: 'Procedura: fornire funzioni lavoro alle classi call e transformer | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- call class, example
- using the transformer class [Concurrency Runtime]
- using the call class [Concurrency Runtime]
ms.assetid: df715ce4-8507-41ca-b204-636d11707a73
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3102947009780f6f4e735b70506c5b2dc02f416b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46438964"
---
# <a name="how-to-provide-work-functions-to-the-call-and-transformer-classes"></a>Procedura: Fornire funzioni lavoro alle classi call e transformer

In questo argomento vengono illustrati vari modi per fornire funzioni lavoro per le [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) e [Concurrency:: transformer](../../parallel/concrt/reference/transformer-class.md) classi.

Nel primo esempio viene illustrato come passare un'espressione lambda a un `call` oggetto. Nel secondo esempio viene illustrato come passare un oggetto funzione a un `call` oggetto. Il terzo esempio illustra come associare un metodo della classe per un `call` oggetto.

A scopo illustrativo, ogni esempio in questo argomento viene usato il `call` classe. Per un esempio che usa il `transformer` classe, vedere [procedura: usare la classe transformer in una Pipeline di dati](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md).

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
