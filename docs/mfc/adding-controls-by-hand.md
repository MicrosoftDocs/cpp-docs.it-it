---
title: Aggiunta manuale di controlli
ms.date: 11/04/2016
helpviewer_keywords:
- Windows common controls [MFC], adding
- dialog box controls [MFC], adding to dialog boxes
- controlling input focus
- input focus control
- focus, controlling input [MFC]
- controls [MFC], adding to dialog boxes
- common controls [MFC], adding
ms.assetid: bc843e59-0c51-4b5b-8bf2-343f716469d2
ms.openlocfilehash: c70539b49fcf2aa87f0bee375a87b38277b6ed42
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57270761"
---
# <a name="adding-controls-by-hand"></a>Aggiunta manuale di controlli

È possibile [aggiungere controlli a una finestra di dialogo con l'editor finestre](../mfc/using-the-dialog-editor-to-add-controls.md) oppure aggiungerli manualmente, con il codice.

Per creare un oggetto di controllo, che in genere verrà incorporata l'oggetto di controllo C++ in una finestra di dialogo di C++ o di un oggetto finestra cornice. Come molti altri oggetti nel framework, i controlli richiedono due fasi. È necessario chiamare il controllo **Create** funzione membro come parte della creazione della finestra di finestra o frame di finestra di dialogo padre. Per le finestre di dialogo, questa operazione viene in genere eseguita [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog)e per le finestre cornice nel [OnCreate](../mfc/reference/cwnd-class.md#oncreate).

Nell'esempio seguente viene illustrato come è possibile dichiarare un `CEdit` dell'oggetto nella dichiarazione di classe di una classe di finestre di dialogo derivata e quindi chiamare il `Create` funzione di membro in `OnInitDialog`. Poiché il `CEdit` oggetto viene dichiarato come un oggetto incorporato, viene creata automaticamente quando viene costruito l'oggetto finestra di dialogo, ma devono ancora essere inizializzata con i propri `Create` funzione membro.

[!code-cpp[NVC_MFCControlLadenDialog#1](../mfc/codesnippet/cpp/adding-controls-by-hand_1.h)]

Quanto segue `OnInitDialog` funzione imposta un rettangolo, quindi chiama `Create` per creare il controllo di modifica di Windows e associarlo a per il non inizializzata `CEdit` oggetto.

[!code-cpp[NVC_MFCControlLadenDialog#2](../mfc/codesnippet/cpp/adding-controls-by-hand_2.cpp)]

Dopo aver creato l'oggetto di modifica, è anche possibile impostare lo stato attivo al controllo chiamando il `SetFocus` funzione membro. Infine, restituire 0 di `OnInitDialog` per mostrare che è impostato lo stato attivo. Se si restituisce un valore diverso da zero, la gestione di finestra di dialogo Imposta lo stato attivo sul primo elemento di controllo nell'elenco di elementi di finestra di dialogo. Nella maggior parte dei casi, è opportuno aggiungere controlli alle finestre di dialogo con l'editor finestre.

## <a name="see-also"></a>Vedere anche

[Creazione e uso di controlli](../mfc/making-and-using-controls.md)<br/>
[Controlli](../mfc/controls-mfc.md)<br/>
[CDialog::OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog)
