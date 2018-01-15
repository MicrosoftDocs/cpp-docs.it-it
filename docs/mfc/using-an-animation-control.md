---
title: Utilizzo di un controllo Animation | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- controls [MFC], animation
- CAnimateCtrl class [MFC], animation controls
- animation controls [MFC]
ms.assetid: a009a464-e12d-4112-bf52-04a09b28dd88
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 38523c832f4a30f247bd3e1d0b8318f44f5c47b0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-an-animation-control"></a>Utilizzo di un controllo Animation
L'utilizzo tipico di un controllo animation segue il modello seguente:  
  
-   Viene creato il controllo. Se il controllo è specificato nel modello di una finestra di dialogo, la creazione avviene automaticamente quando viene creata la finestra di dialogo. (È necessario disporre di un [CAnimateCtrl](../mfc/reference/canimatectrl-class.md) membro nella classe della finestra che corrisponde al controllo animazione.) In alternativa, è possibile utilizzare il [crea](../mfc/reference/canimatectrl-class.md#create) funzione membro per creare il controllo come finestra figlio di qualsiasi finestra.  
  
-   Caricare un clip AVI nel controllo animazione chiamando il [aprire](../mfc/reference/canimatectrl-class.md#open) funzione membro. Se il controllo animazione è in una finestra di dialogo, si consiglia di eseguire questa operazione è della classe di finestra di dialogo [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) (funzione).  
  
-   Riprodurre il clip chiamando il [riprodurre](../mfc/reference/canimatectrl-class.md#play) funzione membro. Se il controllo animazione è in una finestra di dialogo, si consiglia di eseguire questa operazione è della classe di finestra di dialogo **OnInitDialog** (funzione). La chiamata **riprodurre** non è necessaria se il controllo animazione di `ACS_AUTOPLAY` set di stile.  
  
-   Se si desidera visualizzare le parti del clip o riprodurlo fotogramma, utilizzare il `Seek` funzione membro. Per interrompere la riproduzione, utilizzare il `Stop` funzione membro.  
  
-   Se non si desidera eliminare immediatamente il controllo, rimuovere il clip dalla memoria chiamando la **Chiudi** funzione membro.  
  
-   Se il controllo animazione è in una finestra di dialogo e `CAnimateCtrl` oggetto verrà eliminato automaticamente. In caso contrario, è necessario assicurarsi che sia il controllo che l'oggetto `CAnimateCtrl` vengono eliminati correttamente. Eliminazione definitiva del controllo automaticamente chiude del clip AVI.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CAnimateCtrl](../mfc/using-canimatectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

