---
title: Implementazione di una finestra di dialogo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- CSimpleDialog class, implementing dialog boxes in ATL
- dialog boxes, ATL
- CAxDialogImpl class, implementing dialog boxes in ATL
- ATL, dialog boxes
ms.assetid: 478525f2-aa6a-435a-b162-68fc8aa98a8e
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9b3ff0e58623a241160da21266d085753be1c457
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="implementing-a-dialog-box"></a>Implementazione di una finestra di dialogo
Esistono due modi per aggiungere una finestra di dialogo per il progetto ATL: utilizzare la creazione guidata finestra di dialogo ATL o aggiungerla manualmente.  
  
## <a name="adding-a-dialog-box-with-the-atl-dialog-wizard"></a>Aggiunta di una finestra di dialogo con la creazione guidata finestra di dialogo ATL  
 Nel [la finestra di dialogo Aggiungi classe](../ide/add-class-dialog-box.md), selezionare l'oggetto finestra di dialogo ATL per aggiungere una finestra di dialogo per il progetto ATL. Completare la creazione guidata finestra di dialogo ATL come appropriato e fare clic su **fine**. La procedura guidata aggiunge una classe derivata da [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md) al progetto. Aprire la visualizzazione di risorse dal **vista** menu, individuare la finestra di dialogo e fare doppio clic su esso per aprirlo nell'editor di risorse.  
  
> [!NOTE]
>  Se la finestra di dialogo è derivata da `CAxDialogImpl`, è possibile ospitare entrambi ActiveX e controlli di Windows. Se non si desidera l'overhead di supporto per il controllo ActiveX nella classe finestra di dialogo, utilizzare [CSimpleDialog](../atl/reference/csimpledialog-class.md) o [CDialogImpl](../atl/reference/cdialogimpl-class.md) invece.  
  
 Gestori eventi e i messaggi possono essere aggiunti alla classe finestra di dialogo da Visualizzazione classi. Per ulteriori informazioni, vedere [aggiunta di un gestore messaggi](../atl/adding-an-atl-message-handler.md).  
  
## <a name="adding-a-dialog-box-manually"></a>Aggiunta manuale di una finestra di dialogo  
 Implementazione di una finestra di dialogo è simile all'implementazione di una finestra. Derivare una classe da una [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md), [CDialogImpl](../atl/reference/cdialogimpl-class.md), o [CSimpleDialog](../atl/reference/csimpledialog-class.md) e dichiarare un [mappa messaggi](../atl/message-maps-atl.md) per gestire i messaggi. Tuttavia, è necessario specificare anche un ID di risorsa modello di finestra di dialogo nella classe derivata. La classe deve disporre di un membro dati denominato `IDD` per contenere il valore.  
  
> [!NOTE]
>  Quando si crea una finestra di dialogo mediante la creazione guidata finestra di dialogo ATL, la procedura guidata aggiunge automaticamente il `IDD` membro come un `enum` tipo.  
  
 `CDialogImpl`Consente di implementare modale o una finestra di dialogo non modale che ospita i controlli di Windows. `CAxDialogImpl`Consente di implementare modale o una finestra di dialogo non modale che ospita controlli ActiveX sia di Windows.  
  
 Per creare una finestra di dialogo modale, creare un'istanza del `CDialogImpl`-derivato (o `CAxDialogImpl`-derivato) classe e quindi chiamare il [DoModal](../atl/reference/cdialogimpl-class.md#domodal) metodo. Per chiudere una finestra di dialogo modale, chiamare il [EndDialog](../atl/reference/cdialogimpl-class.md#enddialog) metodo da un gestore di messaggi. Per creare una finestra di dialogo non modale, chiamare il [crea](../atl/reference/cdialogimpl-class.md#create) anziché `DoModal`. Per eliminare una finestra di dialogo non modale, chiamare [DestroyWindow](../atl/reference/cdialogimpl-class.md#destroywindow).  
  
 Sink di eventi viene eseguito automaticamente in [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md). Implementare i gestori di messaggi della finestra di dialogo, come i gestori in un `CWindowImpl`-classe derivata. Se non esiste un valore restituito di un messaggio specifico, restituito come un `LRESULT`. L'oggetto restituito `LRESULT` vengono eseguito il mapping di valori da ATL per la corretta gestione per la gestione di finestra di dialogo di Windows. Per informazioni dettagliate, vedere il codice sorgente per [CDialogImplBaseT:: DialogProc](../atl/reference/cdialogimpl-class.md#dialogproc) in atlwin. h.  
  
## <a name="example"></a>Esempio  
 La classe seguente implementa una finestra di dialogo:  
  
 [!code-cpp[NVC_ATL_Windowing#66](../atl/codesnippet/cpp/implementing-a-dialog-box_1.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Classi di finestra](../atl/atl-window-classes.md)

