---
title: "Procedura: specificare criteri dell'utilità di pianificazione specifici"
ms.date: 11/04/2016
helpviewer_keywords:
- specifying scheduler policies [Concurrency Runtime]
- scheduler policies, specifying [Concurrency Runtime]
ms.assetid: 9c5149f9-ac34-4ff3-9e79-0bad103e4e6b
ms.openlocfilehash: bd5edfbdf6b0fda9c7e327dab9538bbf6b5e4b12
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142445"
---
# <a name="how-to-specify-specific-scheduler-policies"></a>Procedura: specificare criteri dell'utilità di pianificazione specifici

I criteri dell'utilità di pianificazione consentono di controllare la strategia utilizzata dall'utilità di pianificazione per la gestione delle attività. In questo argomento viene illustrato come utilizzare i criteri dell'utilità di pianificazione per aumentare la priorità dei thread di un'attività che stampa un indicatore di stato nella console.

Per un esempio in cui vengono usati i criteri dell'utilità di pianificazione personalizzati insieme agli agenti asincroni, vedere [procedura: creare agenti che usano criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md).

## <a name="example"></a>Esempio

Nell'esempio seguente vengono eseguite due attività in parallelo. La prima attività calcola il numero di<sup>Fibonacci.</sup> La seconda attività stampa un indicatore di stato nella console.

La prima attività usa la scomposizione ricorsiva per calcolare il numero di Fibonacci. Ogni attività crea in modo ricorsivo le sottoattività per calcolare il risultato complessivo. Un'attività che usa la scomposizione ricorsiva può usare tutte le risorse disponibili e, di conseguenza, altre attività. In questo esempio, l'attività che stampa l'indicatore di stato potrebbe non ricevere tempestivamente l'accesso alle risorse di elaborazione.

Per fornire all'attività che stampa un messaggio di stato accesso equo alle risorse di calcolo, in questo esempio vengono utilizzati i passaggi descritti in [procedura: gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md) per creare un'istanza dell'utilità di pianificazione che disponga di un criterio personalizzato. Il criterio personalizzato specifica che la priorità del thread è la classe con priorità più elevata.

In questo esempio vengono utilizzate le classi [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) e [Concurrency:: timer](../../parallel/concrt/reference/timer-class.md) per stampare l'indicatore di stato. Queste classi hanno versioni dei costruttori che accettano un riferimento a un oggetto [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) che li Pianifica. Nell'esempio viene utilizzata l'utilità di pianificazione predefinita per pianificare l'attività che calcola il numero di Fibonacci e l'istanza dell'utilità di pianificazione per pianificare l'attività che stampa l'indicatore di stato.

Per illustrare i vantaggi derivanti dall'utilizzo di un'utilità di pianificazione con criteri personalizzati, in questo esempio l'attività complessiva viene eseguita due volte. Nell'esempio viene prima utilizzata l'utilità di pianificazione predefinita per pianificare entrambe le attività. Nell'esempio viene quindi utilizzata l'utilità di pianificazione predefinita per pianificare la prima attività e un'utilità di pianificazione che dispone di un criterio personalizzato per pianificare la seconda attività.

[!code-cpp[concrt-scheduler-policy#1](../../parallel/concrt/codesnippet/cpp/how-to-specify-specific-scheduler-policies_1.cpp)]

Questo esempio produce il seguente output:

```Output
Default scheduler:
...........................................................................done
Scheduler that has a custom policy:
...........................................................................done
```

Sebbene entrambi i set di attività producano lo stesso risultato, la versione che usa un criterio personalizzato consente all'attività che stampa l'indicatore di stato di essere eseguito con una priorità elevata, in modo che si comporti in modo più reattivo.

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `scheduler-policy.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **CL. exe/EHsc Scheduler-Policy. cpp**

## <a name="see-also"></a>Vedere anche

[Criteri dell'utilità di pianificazione](../../parallel/concrt/scheduler-policies.md)<br/>
[Procedura: Gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md)<br/>
[Procedura: Creare agenti che usano criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md)
