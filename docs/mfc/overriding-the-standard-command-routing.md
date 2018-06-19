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
ms.openlocfilehash: 13f6c8f262061477da95a4863965c04e9d75c49a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33352812"
---
# <a name="overriding-the-standard-command-routing"></a>Override del routing dei comandi standard
In rari casi quando è necessario implementare una variazione del routing standard framework, è possibile eseguirne l'override. Lo scopo consiste nel modificare il routing in una o più classi eseguendo l'override `OnCmdMsg` in tali classi. Scopo:  
  
-   Nella classe che interrompe l'ordine per passare a un oggetto non predefinito.  
  
-   Nuovo oggetto non predefinita o in destinazioni comando potrebbe essere a sua volta passare comandi per.  
  
 Se si inserisce un nuovo oggetto nel routing, la classe deve essere una classe di destinazione di comando. Nelle versioni di override di `OnCmdMsg`, verificare di chiamare la versione che sta eseguendo l'override. Vedere il [OnCmdMsg](../mfc/reference/ccmdtarget-class.md#oncmdmsg) funzione membro di classe `CCmdTarget` nel *riferimenti alla libreria MFC* e le versioni in classi come `CView` e **CDocument** di fornire il codice sorgente per alcuni esempi.  
  
## <a name="see-also"></a>Vedere anche  
 [Chiamata di un gestore dal framework](../mfc/how-the-framework-calls-a-handler.md)

