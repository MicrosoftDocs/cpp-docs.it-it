---
title: "Procedura: Creare agenti che usano criteri dell'utilità di pianificazione specifici"
ms.date: 11/04/2016
helpviewer_keywords:
- scheduler policies, agents [Concurrency Runtime]
- creating agents that use specific policies [Concurrency Runtime]
ms.assetid: 46a3e265-0777-4ec3-a142-967bafc49d67
ms.openlocfilehash: 5aac86801015549b5552b51c06a30f8398346a06
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62411370"
---
# <a name="how-to-create-agents-that-use-specific-scheduler-policies"></a>Procedura: Creare agenti che usano criteri dell'utilità di pianificazione specifici

Un agente è un componente dell'applicazione che funziona in modo asincrono con altri componenti per risolvere l'attività di calcolo più grandi. In genere, un agente ha un ciclo di vita impostato e mantiene informazioni sullo stato.

Ogni agente può avere requisiti dell'applicazione specifica. Ad esempio, un agente che consente l'interazione dell'utente (recupero dell'input o output di visualizzazione) potrebbe richiedere maggiore accesso prioritario alle risorse di calcolo. I criteri dell'utilità di pianificazione consentono di controllare la strategia utilizzata l'utilità di pianificazione quando gestisce le attività. In questo argomento viene illustrato come creare agenti che usano criteri dell'utilità di pianificazione specifiche.

Per un esempio di base che usa i criteri di utilità di pianificazione personalizzata insieme a blocchi dei messaggi asincroni, vedere [come: Specificare i criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md).

Questo argomento Usa funzionalità dalla libreria di agenti asincroni, ad esempio agenti, blocchi di messaggi e le funzioni di passaggio dei messaggi, per eseguire operazioni. Per altre informazioni sulla libreria di agenti asincroni, vedere [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md).

## <a name="example"></a>Esempio

L'esempio seguente definisce due classi che derivano da [Concurrency](../../parallel/concrt/reference/agent-class.md): `permutor` e `printer`. Il `permutor` classe calcola tutte le permutazioni di una stringa di input specificata. Il `printer` classe consente di stampare i messaggi di stato nella console. Il `permutor` classe esegue un'operazione complesse a livello, che può usare tutte le risorse di elaborazione disponibili. Per essere utile, il `printer` classe deve visualizzare ogni messaggio di stato di avanzamento in modo tempestivo.

Per fornire il `printer` classe un accesso corretto alle risorse di calcolo, questo esempio Usa i passaggi descritti in [come: Gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md) per creare un'istanza dell'utilità di pianificazione che dispone di un criterio personalizzato. I criteri personalizzati specificano la priorità del thread per la classe di priorità più alta.

Per illustrare i vantaggi dell'uso di un'utilità di pianificazione che dispone di un criterio personalizzato, questo esempio viene eseguita l'attività complessiva due volte. L'esempio Usa prima di tutto l'utilità di pianificazione predefinita per entrambe le attività di pianificazione. L'esempio Usa quindi l'utilità di pianificazione predefinita per pianificare il `permutor` oggetti e un'utilità di pianificazione che dispone di un criterio personalizzato per pianificare il `printer` oggetto.

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

Sebbene entrambi i set di attività producono lo stesso risultato, la versione che usa un criterio personalizzato consente il `printer` esecuzione con una priorità con privilegi elevate in modo che si comporta più rispondente dell'oggetto.

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `permute-strings.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**cl.exe /EHsc permute-strings.cpp**

## <a name="see-also"></a>Vedere anche

[Criteri dell'utilità di pianificazione](../../parallel/concrt/scheduler-policies.md)<br/>
[Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)
