---
title: Implementazione di una finestra di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- CSimpleDialog class, implementing dialog boxes in ATL
- dialog boxes, ATL
- CAxDialogImpl class, implementing dialog boxes in ATL
- ATL, dialog boxes
ms.assetid: 478525f2-aa6a-435a-b162-68fc8aa98a8e
ms.openlocfilehash: 1a3084d4655e173234d3bb6e8d411b28e8968377
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62198053"
---
# <a name="implementing-a-dialog-box"></a>Implementazione di una finestra di dialogo

Esistono due modi per aggiungere una finestra di dialogo per il progetto ATL: usare la creazione guidata finestra di dialogo ATL o aggiungerla manualmente.

## <a name="adding-a-dialog-box-with-the-atl-dialog-wizard"></a>Aggiunta di una finestra di dialogo con la creazione guidata finestra di dialogo ATL

Nel [finestra di dialogo Aggiungi classe](../ide/add-class-dialog-box.md), selezionare l'oggetto finestra di dialogo ATL per una finestra di dialogo Aggiungi al progetto ATL. Compilare la creazione guidata finestra di dialogo ATL come appropriato, quindi fare clic su **fine**. La procedura guidata aggiunge una classe derivata da [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md) al progetto. Aprire **visualizzazione di risorse** dalle **visualizzazione** menu, individuare la finestra di dialogo e fare doppio clic su esso per aprirlo nell'editor di risorse.

> [!NOTE]
>  Se la finestra di dialogo è derivata da `CAxDialogImpl`, possa ospitare entrambi ActiveX e controlli di Windows. Se non si desidera il sovraccarico di supporto per il controllo ActiveX nella classe finestra di dialogo, utilizzare [CSimpleDialog](../atl/reference/csimpledialog-class.md) oppure [CDialogImpl](../atl/reference/cdialogimpl-class.md) invece.

Gestori eventi e messaggi possono essere aggiunti alla classe della finestra dalla visualizzazione classi. Per altre informazioni, vedere [aggiunta di un gestore di messaggi ATL](../atl/adding-an-atl-message-handler.md).

## <a name="adding-a-dialog-box-manually"></a>Aggiunta manuale di una finestra di dialogo

Implementazione di una finestra di dialogo è simile all'implementazione di una finestra. Si deriva una classe da una [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md), [CDialogImpl](../atl/reference/cdialogimpl-class.md), o [CSimpleDialog](../atl/reference/csimpledialog-class.md) e dichiarare un [mappa messaggi](../atl/message-maps-atl.md) per gestire i messaggi. Tuttavia, è necessario specificare anche un ID di risorsa modello di finestra di dialogo nella classe derivata. La classe deve avere un membro dati denominato `IDD` per contenere tale valore.

> [!NOTE]
>  Quando si crea una finestra di dialogo mediante la creazione guidata finestra di dialogo ATL, la procedura guidata aggiunge automaticamente il `IDD` membro come un **enum** tipo.

`CDialogImpl` Consente di implementare una finestra modale o una finestra di dialogo non modale che ospita i controlli di Windows. `CAxDialogImpl` Consente di implementare una finestra modale o una finestra di dialogo non modale che ospita i controlli ActiveX sia Windows.

Per creare una finestra di dialogo modale, creare un'istanza del `CDialogImpl`-derivato (o `CAxDialogImpl`-derivato) di classi e quindi chiamare il [DoModal](../atl/reference/cdialogimpl-class.md#domodal) (metodo). Per chiudere una finestra di dialogo modale, chiamare il [EndDialog](../atl/reference/cdialogimpl-class.md#enddialog) metodo da un gestore di messaggi. Per creare una finestra di dialogo non modale, chiamare il [Create](../atl/reference/cdialogimpl-class.md#create) invece del metodo `DoModal`. Per eliminare una finestra di dialogo non modale, chiamare [DestroyWindow](../atl/reference/cdialogimpl-class.md#destroywindow).

Il sink degli eventi viene eseguito automaticamente [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md). Implementare i gestori di messaggi della finestra di dialogo come gestori in un `CWindowImpl`-classe derivata. Se non esiste un valore restituito di un messaggio specifico, restituito come un `LRESULT`. L'oggetto restituito `LRESULT` vengono eseguito il mapping di valori da ATL per la gestione appropriata dal gestore di finestra di dialogo di Windows. Per informazioni dettagliate, vedere il codice sorgente [CDialogImplBaseT:: DialogProc](../atl/reference/cdialogimpl-class.md#dialogproc) in atlwin. h.

## <a name="example"></a>Esempio

La classe seguente implementa una finestra di dialogo:

[!code-cpp[NVC_ATL_Windowing#66](../atl/codesnippet/cpp/implementing-a-dialog-box_1.h)]

## <a name="see-also"></a>Vedere anche

[Classi di finestre](../atl/atl-window-classes.md)
