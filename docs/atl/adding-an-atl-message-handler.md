---
title: Aggiunta di un gestore di messaggi ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- message handlers [C++]
- ATL, windows
- message handling [C++], ATL message handler
- windows [C++], ATL
- ATL, message handlers
ms.assetid: cdea38a1-0d9b-4f8d-bbd5-b4f063fb3eeb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 712f1b725afd52057deca8f05047c91bfc4affce
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43753410"
---
# <a name="adding-an-atl-message-handler"></a>Aggiunta di un gestore di messaggi ATL

Per aggiungere un gestore di messaggi (una funzione membro che gestisce i messaggi di Windows) a un controllo, selezionare prima di tutto il controllo in Class View. Quindi aprire il **proprietà** finestra, seleziona la **messaggi** icona e fare clic nella casella di opposta, il messaggio di richiesta di controllo elenco a discesa. Verrà aggiunta una dichiarazione per il gestore di messaggi nel file di intestazione del controllo e uno scheletro di implementazione del gestore nel file con estensione cpp del controllo. Verrà inoltre aggiunta della mappa del messaggio e aggiungere una voce per il gestore.

Aggiunta di un gestore di messaggi in ATL è analoga all'aggiunta di un gestore di messaggi a una classe MFC. Visualizzare [aggiunta di un gestore messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md) per altre informazioni.

Le condizioni seguenti si applicano solo all'aggiunta di un gestore di messaggi ATL:

- I gestori di messaggi di seguono la stessa convenzione di denominazione come MFC.

- Le nuove voci della mappa messaggi vengono aggiunti nella mappa messaggi principale. La procedura guidata non riconosce le mappe messaggi alternativo e il concatenamento.

## <a name="see-also"></a>Vedere anche

[Implementazione di una finestra](../atl/implementing-a-window.md)

