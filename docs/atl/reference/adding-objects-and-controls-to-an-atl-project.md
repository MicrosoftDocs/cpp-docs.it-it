---
title: Aggiunta di oggetti e i controlli a un progetto ATL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.appwiz.ATL.controls
dev_langs:
- C++
helpviewer_keywords:
- ATL projects, adding objects
- wizards [C++], ATL projects
- ATL projects, adding controls
- controls [ATL], adding to projects
- objects [C++], adding to ATL projects
- ATL Control Wizard
ms.assetid: c0adcbd0-07fe-4c55-a8fd-8c2c65ecdaad
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5a6f9102aeebd0cc60765c70cf74fb2329bc801f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32357773"
---
# <a name="adding-objects-and-controls-to-an-atl-project"></a>Aggiunta di oggetti e i controlli a un progetto ATL
È possibile utilizzare una delle procedure guidate di codice ATL per aggiungere un oggetto o un controllo ai progetti basati su ATL o MFC. Per ogni oggetto COM o un controllo aggiungere, la procedura guidata genera file con estensione h e cpp, nonché un file con estensione RGS per il supporto del Registro di sistema basato su script. Le creazioni guidate codice ATL seguenti sono disponibili in Visual Studio:  
  
||||  
|-|-|-|  
|[Oggetto semplice ATL](../../atl/reference/atl-simple-object-wizard.md)|[Finestra di dialogo ATL](../../atl/reference/atl-dialog-wizard.md)|[Controllo ATL](../../atl/reference/atl-control-wizard.md)|  
|[Pagina delle proprietà ATL](../../atl/reference/atl-property-page-wizard.md)|[Componente pagine ASP ATL](../../atl/reference/atl-active-server-page-component-wizard.md)|[Consumer OLE DB ATL](../../atl/reference/atl-ole-db-consumer-wizard.md)|  
|[Aggiungi supporto ATL a MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md)|[Creazione guidata componente ATL COM+ 1.0](../../atl/reference/atl-com-plus-1-0-component-wizard.md)|[Provider OLE DB ATL](../../atl/reference/atl-ole-db-provider-wizard.md)|  
  
> [!NOTE]
>  Prima di aggiungere un oggetto ATL al progetto, è necessario rivedere i requisiti per l'oggetto nei relativi argomenti correlati della Guida e dettagli.  
  
### <a name="to-add-an-object-or-a-control-using-the-atl-control-wizard"></a>Per aggiungere un oggetto o un controllo mediante la creazione guidata controllo ATL  
  
1.  In Esplora soluzioni fare doppio clic sul nodo del progetto e fare clic su **Aggiungi** dal menu di scelta rapida. Fare clic su **aggiungere classe**.  
  
     Il [Aggiungi classe](../../ide/add-class-dialog-box.md) viene visualizzata la finestra di dialogo.  
  
2.  Con la cartella ATL selezionata nel riquadro delle categorie, selezionare un oggetto da inserire nel riquadro Modelli. Fare clic su **aprire**. Verrà visualizzata la procedura guidata di codice per l'oggetto selezionato.  
  
    > [!NOTE]
    >  Se si desidera aggiungere un oggetto ATL a un progetto MFC, è necessario aggiungere il supporto ATL al progetto esistente. È possibile farlo seguendo le istruzioni in [aggiunta del supporto ATL a un progetto MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md).  
  
     In alternativa, se si tenta di aggiungere un oggetto ATL al progetto MFC senza l'aggiunta del supporto ATL in precedenza, Visual Studio viene richiesto di specificare se si desidera supporto ATL aggiunto al progetto. Fare clic su **Sì** Aggiungi supporto ATL al progetto e aprire la procedura guidata ATL selezionata.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md)   
 [Tipi di progetto di Visual C++](../../ide/visual-cpp-project-types.md)   
 [Creazione di progetti Desktop mediante creazioni guidate applicazione](../../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Nozioni di base di oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)   
 [Programmazione con codice di runtime C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)   
 [Configurazioni progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md)

