---
title: Nella finestra di dialogo di inizializzazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- initializing dialog boxes [MFC]
- OnInitDialog method [MFC]
- modal dialog boxes [MFC], initializing
- modeless dialog boxes [MFC], initializing
- MFC dialog boxes [MFC], initializing
ms.assetid: 968142f5-19f9-4b34-a1d4-8e6412d4379b
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2af05011e8f2af2993edf3ea2f82716137b17857
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="initializing-the-dialog-box"></a>Inizializzazione della finestra di dialogo
Dopo la finestra di dialogo casella e tutti i relativi controlli vengono creati, ma prima la finestra di dialogo verrà visualizzata la (di entrambi i tipi) sullo schermo, l'oggetto finestra di dialogo [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) viene chiamata la funzione membro. Per una finestra di dialogo modale, ciò si verifica durante la `DoModal` chiamare. Per una finestra di dialogo non modale, `OnInitDialog` viene chiamato quando **crea** viene chiamato. È in genere di eseguire l'override `OnInitDialog` per inizializzare i controlli della finestra di dialogo, ad esempio l'impostazione il testo iniziale di una casella di modifica. È necessario chiamare il `OnInitDialog` funzione membro della classe di base, `CDialog`, dal `OnInitDialog` eseguire l'override.  
  
 Se si desidera impostare il colore di sfondo della finestra di dialogo (e che tutte le altre finestre di dialogo dell'applicazione), vedere [impostando il colore di sfondo della finestra di dialogo](../mfc/setting-the-dialog-boxs-background-color.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

