---
title: Implementazione di una finestra di dialogoImplementing a Dialog Box
ms.date: 11/04/2016
helpviewer_keywords:
- CSimpleDialog class, implementing dialog boxes in ATL
- dialog boxes, ATL
- CAxDialogImpl class, implementing dialog boxes in ATL
- ATL, dialog boxes
ms.assetid: 478525f2-aa6a-435a-b162-68fc8aa98a8e
ms.openlocfilehash: 435926b0a0affde03580ceb2b479cb08a17d0454
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319481"
---
# <a name="implementing-a-dialog-box"></a>Implementazione di una finestra di dialogoImplementing a Dialog Box

Esistono due modi per aggiungere una finestra di dialogo al progetto ATL: utilizzare la Creazione guidata finestra di dialogo ATL o aggiungerla manualmente.

## <a name="adding-a-dialog-box-with-the-atl-dialog-wizard"></a>Aggiunta di una finestra di dialogo con la Creazione guidata finestra di dialogo ATLAdding a Dialog Box with the ATL Dialog Wizard

Nella finestra di [dialogo Aggiungi classe](../ide/add-class-dialog-box.md)selezionare l'oggetto Finestra di dialogo ATL per aggiungere una finestra di dialogo al progetto ATL. Compilare la Creazione guidata finestra di dialogo ATL in base alle esigenze e fare clic su **Fine**. La procedura guidata aggiunge una classe derivata da [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md) al progetto. Aprire **Visualizzazione risorse** dal menu **Visualizza,** individuare la finestra di dialogo e fare doppio clic su di essa per aprirla nell'editor delle risorse.

> [!NOTE]
> Se la finestra di `CAxDialogImpl`dialogo è derivata da , può ospitare controlli ActiveX e Windows. Se non si desidera l'overhead del supporto dei controlli ActiveX nella classe della finestra di dialogo, utilizzare invece [CSimpleDialog](../atl/reference/csimpledialog-class.md) o [CDialogImpl.](../atl/reference/cdialogimpl-class.md)

I gestori di eventi e messaggi possono essere aggiunti alla classe della finestra di dialogo da Visualizzazione classi. Per ulteriori informazioni, vedere [Aggiunta di un gestore messaggi ATL](../atl/adding-an-atl-message-handler.md).

## <a name="adding-a-dialog-box-manually"></a>Aggiunta manuale di una finestra di dialogo

L'implementazione di una finestra di dialogo è simile all'implementazione di una finestra. Derivare una classe da [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md), [CDialogImpl](../atl/reference/cdialogimpl-class.md)o [CSimpleDialog](../atl/reference/csimpledialog-class.md) e dichiarare una [mappa messaggi](../atl/message-maps-atl.md) per gestire i messaggi. Tuttavia, è necessario specificare anche un ID di risorsa modello di finestra di dialogo nella classe derivata. La classe deve avere `IDD` un membro dati chiamato per contenere questo valore.

> [!NOTE]
> Quando si crea una finestra di dialogo utilizzando la `IDD` Creazione guidata finestra di dialogo ATL, la procedura guidata aggiunge automaticamente il membro come tipo **enum.**

`CDialogImpl`consente di implementare una finestra di dialogo modale o non modale che ospita i controlli di Windows. `CAxDialogImpl`consente di implementare una finestra di dialogo modale o non modale che ospita controlli ActiveX e Windows.

Per creare una finestra di dialogo `CDialogImpl`modale, `CAxDialogImpl`creare un'istanza della classe derivata (o derivata) e quindi chiamare il [metodo DoModal.](../atl/reference/cdialogimpl-class.md#domodal) Per chiudere una finestra di dialogo modale, chiamare il [EndDialog](../atl/reference/cdialogimpl-class.md#enddialog) metodo da un gestore di messaggi. Per creare una finestra di dialogo non `DoModal`modale, chiamare il metodo [Create](../atl/reference/cdialogimpl-class.md#create) anziché . Per eliminare definitivamente una finestra di dialogo non modale, chiamare [DestroyWindow](../atl/reference/cdialogimpl-class.md#destroywindow).

Gli eventi di sinfing vengono eseguiti automaticamente in [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md). Implementare i gestori di messaggi della finestra di `CWindowImpl`dialogo come si farebbe con i gestori in una classe derivata. Se è presente un valore restituito specifico `LRESULT`del messaggio, restituirlo come valore . I valori `LRESULT` restituiti vengono mappati da ATL per una corretta gestione da parte del gestore finestre di dialogo di Windows. Per informazioni dettagliate, vedere il codice sorgente per [CDialogImplBaseT::DialogProc](../atl/reference/cdialogimpl-class.md#dialogproc) in atlwin.h.

## <a name="example"></a>Esempio

La classe seguente implementa una finestra di dialogo:The following class implements a dialog box:

[!code-cpp[NVC_ATL_Windowing#66](../atl/codesnippet/cpp/implementing-a-dialog-box_1.h)]

## <a name="see-also"></a>Vedere anche

[Classi finestra](../atl/atl-window-classes.md)
