---
title: Aggiunta di controlli manualmente | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Windows common controls [MFC], adding
- dialog box controls [MFC], adding to dialog boxes
- controlling input focus
- input focus control
- focus, controlling input [MFC]
- controls [MFC], adding to dialog boxes
- common controls [MFC], adding
ms.assetid: bc843e59-0c51-4b5b-8bf2-343f716469d2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c39f2d7803630aaaef6e803e90bf332c74937a71
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930615"
---
# <a name="adding-controls-by-hand"></a>Aggiunta manuale di controlli
È possibile selezionare [aggiungere controlli a una finestra di dialogo con l'editor finestre](../mfc/using-the-dialog-editor-to-add-controls.md) o aggiungerli manualmente, con il codice.  
  
 Per creare un oggetto di controllo, è in genere incorporeranno l'oggetto di controllo C++ in una finestra di dialogo di C++ o di un oggetto finestra cornice. Come molti altri oggetti in framework, i controlli richiedono due fasi. È necessario chiamare il controllo **crea** funzione membro come parte della creazione della finestra di finestra o frame di finestra di dialogo padre. Per le finestre di dialogo, questa operazione viene in genere eseguita [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog)e per le finestre cornice in [OnCreate](../mfc/reference/cwnd-class.md#oncreate).  
  
 Nell'esempio seguente viene illustrato come è possibile dichiarare un `CEdit` nella dichiarazione di classe di una classe derivata finestra di dialogo e quindi chiamare il `Create` funzione di membro in `OnInitDialog`. Poiché il `CEdit` oggetto viene dichiarato come un oggetto incorporato, viene creata automaticamente quando viene costruito l'oggetto finestra di dialogo, ma deve comunque essere inizializzato con il proprio `Create` funzione membro.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#1](../mfc/codesnippet/cpp/adding-controls-by-hand_1.h)]  
  
 I seguenti `OnInitDialog` funzione imposta un rettangolo, quindi chiama `Create` per creare il controllo di modifica di Windows e associarla al non inizializzato `CEdit` oggetto.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#2](../mfc/codesnippet/cpp/adding-controls-by-hand_2.cpp)]  
  
 Dopo aver creato l'oggetto di modifica, è anche possibile impostare lo stato attivo al controllo chiamando la `SetFocus` funzione membro. Infine, si restituiscono 0 da `OnInitDialog` per mostrare che è impostato lo stato attivo. Se si restituisce un valore diverso da zero, la gestione di finestra di dialogo Imposta lo stato attivo al primo elemento di controllo nell'elenco di elementi di finestra di dialogo. Nella maggior parte dei casi, si desidera aggiungere controlli alle finestre di dialogo con l'editor finestre.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione e utilizzo di controlli](../mfc/making-and-using-controls.md)   
 [Controlli](../mfc/controls-mfc.md)   
 [CDialog](../mfc/reference/cdialog-class.md#oninitdialog)

