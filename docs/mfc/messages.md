---
title: Messaggi | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- messages, MFC
- messages [MFC]
ms.assetid: b1476310-a135-42ca-817c-444fb3675491
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: abd49410f9982788e9403f0cb83ca8656473417d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="messages"></a>Messages
Il ciclo di messaggi di **eseguire** funzione membro di classe `CWinApp` recupera i messaggi generati da vari eventi in coda. Ad esempio, quando l'utente fa clic del mouse, Windows invia molti messaggi correlati al mouse, ad esempio `WM_LBUTTONDOWN` quando viene premuto il pulsante sinistro del mouse e `WM_LBUTTONUP` quando il pulsante sinistro del mouse viene rilasciato. Implementazione del framework del ciclo di messaggi dell'applicazione invia il messaggio alla finestra appropriata.  
  
 Le categorie di messaggi importanti sono descritti in [categorie di messaggi](../mfc/message-categories.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)

