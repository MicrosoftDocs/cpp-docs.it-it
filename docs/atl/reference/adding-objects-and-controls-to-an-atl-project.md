---
title: Aggiunta di oggetti e i controlli a un progetto ATL | Microsoft Docs
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
ms.openlocfilehash: a5cb510bb02f71f71b35191d3ba9c4fee6b7059d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46093961"
---
# <a name="adding-objects-and-controls-to-an-atl-project"></a>Aggiunta di oggetti e i controlli a un progetto ATL

È possibile utilizzare una delle procedure guidate di codice ATL per aggiungere un oggetto o un controllo ai progetti basati su ATL o MFC. Per ogni oggetto COM o un controllo vengono aggiunte, la procedura guidata genera file con estensione h e. cpp, nonché un file con estensione RGS per il supporto del Registro di sistema basato su script. Le creazioni guidate codice ATL seguenti sono disponibili in Visual Studio:

||||
|-|-|-|
|[Oggetto semplice ATL](../../atl/reference/atl-simple-object-wizard.md)|[Finestra di dialogo ATL](../../atl/reference/atl-dialog-wizard.md)|[Controllo ATL](../../atl/reference/atl-control-wizard.md)|
|[Pagina delle proprietà ATL](../../atl/reference/atl-property-page-wizard.md)|[Componente pagine ASP ATL](../../atl/reference/atl-active-server-page-component-wizard.md)|[Consumer OLE DB ATL](../../atl/reference/atl-ole-db-consumer-wizard.md)|
|[Aggiungi supporto ATL a MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md)|[Creazione guidata componente ATL COM+ 1.0](../../atl/reference/atl-com-plus-1-0-component-wizard.md)|[Provider OLE DB ATL](../../atl/reference/atl-ole-db-provider-wizard.md)|

> [!NOTE]
> Prima di aggiungere un oggetto ATL al progetto, è necessario esaminare i dettagli e i requisiti per l'oggetto nei relativi argomenti correlati della Guida.

### <a name="to-add-an-object-or-a-control-using-the-atl-control-wizard"></a>Per aggiungere un oggetto o un controllo tramite la creazione guidata controllo ATL

1. In Esplora soluzioni fare doppio clic sul nodo del progetto e fare clic su **Add** dal menu di scelta rapida. Fare clic su **aggiungere classe**.

   Il [Aggiungi classe](../../ide/add-class-dialog-box.md) verrà visualizzata la finestra di dialogo.

2. Con la cartella ATL selezionata nel riquadro delle categorie, selezionare un oggetto da inserire dal riquadro dei modelli. Fare clic su **aperto**. Viene visualizzata la procedura guidata per codice per l'oggetto selezionato.

   > [!NOTE]
   >  Se si desidera aggiungere un oggetto ATL a un progetto MFC, è necessario aggiungere il supporto ATL al progetto esistente. È possibile farlo seguendo le istruzioni disponibili nel [aggiunta del supporto ATL a un progetto MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md).

   In alternativa, se si tenta di aggiungere un oggetto ATL a un progetto MFC senza l'aggiunta del supporto ATL in precedenza, Visual Studio chiederà di specificare se si desidera supporto ATL aggiunto al progetto. Fare clic su **Sì** Aggiungi supporto ATL al progetto e aprire la procedura guidata selezionata ATL.

## <a name="see-also"></a>Vedere anche

[Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md)<br/>
[Tipi di progetto Visual C++](../../ide/visual-cpp-project-types.md)<br/>
[Creazione di progetti desktop tramite le creazioni guidate applicazioni](../../ide/creating-desktop-projects-by-using-application-wizards.md)<br/>
[Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)<br/>
[Programmazione con il codice runtime C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)<br/>
[Configurazioni progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md)

