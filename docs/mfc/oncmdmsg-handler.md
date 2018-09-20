---
title: Gestore OnCmdMsg | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- OnCmdMsg
dev_langs:
- C++
helpviewer_keywords:
- messages, routing
- handlers [MFC]
- command routing [MFC], OnCmdMsg handler
- handlers, OnCmdMessage [MFC]
- OnCmdMessage method [MFC]
ms.assetid: 8df07024-506f-47e7-bba9-1c3bc5ad8ab6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6691e4935d46b32bc8f433823888bb7f53a36890
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46398833"
---
# <a name="oncmdmsg-handler"></a>Gestore OnCmdMsg

Per portare a termine il routing dei comandi, ogni destinazione del comando chiama il `OnCmdMsg` funzione membro di destinazione del comando successivo nella sequenza. Destinazioni dei comandi usare `OnCmdMsg` per determinare se un comando che possono gestire e instradarlo a un'altra destinazione del comando, se non è possibile gestirla.

Ogni classe di destinazione comando può eseguire l'override di `OnCmdMsg` funzione membro. Le sostituzioni di lasciare che ogni classe instradare i comandi a una particolare destinazione successiva. Una finestra cornice, ad esempio, invia sempre i comandi per la finestra figlio corrente o una vista, come illustrato nella tabella [routing Standard dei comandi](../mfc/command-routing.md).

Il valore predefinito `CCmdTarget` implementazione di `OnCmdMsg` Usa la mappa messaggi della classe di destinazione di comando per eseguire la ricerca di una funzione del gestore per ogni messaggio di comando che riceve, ovvero nello stesso modo che i messaggi standard vengono effettuata la ricerca. Se viene trovata una corrispondenza, viene chiamato il gestore. La ricerca della mappa messaggi è illustrata nel [modo in cui il Framework mappe](../mfc/how-the-framework-searches-message-maps.md).

## <a name="see-also"></a>Vedere anche

[Chiamata di un gestore dal framework](../mfc/how-the-framework-calls-a-handler.md)

