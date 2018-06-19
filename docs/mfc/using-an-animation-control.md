---
title: Utilizzo di un controllo Animation | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- controls [MFC], animation
- CAnimateCtrl class [MFC], animation controls
- animation controls [MFC]
ms.assetid: a009a464-e12d-4112-bf52-04a09b28dd88
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ecde11ddb55992032b2a8b052e2897a384293bc0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33382554"
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

