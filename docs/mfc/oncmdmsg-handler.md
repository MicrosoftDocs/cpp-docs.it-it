---
description: 'Altre informazioni su: Gestore OnCmdMsg'
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
ms.openlocfilehash: 69dfbd7ccc52a6d90b57ef9cedf0f896d65057b2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97243965"
---
# <a name="oncmdmsg-handler"></a>Gestore OnCmdMsg

Per eseguire il routing dei comandi, ogni destinazione del comando chiama la `OnCmdMsg` funzione membro della destinazione del comando successiva nella sequenza. Destinazioni comando usare `OnCmdMsg` per determinare se è possibile gestire un comando e instradarlo a un'altra destinazione del comando se non è in grado di gestirlo.

Ogni classe di destinazione comando può eseguire l'override della `OnCmdMsg` funzione membro. Le sostituzioni consentono a ogni classe di indirizzare i comandi a una determinata destinazione successiva. Una finestra cornice, ad esempio, instrada sempre i comandi alla relativa finestra o visualizzazione figlio corrente, come illustrato nella [Route dei comandi standard](command-routing.md)della tabella.

L' `CCmdTarget` implementazione predefinita di `OnCmdMsg` Usa la mappa messaggi della classe di destinazione del comando per cercare una funzione del gestore per ogni messaggio di comando ricevuto, nello stesso modo in cui vengono cercati i messaggi standard. Se viene trovata una corrispondenza, viene chiamato il gestore. La ricerca della mappa messaggi è illustrata nel modo in cui [il Framework cerca le mappe messaggi](how-the-framework-searches-message-maps.md).

## <a name="see-also"></a>Vedi anche

[Modalità di chiamata di un gestore da parte del Framework](how-the-framework-calls-a-handler.md)
