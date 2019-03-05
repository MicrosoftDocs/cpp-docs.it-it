---
title: Messaggi
ms.date: 11/04/2016
helpviewer_keywords:
- messages, MFC
- messages [MFC]
ms.assetid: b1476310-a135-42ca-817c-444fb3675491
ms.openlocfilehash: 8e1bfd1baa8ffef76ba31912fc619c4217696683
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57300076"
---
# <a name="messages"></a>Messaggi

Il ciclo di messaggi nel `Run` funzione membro di classe `CWinApp` recupera in coda i messaggi generati da vari eventi. Ad esempio, quando l'utente fa clic del mouse, Windows invia più messaggi correlati al mouse, ad esempio WM_LBUTTONDOWN quando viene premuto il pulsante sinistro del mouse e WM_LBUTTONUP quando viene rilasciato il pulsante sinistro del mouse. L'implementazione del framework del ciclo di messaggi dell'applicazione invia il messaggio alla finestra appropriato.

Le più importanti categorie di messaggi descritti in [categorie di messaggi](../mfc/message-categories.md).

## <a name="see-also"></a>Vedere anche

[Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)
