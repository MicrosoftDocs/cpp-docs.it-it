---
title: "Procedura: Creare agenti che usano criteri dell'utilità di pianificazione specifici"
ms.date: 11/04/2016
helpviewer_keywords:
- scheduler policies, agents [Concurrency Runtime]
- creating agents that use specific policies [Concurrency Runtime]
ms.assetid: 46a3e265-0777-4ec3-a142-967bafc49d67
ms.openlocfilehash: ece6b113e3fe10c2c3179517f73137df281acf87
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77141730"
---
# <a name="how-to-create-agents-that-use-specific-scheduler-policies"></a>Procedura: Creare agenti che usano criteri dell'utilità di pianificazione specifici

Un agente è un componente dell'applicazione che funziona in modo asincrono con altri componenti per risolvere attività di elaborazione più grandi. Un agente ha in genere un ciclo di vita impostato e mantiene lo stato.

Ogni agente può avere requisiti di applicazione univoci. Ad esempio, un agente che consente l'interazione dell'utente, ovvero il recupero dell'input o la visualizzazione dell'output, potrebbe richiedere un accesso con priorità più elevata alle risorse di calcolo. I criteri dell'utilità di pianificazione consentono di controllare la strategia utilizzata dall'utilità di pianificazione per la gestione delle attività. Questo argomento illustra come creare agenti che usano criteri dell'utilità di pianificazione specifici.

Per un esempio di base che usa criteri dell'utilità di pianificazione personalizzati insieme a blocchi di messaggi asincroni, vedere [procedura: specificare criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md).

In questo argomento vengono utilizzate le funzionalità della libreria di agenti asincroni, ad esempio agenti, blocchi di messaggio e funzioni di passaggio dei messaggi, per eseguire il lavoro. Per ulteriori informazioni sulla libreria di agenti asincroni, vedere [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md).

## <a name="example"></a>Esempio

Nell'esempio seguente vengono definite due classi che derivano da [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md): `permutor` e `printer`. La classe `permutor` calcola tutte le permutazioni di una determinata stringa di input. La classe `printer` stampa i messaggi di stato nella console. La classe `permutor` esegue un'operazione a elevato utilizzo di calcolo, che può utilizzare tutte le risorse di elaborazione disponibili. Per essere utile, la classe `printer` deve stampare ogni messaggio di stato in modo tempestivo.

Per fornire all'`printer` Class l'accesso equo alle risorse di calcolo, in questo esempio vengono usati i passaggi descritti in [procedura: gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md) per creare un'istanza dell'utilità di pianificazione con un criterio personalizzato. Il criterio personalizzato specifica che la priorità del thread è la classe con priorità più elevata.

Per illustrare i vantaggi derivanti dall'utilizzo di un'utilità di pianificazione con criteri personalizzati, in questo esempio l'attività complessiva viene eseguita due volte. Nell'esempio viene prima utilizzata l'utilità di pianificazione predefinita per pianificare entrambe le attività. Nell'esempio viene quindi utilizzata l'utilità di pianificazione predefinita per pianificare l'oggetto `permutor` e un'utilità di pianificazione che dispone di un criterio personalizzato per pianificare l'oggetto `printer`.

[!code-cpp[concrt-permute-strings#1](../../parallel/concrt/codesnippet/cpp/how-to-create-agents-that-use-specific-scheduler-policies_1.cpp)]

Questo esempio produce il seguente output:

```Output
With default scheduler:
Computing all permutations of 'Grapefruit'...
100% complete...

With higher context priority:
Computing all permutations of 'Grapefruit'...
100% complete...
```

Sebbene entrambi i set di attività producano lo stesso risultato, la versione che usa un criterio personalizzato consente all'oggetto `printer` di essere eseguito con una priorità elevata, in modo che si comporti una maggiore velocità di risposta.

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `permute-strings.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **CL. exe/EHsc permute-strings. cpp**

## <a name="see-also"></a>Vedere anche

[Criteri dell'utilità di pianificazione](../../parallel/concrt/scheduler-policies.md)<br/>
[Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)
