---
title: Mappe (ATL) messaggi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- message maps, ATL
- ATL, message handlers
ms.assetid: 9e100400-65c7-4a85-8857-4e6cb6dd7340
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1e708fea75c594c7bb9504515c80222ad901c335
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="message-maps-atl"></a>Mappe messaggi (ATL)
Una mappa messaggi associa una funzione del gestore con un messaggio specifico, un comando o una notifica. Con ATL [macro della mappa dei messaggi](../atl/reference/message-map-macros-atl.md), è possibile specificare una mappa messaggi per una finestra. La routine della finestra in `CWindowImpl`, `CDialogImpl`, e `CContainedWindowT` indirizzare i messaggi di una finestra alla propria mappa messaggi.  
  
 Il [funzioni del gestore di messaggi](../atl/message-handler-functions.md) accetta un argomento supplementare di tipo `BOOL&`. Questo argomento indica se un messaggio è stato elaborato e viene impostato su `TRUE` per impostazione predefinita. Una funzione del gestore quindi possibile impostare l'argomento `FALSE` per indicare che non sono stati gestiti un messaggio. In questo caso, ATL continuerà cercare una funzione di gestione della mappa messaggi. Impostando questo argomento `FALSE`, è possibile eseguire alcune operazioni in risposta a un messaggio e quindi consentire l'elaborazione predefinita o un'altra funzione del gestore di terminare la gestione del messaggio.  
  
## <a name="chained-message-maps"></a>Mappe messaggi concatenate  
 ATL consente anche di concatenare le mappe messaggi, che indirizza a una mappa del messaggio definita in un'altra classe di gestione dei messaggi. Ad esempio, è possibile implementare comuni gestione dei messaggi in una classe separata per fornire un comportamento uniforme per tutte le finestre di concatenamento a tale classe. È possibile collegare a una classe base o a un membro di dati della classe.  
  
 ATL supporta anche la concatenazione dinamica, che consente la catena di mappa dei messaggi di un altro oggetto in fase di esecuzione. Per implementare la concatenazione dinamica, è necessario derivare la classe da [CDynamicChain](../atl/reference/cdynamicchain-class.md). Dichiarare quindi il [CHAIN_MSG_MAP_DYNAMIC](reference/message-map-macros-atl.md#chain_msg_map_dynamic) macro della mappa del messaggio. `CHAIN_MSG_MAP_DYNAMIC`richiede un numero univoco che identifica l'oggetto e a cui si concatenano la mappa dei messaggi. È necessario definire questo valore univoco tramite una chiamata a `CDynamicChain::SetChainEntry`.  
  
 È possibile concatenare qualsiasi classe che dichiara una mappa messaggi, purché la classe deriva dalla [CMessageMap](../atl/reference/cmessagemap-class.md). `CMessageMap`consente a un oggetto per esporre le mappe messaggi ad altri oggetti. Si noti che `CWindowImpl` già deriva da `CMessageMap`.  
  
## <a name="alternate-message-maps"></a>Mappe messaggi alternative  
 Infine, ATL supporta mappe di messaggi alternativo, dichiarate con la [ALT_MSG_MAP](reference/message-map-macros-atl.md#alt_msg_map) (macro). Ogni mappa messaggi alternativo è identificato da un numero univoco, si passa a `ALT_MSG_MAP`. Mapping di messaggi alternativo, è possibile gestire i messaggi di più finestre in una mappa. Si noti che per impostazione predefinita, `CWindowImpl` non usare le mappe messaggi alternativo. Per aggiungere questo supporto, eseguire l'override di `WindowProc` metodo il `CWindowImpl`-classe derivata e chiamata `ProcessWindowMessage` con l'identificatore della mappa messaggi.  
  
## <a name="see-also"></a>Vedere anche  
 [Implementazione di una finestra](../atl/implementing-a-window.md)

