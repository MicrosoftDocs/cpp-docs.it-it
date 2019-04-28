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
ms.openlocfilehash: e0b7ff31576b345ac2911e62a6e10469845eecba
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62175030"
---
# <a name="creating-and-displaying-dialog-boxes"></a>Creazione e visualizzazione delle finestre di dialogo

La creazione di un oggetto finestra di dialogo è un'operazione che si svolge in due fasi. Innanzitutto, occorre costruire l'oggetto finestra di dialogo, quindi creare la finestra di dialogo. Le finestre di dialogo modali e non modali differiscono in parte nel processo utilizzato per crearle e visualizzarle. Nella tabella seguente vengono elencate le modalità di costruzione e di visualizzazione delle finestre di dialogo modali e non modali.

### <a name="dialog-creation"></a>Creazione della finestra di dialogo

|Tipo di finestra di dialogo|Modalità di creazione|
|-----------------|----------------------|
|[Non modale](../mfc/creating-modeless-dialog-boxes.md)|Costruire `CDialog`, quindi chiamare la funzione membro `Create`.|
|[Modal](../mfc/creating-modal-dialog-boxes.md)|Costruire `CDialog`, quindi chiamare la funzione membro `DoModal`.|

Se si desidera, creare una finestra di dialogo da un [modello di finestra di dialogo in memoria](../mfc/using-a-dialog-template-in-memory.md) già costruito anziché da una risorsa modello di finestra di dialogo. Tuttavia, si tratta di un argomento avanzato.

## <a name="see-also"></a>Vedere anche

[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)
