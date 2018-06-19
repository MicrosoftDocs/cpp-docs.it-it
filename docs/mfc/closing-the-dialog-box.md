---
title: Chiudere la finestra di dialogo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC dialog boxes [MFC], closing
- dialog boxes [MFC], closing
ms.assetid: 946f5675-c482-46a4-a5dd-34fe138ffae5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c800c204fd09057585064397d459f92c9ded272d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33341745"
---
# <a name="closing-the-dialog-box"></a>Chiusura della finestra di dialogo
Consente di chiudere una finestra di dialogo modale quando l'utente sceglie uno dei relativi pulsanti, in genere il pulsante OK o Annulla. Se si sceglie il pulsante OK o Annulla, Windows inviare l'oggetto finestra di dialogo un **BN_CLICKED** messaggio di notifica del controllo con il pulsante dell'ID, ovvero **IDOK** o **IDCANCEL**. `CDialog` fornisce funzioni di gestione predefinito per questi messaggi: `OnOK` e `OnCancel`. La chiamata di gestori eventi predefiniti di `EndDialog` funzione membro per chiudere la finestra di dialogo. È inoltre possibile chiamare `EndDialog` dal codice. Per ulteriori informazioni, vedere il [EndDialog](../mfc/reference/cdialog-class.md#enddialog) funzione membro di classe `CDialog` nel *riferimenti alla libreria MFC*.  
  
 Per impostare la chiusura e l'eliminazione di una finestra di dialogo non modale, eseguire l'override `PostNcDestroy` e richiamare il **eliminare** gli operatori di **questo** puntatore. [Eliminazione definitiva della finestra di dialogo](../mfc/destroying-the-dialog-box.md) spiega cosa si verifica in seguito.  
  
## <a name="see-also"></a>Vedere anche  
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

