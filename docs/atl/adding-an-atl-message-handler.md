---
title: Aggiunta di un gestore di messaggi ATL
ms.date: 11/04/2016
helpviewer_keywords:
- message handlers [C++]
- ATL, windows
- message handling [C++], ATL message handler
- windows [C++], ATL
- ATL, message handlers
ms.assetid: cdea38a1-0d9b-4f8d-bbd5-b4f063fb3eeb
ms.openlocfilehash: cc7631ac9e02891cee725b47133a273e756759d6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62223467"
---
# <a name="adding-an-atl-message-handler"></a>Aggiunta di un gestore di messaggi ATL

Per aggiungere un gestore di messaggi (una funzione membro che gestisce i messaggi di Windows) a un controllo, selezionare prima di tutto il controllo in Class View. Quindi aprire il **proprietà** finestra, seleziona la **messaggi** icona e fare clic nella casella di opposta, il messaggio di richiesta di controllo elenco a discesa. Verrà aggiunta una dichiarazione per il gestore di messaggi nel file di intestazione del controllo e uno scheletro di implementazione del gestore nel file con estensione cpp del controllo. Verrà inoltre aggiunta della mappa del messaggio e aggiungere una voce per il gestore.

Aggiunta di un gestore di messaggi in ATL è analoga all'aggiunta di un gestore di messaggi a una classe MFC. Visualizzare [aggiunta di un gestore messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md) per altre informazioni.

Le condizioni seguenti si applicano solo all'aggiunta di un gestore di messaggi ATL:

- I gestori di messaggi di seguono la stessa convenzione di denominazione come MFC.

- Le nuove voci della mappa messaggi vengono aggiunti nella mappa messaggi principale. La procedura guidata non riconosce le mappe messaggi alternativo e il concatenamento.

## <a name="see-also"></a>Vedere anche

[Implementazione di una finestra](../atl/implementing-a-window.md)
