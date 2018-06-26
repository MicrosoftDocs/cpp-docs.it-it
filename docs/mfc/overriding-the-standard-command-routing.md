---
title: Si esegue l'override del Routing dei comandi Standard | Documenti Microsoft
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
ms.openlocfilehash: 58156f6d1c361c24dc6cf04a9208157d614f91a8
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929010"
---
# <a name="overriding-the-standard-command-routing"></a>Override del routing dei comandi standard
In rari casi quando è necessario implementare alcune variazioni del routing framework standard, è possibile eseguirne l'override. L'idea consiste nel modificare il routing in una o più classi eseguendo l'override `OnCmdMsg` in tali classi. Scopo:  
  
-   Nella classe che interrompe l'ordine per passare a un oggetto non predefinite.  
  
-   Nel nuovo oggetto diversi da quelli predefiniti o in destinazioni comandi a sua volta può passare i comandi per.  
  
 Se si inserisce un nuovo oggetto nel routing, la relativa classe deve essere una classe di destinazione di comando. Nelle versioni di override di `OnCmdMsg`, verificare di chiamare la versione che sta eseguendo l'override. Vedere la [OnCmdMsg](../mfc/reference/ccmdtarget-class.md#oncmdmsg) funzioni membro delle classi `CCmdTarget` nel *riferimenti alla libreria MFC* e le versioni in classi come `CView` e `CDocument` nel codice sorgente fornito per gli esempi.  
  
## <a name="see-also"></a>Vedere anche  
 [Chiamata di un gestore dal framework](../mfc/how-the-framework-calls-a-handler.md)

