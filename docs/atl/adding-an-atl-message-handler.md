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
ms.openlocfilehash: 6d812c70e7cec4739ee9477d30ad9744b4fddc50
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50565497"
---
# <a name="adding-an-atl-message-handler"></a>Aggiunta di un gestore di messaggi ATL

Per aggiungere un gestore di messaggi (una funzione membro che gestisce i messaggi di Windows) a un controllo, selezionare prima di tutto il controllo in Class View. Quindi aprire il **proprietà** finestra, seleziona la **messaggi** icona e fare clic nella casella di opposta, il messaggio di richiesta di controllo elenco a discesa. Verrà aggiunta una dichiarazione per il gestore di messaggi nel file di intestazione del controllo e uno scheletro di implementazione del gestore nel file con estensione cpp del controllo. Verrà inoltre aggiunta della mappa del messaggio e aggiungere una voce per il gestore.

Aggiunta di un gestore di messaggi in ATL è analoga all'aggiunta di un gestore di messaggi a una classe MFC. Visualizzare [aggiunta di un gestore messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md) per altre informazioni.

Le condizioni seguenti si applicano solo all'aggiunta di un gestore di messaggi ATL:

- I gestori di messaggi di seguono la stessa convenzione di denominazione come MFC.

- Le nuove voci della mappa messaggi vengono aggiunti nella mappa messaggi principale. La procedura guidata non riconosce le mappe messaggi alternativo e il concatenamento.

## <a name="see-also"></a>Vedere anche

[Implementazione di una finestra](../atl/implementing-a-window.md)

