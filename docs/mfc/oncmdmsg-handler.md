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
ms.openlocfilehash: 5114fe53a5bac345eb6a55fb6c371f7bc1f698ef
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84624021"
---
# <a name="oncmdmsg-handler"></a>Gestore OnCmdMsg

Per eseguire il routing dei comandi, ogni destinazione del comando chiama la `OnCmdMsg` funzione membro della destinazione del comando successiva nella sequenza. Destinazioni comando usare `OnCmdMsg` per determinare se è possibile gestire un comando e instradarlo a un'altra destinazione del comando se non è in grado di gestirlo.

Ogni classe di destinazione comando può eseguire l'override della `OnCmdMsg` funzione membro. Le sostituzioni consentono a ogni classe di indirizzare i comandi a una determinata destinazione successiva. Una finestra cornice, ad esempio, instrada sempre i comandi alla relativa finestra o visualizzazione figlio corrente, come illustrato nella [Route dei comandi standard](command-routing.md)della tabella.

L' `CCmdTarget` implementazione predefinita di `OnCmdMsg` Usa la mappa messaggi della classe di destinazione del comando per cercare una funzione del gestore per ogni messaggio di comando ricevuto, nello stesso modo in cui vengono cercati i messaggi standard. Se viene trovata una corrispondenza, viene chiamato il gestore. La ricerca della mappa messaggi è illustrata nel modo in cui [il Framework cerca le mappe messaggi](how-the-framework-searches-message-maps.md).

## <a name="see-also"></a>Vedere anche

[Chiamata di un gestore dal framework](how-the-framework-calls-a-handler.md)
