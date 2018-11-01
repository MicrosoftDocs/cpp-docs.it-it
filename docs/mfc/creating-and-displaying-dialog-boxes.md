---
title: Creazione e visualizzazione delle finestre di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- modal dialog boxes [MFC], creating
- opening dialog boxes
- modeless dialog boxes [MFC], creating
- MFC dialog boxes [MFC], creating
- MFC dialog boxes [MFC], displaying
ms.assetid: 1c5219ee-8b46-44bc-9708-83705d4f248b
ms.openlocfilehash: 778ee0cbb154c65b0cc74a207a175354c2e2a90b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50431083"
---
# <a name="creating-and-displaying-dialog-boxes"></a>Creazione e visualizzazione delle finestre di dialogo

La creazione di un oggetto finestra di dialogo è un'operazione che si svolge in due fasi. Innanzitutto, occorre costruire l'oggetto finestra di dialogo, quindi creare la finestra di dialogo. Le finestre di dialogo modali e non modali differiscono in parte nel processo utilizzato per crearle e visualizzarle. Nella tabella seguente vengono elencate le modalità di costruzione e di visualizzazione delle finestre di dialogo modali e non modali.

### <a name="dialog-creation"></a>Creazione della finestra di dialogo

|Tipo di finestra di dialogo|Modalità di creazione|
|-----------------|----------------------|
|[Non modale](../mfc/creating-modeless-dialog-boxes.md)|Costruire `CDialog`, quindi chiamare la funzione membro `Create`.|
|[Modale](../mfc/creating-modal-dialog-boxes.md)|Costruire `CDialog`, quindi chiamare la funzione membro `DoModal`.|

Se si desidera, creare una finestra di dialogo da un [modello di finestra di dialogo in memoria](../mfc/using-a-dialog-template-in-memory.md) già costruito anziché da una risorsa modello di finestra di dialogo. Tuttavia, si tratta di un argomento avanzato.

## <a name="see-also"></a>Vedere anche

[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

