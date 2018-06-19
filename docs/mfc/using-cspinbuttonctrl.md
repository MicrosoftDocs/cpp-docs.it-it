---
title: Utilizzo di CSpinButtonCtrl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CSpinButtonCtrl
dev_langs:
- C++
helpviewer_keywords:
- up-down controls [MFC], spin button control
- up-down controls
- spin button control
- CSpinButtonCtrl class [MFC], using
ms.assetid: a91db36b-e11e-42ef-8e89-51915cc486d2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 03b1e83977c1d75070e8878dfdcc53c7afca7a86
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33384400"
---
# <a name="using-cspinbuttonctrl"></a>Utilizzo di CSpinButtonCtrl
Il *pulsante di selezione* controllo (noto anche come un *UpDown* controllo) offre una coppia di frecce che un utente può fare clic per modificare un valore. Questo valore è noto come il *posizione corrente*. La posizione rimane all'interno dell'intervallo del pulsante di selezione. Quando l'utente fa clic sulla freccia in su, la posizione si sposta verso il valore massimo; e quando l'utente fa clic sulla freccia rivolta verso il basso, la posizione si sposta verso il valore minimo.  
  
 Il controllo pulsante di selezione è rappresentato in MFC per la [CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md) classe.  
  
> [!NOTE]
>  Per impostazione predefinita, l'intervallo per il pulsante di selezione è il valore massimo impostato su zero (0) e il valore minimo è impostato su 100. Perché il valore massimo è minore del valore minimo, facendo clic sulla freccia in su riduce la posizione e fare clic sulla freccia rivolta verso il basso aumenta. Utilizzare [CSpinButtonCtrl:: SetRange](../mfc/reference/cspinbuttonctrl-class.md#setrange) per modificare questi valori.  
  
 In genere, la posizione corrente viene visualizzata in un controllo correlato. Il controllo correlato è noto come il *finestra buddy*. Per un'illustrazione di un controllo pulsante di selezione, vedere [controlli di scorrimento](http://msdn.microsoft.com/library/windows/desktop/bb759889) in Windows SDK.  
  
 Per creare un controllo di selezione e una finestra buddy controllo di modifica, in Visual Studio, trascinare un controllo di modifica nella finestra di dialogo o e quindi trascinare un controllo di selezione. Selezionare la casella di selezione e impostare il relativo **Auto Buddy** e **Set Buddy Integer** proprietà **True**. Impostare inoltre il **allineamento** proprietà. **Right Align** è più comune. Con queste impostazioni, il controllo di modifica è impostato come finestra buddy poiché precede direttamente il controllo di modifica nell'ordine di tabulazione. Il controllo di modifica vengono visualizzati i numeri interi e sul lato destro del controllo di modifica è incorporato il controllo di selezione. Facoltativamente, è possibile impostare l'intervallo valido di controllo di selezione utilizzando la [CSpinButtonCtrl:: SetRange](../mfc/reference/cspinbuttonctrl-class.md#setrange) metodo. Nessun gestore di eventi è necessari per la comunicazione tra il controllo di selezione e finestra buddy perché scambiano dati direttamente. Se si utilizza un controllo di selezione per altri scopi, ad esempio, per scorrere una sequenza di windows o le finestre di dialogo, quindi aggiungere un gestore per il `UDN_DELTAPOS` messaggio ed eseguire l'azione personalizzata non esiste.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Stili dei pulsanti di selezione](../mfc/spin-button-styles.md)  
  
-   [Funzioni membro pulsante di selezione](../mfc/spin-button-member-functions.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli](../mfc/controls-mfc.md)

