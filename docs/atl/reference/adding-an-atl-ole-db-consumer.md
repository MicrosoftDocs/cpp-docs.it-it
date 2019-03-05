---
title: Aggiunta di un Consumer OLE DB ATL
ms.date: 11/04/2016
helpviewer_keywords:
- ATL projects, adding ATL OLE DB consumers
- OLE DB, adding ATL OLE DB consumer to projects
- ATL OLE DB consumers
ms.assetid: f940a513-4e42-4148-b521-dd0d7dc89fa2
ms.openlocfilehash: d93bf715f8fd8a03c75b1d1bf2e44f12c1d1b9c0
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57277651"
---
# <a name="adding-an-atl-ole-db-consumer"></a>Aggiunta di un Consumer OLE DB ATL

Utilizzare questa procedura guidata per aggiungere un consumer OLE DB ATL a un progetto. Un consumer OLE DB ATL è costituito da una OLE DB accesso classe e i dati dalle associazioni necessarie per accedere a un'origine dati. Deve avere il progetto sia stato creato come un'applicazione ATL COM o come un'applicazione Win32 o MFC che contiene il supporto ATL (quali la creazione guidata Consumer OLE DB ATL viene aggiunto automaticamente).

> [!NOTE]
> È possibile aggiungere un consumer OLE DB a un progetto MFC. In caso contrario la creazione guidata Consumer OLE DB ATL aggiunge il supporto COM necessari al progetto. Ciò si presume che durante la creazione del progetto MFC, la **controlli ActiveX** casella di controllo (nelle **funzionalità avanzate** pagina della creazione guidata applicazione MFC progetto), che sia selezionata per impostazione predefinita. Se si seleziona questa opzione assicura che l'applicazione chiama `CoInitialize` e `CoUninitialize`. Se non è stato selezionato **controlli ActiveX** durante la creazione del progetto MFC, è necessario chiamare `CoInitialize` e `CoUninitialize` nel codice principale.

## <a name="to-add-an-atl-ole-db-consumer-to-your-project"></a>Per aggiungere un consumer OLE DB ATL al progetto

1. Nelle **Visualizzazione classi**, fare clic sul progetto. Nel menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi classe**.

1. Nella cartella Visual C++, fare doppio clic il **Consumer OLE DB ATL** icona oppure selezionarlo e fare clic su **Open**.

   Verrà visualizzata la finestra di creazione guidata Consumer OLE DB ATL.

1. Definire le impostazioni come descritto in [Creazione guidata Consumer OLE DB ATL](../../atl/reference/atl-ole-db-consumer-wizard.md).

1. Fare clic su **fine** per chiudere la procedura guidata. Il codice del consumer OLE DB appena creato verrà inserito nel progetto.

## <a name="see-also"></a>Vedere anche

[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)
