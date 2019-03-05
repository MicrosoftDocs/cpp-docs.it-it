---
title: Aggiunta di una finestra di dialogo ATL
ms.date: 11/04/2016
helpviewer_keywords:
- ATL projects, adding dialog resources
- MFC dialog boxes, ATL dialogs
- dialog boxes, ATL
ms.assetid: 152a378f-7b24-4f66-aeba-c740973f03a6
ms.openlocfilehash: ebbb610debe5d480cd1161149f89c4d357f9cd02
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57275799"
---
# <a name="adding-an-atl-dialog-box"></a>Aggiunta di una finestra di dialogo ATL

Per aggiungere una finestra di dialogo ATL al progetto, il progetto deve essere un progetto ATL o un progetto MFC che include il supporto ATL. È possibile usare la [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL per un'applicazione MFC.

Per impostazione predefinita, la creazione guidata finestra di dialogo ATL implementa una finestra di dialogo derivata da [CAxDialogImpl](../../atl/reference/caxdialogimpl-class.md). Questa classe include il supporto per l'hosting di controlli ActiveX e Windows. Se non si desidera il sovraccarico di supporto per il controllo ActiveX, una volta generato il codice con la procedura guidata, sostituire tutte le istanze del `CAxDialogImpl` con uno [CSimpleDialog](../../atl/reference/csimpledialog-class.md) oppure [CDialogImpl](../../atl/reference/cdialogimpl-class.md) come classe base .

> [!NOTE]
> `CSimpleDialog` Crea solo le finestre di dialogo modale che supportano solo i controlli comuni di Windows. `CDialogImpl` Crea finestre di dialogo modale o non modale.

## <a name="to-add-an-atl-dialog-resource-to-your-project"></a>Per aggiungere una risorsa finestra di dialogo ATL al progetto

1. Creare un progetto ATL usando il [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md).

1. Dal [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code), fare clic sul nome del progetto e fare clic su **Add** dal menu di scelta rapida. Fare clic su **aggiungere classe**.

1. Nel **modelli** riquadro della finestra il [Aggiungi classe](../../ide/add-class-dialog-box.md) della finestra di dialogo fare clic su **finestra di dialogo ATL**. Fare clic su **aperto** per visualizzare i [Creazione guidata finestra di dialogo ATL](../../atl/reference/atl-dialog-wizard.md).

Per altre informazioni, vedere [implementazione di una finestra di dialogo](../../atl/implementing-a-dialog-box.md).

## <a name="see-also"></a>Vedere anche

[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)<br/>
[Classi di finestre](../../atl/atl-window-classes.md)<br/>
[Mappe messaggi](../../atl/message-maps-atl.md)
