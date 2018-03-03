---
title: Componenti della finestra di dialogo nel Framework | Documenti Microsoft
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
- MFC dialog boxes [MFC], creating
- dialog classes [MFC], dialog box components
- MFC dialog boxes [MFC], about MFC dialog boxes
- dialog templates [MFC], MFC framework
- MFC dialog boxes [MFC], dialog resource
ms.assetid: 592db160-0a8a-49be-ac72-ead278aca53f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 840e66def6a908b26b5021537eddee68c50a9628
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dialog-box-components-in-the-framework"></a>Componenti della finestra di dialogo nel framework
Nel framework MFC, una finestra di dialogo presenta due componenti:  
  
-   Una risorsa modello di finestra di dialogo che specifica i controlli della finestra di dialogo e sulla relativa posizione.  
  
     La risorsa finestra di dialogo Archivia un modello di finestra di dialogo da cui Windows crea la finestra di dialogo e viene visualizzato. Il modello specifica le caratteristiche della finestra di dialogo, incluse le dimensioni, posizione, lo stile e i tipi e le posizioni dei controlli della finestra di dialogo. In genere viene utilizzato un modello di finestra di dialogo archiviato come una risorsa, ma è anche possibile creare un modello personalizzato in memoria.  
  
-   Una classe di finestra di dialogo, derivata da [CDialog](../mfc/reference/cdialog-class.md), per fornire un'interfaccia programmatica per gestire la finestra di dialogo.  
  
     Una finestra di dialogo è una finestra e verrà collegata a una finestra di Windows quando è visibile. Quando viene creata la finestra di dialogo, la risorsa modello di finestra di dialogo viene utilizzata come modello per la creazione dei controlli di finestra per la finestra di dialogo.  
  
## <a name="see-also"></a>Vedere anche  
 [Finestre di dialogo](../mfc/dialog-boxes.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

