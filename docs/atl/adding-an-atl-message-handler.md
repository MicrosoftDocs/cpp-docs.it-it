---
description: 'Ulteriori informazioni su: aggiunta di un gestore di messaggi ATL'
title: Aggiunta di un gestore di messaggi ATL
ms.date: 11/04/2016
helpviewer_keywords:
- message handlers [C++]
- ATL, windows
- message handling [C++], ATL message handler
- windows [C++], ATL
- ATL, message handlers
ms.assetid: cdea38a1-0d9b-4f8d-bbd5-b4f063fb3eeb
ms.openlocfilehash: 263cbcb863ee287c9b3f4650263a3fac33d7ab7b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97166343"
---
# <a name="adding-an-atl-message-handler"></a>Aggiunta di un gestore di messaggi ATL

Per aggiungere un gestore di messaggi (una funzione membro che gestisce i messaggi di Windows) a un controllo, selezionare innanzitutto il controllo nella Visualizzazione classi. Aprire quindi la finestra **Proprietà** , selezionare l'icona **messaggi** , quindi fare clic sul controllo a discesa nella casella opposta al messaggio richiesto. Verrà aggiunta una dichiarazione per il gestore dei messaggi nel file di intestazione del controllo e un'implementazione Skeleton del gestore nel file con estensione cpp del controllo. Viene inoltre aggiunta la mappa messaggi e viene aggiunta una voce per il gestore.

L'aggiunta di un gestore di messaggi in ATL è simile all'aggiunta di un gestore di messaggi a una classe MFC. Per ulteriori informazioni, vedere [aggiunta di un gestore di messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md) .

Le condizioni seguenti si applicano solo all'aggiunta di un gestore di messaggi ATL:

- I gestori di messaggi seguono le stesse convenzioni di denominazione di MFC.

- Le nuove voci della mappa messaggi vengono aggiunte alla mappa messaggi principale. La procedura guidata non riconosce le mappe dei messaggi alternative e il concatenamento.

## <a name="see-also"></a>Vedi anche

[Implementazione di una finestra](../atl/implementing-a-window.md)
