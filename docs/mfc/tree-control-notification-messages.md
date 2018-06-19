---
title: Struttura ad albero di messaggi di notifica di controllo | Documenti Microsoft
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
ms.openlocfilehash: f7c352da9f9283f53c926a8223984620ee7fa6ce
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33385736"
---
# <a name="tree-control-notification-messages"></a>Messaggi di notifica del controllo Tree
Un controllo struttura ad albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) invia i seguenti messaggi di notifica come **WM_NOTIFY** messaggi:  
  
|Messaggio di notifica|Descrizione|  
|--------------------------|-----------------|  
|**TVN_BEGINDRAG**|Segnala l'avvio di un'operazione di trascinamento e rilascio|  
|**TVN_BEGINLABELEDIT**|Segnala l'avvio della modifica delle etichette sul posto|  
|**TVN_BEGINRDRAG**|Segnala l'avvio di un'operazione di trascinamento e rilascio, utilizzando il pulsante destro del mouse|  
|**TVN_DELETEITEM**|Segnala l'eliminazione di un elemento specifico|  
|**TVN_ENDLABELEDIT**|Indica la fine di modificare le etichette|  
|**TVN_GETDISPINFO**|Richiede le informazioni che è necessario il controllo struttura ad albero per visualizzare un elemento|  
|**TVN_ITEMEXPANDED**|Segnala che l'elenco di un elemento padre degli elementi figlio è stato espanso o compresso|  
|**TVN_ITEMEXPANDING**|Segnala che l'elenco di un elemento padre degli elementi figlio sta per essere espansi o compressi|  
|**TVN_KEYDOWN**|Segnala un evento della tastiera|  
|**TVN_SELCHANGED**|Segnala che la selezione è stato modificato da un elemento a un altro|  
|**TVN_SELCHANGING**|Segnala che la selezione sta per essere modificato da un elemento a un altro|  
|**TVN_SETDISPINFO**|Notifica per aggiornare le informazioni memorizzate per un elemento|  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

