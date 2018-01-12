---
title: Aggiunta di controlli a mano | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- Windows common controls [MFC], adding
- dialog box controls [MFC], adding to dialog boxes
- controlling input focus
- input focus control
- focus, controlling input [MFC]
- controls [MFC], adding to dialog boxes
- common controls [MFC], adding
ms.assetid: bc843e59-0c51-4b5b-8bf2-343f716469d2
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b13f6fdfb3c11819eb8d8838e5617e7a349d1023
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="adding-controls-by-hand"></a>Aggiunta manuale di controlli
È possibile [aggiungere controlli a una finestra di dialogo con l'editor finestre](../mfc/using-the-dialog-editor-to-add-controls.md) o aggiungerli manualmente, mediante codice.  
  
 Per creare un oggetto di controllo, si verrà incorporato in genere l'oggetto di controllo C++ in una finestra di dialogo di C++ o di un oggetto finestra cornice. Come molti altri oggetti in framework, i controlli richiedono due fasi. È necessario chiamare il controllo **crea** funzione membro come parte della creazione della finestra di casella o cornice di finestra di dialogo padre. Per le finestre di dialogo, questa operazione viene in genere eseguita [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog)e per le finestre cornice in [OnCreate](../mfc/reference/cwnd-class.md#oncreate).  
  
 Nell'esempio seguente viene illustrato come è possibile dichiarare un `CEdit` nella dichiarazione di classe di una classe derivata di finestra di dialogo e quindi chiamare il **crea** funzione membro in `OnInitDialog`. Poiché il `CEdit` oggetto viene dichiarato come un oggetto incorporato, viene creata automaticamente quando l'oggetto finestra di dialogo, ma deve comunque essere inizializzato con il proprio **crea** funzione membro.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#1](../mfc/codesnippet/cpp/adding-controls-by-hand_1.h)]  
  
 Nell'esempio `OnInitDialog` funzione imposta un rettangolo, quindi chiama **crea** per creare il controllo di modifica di Windows e collegarlo al non inizializzato `CEdit` oggetto.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#2](../mfc/codesnippet/cpp/adding-controls-by-hand_2.cpp)]  
  
 Dopo aver creato l'oggetto di modifica, è anche possibile impostare lo stato attivo al controllo chiamando la `SetFocus` funzione membro. Infine, restituire 0 di `OnInitDialog` per mostrare impostare lo stato attivo. Se si restituisce un valore diverso da zero, il gestore della finestra di dialogo Imposta lo stato attivo al primo elemento di controllo nell'elenco degli elementi della finestra di dialogo. Nella maggior parte dei casi, si desidera aggiungere controlli alle finestre di dialogo con l'editor finestre.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione e utilizzo di controlli](../mfc/making-and-using-controls.md)   
 [Controlli](../mfc/controls-mfc.md)   
 [CDialog](../mfc/reference/cdialog-class.md#oninitdialog)

