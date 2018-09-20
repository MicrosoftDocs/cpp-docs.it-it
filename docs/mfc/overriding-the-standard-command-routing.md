---
title: Si esegue l'override del Routing dei comandi Standard | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC, command routing
- command routing [MFC], overriding
- command handling [MFC], routing commands
- overriding, standard command routing
ms.assetid: 872b698a-7432-40c4-9008-68721e8effa5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 33ee603f680919d69684ab94acfa0515d3ec6292
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46439497"
---
# <a name="overriding-the-standard-command-routing"></a>Override del routing dei comandi standard

In rari casi quando è necessario implementare una variazione di routing framework standard, è possibile eseguirne l'override. L'idea consiste nel modificare il routing in una o più classi eseguendo l'override `OnCmdMsg` in tali classi. Scopo:

- Nella classe che interrompe l'ordine per passare a un oggetto non predefinite.

- Il nuovo oggetto non predefinite o destinazioni comandi potrebbe a sua volta passare comandi per.

Se si inserisce un nuovo oggetto nel routing, la classe deve essere una classe di destinazione di comando. Nelle versioni di override di `OnCmdMsg`, accertarsi di chiamare la versione che si sta eseguendo l'override. Vedere le [OnCmdMsg](../mfc/reference/ccmdtarget-class.md#oncmdmsg) funzione membro di classe `CCmdTarget` nel *riferimenti alla libreria MFC* e le versioni di queste classi come `CView` e `CDocument` nel codice sorgente fornito per gli esempi.

## <a name="see-also"></a>Vedere anche

[Chiamata di un gestore dal framework](../mfc/how-the-framework-calls-a-handler.md)

