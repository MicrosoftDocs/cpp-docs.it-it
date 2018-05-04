---
title: Aggiunta di un gestore messaggi | Documenti Microsoft
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
ms.openlocfilehash: e79598b79ccbad13ad98c7fc1284808fe1b05cfc
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="adding-an-atl-message-handler"></a>Aggiunta di un gestore messaggi
Per aggiungere un gestore di messaggi (una funzione membro che gestisce i messaggi di Windows) a un controllo, selezionare il controllo in visualizzazione classi. Aprire quindi il **proprietà** finestra, seleziona il **messaggi** icona e fare clic nella casella opposta il messaggio di richiesta di controllo elenco a discesa. Verrà aggiunta una dichiarazione per il gestore di messaggi nel file di intestazione del controllo e uno scheletro di implementazione del gestore nel file con estensione cpp del controllo. Verrà inoltre aggiunto la mappa del messaggio e aggiungere una voce per il gestore.  
  
 Aggiunta di un gestore di messaggi in ATL è analoga all'aggiunta di un gestore di messaggi a una classe MFC. Vedere [aggiunta di un gestore messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md) per ulteriori informazioni.  
  
 Le condizioni seguenti si applicano solo all'aggiunta di un gestore messaggi:  
  
-   I gestori messaggi seguono la stessa convenzione di denominazione di MFC.  
  
-   Le voci della mappa messaggi nuovi vengono aggiunti nella mappa messaggi principale. La procedura guidata non riconosce il concatenamento e mappe messaggi alternative.  
  
## <a name="see-also"></a>Vedere anche  
 [Implementazione di una finestra](../atl/implementing-a-window.md)

