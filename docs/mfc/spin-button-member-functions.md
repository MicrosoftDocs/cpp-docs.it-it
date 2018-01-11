---
title: Funzioni membro pulsante di selezione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- spin button control, methods
- CSpinButtonCtrl class [MFC], methods
ms.assetid: a08a26fd-b803-4cbe-a509-395fa357d057
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c6f0abfd5803ea4b4d4b4478104790e0f56e5afc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="spin-button-member-functions"></a>Funzioni membro pulsante di selezione
Sono disponibili diverse funzioni membro per il controllo di selezione ([CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)). Utilizzare queste funzioni per modificare gli attributi seguenti del pulsante di selezione.  
  
-   **Accelerazione** è possibile regolare la frequenza con la posizione delle modifiche quando un utente tiene premuto il pulsante freccia. Per lavorare con accelerazione, utilizzare il [funzioni membro SetAccel](../mfc/reference/cspinbuttonctrl-class.md#setaccel) e [GetAccel](../mfc/reference/cspinbuttonctrl-class.md#getaccel) funzioni membro.  
  
-   **Base** è possibile modificare la base utilizzata per visualizzare la posizione della didascalia della finestra buddy (10 o 16). Per utilizzare la base, utilizzare il [GetBase](../mfc/reference/cspinbuttonctrl-class.md#getbase) e [SetBase](../mfc/reference/cspinbuttonctrl-class.md#setbase) funzioni membro.  
  
-   **Finestra amico** è possibile impostare in modo dinamico la finestra buddy. Per eseguire una query o modificare il controllo è la finestra buddy, utilizzare il [funzioni membro GetBuddy](../mfc/reference/cspinbuttonctrl-class.md#getbuddy) e [SetBuddy](../mfc/reference/cspinbuttonctrl-class.md#setbuddy) funzioni membro.  
  
-   **Posizione** è possibile eseguire una query e modificare la posizione. Per utilizzare direttamente la posizione, utilizzare il [GetPos](../mfc/reference/cspinbuttonctrl-class.md#getpos) e [funzione membro SetPos](../mfc/reference/cspinbuttonctrl-class.md#setpos) funzioni membro. Poiché la didascalia del controllo buddy sia stato modificato (ad esempio, nel caso che il controllo correlato è un controllo di modifica), `GetPos` recupera la didascalia corrente e la posizione si adegua di conseguenza.  
  
-   **Intervallo** è possibile modificare le posizioni minime e massime per il pulsante di selezione. Per impostazione predefinita, il valore massimo è impostato su 0 e il valore minimo è impostato su 100. Poiché il valore massimo predefinito è minore del valore minimo predefinito, le azioni dei pulsanti freccia è poco intuitivo. In genere, si imposterà l'intervallo utilizzando la [SetRange](../mfc/reference/cspinbuttonctrl-class.md#setrange) funzione membro. Per eseguire una query sull'intervallo, utilizzare [GetRange](../mfc/reference/cspinbuttonctrl-class.md#getrange).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CSpinButtonCtrl](../mfc/using-cspinbuttonctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

