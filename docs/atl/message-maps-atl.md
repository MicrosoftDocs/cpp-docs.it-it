---
title: Mappe messaggi (ATL)
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- message maps, ATL
- ATL, message handlers
ms.assetid: 9e100400-65c7-4a85-8857-4e6cb6dd7340
ms.openlocfilehash: 1b8b3fcb2f10f975ebdf68a285c7d5e364b9e1b4
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57292575"
---
# <a name="message-maps-atl"></a>Mappe messaggi (ATL)

Una mappa messaggi associa una funzione del gestore con un messaggio specifico, un comando o una notifica. Utilizzando ATL [macro della mappa del messaggio](../atl/reference/message-map-macros-atl.md), è possibile specificare una mappa messaggi per una finestra. La routine della finestra nel `CWindowImpl`, `CDialogImpl`, e `CContainedWindowT` indirizzare i messaggi della finestra alla propria mappa messaggi.

Il [funzioni del gestore dei messaggi](../atl/message-handler-functions.md) accetta un argomento supplementare di tipo `BOOL&`. Questo argomento indica se un messaggio è stato elaborato e impostarlo su TRUE per impostazione predefinita. Una funzione del gestore può quindi impostare l'argomento su FALSE per indicare che non è gestito un messaggio. In questo caso, ATL continuerà a cercare una funzione del gestore ulteriormente nella mappa messaggi. In questo argomento si imposta su FALSE, è possibile innanzitutto eseguire un'azione in risposta a un messaggio e quindi consentire l'elaborazione predefinita o un'altra funzione di gestione per completare la gestione del messaggio.

## <a name="chained-message-maps"></a>Mappe messaggi concatenate

ATL consente anche di concatenare le mappe messaggi, che indirizza a una mappa di messaggio definita in un'altra classe di gestione dei messaggi. Ad esempio, è possibile implementare comune gestione dei messaggi in una classe separata per fornire un comportamento uniforme per tutte le finestre di concatenamento a tale classe. È possibile concatenare a una classe base o a un membro dati della classe.

ATL supporta anche la concatenazione dinamica, che consente a catena alla mappa messaggi di un altro oggetto in fase di esecuzione. Per implementare la concatenazione dinamica, è necessario derivare la classe da [CDynamicChain](../atl/reference/cdynamicchain-class.md). Quindi dichiarare la [CHAIN_MSG_MAP_DYNAMIC](reference/message-map-macros-atl.md#chain_msg_map_dynamic) macro della mappa del messaggio. CHAIN_MSG_MAP_DYNAMIC richiede un numero univoco che identifica l'oggetto e la mappa dei messaggi a cui si concatenano. È necessario definire questo valore univoco tramite una chiamata a `CDynamicChain::SetChainEntry`.

È possibile concatenare a qualsiasi classe che dichiara una mappa dei messaggi, purché la classe deriva da [CMessageMap](../atl/reference/cmessagemap-class.md). `CMessageMap` consente a un oggetto di esporre le mappe messaggi ad altri oggetti. Si noti che `CWindowImpl` deriva già da `CMessageMap`.

## <a name="alternate-message-maps"></a>Mappe messaggi alternativo

Infine, ATL supporta mappe di messaggio alternativo, dichiarate con la [ALT_MSG_MAP](reference/message-map-macros-atl.md#alt_msg_map) macro. Ogni mappa messaggi alternativo è identificato da un numero univoco, che viene passato a ALT_MSG_MAP. Utilizzando un messaggio alternativo viene eseguito il mapping, è possibile gestire i messaggi di più finestre in una mappa. Si noti che per impostazione predefinita, `CWindowImpl` non utilizza le mappe messaggi alternativo. Per aggiungere questo supporto, eseguire l'override di `WindowProc` metodo nel `CWindowImpl`-classe derivata e chiamata `ProcessWindowMessage` con l'identificatore della mappa del messaggio.

## <a name="see-also"></a>Vedere anche

[Implementazione di una finestra](../atl/implementing-a-window.md)
