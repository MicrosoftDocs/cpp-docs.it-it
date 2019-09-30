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
ms.openlocfilehash: 6d23e4d2c9249ce248eb8092963036f2ba5cacac
ms.sourcegitcommit: 1e6386be9084f70def7b3b8b4bab319a117102b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2019
ms.locfileid: "71685735"
---
# <a name="creating-and-displaying-dialog-boxes"></a>Creazione e visualizzazione delle finestre di dialogo

La creazione di un oggetto finestra di dialogo è un'operazione che si svolge in due fasi. Innanzitutto, occorre costruire l'oggetto finestra di dialogo, quindi creare la finestra di dialogo. Le finestre di dialogo modali e non modali differiscono in parte nel processo utilizzato per crearle e visualizzarle. Nella tabella seguente vengono elencate le modalità di costruzione e di visualizzazione delle finestre di dialogo modali e non modali.

### <a name="dialog-creation"></a>Creazione della finestra di dialogo

|Tipo di finestra di dialogo|Modalità di creazione|
|-----------------|----------------------|
|[Modale](../mfc/creating-modeless-dialog-boxes.md)|Costruire `CDialog`, quindi chiamare la funzione membro `Create`.|
|[Modale](../mfc/creating-modal-dialog-boxes.md)|Costruire `CDialog`, quindi chiamare la funzione membro `DoModal`.|

È possibile, se lo si desidera, creare la finestra di dialogo da un [modello di finestra di dialogo in memoria](../mfc/using-a-dialog-template-in-memory.md) creato anziché da una risorsa modello di finestra di dialogo. Tuttavia, si tratta di un argomento avanzato.

## <a name="see-also"></a>Vedere anche

[Utilizzo delle finestre di dialogo in MFC](../mfc/life-cycle-of-a-dialog-box.md)
