---
description: 'Altre informazioni: creazione e visualizzazione di finestre di dialogo'
title: Creazione e visualizzazione delle finestre di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- modal dialog boxes [MFC], creating
- opening dialog boxes
- modeless dialog boxes [MFC], creating
- MFC dialog boxes [MFC], creating
- MFC dialog boxes [MFC], displaying
ms.assetid: 1c5219ee-8b46-44bc-9708-83705d4f248b
ms.openlocfilehash: 9865e43392021cc7ba1349a73bffb8e47f4cca9d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97309825"
---
# <a name="creating-and-displaying-dialog-boxes"></a>Creazione e visualizzazione delle finestre di dialogo

La creazione di un oggetto finestra di dialogo è un'operazione che si svolge in due fasi. Innanzitutto, occorre costruire l'oggetto finestra di dialogo, quindi creare la finestra di dialogo. Le finestre di dialogo modali e non modali differiscono in parte nel processo utilizzato per crearle e visualizzarle. Nella tabella seguente vengono elencate le modalità di costruzione e di visualizzazione delle finestre di dialogo modali e non modali.

### <a name="dialog-creation"></a>Creazione della finestra di dialogo

|Tipo di dialogo|Modalità di creazione|
|-----------------|----------------------|
|[Modale](creating-modeless-dialog-boxes.md)|Costruire `CDialog`, quindi chiamare la funzione membro `Create`.|
|[Modale](creating-modal-dialog-boxes.md)|Costruire `CDialog`, quindi chiamare la funzione membro `DoModal`.|

È possibile, se lo si desidera, creare la finestra di dialogo da un [modello di finestra di dialogo in memoria](using-a-dialog-template-in-memory.md) creato anziché da una risorsa modello di finestra di dialogo. Tuttavia, si tratta di un argomento avanzato.

## <a name="see-also"></a>Vedi anche

[Utilizzo delle finestre di dialogo in MFC](life-cycle-of-a-dialog-box.md)
