---
description: 'Altre informazioni su: implementazione di una finestra di dialogo'
title: Implementazione di una finestra di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- CSimpleDialog class, implementing dialog boxes in ATL
- dialog boxes, ATL
- CAxDialogImpl class, implementing dialog boxes in ATL
- ATL, dialog boxes
ms.assetid: 478525f2-aa6a-435a-b162-68fc8aa98a8e
ms.openlocfilehash: 736619b39d06cffc28bc9723c94d0c5367dd51d4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97152910"
---
# <a name="implementing-a-dialog-box"></a>Implementazione di una finestra di dialogo

Esistono due modi per aggiungere una finestra di dialogo al progetto ATL: utilizzare la creazione guidata finestra di dialogo ATL o aggiungerla manualmente.

## <a name="adding-a-dialog-box-with-the-atl-dialog-wizard"></a>Aggiunta di una finestra di dialogo con la creazione guidata finestra di dialogo ATL

Nella finestra di [dialogo Aggiungi classe](../ide/adding-a-class-visual-cpp.md#add-class-dialog-box)selezionare l'oggetto finestra di dialogo ATL per aggiungere una finestra di dialogo al progetto ATL. Compilare la creazione guidata finestra di dialogo ATL in modo appropriato e fare clic su **fine**. La procedura guidata consente di aggiungere al progetto una classe derivata da [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md) . Aprire **visualizzazione risorse** dal menu **Visualizza** , individuare la finestra di dialogo e fare doppio clic su di essa per aprirla nell'editor risorse.

> [!NOTE]
> Se la finestra di dialogo è derivata da `CAxDialogImpl` , può ospitare controlli ActiveX e Windows. Se non si desidera il sovraccarico del supporto del controllo ActiveX nella classe della finestra di dialogo, utilizzare invece [CSimpleDialog](../atl/reference/csimpledialog-class.md) o [CDialogImpl](../atl/reference/cdialogimpl-class.md) .

I gestori di messaggi e di eventi possono essere aggiunti alla classe della finestra di dialogo da Visualizzazione classi. Per ulteriori informazioni, vedere [aggiunta di un gestore di messaggi ATL](../atl/adding-an-atl-message-handler.md).

## <a name="adding-a-dialog-box-manually"></a>Aggiunta di una finestra di dialogo manualmente

L'implementazione di una finestra di dialogo è simile all'implementazione di una finestra. È possibile derivare una classe da [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md), [CDialogImpl](../atl/reference/cdialogimpl-class.md)o [CSimpleDialog](../atl/reference/csimpledialog-class.md) e dichiarare una [mappa messaggi](../atl/message-maps-atl.md) per la gestione dei messaggi. Tuttavia, è necessario specificare anche un ID di risorsa del modello di finestra di dialogo nella classe derivata. La classe deve avere un membro dati denominato `IDD` per contenere questo valore.

> [!NOTE]
> Quando si crea una finestra di dialogo mediante la creazione guidata finestra di dialogo ATL, la procedura guidata aggiunge automaticamente il `IDD` membro come **`enum`** tipo.

`CDialogImpl` consente di implementare una finestra di dialogo modale o non modale che ospita i controlli Windows. `CAxDialogImpl` consente di implementare una finestra di dialogo modale o non modale che ospita controlli ActiveX e Windows.

Per creare una finestra di dialogo modale, creare un'istanza della `CDialogImpl` classe derivata da (o `CAxDialogImpl` derivata da), quindi chiamare il metodo [DoModal](../atl/reference/cdialogimpl-class.md#domodal) . Per chiudere una finestra di dialogo modale, chiamare il metodo [EndDialog](../atl/reference/cdialogimpl-class.md#enddialog) da un gestore di messaggi. Per creare una finestra di dialogo non modale, chiamare il metodo [create](../atl/reference/cdialogimpl-class.md#create) anziché `DoModal` . Per eliminare definitivamente una finestra di dialogo non modale, chiamare [DestroyWindow](../atl/reference/cdialogimpl-class.md#destroywindow).

Gli eventi di sink vengono eseguiti automaticamente in [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md). Implementare i gestori di messaggi della finestra di dialogo come i gestori in una `CWindowImpl` classe derivata da. Se è presente un valore restituito specifico del messaggio, restituirlo come `LRESULT` . I `LRESULT` valori restituiti vengono mappati da ATL per una gestione corretta da parte di gestione finestre di dialogo di Windows. Per informazioni dettagliate, vedere il codice sorgente per [CDialogImplBaseT::D ialogproc](../atl/reference/cdialogimpl-class.md#dialogproc) in atlwin. h.

## <a name="example"></a>Esempio

La classe seguente implementa una finestra di dialogo:

[!code-cpp[NVC_ATL_Windowing#66](../atl/codesnippet/cpp/implementing-a-dialog-box_1.h)]

## <a name="see-also"></a>Vedi anche

[Classi finestra](../atl/atl-window-classes.md)
