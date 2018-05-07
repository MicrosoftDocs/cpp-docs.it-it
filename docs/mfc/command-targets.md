---
title: Comando destinazioni | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- command targets
- command mapping
- messages, command [MFC]
- command routing [MFC], command targets
ms.assetid: b0f784e5-c6dc-4391-9e71-aa7b7dcbe9f0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1cbcfa1042a8430c704bad93e4bc0ce5655b5921
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="command-targets"></a>Destinazioni comandi
Nella figura [comandi nel Framework](../mfc/user-interface-objects-and-command-ids.md) Mostra la connessione tra un oggetto dell'interfaccia utente, ad esempio una voce di menu e la funzione del gestore che il framework chiama per eseguire il comando risulta quando viene selezionato l'oggetto.  
  
 Windows invia i messaggi che non sono presenti messaggi di comando direttamente a una finestra viene quindi chiamato il cui gestore per il messaggio. Tuttavia, il framework indirizza i comandi in un numero di oggetti candidato, denominate "comando destinazioni", uno dei quali in genere richiama un gestore per il comando. Le funzioni del gestore funzionano nello stesso modo per comandi e messaggi Windows standard, ma il meccanismo mediante il quale vengono chiamati è diverso, come illustrato in [come il Framework chiama un gestore](../mfc/how-the-framework-calls-a-handler.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)

