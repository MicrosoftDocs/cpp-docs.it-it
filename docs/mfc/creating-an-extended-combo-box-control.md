---
title: Creazione di un controllo casella combinata estesa | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- extended combo boxes
- CComboBoxEx class [MFC], creating extended combo box controls
- extended combo boxes [MFC], creating
ms.assetid: a964267e-97b6-4e77-9f89-55bb5c68913f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7c6a891aeadf2fa8366eec52a967e13776db6523
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33341212"
---
# <a name="creating-an-extended-combo-box-control"></a>Creazione di un controllo casella combinata estesa
Come il controllo casella combinata estesa varia a seconda che si utilizza un controllo in una finestra di dialogo o crearlo in una finestra non di dialogo.  
  
### <a name="to-use-ccomboboxex-directly-in-a-dialog-box"></a>Per utilizzare CComboBoxEx direttamente in una finestra di dialogo  
  
1.  Nell'editor finestre, aggiungere un controllo casella combinata estesa alla risorsa modello di finestra di dialogo. Specificare l'ID di controllo.  
  
2.  Specificare tutti gli stili necessari, utilizzando la finestra di dialogo delle proprietà del controllo casella combinata estesa.  
  
3.  Utilizzare il [Aggiunta guidata variabile membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di tipo [CComboBoxEx](../mfc/reference/ccomboboxex-class.md) con la proprietà del controllo. È possibile utilizzare questo membro per chiamare le funzioni membro di `CComboBoxEx`.  
  
4.  Utilizzare la finestra proprietà per eseguire il mapping di funzioni del gestore nella classe di finestra di dialogo per gli eventuali messaggi di notifica del controllo casella combinata estesa è necessario gestire (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)).  
  
5.  In [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog), impostare tutti gli stili aggiuntivi per il `CComboBoxEx` oggetto.  
  
### <a name="to-use-ccomboboxex-in-a-nondialog-window"></a>Per utilizzare CComboBoxEx in una finestra non di dialogo  
  
1.  Definire il controllo nella classe di visualizzazione o della finestra.  
  
2.  Chiamare il controllo [crea](../mfc/reference/ctabctrl-class.md#create) funzione membro, possibilmente in [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate)e possibilmente fin della finestra padre [OnCreate](../mfc/reference/cwnd-class.md#oncreate) funzione del gestore. Impostare gli stili per il controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CComboBoxEx](../mfc/using-ccomboboxex.md)   
 [Controlli](../mfc/controls-mfc.md)

