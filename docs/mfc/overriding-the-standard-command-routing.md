---
title: Override del routing dei comandi standard
ms.date: 11/04/2016
helpviewer_keywords:
- MFC, command routing
- command routing [MFC], overriding
- command handling [MFC], routing commands
- overriding, standard command routing
ms.assetid: 872b698a-7432-40c4-9008-68721e8effa5
ms.openlocfilehash: 5383c1053894d44e23baf51b19ac3df4e60158e5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62410161"
---
# <a name="overriding-the-standard-command-routing"></a>Override del routing dei comandi standard

In rari casi quando è necessario implementare una variazione di routing framework standard, è possibile eseguirne l'override. L'idea consiste nel modificare il routing in una o più classi eseguendo l'override `OnCmdMsg` in tali classi. Scopo:

- Nella classe che interrompe l'ordine per passare a un oggetto non predefinite.

- Il nuovo oggetto non predefinite o destinazioni comandi potrebbe a sua volta passare comandi per.

Se si inserisce un nuovo oggetto nel routing, la classe deve essere una classe di destinazione di comando. Nelle versioni di override di `OnCmdMsg`, accertarsi di chiamare la versione che si sta eseguendo l'override. Vedere le [OnCmdMsg](../mfc/reference/ccmdtarget-class.md#oncmdmsg) funzione membro di classe `CCmdTarget` nel *riferimenti alla libreria MFC* e le versioni di queste classi come `CView` e `CDocument` nel codice sorgente fornito per gli esempi.

## <a name="see-also"></a>Vedere anche

[Chiamata di un gestore dal framework](../mfc/how-the-framework-calls-a-handler.md)
