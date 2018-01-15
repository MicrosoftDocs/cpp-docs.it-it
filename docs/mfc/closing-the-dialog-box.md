---
title: Chiudere la finestra di dialogo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- MFC dialog boxes [MFC], closing
- dialog boxes [MFC], closing
ms.assetid: 946f5675-c482-46a4-a5dd-34fe138ffae5
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e4c311a8d09ac3e1329b495fc321028e9f674993
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="closing-the-dialog-box"></a>Chiusura della finestra di dialogo
Consente di chiudere una finestra di dialogo modale quando l'utente sceglie uno dei relativi pulsanti, in genere il pulsante OK o Annulla. Se si sceglie il pulsante OK o Annulla, Windows inviare l'oggetto finestra di dialogo un **BN_CLICKED** messaggio di notifica del controllo con il pulsante dell'ID, ovvero **IDOK** o **IDCANCEL**. `CDialog`fornisce funzioni gestore predefinite per i messaggi: `OnOK` e `OnCancel`. La chiamata di gestori eventi predefiniti di `EndDialog` funzione membro per chiudere la finestra di dialogo. È inoltre possibile chiamare `EndDialog` dal codice. Per ulteriori informazioni, vedere il [EndDialog](../mfc/reference/cdialog-class.md#enddialog) funzione membro di classe `CDialog` nel *riferimenti alla libreria MFC*.  
  
 Per impostare la chiusura e l'eliminazione di una finestra di dialogo non modale, eseguire l'override `PostNcDestroy` e richiamare il **eliminare** gli operatori di **questo** puntatore. [Nella finestra di dialogo eliminazione](../mfc/destroying-the-dialog-box.md) illustra le operazioni successive.  
  
## <a name="see-also"></a>Vedere anche  
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

