---
title: Struttura dei messaggi di notifica di controllo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- notifications [MFC], tree controls
- messages [MFC], notification
- CTreeCtrl class [MFC], notifications
- notifications [MFC], CTreeCtrl
- tree controls [MFC], notification messages
ms.assetid: ac7013b4-91dd-4668-bd75-439ca0680ef9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 07911dec25bf9d6b80f025e2f3738e3d98ffd2cb
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46390747"
---
# <a name="tree-control-notification-messages"></a>Messaggi di notifica del controllo Tree

Un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) invia i messaggi di notifica seguente come WM_NOTIFY messaggi:

|Messaggio di notifica|Descrizione|
|--------------------------|-----------------|
|TVN_BEGINDRAG|Segnala l'avvio di un'operazione di trascinamento e rilascio|
|TVN_BEGINLABELEDIT|Segnala l'avvio della modifica dell'etichetta sul posto|
|TVN_BEGINRDRAG|Segnala l'avvio di un'operazione di trascinamento e rilascio, usando il pulsante destro del mouse|
|TVN_DELETEITEM|Segnala l'eliminazione di un elemento specifico|
|TVN_ENDLABELEDIT|Segnala la fine della modifica dell'etichetta|
|TVN_GETDISPINFO|Richiede le informazioni che richiede il controllo albero per visualizzare un elemento|
|TVN_ITEMEXPANDED|Segnala che un elemento padre dell'elenco di elementi figlio è stato espanso o compresso|
|TVN_ITEMEXPANDING|Segnala che un elemento padre dell'elenco di elementi figlio sta per essere espansi o compressi|
|TVN_KEYDOWN|Segnala un evento della tastiera|
|TVN_SELCHANGED|Segnala che la selezione è stato modificato da un elemento a un altro|
|TVN_SELCHANGING|Segnala che la selezione sta per essere modificato da un elemento in un altro|
|TVN_SETDISPINFO|Notifica per aggiornare le informazioni memorizzate per un elemento|

## <a name="see-also"></a>Vedere anche

[Uso di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

