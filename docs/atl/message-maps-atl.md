---
description: 'Altre informazioni su: mappe messaggi (ATL)'
title: Mappe messaggi (ATL)
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- message maps, ATL
- ATL, message handlers
ms.assetid: 9e100400-65c7-4a85-8857-4e6cb6dd7340
ms.openlocfilehash: c5b3340abbfbc66ac710ab716e3daa38dd7cd6df
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97159518"
---
# <a name="message-maps-atl"></a>Mappe messaggi (ATL)

Una mappa messaggi associa una funzione del gestore a un messaggio, un comando o una notifica particolare. Utilizzando le macro della [mappa messaggi](../atl/reference/message-map-macros-atl.md)di ATL, è possibile specificare una mappa messaggi per una finestra. Le routine della finestra in `CWindowImpl` , `CDialogImpl` e `CContainedWindowT` indirizzano i messaggi di una finestra alla relativa mappa messaggi.

Le [funzioni di gestione messaggi](../atl/message-handler-functions.md) accettano un argomento aggiuntivo di tipo `BOOL&` . Questo argomento indica se un messaggio è stato elaborato ed è impostato su TRUE per impostazione predefinita. Una funzione di gestione può quindi impostare l'argomento su FALSE per indicare che non ha gestito un messaggio. In questo caso, ATL continuerà a cercare una funzione di gestione più avanti nella mappa messaggi. Impostando questo argomento su FALSE, è possibile eseguire prima di tutto un'azione in risposta a un messaggio e quindi consentire all'elaborazione predefinita o a un'altra funzione del gestore di terminare la gestione del messaggio.

## <a name="chained-message-maps"></a>Mappe messaggi concatenate

ATL consente inoltre di concatenare le mappe messaggi, che indirizza la gestione dei messaggi a una mappa messaggi definita in un'altra classe. Ad esempio, è possibile implementare la gestione dei messaggi comune in una classe separata per fornire un comportamento uniforme per tutto il concatenamento di Windows a tale classe. È possibile concatenare a una classe di base o a un membro dati della classe.

ATL supporta inoltre il concatenamento dinamico, che consente di concatenare la mappa messaggi di un altro oggetto in fase di esecuzione. Per implementare il concatenamento dinamico, è necessario derivare la classe da [CDynamicChain](../atl/reference/cdynamicchain-class.md). Dichiarare quindi la macro [CHAIN_MSG_MAP_DYNAMIC](reference/message-map-macros-atl.md#chain_msg_map_dynamic) nella mappa messaggi. CHAIN_MSG_MAP_DYNAMIC richiede un numero univoco che identifica l'oggetto e la mappa messaggi a cui si esegue il concatenamento. È necessario definire questo valore univoco tramite una chiamata a `CDynamicChain::SetChainEntry` .

È possibile concatenare a qualsiasi classe che dichiara una mappa messaggi, purché la classe derivi da [CMessageMap](../atl/reference/cmessagemap-class.md). `CMessageMap` consente a un oggetto di esporre le mappe dei messaggi ad altri oggetti. Si noti che `CWindowImpl` deriva già da `CMessageMap` .

## <a name="alternate-message-maps"></a>Mappe messaggi alternative

Infine, ATL supporta le mappe messaggi alternative, dichiarate con la macro [ALT_MSG_MAP](reference/message-map-macros-atl.md#alt_msg_map) . Ogni mappa messaggi alternativa è identificata da un numero univoco, che viene passato a ALT_MSG_MAP. Utilizzando le mappe messaggi alternative, è possibile gestire i messaggi di più finestre in un'unica mappa. Si noti che, per impostazione predefinita, non `CWindowImpl` Usa le mappe messaggi alternative. Per aggiungere questo supporto, eseguire l'override del `WindowProc` metodo nella `CWindowImpl` classe derivata da e chiamare `ProcessWindowMessage` con l'identificatore della mappa messaggi.

## <a name="see-also"></a>Vedi anche

[Implementazione di una finestra](../atl/implementing-a-window.md)
