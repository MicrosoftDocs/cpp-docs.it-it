---
title: Creazione di un controllo casella combinata estesa
ms.date: 11/04/2016
helpviewer_keywords:
- extended combo boxes
- CComboBoxEx class [MFC], creating extended combo box controls
- extended combo boxes [MFC], creating
ms.assetid: a964267e-97b6-4e77-9f89-55bb5c68913f
ms.openlocfilehash: 554085304f5330ac9cd99a5b814af26ce3a9c7e6
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84616290"
---
# <a name="creating-an-extended-combo-box-control"></a>Creazione di un controllo casella combinata estesa

La modalità di creazione del controllo casella combinata estesa varia a seconda che il controllo venga utilizzato in una finestra di dialogo o in una finestra non di dialogo.

### <a name="to-use-ccomboboxex-directly-in-a-dialog-box"></a>Per utilizzare CComboBoxEx direttamente in una finestra di dialogo

1. Nell'editor finestre aggiungere un controllo casella combinata estesa alla risorsa del modello di finestra di dialogo. Specificare l'ID di controllo.

1. Specificare gli stili necessari, usando la finestra di dialogo Proprietà del controllo casella combinata estesa.

1. Utilizzare la [procedura guidata Aggiungi variabile membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di tipo [CComboBoxEx](reference/ccomboboxex-class.md) con la proprietà del controllo. È possibile utilizzare questo membro per chiamare le funzioni membro di `CComboBoxEx`.

1. Utilizzare la [creazione guidata classe](reference/mfc-class-wizard.md) per eseguire il mapping delle funzioni del gestore nella classe della finestra di dialogo per tutti i messaggi di notifica del controllo casella combinata estesa che è necessario gestire (vedere [mapping di messaggi a funzioni](reference/mapping-messages-to-functions.md)).

1. In [OnInitDialog](reference/cdialog-class.md#oninitdialog)impostare gli stili aggiuntivi per l' `CComboBoxEx` oggetto.

### <a name="to-use-ccomboboxex-in-a-nondialog-window"></a>Per usare CComboBoxEx in una finestra non di dialogo

1. Definire il controllo nella classe di visualizzazione o della finestra.

1. Chiamare la funzione membro [create](reference/ctabctrl-class.md#create) del controllo, possibilmente in [OnInitialUpdate](reference/cview-class.md#oninitialupdate), probabilmente all'inizio della funzione del gestore [OnCreate](reference/cwnd-class.md#oncreate) della finestra padre. Impostare gli stili per il controllo.

## <a name="see-also"></a>Vedere anche

[Uso di CComboBoxEx](using-ccomboboxex.md)<br/>
[Controlli](controls-mfc.md)
