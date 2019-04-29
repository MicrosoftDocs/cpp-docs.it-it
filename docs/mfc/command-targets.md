---
title: Destinazioni comandi
ms.date: 11/04/2016
helpviewer_keywords:
- command targets
- command mapping
- messages, command [MFC]
- command routing [MFC], command targets
ms.assetid: b0f784e5-c6dc-4391-9e71-aa7b7dcbe9f0
ms.openlocfilehash: ed3d6a68967dc7f4244f887ae34760fdb99fa7f5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62388514"
---
# <a name="command-targets"></a>Destinazioni comandi

Nella figura [comandi nel Framework](../mfc/user-interface-objects-and-command-ids.md) Mostra la connessione tra un oggetto di interfaccia utente, ad esempio una voce di menu e la funzione del gestore chiamato dal framework per eseguire il comando risulta quando viene selezionato l'oggetto.

Windows invia i messaggi che non sono i messaggi di comando direttamente a una finestra con il gestore per il messaggio viene quindi chiamato. Tuttavia, il framework indirizza i comandi a un numero di oggetti candidato, chiamato "destinazioni comandi", ovvero uno dei quali in genere richiama un gestore per il comando. Le funzioni del gestore funzionano allo stesso modo per comandi e i messaggi Windows standard, ma i meccanismi che vengono chiamati sono diversi, come illustrato in [chiamata di un gestore dal Framework](../mfc/how-the-framework-calls-a-handler.md).

## <a name="see-also"></a>Vedere anche

[Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)
