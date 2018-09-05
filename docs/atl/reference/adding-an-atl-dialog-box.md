---
title: Aggiunta di una finestra di dialogo ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- ATL projects, adding dialog resources
- MFC dialog boxes, ATL dialogs
- dialog boxes, ATL
ms.assetid: 152a378f-7b24-4f66-aeba-c740973f03a6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bd34cbcecdcf8943f8a02a2bb82c5c712f2cb16f
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43754722"
---
# <a name="adding-an-atl-dialog-box"></a>Aggiunta di una finestra di dialogo ATL

Per aggiungere una finestra di dialogo ATL al progetto, il progetto deve essere un progetto ATL o un progetto MFC che include il supporto ATL. È possibile usare la [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL per un'applicazione MFC.

Per impostazione predefinita, la creazione guidata finestra di dialogo ATL implementa una finestra di dialogo derivata da [CAxDialogImpl](../../atl/reference/caxdialogimpl-class.md). Questa classe include il supporto per l'hosting di controlli ActiveX e Windows. Se non si desidera il sovraccarico di supporto per il controllo ActiveX, una volta generato il codice con la procedura guidata, sostituire tutte le istanze del `CAxDialogImpl` con uno [CSimpleDialog](../../atl/reference/csimpledialog-class.md) oppure [CDialogImpl](../../atl/reference/cdialogimpl-class.md) come classe base .

> [!NOTE]
>  `CSimpleDialog` Crea solo le finestre di dialogo modale che supportano solo i controlli comuni di Windows. `CDialogImpl` Crea finestre di dialogo modale o non modale.

### <a name="to-add-an-atl-dialog-resource-to-your-project"></a>Per aggiungere una risorsa finestra di dialogo ATL al progetto

1. Creare un progetto ATL usando il [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md).

2. Dal [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code), fare clic sul nome del progetto e fare clic su **Add** dal menu di scelta rapida. Fare clic su **aggiungere classe**.

3. Nel riquadro dei modelli dei [Aggiungi classe](../../ide/add-class-dialog-box.md) finestra di dialogo, fare clic su **finestra di dialogo ATL**. Fare clic su **aperto** per visualizzare i [Creazione guidata finestra di dialogo ATL](../../atl/reference/atl-dialog-wizard.md).

Per altre informazioni, vedere [implementazione di una finestra di dialogo](../../atl/implementing-a-dialog-box.md).

## <a name="see-also"></a>Vedere anche

[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)   
[Classi di finestre](../../atl/atl-window-classes.md)   
[Mappe messaggi](../../atl/message-maps-atl.md)

