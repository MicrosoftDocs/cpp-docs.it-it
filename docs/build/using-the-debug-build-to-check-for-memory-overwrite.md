---
title: Utilizzo della compilazione di debug per il controllo della sovrascrittura di memoria
ms.date: 11/04/2016
helpviewer_keywords:
- memory, overwrites
ms.assetid: 1345eb4d-24ba-4595-b1cc-2da66986311e
ms.openlocfilehash: 152f72749d2ebdacd46dd3e4db671bc5705d4b6a
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87213749"
---
# <a name="using-the-debug-build-to-check-for-memory-overwrite"></a>Utilizzo della compilazione di debug per il controllo della sovrascrittura di memoria

Per usare la build di debug per verificare la sovrascrittura della memoria, è necessario innanzitutto ricompilare il progetto per il debug. Quindi, passare all'inizio della funzione dell'applicazione `InitInstance` e aggiungere la riga seguente:

```
afxMemDF |= checkAlwaysMemDF;
```

L'allocatore di memoria di debug inserisce i byte Guard intorno a tutte le allocazioni di memoria. Tuttavia, questi byte Guard non eseguono alcuna operazione, a meno che non si verifichi se sono stati modificati (che indicano una sovrascrittura della memoria). In caso contrario, questo fornisce solo un buffer che può, in realtà, consentire di ottenere una sovrascrittura della memoria.

Attivando la `checkAlwaysMemDF` , si impone a MFC di effettuare una chiamata alla `AfxCheckMemory` funzione ogni volta che viene eseguita una chiamata a **`new`** o a **`delete`** . Se è stata rilevata una sovrascrittura della memoria, verrà generato un messaggio di traccia simile al seguente:

```
Damage Occurred! Block=0x5533
```

Se viene visualizzato uno di questi messaggi, è necessario esaminare il codice per determinare il punto in cui si è verificato il danno. Per isolare più precisamente dove si è verificata la sovrascrittura della memoria, è possibile effettuare chiamate esplicite a `AfxCheckMemory` se stessi. Ad esempio:

```
ASSERT(AfxCheckMemory());
    DoABunchOfStuff();
    ASSERT(AfxCheckMemory());
```

Se la prima ASSERZIONe ha esito positivo e la seconda ha esito negativo, significa che la sovrascrittura della memoria deve essere avvenuta nella funzione tra le due chiamate.

A seconda della natura dell'applicazione, è possibile che `afxMemDF` il programma venga eseguito troppo lentamente per eseguire il test. La `afxMemDF` variabile causa la `AfxCheckMemory` chiamata a ogni chiamata a New ed Delete. In tal caso, è necessario disperdere le proprie chiamate a `AfxCheckMemory` () come illustrato in precedenza e provare a isolare la sovrascrittura della memoria in questo modo.

## <a name="see-also"></a>Vedere anche

[Correzione dei problemi di compilazione della versione](fixing-release-build-problems.md)
