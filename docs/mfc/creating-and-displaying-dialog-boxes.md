---
title: Creazione e visualizzazione delle finestre di dialogo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- modal dialog boxes [MFC], creating
- opening dialog boxes
- modeless dialog boxes [MFC], creating
- MFC dialog boxes [MFC], creating
- MFC dialog boxes [MFC], displaying
ms.assetid: 1c5219ee-8b46-44bc-9708-83705d4f248b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0fcac345a572f8b33d76692d6852e2dc28698367
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33342462"
---
# <a name="creating-and-displaying-dialog-boxes"></a>Creazione e visualizzazione delle finestre di dialogo
La creazione di un oggetto finestra di dialogo è un'operazione che si svolge in due fasi. Innanzitutto, occorre costruire l'oggetto finestra di dialogo, quindi creare la finestra di dialogo. Le finestre di dialogo modali e non modali differiscono in parte nel processo utilizzato per crearle e visualizzarle. Nella tabella seguente vengono elencate le modalità di costruzione e di visualizzazione delle finestre di dialogo modali e non modali.  
  
### <a name="dialog-creation"></a>Creazione della finestra di dialogo  
  
|Tipo di finestra di dialogo|Modalità di creazione|  
|-----------------|----------------------|  
|[Non modale](../mfc/creating-modeless-dialog-boxes.md)|Costruire `CDialog`, quindi chiamare **crea** funzione membro.|  
|[Modale](../mfc/creating-modal-dialog-boxes.md)|Costruire `CDialog`, quindi chiamare la funzione membro `DoModal`.|  
  
 Se si desidera, creare la finestra di dialogo da un [modello finestra di dialogo in memoria](../mfc/using-a-dialog-template-in-memory.md) già costruito anziché da una risorsa modello di finestra di dialogo. Tuttavia, si tratta di un argomento avanzato.  
  
## <a name="see-also"></a>Vedere anche  
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

