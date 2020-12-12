---
description: 'Altre informazioni su: aggiunta di una finestra di dialogo ATL'
title: Aggiunta di una finestra di dialogo ATL
ms.date: 11/04/2016
helpviewer_keywords:
- ATL projects, adding dialog resources
- MFC dialog boxes, ATL dialogs
- dialog boxes, ATL
ms.assetid: 152a378f-7b24-4f66-aeba-c740973f03a6
ms.openlocfilehash: 9d4abcafd5e12c6b8cffd636bf28a9e79f96e5ce
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97165719"
---
# <a name="adding-an-atl-dialog-box"></a>Aggiunta di una finestra di dialogo ATL

Per aggiungere una finestra di dialogo ATL al progetto, il progetto deve essere un progetto ATL o un progetto MFC che includa il supporto per ATL. È possibile utilizzare la [creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL per un'applicazione MFC.

Per impostazione predefinita, la creazione guidata finestra di dialogo ATL implementa una finestra di dialogo derivata da [CAxDialogImpl](../../atl/reference/caxdialogimpl-class.md). Questa classe include il supporto per l'hosting di controlli ActiveX e Windows. Se non si desidera il sovraccarico del supporto del controllo ActiveX, dopo che la procedura guidata ha generato il codice, sostituire tutte le istanze di `CAxDialogImpl` con [CSimpleDialog](../../atl/reference/csimpledialog-class.md) o [CDialogImpl](../../atl/reference/cdialogimpl-class.md) come classe di base.

> [!NOTE]
> `CSimpleDialog` Crea solo le finestre di dialogo modali che supportano solo i controlli comuni di Windows. `CDialogImpl` consente di creare finestre di dialogo modali o non modali.

## <a name="to-add-an-atl-dialog-resource-to-your-project"></a>Per aggiungere una risorsa finestra di dialogo ATL al progetto

1. Creare un progetto ATL utilizzando la [creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md).

1. Da [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code), fare clic con il pulsante destro del mouse sul nome del progetto e scegliere **Aggiungi** dal menu di scelta rapida. Fare clic su **Aggiungi classe**.

1. Nel riquadro **modelli** della finestra di dialogo [Aggiungi classe](../../ide/adding-a-class-visual-cpp.md#add-class-dialog-box) fare clic su **ATL finestra** di dialogo. Fare clic su **Apri** per visualizzare la [creazione guidata finestra di dialogo ATL](../../atl/reference/atl-dialog-wizard.md).

Per ulteriori informazioni, vedere [implementazione di una](../../atl/implementing-a-dialog-box.md)finestra di dialogo.

## <a name="see-also"></a>Vedi anche

[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)<br/>
[Classi finestra](../../atl/atl-window-classes.md)<br/>
[Mappe messaggi](../../atl/message-maps-atl.md)
