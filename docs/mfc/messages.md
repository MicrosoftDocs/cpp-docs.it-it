---
description: 'Altre informazioni su: messaggi'
title: Messaggi
ms.date: 11/04/2016
helpviewer_keywords:
- messages, MFC
- messages [MFC]
ms.assetid: b1476310-a135-42ca-817c-444fb3675491
ms.openlocfilehash: dbfec2794cc0dae5a7358b3c2ba39553643fb7c9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97203094"
---
# <a name="messages"></a>Messaggi

Il ciclo di messaggi nella `Run` funzione membro della classe `CWinApp` Recupera i messaggi in coda generati da vari eventi. Ad esempio, quando l'utente fa clic con il mouse, Windows invia diversi messaggi relativi al mouse, ad esempio WM_LBUTTONDOWN quando viene premuto il pulsante sinistro del mouse e WM_LBUTTONUP quando viene rilasciato il pulsante sinistro del mouse. L'implementazione del Framework del ciclo di messaggi dell'applicazione invia il messaggio alla finestra appropriata.

Le categorie di messaggi importanti sono descritte in [categorie](message-categories.md)di messaggi.

## <a name="see-also"></a>Vedi anche

[Messaggi e comandi nel Framework](messages-and-commands-in-the-framework.md)
