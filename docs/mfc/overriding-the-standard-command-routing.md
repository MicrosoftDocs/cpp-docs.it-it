---
title: Si esegue l'override del Routing dei comandi Standard | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- MFC, command routing
- command routing [MFC], overriding
- command handling [MFC], routing commands
- overriding, standard command routing
ms.assetid: 872b698a-7432-40c4-9008-68721e8effa5
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6a8f926a2aa9ed48dac24f75850876bbd1e04ef4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="overriding-the-standard-command-routing"></a>Override del routing dei comandi standard
In rari casi quando è necessario implementare una variazione del routing standard framework, è possibile eseguirne l'override. Lo scopo consiste nel modificare il routing in una o più classi eseguendo l'override `OnCmdMsg` in tali classi. Scopo:  
  
-   Nella classe che interrompe l'ordine per passare a un oggetto non predefinito.  
  
-   Nuovo oggetto non predefinita o in destinazioni comando potrebbe essere a sua volta passare comandi per.  
  
 Se si inserisce un nuovo oggetto nel routing, la classe deve essere una classe di destinazione di comando. Nelle versioni di override di `OnCmdMsg`, verificare di chiamare la versione che sta eseguendo l'override. Vedere il [OnCmdMsg](../mfc/reference/ccmdtarget-class.md#oncmdmsg) funzione membro di classe `CCmdTarget` nel *riferimenti alla libreria MFC* e le versioni in classi come `CView` e **CDocument** di fornire il codice sorgente per alcuni esempi.  
  
## <a name="see-also"></a>Vedere anche  
 [Chiamata di un gestore dal framework](../mfc/how-the-framework-calls-a-handler.md)

