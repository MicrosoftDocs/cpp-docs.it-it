---
title: Utilizzo della compilazione di debug per il controllo della sovrascrittura di memoria
ms.date: 11/04/2016
helpviewer_keywords:
- memory, overwrites
ms.assetid: 1345eb4d-24ba-4595-b1cc-2da66986311e
ms.openlocfilehash: 42e3a7f1f1c34ba5a263adfca7496c24e162ab5d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62314286"
---
# <a name="using-the-debug-build-to-check-for-memory-overwrite"></a>Utilizzo della compilazione di debug per il controllo della sovrascrittura di memoria

Per usare la build di debug per verificare la presenza di sovrascrittura di memoria, è innanzitutto necessario ricompilare il progetto per il debug. Passare quindi all'inizio della propria applicazione `InitInstance` funzione e aggiungere la riga seguente:

```
afxMemDF |= checkAlwaysMemDF;
```

L'allocatore di memoria di debug attiva byte guard intorno a tutte le allocazioni di memoria. Tuttavia, questi guard byte non fare nulla di buono, a meno che non si verifica se sono stati modificati (che potrebbe indicare una sovrascrittura di memoria). In caso contrario, questo fornisce solo un buffer che può, in realtà, consentono di ottenere subito una sovrascrittura di memoria.

Attivando la `checkAlwaysMemDF`, si forzerà MFC per effettuare una chiamata al `AfxCheckMemory` funzionare ogni volta che una chiamata a **nuove** o **eliminare** viene eseguita. Se è stata rilevata una sovrascrittura di memoria, verrà generato un messaggio di traccia che ha un aspetto simile al seguente:

```
Damage Occurred! Block=0x5533
```

Se viene visualizzato uno di questi messaggi, è necessario esaminare il codice per determinare dove si è verificato l'errore. Per isolare in modo più preciso in cui si verifica la sovrascrittura di memoria, è possibile effettuare chiamate esplicite a `AfxCheckMemory` manualmente. Ad esempio:

```
ASSERT(AfxCheckMemory());
    DoABunchOfStuff();
    ASSERT(AfxCheckMemory());
```

Se la prima istruzione ASSERT ha esito positivo e il secondo non riesce, significa che la sovrascrittura di memoria deve essere eseguite nella funzione tra le due chiamate.

A seconda della natura dell'applicazione, si potrebbe scoprire che `afxMemDF` fa sì che un'esecuzione troppo lenta per anche eseguire il test del programma. Il `afxMemDF` variabile fa `AfxCheckMemory` per essere chiamato per ogni chiamata a new e delete. In tal caso, è necessario a dispersione per le chiamate a `AfxCheckMemory`() come illustrato in precedenza e provare a isolare la memoria sovrascrivere in questo modo.

## <a name="see-also"></a>Vedere anche

[Correzione dei problemi della build di versione](fixing-release-build-problems.md)
