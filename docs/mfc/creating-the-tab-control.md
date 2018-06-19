---
title: Creazione del controllo Tab | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- TCS_EX_REGISTERDROP
- TCS_EX_FLATSEPARATORS
dev_langs:
- C++
helpviewer_keywords:
- TCS_EX_REGISTERDROP extended style [MFC]
- tab controls [MFC], creating
- CTabCtrl class [MFC], creating
- TCS_EX_FLATSEPARATORS extended style
ms.assetid: 3a9c2d64-f5f4-41ea-84ab-fceb73c3dbdc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3945d441130d723bbda3d137f2adae637d56c2b6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33344091"
---
# <a name="creating-the-tab-control"></a>Creazione del controllo Tab
Modalità di creazione del controllo tab varia a seconda che si utilizza un controllo in una finestra di dialogo o crearlo in una finestra non di dialogo.  
  
### <a name="to-use-ctabctrl-directly-in-a-dialog-box"></a>Per utilizzare CTabCtrl direttamente in una finestra di dialogo  
  
1.  Nell'editor finestre, aggiungere un controllo struttura a schede alla risorsa modello di finestra di dialogo. Specificare l'ID di controllo.  
  
2.  Utilizzare il [Aggiunta guidata variabile membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di tipo [CTabCtrl](../mfc/reference/ctabctrl-class.md) con la proprietà del controllo. È possibile utilizzare questo membro per chiamare le funzioni membro di `CTabCtrl`.  
  
3.  Eseguire il mapping di funzioni del gestore nella classe di finestra di dialogo per gli eventuali messaggi di notifica di controllo scheda che è necessario gestire. Per ulteriori informazioni, vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md).  
  
4.  In [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog), impostare gli stili per il `CTabCtrl`.  
  
### <a name="to-use-ctabctrl-in-a-nondialog-window"></a>Per utilizzare CTabCtrl in una finestra non di dialogo  
  
1.  Definire il controllo nella classe di visualizzazione o della finestra.  
  
2.  Chiamare il controllo [crea](../mfc/reference/ctabctrl-class.md#create) funzione membro, possibilmente in [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate)e possibilmente fin della finestra padre [OnCreate](../mfc/reference/cwnd-class.md#oncreate) (se la funzione del gestore creazione di una sottoclasse del controllo). Impostare gli stili per il controllo.  
  
 Dopo il `CTabCtrl` oggetto è stato creato, è possibile impostare o cancellare i seguenti stili estesi:  
  
-   **TCS_EX_FLATSEPARATORS** il controllo scheda verrà disegnato un separatore tra gli elementi della scheda. Questo periodo esteso stile solo interessa scheda i controlli che dispongono di **TCS_BUTTONS** e **TCS_FLATBUTTONS** stili. Per impostazione predefinita, la creazione del controllo scheda con il **TCS_FLATBUTTONS** stile imposta questo stile esteso.  
  
-   **TCS_EX_REGISTERDROP** il controllo scheda Genera **TCN_GETOBJECT** i messaggi di notifica per richiedere un obiettivo di rilascio dell'oggetto quando un oggetto viene trascinato sugli elementi nel controllo della scheda.  
  
    > [!NOTE]
    >  Per ricevere il **TCN_GETOBJECT** notifica, è necessario inizializzare le librerie OLE con una chiamata a [AfxOleInit](../mfc/reference/ole-initialization.md#afxoleinit).  
  
 Gli stili possono essere recuperati ed è impostati, dopo aver creato il controllo, con le rispettive chiamate al [GetExtendedStyle](../mfc/reference/ctabctrl-class.md#getextendedstyle) e [SetExtendedStyle](../mfc/reference/ctabctrl-class.md#setextendedstyle) funzioni membro.  
  
 Ad esempio, impostare il **TCS_EX_FLATSEPARATORS** stile con le righe di codice seguente:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#33](../mfc/codesnippet/cpp/creating-the-tab-control_1.cpp)]  
  
 Cancella il **TCS_EX_FLATSEPARATORS** lo stile da un `CTabCtrl` oggetto con le righe di codice seguente:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#34](../mfc/codesnippet/cpp/creating-the-tab-control_2.cpp)]  
  
 Questa operazione rimuoverà i separatori che vengono visualizzate tra i pulsanti del `CTabCtrl` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTabCtrl](../mfc/using-ctabctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

