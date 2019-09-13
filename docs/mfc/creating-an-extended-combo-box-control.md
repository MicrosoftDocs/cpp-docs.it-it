---
title: Creazione di un controllo casella combinata estesa
ms.date: 11/04/2016
helpviewer_keywords:
- extended combo boxes
- CComboBoxEx class [MFC], creating extended combo box controls
- extended combo boxes [MFC], creating
ms.assetid: a964267e-97b6-4e77-9f89-55bb5c68913f
ms.openlocfilehash: 87e2e1cd3c29ba838a17c24ece4a89adda21db0c
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70907729"
---
# <a name="creating-an-extended-combo-box-control"></a>Creazione di un controllo casella combinata estesa

La modalità di creazione del controllo casella combinata estesa varia a seconda che il controllo venga utilizzato in una finestra di dialogo o in una finestra non di dialogo.

### <a name="to-use-ccomboboxex-directly-in-a-dialog-box"></a>Per utilizzare CComboBoxEx direttamente in una finestra di dialogo

1. Nell'editor finestre aggiungere un controllo casella combinata estesa alla risorsa del modello di finestra di dialogo. Specificare l'ID di controllo.

1. Specificare gli stili necessari, usando la finestra di dialogo Proprietà del controllo casella combinata estesa.

1. Utilizzare la [procedura guidata Aggiungi variabile membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di tipo [CComboBoxEx](../mfc/reference/ccomboboxex-class.md) con la proprietà del controllo. È possibile utilizzare questo membro per chiamare le funzioni membro di `CComboBoxEx`.

1. Utilizzare la [creazione guidata classe](reference/mfc-class-wizard.md) per eseguire il mapping delle funzioni del gestore nella classe della finestra di dialogo per tutti i messaggi di notifica del controllo casella combinata estesa che è necessario gestire (vedere [mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)).

1. In [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog)impostare gli stili aggiuntivi per l' `CComboBoxEx` oggetto.

### <a name="to-use-ccomboboxex-in-a-nondialog-window"></a>Per usare CComboBoxEx in una finestra non di dialogo

1. Definire il controllo nella classe di visualizzazione o della finestra.

1. Chiamare la funzione membro [create](../mfc/reference/ctabctrl-class.md#create) del controllo, possibilmente in [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate), probabilmente all'inizio della funzione del gestore [OnCreate](../mfc/reference/cwnd-class.md#oncreate) della finestra padre. Impostare gli stili per il controllo.

## <a name="see-also"></a>Vedere anche

[Uso di CComboBoxEx](../mfc/using-ccomboboxex.md)<br/>
[Controlli](../mfc/controls-mfc.md)
