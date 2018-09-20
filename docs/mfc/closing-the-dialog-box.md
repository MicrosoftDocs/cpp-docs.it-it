---
title: Chiudere la finestra di dialogo | Microsoft Docs
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
ms.openlocfilehash: e9ad4b8af63b68912c232767bf1fd14070fda261
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46409051"
---
# <a name="closing-the-dialog-box"></a>Chiusura della finestra di dialogo

Finestra di dialogo modale viene chiusa quando l'utente sceglie uno dei relativi pulsanti, in genere il pulsante OK o il pulsante Annulla. Se si sceglie il pulsante OK o Annulla, Windows inviare l'oggetto finestra di dialogo un **BN_CLICKED** messaggio di notifica del controllo con il pulsante dell'ID, ovvero **IDOK** oppure **IDCANCEL**. `CDialog` fornisce funzioni gestore predefinite per questi messaggi: `OnOK` e `OnCancel`. La chiamata di gestori predefiniti di `EndDialog` funzione membro per chiudere la finestra di dialogo. È inoltre possibile chiamare `EndDialog` dal codice. Per altre informazioni, vedere la [EndDialog](../mfc/reference/cdialog-class.md#enddialog) la funzione membro della classe `CDialog` nel *riferimenti alla libreria MFC*.

Per disporre di chiusura ed eliminazione di una finestra di dialogo non modale, eseguire l'override `PostNcDestroy` e richiamare il **eliminare** operatore sul **ciò** puntatore. [La finestra di dialogo di eliminazione definitiva](../mfc/destroying-the-dialog-box.md) illustra le operazioni successive.

## <a name="see-also"></a>Vedere anche

[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

