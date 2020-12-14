---
description: 'Altre informazioni su: messaggi di notifica del controllo Tree'
title: Messaggi di notifica del controllo Tree
ms.date: 11/04/2016
helpviewer_keywords:
- notifications [MFC], tree controls
- messages [MFC], notification
- CTreeCtrl class [MFC], notifications
- notifications [MFC], CTreeCtrl
- tree controls [MFC], notification messages
ms.assetid: ac7013b4-91dd-4668-bd75-439ca0680ef9
ms.openlocfilehash: 899b6469a2de9a076dd33e62c5023f502448d45f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97263985"
---
# <a name="tree-control-notification-messages"></a>Messaggi di notifica del controllo Tree

Un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) Invia i messaggi di notifica seguenti come WM_NOTIFY messaggi:

|Messaggio di notifica|Description|
|--------------------------|-----------------|
|TVN_BEGINDRAG|Segnala l'inizio di un'operazione di trascinamento della selezione|
|TVN_BEGINLABELEDIT|Segnala l'inizio della modifica dell'etichetta sul posto|
|TVN_BEGINRDRAG|Segnala l'inizio di un'operazione di trascinamento della selezione, usando il pulsante destro del mouse.|
|TVN_DELETEITEM|Segnala l'eliminazione di un elemento specifico|
|TVN_ENDLABELEDIT|Segnala la fine della modifica dell'etichetta|
|TVN_GETDISPINFO|Richiede le informazioni richieste dal controllo albero per visualizzare un elemento|
|TVN_ITEMEXPANDED|Segnala che l'elenco di elementi figlio di un elemento padre è stato espanso o compresso|
|TVN_ITEMEXPANDING|Segnala che l'elenco di elementi figlio di un elemento padre sta per essere espanso o compresso|
|TVN_KEYDOWN|Segnala un evento di tastiera|
|TVN_SELCHANGED|Segnala che la selezione è cambiata da un elemento a un altro|
|TVN_SELCHANGING|Segnala che la selezione sta per essere modificata da un elemento a un altro.|
|TVN_SETDISPINFO|Notifica per aggiornare le informazioni mantenute per un elemento|

## <a name="see-also"></a>Vedi anche

[Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
