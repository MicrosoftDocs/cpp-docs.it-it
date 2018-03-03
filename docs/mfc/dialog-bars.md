---
title: Barre di finestra di dialogo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- MFC, control bars
- CDialogBar class [MFC], dialog bars
- control bars [MFC], dialog bars
- dialog bars
- dialog bars [MFC], about dialog bars
ms.assetid: 485c8055-6bb0-4051-8417-dd2971499321
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3d9d7319f23741f683e31cfd683a8ebd6d25acdd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dialog-bars"></a>Barra di finestra di dialogo
Una barra di finestra di dialogo è una barra degli strumenti, un tipo di [barra di controllo](../mfc/control-bars.md) che può contenere qualsiasi tipo di controllo. Poiché presenta le caratteristiche di una finestra di dialogo non modale, un [CDialogBar](../mfc/reference/cdialogbar-class.md) oggetto fornisce una barra degli strumenti più potente.  
  
 Esistono alcune differenze principali tra una barra degli strumenti e un `CDialogBar` oggetto. Oggetto `CDialogBar` oggetto viene creato da una risorsa modello di finestra di dialogo, che è possibile creare tramite l'editor di finestre di Visual C++ e che può contenere qualsiasi tipo di controllo di Windows. L'utente può spostarsi dal controllo del codice al controllo. Ed è possibile specificare uno stile di allineamento per allineare la barra di finestra di dialogo con qualsiasi parte della finestra cornice padre o anche per mantenere se l'elemento padre viene ridimensionato. Nella figura seguente mostra una barra di finestra di dialogo con un'ampia gamma di controlli.  
  
 ![Barra di finestra di dialogo VC](../mfc/media/vc378t1.gif "vc378t1")  
Una barra di finestra di dialogo  
  
 Per gli altri aspetti, utilizzano un `CDialogBar` oggetto è come l'utilizzo di una finestra di dialogo non modale. Utilizzare l'editor finestre per progettare e creare la risorsa finestra di dialogo.  
  
 Uno dei virtù di barre di finestra di dialogo è che possono includere controlli che non siano pulsanti.  
  
 Mentre è normale per derivare le classi di finestra di dialogo da `CDialog`, non è in genere derivare una classe personalizzata per una barra di finestra di dialogo. Barre di finestra di dialogo sono estensioni per una finestra principale ed eventuali messaggi di notifica del controllo barra di finestra di dialogo, ad esempio **BN_CLICKED** o **EN_CHANGE**, verrà inviato all'elemento padre della finestra di dialogo della barra della finestra principale.  
  
## <a name="see-also"></a>Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)   
 [Esempio](../visual-cpp-samples.md)

