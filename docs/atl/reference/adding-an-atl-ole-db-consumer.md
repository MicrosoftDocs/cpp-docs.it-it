---
title: Aggiunta di un Consumer ATL OLE DB | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- ATL projects, adding ATL OLE DB consumers
- OLE DB, adding ATL OLE DB consumer to projects
- ATL OLE DB consumers
ms.assetid: f940a513-4e42-4148-b521-dd0d7dc89fa2
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: defc933014bd287eb48f53635efba12a40960711
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="adding-an-atl-ole-db-consumer"></a>Aggiunta di un Consumer ATL OLE DB
Utilizzare questa procedura guidata per aggiungere un consumer OLE DB ATL a un progetto. Un consumer OLE DB ATL costituito un OLE DB accesso classe e i dati dalle associazioni necessarie per accedere a un'origine dati. Il progetto è necessario avere creato come un'applicazione ATL COM o come un'applicazione MFC o Win32 che contiene il supporto ATL (quali la creazione guidata Consumer OLE DB ATL aggiunge automaticamente).  
  
 **Nota** è possibile aggiungere un consumer OLE DB a un progetto MFC. In caso contrario, la creazione guidata Consumer OLE DB ATL aggiunge il supporto COM necessari al progetto. Si presuppone che al momento della creazione del progetto MFC, è selezionato il **controlli ActiveX** casella di controllo (nel **funzionalità avanzate** pagina della creazione guidata applicazione MFC progetto), che è selezionata per impostazione predefinita. Se si seleziona questa opzione garantisce che l'applicazione chiama **CoInitialize** e **CoUninitialize**. Se non è stata selezionata **controlli ActiveX** al momento della creazione del progetto MFC, è necessario chiamare **CoInitialize** e **CoUninitialize** nel codice principale.  
  
### <a name="to-add-an-atl-ole-db-consumer-to-your-project"></a>Per aggiungere un consumer OLE DB ATL al progetto  
  
1.  In visualizzazione classi, fare clic sul progetto. Menu di scelta rapida, fare clic su **Aggiungi** e quindi fare clic su **Aggiungi classe**.  
  
2.  Nella cartella Visual C++, fare doppio clic su di **Consumer OLE DB ATL** icona oppure selezionarlo e fare clic su **aprire**.  
  
     Verrà visualizzata la creazione guidata Consumer OLE DB ATL.  
  
3.  Definire le impostazioni come descritto in [la creazione guidata Consumer OLE DB ATL](../../atl/reference/atl-ole-db-consumer-wizard.md).  
  
4.  Fare clic su **fine** per chiudere la procedura guidata. Il codice del consumer OLE DB appena creato verrà inserito nel progetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)

