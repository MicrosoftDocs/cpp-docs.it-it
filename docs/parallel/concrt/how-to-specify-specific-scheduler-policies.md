---
title: "Procedura: Specificare i criteri dell'utilità di pianificazione specifici"
ms.date: 11/04/2016
helpviewer_keywords:
- specifying scheduler policies [Concurrency Runtime]
- scheduler policies, specifying [Concurrency Runtime]
ms.assetid: 9c5149f9-ac34-4ff3-9e79-0bad103e4e6b
ms.openlocfilehash: 3c03ef6661ebefe0bfe9fab62938ce9987a4bca1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62410032"
---
# <a name="how-to-specify-specific-scheduler-policies"></a>Procedura: Specificare i criteri dell'utilità di pianificazione specifici

I criteri dell'utilità di pianificazione consentono di controllare la strategia utilizzata l'utilità di pianificazione quando gestisce le attività. In questo argomento viene illustrato come utilizzare i criteri dell'utilità di pianificazione per aumentare la priorità del thread di un'attività che consente di stampare un indicatore di stato nella console.

Per un esempio che usa i criteri dell'utilità di pianificazione personalizzate con gli agenti asincroni, vedere [come: Creare agenti che usano criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md).

## <a name="example"></a>Esempio

Nell'esempio seguente esegue due attività in parallelo. La prima attività calcola il valore n<sup>th</sup> numero di Fibonacci. La seconda attività consente di stampare un indicatore di stato nella console.

La prima attività Usa la scomposizione ricorsiva per calcolare il numero di Fibonacci. Vale a dire, in modo ricorsivo ogni attività crea le sottoattività per calcolare il risultato complessivo. Un'attività che usa la scomposizione ricorsiva può usare tutte le risorse disponibili e in tal modo privare altre attività. In questo esempio, l'attività che visualizza l'indicatore di stato potrebbe non ricevere accesso rapido a risorse di calcolo.

Per consentire all'attività che viene stampato un corso messaggio un accesso corretto alle risorse di calcolo, questo esempio Usa i passaggi descritti in [come: Gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md) per creare un'istanza dell'utilità di pianificazione che dispone di un criterio personalizzato. I criteri personalizzati specificano la priorità del thread per la classe di priorità più alta.

Questo esempio Usa la [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) e [Concurrency:: timer](../../parallel/concrt/reference/timer-class.md) classi per stampare l'indicatore di stato. Queste classi sono le versioni dei relativi costruttori che accettano un riferimento a un [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) che ne pianifica l'oggetto. L'esempio Usa l'utilità di pianificazione predefinita per pianificare l'attività che calcola il numero di Fibonacci e l'istanza dell'utilità di pianificazione per pianificare l'attività che visualizza l'indicatore di stato di avanzamento.

Per illustrare i vantaggi dell'uso di un'utilità di pianificazione che dispone di un criterio personalizzato, questo esempio viene eseguita l'attività complessiva due volte. L'esempio Usa prima di tutto l'utilità di pianificazione predefinita per entrambe le attività di pianificazione. L'esempio Usa quindi l'utilità di pianificazione predefinita per pianificare la prima attività e un'utilità di pianificazione che dispone di un criterio personalizzato per pianificare la seconda attività.

[!code-cpp[concrt-scheduler-policy#1](../../parallel/concrt/codesnippet/cpp/how-to-specify-specific-scheduler-policies_1.cpp)]

Questo esempio produce il seguente output:

```Output
Default scheduler:
...........................................................................done
Scheduler that has a custom policy:
...........................................................................done
```

Sebbene entrambi i set di attività producono lo stesso risultato, la versione che usa un criterio personalizzato consente all'attività che visualizza l'indicatore di stato per l'esecuzione con una priorità con privilegi elevate in modo che si comporta più rispondente.

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `scheduler-policy.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc dell'utilità di pianificazione-Policy. cpp**

## <a name="see-also"></a>Vedere anche

[Criteri dell'utilità di pianificazione](../../parallel/concrt/scheduler-policies.md)<br/>
[Procedura: Gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md)<br/>
[Procedura: Creare agenti che usano criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md)
