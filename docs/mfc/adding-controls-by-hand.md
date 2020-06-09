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
ms.openlocfilehash: 4efd1c23c7e4d6f7d8e6fa9fe046f8de11c825a6
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84626529"
---
# <a name="adding-controls-by-hand"></a>Aggiunta manuale di controlli

È possibile [aggiungere controlli a una finestra di dialogo con l'editor finestre](using-the-dialog-editor-to-add-controls.md) o aggiungerli manualmente con il codice.

Per creare un oggetto controllo manualmente, in genere si incorpora l'oggetto controllo C++ in una finestra di dialogo C++ o in un oggetto finestra cornice. Come molti altri oggetti nel Framework, i controlli richiedono una costruzione in due fasi. È necessario chiamare la funzione membro **create** del controllo come parte della creazione della finestra di dialogo padre o della finestra cornice. Per le finestre di dialogo, questa operazione viene in genere eseguita in [OnInitDialog](reference/cdialog-class.md#oninitdialog)e per le finestre cornice in [OnCreate](reference/cwnd-class.md#oncreate).

Nell'esempio seguente viene illustrato come dichiarare un `CEdit` oggetto nella dichiarazione di classe di una classe della finestra di dialogo derivata e quindi chiamare la `Create` funzione membro in `OnInitDialog` . Poiché l' `CEdit` oggetto viene dichiarato come oggetto incorporato, viene creato automaticamente quando viene costruito l'oggetto finestra di dialogo, ma deve comunque essere inizializzato con la relativa `Create` funzione membro.

[!code-cpp[NVC_MFCControlLadenDialog#1](codesnippet/cpp/adding-controls-by-hand_1.h)]

La `OnInitDialog` funzione seguente configura un rettangolo, quindi chiama `Create` per creare il controllo di modifica di Windows e collegarlo all'oggetto non inizializzato `CEdit` .

[!code-cpp[NVC_MFCControlLadenDialog#2](codesnippet/cpp/adding-controls-by-hand_2.cpp)]

Dopo aver creato l'oggetto Edit, è anche possibile impostare lo stato attivo per l'input sul controllo chiamando la `SetFocus` funzione membro. Infine, viene restituito 0 da `OnInitDialog` per indicare che si imposta lo stato attivo. Se si restituisce un valore diverso da zero, il gestore della finestra di dialogo Imposta lo stato attivo sul primo elemento di controllo nell'elenco di elementi della finestra di dialogo. Nella maggior parte dei casi, è possibile aggiungere controlli alle finestre di dialogo con l'editor finestre di dialogo.

## <a name="see-also"></a>Vedere anche

[Creazione e utilizzo di controlli](making-and-using-controls.md)<br/>
[Controlli](controls-mfc.md)<br/>
[CDialog:: OnInitDialog](reference/cdialog-class.md#oninitdialog)
