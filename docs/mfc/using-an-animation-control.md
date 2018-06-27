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
ms.openlocfilehash: 0d6b6b07040fbece5fae24fb2ca6be8985695eb0
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36950537"
---
# <a name="using-an-animation-control"></a>Utilizzo di un controllo Animation
L'utilizzo tipico di un controllo animation segue il modello seguente:  
  
-   Viene creato il controllo. Se il controllo è specificato nel modello di una finestra di dialogo, la creazione avviene automaticamente quando viene creata la finestra di dialogo. (È necessario disporre di un [CAnimateCtrl](../mfc/reference/canimatectrl-class.md) membro nella classe finestra di dialogo che corrisponde al controllo animazione.) In alternativa, è possibile utilizzare il [crea](../mfc/reference/canimatectrl-class.md#create) funzione membro per creare il controllo come finestra figlio di tutte le finestre.  
  
-   Caricare un clip AVI nel controllo animazione chiamando il [Open](../mfc/reference/canimatectrl-class.md#open) funzione membro. Se il controllo animazione è in una finestra di dialogo, un ottimo strumento per eseguire questa operazione è della classe di finestra di dialogo [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) (funzione).  
  
-   Riprodurre le clip chiamando il [riprodurre](../mfc/reference/canimatectrl-class.md#play) funzione membro. Se il controllo animazione è in una finestra di dialogo, un ottimo strumento per eseguire questa operazione è della classe di finestra di dialogo `OnInitDialog` (funzione). La chiamata `Play` non è necessaria se il controllo animazione è lo stile ACS_AUTOPLAY impostato.  
  
-   Se si desidera visualizzare parti di clip o lo si riproduce frame singolarmente, utilizzare il `Seek` funzione membro. Per interrompere la riproduzione, utilizzare il `Stop` funzione membro.  
  
-   Se non si desidera eliminare immediatamente il controllo, rimuovere il ritaglio dalla memoria chiamando la `Close` funzione membro.  
  
-   Se il controllo animazione è in una finestra di dialogo, e il `CAnimateCtrl` oggetto verrà eliminato automaticamente. In caso contrario, è necessario assicurarsi che sia il controllo che l'oggetto `CAnimateCtrl` vengono eliminati correttamente. Distruzione del controllo automaticamente chiude l'apertura del clip AVI.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CAnimateCtrl](../mfc/using-canimatectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

