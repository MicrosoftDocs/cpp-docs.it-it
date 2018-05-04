---
title: Utilizzando la Build di Debug per un controllo per la sovrascrittura di memoria | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- memory, overwrites
ms.assetid: 1345eb4d-24ba-4595-b1cc-2da66986311e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4c89242a63484eaccd0330eddac28c4e543ec61b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="using-the-debug-build-to-check-for-memory-overwrite"></a>Utilizzo della compilazione di debug per il controllo della sovrascrittura di memoria
Per utilizzare la build di debug per controllare la sovrascrittura di memoria, è innanzitutto necessario ricompilare il progetto per il debug. Quindi, passare all'inizio di un'applicazione `InitInstance` funzione e aggiungere la riga seguente:  
  
```  
afxMemDF |= checkAlwaysMemDF;  
```  
  
 L'allocatore di memoria di debug inserisce byte di protezione per tutte le allocazioni di memoria. Tuttavia, questi salvaguardarsi byte non opportuno, a meno che non si verifica se sono stati modificati (che potrebbe indicare una sovrascrittura di memoria). In caso contrario, questo fornisce solo un buffer che potrebbe, infatti, consentono di ottenere immediatamente una sovrascrittura di memoria.  
  
 Attivando il `checkAlwaysMemDF`, si forzerà MFC per effettuare una chiamata al `AfxCheckMemory` funzione ogni volta che una chiamata a **nuova** o **eliminare** viene eseguita. Se è stata rilevata una sovrascrittura di memoria, verrà generato un messaggio simile al seguente:  
  
```  
Damage Occurred! Block=0x5533  
```  
  
 Se si verifica uno di questi messaggi, è necessario esaminare il codice per determinare dove si è verificato l'errore. Per isolare in modo più preciso in cui la sovrascrittura di memoria si è verificato, è possibile effettuare chiamate esplicite a `AfxCheckMemory` manualmente. Ad esempio:  
  
```  
ASSERT(AfxCheckMemory());  
    DoABunchOfStuff();  
    ASSERT(AfxCheckMemory());  
```  
  
 Se la prima istruzione ASSERT ha esito positivo e il secondo non riesce, significa che la sovrascrittura di memoria deve si sono verificate nella funzione tra le due chiamate.  
  
 A seconda della natura dell'applicazione, si potrebbe scoprire che `afxMemDF` comporta un'esecuzione troppo lenta per testare anche del programma. Il `afxMemDF` variabile fa `AfxCheckMemory` a essere chiamato per ogni chiamata di new e delete. In tal caso, è necessario grafico a dispersione per le chiamate a `AfxCheckMemory`() come illustrato in precedenza e provare a isolare la memoria sovrascrivere in questo modo.  
  
## <a name="see-also"></a>Vedere anche  
 [Correzione dei problemi della build di versione](../../build/reference/fixing-release-build-problems.md)