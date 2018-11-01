---
title: Gestore OnCmdMsg
ms.date: 11/04/2016
f1_keywords:
- OnCmdMsg
helpviewer_keywords:
- messages, routing
- handlers [MFC]
- command routing [MFC], OnCmdMsg handler
- handlers, OnCmdMessage [MFC]
- OnCmdMessage method [MFC]
ms.assetid: 8df07024-506f-47e7-bba9-1c3bc5ad8ab6
ms.openlocfilehash: 37b3d5ffa3e6492c8c00b8b22eba58d09fad51f2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50643170"
---
# <a name="oncmdmsg-handler"></a>Gestore OnCmdMsg

Per portare a termine il routing dei comandi, ogni destinazione del comando chiama il `OnCmdMsg` funzione membro di destinazione del comando successivo nella sequenza. Destinazioni dei comandi usare `OnCmdMsg` per determinare se un comando che possono gestire e instradarlo a un'altra destinazione del comando, se non è possibile gestirla.

Ogni classe di destinazione comando può eseguire l'override di `OnCmdMsg` funzione membro. Le sostituzioni di lasciare che ogni classe instradare i comandi a una particolare destinazione successiva. Una finestra cornice, ad esempio, invia sempre i comandi per la finestra figlio corrente o una vista, come illustrato nella tabella [routing Standard dei comandi](../mfc/command-routing.md).

Il valore predefinito `CCmdTarget` implementazione di `OnCmdMsg` Usa la mappa messaggi della classe di destinazione di comando per eseguire la ricerca di una funzione del gestore per ogni messaggio di comando che riceve, ovvero nello stesso modo che i messaggi standard vengono effettuata la ricerca. Se viene trovata una corrispondenza, viene chiamato il gestore. La ricerca della mappa messaggi è illustrata nel [modo in cui il Framework mappe](../mfc/how-the-framework-searches-message-maps.md).

## <a name="see-also"></a>Vedere anche

[Chiamata di un gestore dal framework](../mfc/how-the-framework-calls-a-handler.md)

