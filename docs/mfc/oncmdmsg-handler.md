---
title: Gestore OnCmdMsg | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: OnCmdMsg
dev_langs: C++
helpviewer_keywords:
- messages, routing
- handlers [MFC]
- command routing [MFC], OnCmdMsg handler
- handlers, OnCmdMessage [MFC]
- OnCmdMessage method [MFC]
ms.assetid: 8df07024-506f-47e7-bba9-1c3bc5ad8ab6
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 173741ef73cd4bf6426787ef56e8334f504d7c0e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="oncmdmsg-handler"></a>Gestore OnCmdMsg
Per eseguire il routing dei comandi, ogni destinazione del comando chiama il `OnCmdMsg` funzione membro di destinazione del comando successivo nella sequenza. Destinazioni dei comandi utilizzare `OnCmdMsg` per determinare se consentire la gestione di un comando e inviarlo a un'altra destinazione di comando, se non è possibile gestirla.  
  
 Ogni classe di destinazione di comando può eseguire l'override di `OnCmdMsg` funzione membro. L'override consente a ogni classe di inviare i comandi a una particolare destinazione successiva. Una finestra cornice, ad esempio, invia sempre i comandi per la finestra figlio corrente o una vista, come illustrato nella tabella [routing Standard dei comandi](../mfc/command-routing.md).  
  
 Il valore predefinito `CCmdTarget` implementazione di `OnCmdMsg` utilizza la mappa messaggi della classe di destinazione di comando per eseguire la ricerca di una funzione del gestore per ogni messaggio di comando che riceve, nello stesso modo che i messaggi standard vengono eseguita la ricerca. Se viene trovata una corrispondenza, viene chiamato il gestore. La ricerca della mappa messaggi è illustrata in [come il Framework mappe](../mfc/how-the-framework-searches-message-maps.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Chiamata di un gestore dal framework](../mfc/how-the-framework-calls-a-handler.md)

