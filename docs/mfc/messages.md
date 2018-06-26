---
title: I messaggi | Documenti Microsoft
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
ms.openlocfilehash: 5d7544d92d55ec4a1f6d15f3c1d4358970bf2deb
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36928341"
---
# <a name="messages"></a>Messages
Il ciclo di messaggi di `Run` funzione membro di classe `CWinApp` recupera i messaggi generati da vari eventi in coda. Ad esempio, quando l'utente fa clic del mouse, Windows invia molti messaggi correlati al mouse, ad esempio WM_LBUTTONDOWN quando viene premuto il pulsante sinistro del mouse e WM_LBUTTONUP quando viene rilasciato il pulsante sinistro del mouse. L'implementazione del framework del ciclo di messaggi dell'applicazione invia il messaggio alla finestra appropriata.  
  
 Le categorie di messaggi importanti sono descritti in [categorie di messaggi](../mfc/message-categories.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)

