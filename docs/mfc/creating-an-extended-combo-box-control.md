---
title: Creazione di un controllo casella combinata estesa
ms.date: 11/04/2016
helpviewer_keywords:
- extended combo boxes
- CComboBoxEx class [MFC], creating extended combo box controls
- extended combo boxes [MFC], creating
ms.assetid: a964267e-97b6-4e77-9f89-55bb5c68913f
ms.openlocfilehash: d1e81664403f45a0a35cd24ceea16e1425b03403
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50668767"
---
# <a name="creating-an-extended-combo-box-control"></a>Creazione di un controllo casella combinata estesa

Modo in cui viene creato il controllo casella combinata estesi varia a seconda che si utilizzi il controllo in una finestra di dialogo o crearlo in una finestra non di dialogo.

### <a name="to-use-ccomboboxex-directly-in-a-dialog-box"></a>Usare CComboBoxEx direttamente in una finestra di dialogo

1. Nell'editor finestre, aggiungere un controllo casella combinata estesa alla risorsa modello di finestra di dialogo. Specificare l'ID di controllo.

1. Specificare tutti gli stili necessari, utilizzando la finestra di dialogo delle proprietà del controllo casella combinata estesa.

1. Usare la [Aggiunta guidata variabile membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di tipo [CComboBoxEx](../mfc/reference/ccomboboxex-class.md) con la proprietà del controllo. È possibile utilizzare questo membro per chiamare le funzioni membro di `CComboBoxEx`.

1. Utilizzare la finestra delle proprietà per eseguire il mapping di funzioni del gestore della classe di finestra di dialogo per eventuali messaggi di notifica del controllo casella combinata estesa è necessario gestire (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)).

1. Nelle [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog), impostare tutti gli stili aggiuntivi per il `CComboBoxEx` oggetto.

### <a name="to-use-ccomboboxex-in-a-nondialog-window"></a>Per usare CComboBoxEx in una finestra non di dialogo

1. Definire il controllo nella classe di visualizzazione o della finestra.

1. Il controllo delle chiamate [Create](../mfc/reference/ctabctrl-class.md#create) funzione di membro, possibilmente in [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate), possibilmente fin della finestra padre [OnCreate](../mfc/reference/cwnd-class.md#oncreate) funzione del gestore. Impostare gli stili per il controllo.

## <a name="see-also"></a>Vedere anche

[Uso di CComboBoxEx](../mfc/using-ccomboboxex.md)<br/>
[Controlli](../mfc/controls-mfc.md)

