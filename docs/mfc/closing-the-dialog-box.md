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
ms.openlocfilehash: d7cd57819c5ab462b0310162d3c043c5f39d2a69
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="closing-the-dialog-box"></a>Chiusura della finestra di dialogo
Consente di chiudere una finestra di dialogo modale quando l'utente sceglie uno dei relativi pulsanti, in genere il pulsante OK o Annulla. Se si sceglie il pulsante OK o Annulla, Windows inviare l'oggetto finestra di dialogo un **BN_CLICKED** messaggio di notifica del controllo con il pulsante dell'ID, ovvero **IDOK** o **IDCANCEL**. `CDialog`fornisce funzioni gestore predefinite per i messaggi: `OnOK` e `OnCancel`. La chiamata di gestori eventi predefiniti di `EndDialog` funzione membro per chiudere la finestra di dialogo. È inoltre possibile chiamare `EndDialog` dal codice. Per ulteriori informazioni, vedere il [EndDialog](../mfc/reference/cdialog-class.md#enddialog) funzione membro di classe `CDialog` nel *riferimenti alla libreria MFC*.  
  
 Per impostare la chiusura e l'eliminazione di una finestra di dialogo non modale, eseguire l'override `PostNcDestroy` e richiamare il **eliminare** gli operatori di **questo** puntatore. [Nella finestra di dialogo eliminazione](../mfc/destroying-the-dialog-box.md) illustra le operazioni successive.  
  
## <a name="see-also"></a>Vedere anche  
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

