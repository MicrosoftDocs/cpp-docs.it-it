---
title: Messaggi
ms.date: 11/04/2016
helpviewer_keywords:
- messages, MFC
- messages [MFC]
ms.assetid: b1476310-a135-42ca-817c-444fb3675491
ms.openlocfilehash: f36dab679a2e41910b2445a7dab36f5786081563
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84624286"
---
# <a name="messages"></a>Messaggi

Il ciclo di messaggi nella `Run` funzione membro della classe `CWinApp` Recupera i messaggi in coda generati da vari eventi. Ad esempio, quando l'utente fa clic con il mouse, Windows invia diversi messaggi relativi al mouse, ad esempio WM_LBUTTONDOWN quando viene premuto il pulsante sinistro del mouse e WM_LBUTTONUP quando viene rilasciato il pulsante sinistro del mouse. L'implementazione del Framework del ciclo di messaggi dell'applicazione invia il messaggio alla finestra appropriata.

Le categorie di messaggi importanti sono descritte in [categorie](message-categories.md)di messaggi.

## <a name="see-also"></a>Vedere anche

[Messaggi e comandi nel framework](messages-and-commands-in-the-framework.md)
