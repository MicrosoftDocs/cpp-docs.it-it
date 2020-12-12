---
description: 'Altre informazioni su: aggiunta di oggetti e controlli a un progetto ATL'
title: Aggiunta di oggetti e controlli a un progetto ATL
ms.date: 05/09/2019
f1_keywords:
- vc.appwiz.ATL.controls
helpviewer_keywords:
- ATL projects, adding objects
- wizards [C++], ATL projects
- ATL projects, adding controls
- controls [ATL], adding to projects
- objects [C++], adding to ATL projects
- ATL Control Wizard
ms.assetid: c0adcbd0-07fe-4c55-a8fd-8c2c65ecdaad
ms.openlocfilehash: 979e15a6fe27599e68841e82ef03a457d66d3bf0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97165589"
---
# <a name="adding-objects-and-controls-to-an-atl-project"></a>Aggiunta di oggetti e controlli a un progetto ATL

> [!NOTE]
> La Creazione guidata componente ATL COM+ 1.0, la Creazione guidata consumer OLE DB ATL e la Creazione guidata componente ASP ATL non sono disponibili in Visual Studio 2019 e versioni successive.

È possibile usare una delle procedure guidate per il codice ATL per aggiungere un oggetto o un controllo ai progetti basati su ATL o MFC. Per ogni oggetto o controllo COM aggiunto, la procedura guidata genera file con estensione h e cpp, nonché un file con estensione rgs per il supporto del Registro di sistema basato su script. In Visual Studio sono disponibili le procedure guidate per il codice ATL seguenti:

- [Oggetto semplice ATL](../../atl/reference/atl-simple-object-wizard.md)
- [Finestra di dialogo ATL](../../atl/reference/atl-dialog-wizard.md)
- [Controllo ATL](../../atl/reference/atl-control-wizard.md)
- [Pagina delle proprietà ATL](../../atl/reference/atl-property-page-wizard.md)
- [Componente pagine ASP ATL](../../atl/reference/atl-active-server-page-component-wizard.md)
- [Consumer OLE DB ATL](../../atl/reference/atl-ole-db-consumer-wizard.md)
- [Aggiungi supporto ATL a MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md)
- [Creazione guidata componente ATL COM+ 1.0](../../atl/reference/atl-com-plus-1-0-component-wizard.md)
- [Provider OLE DB ATL](../../atl/reference/atl-ole-db-provider-wizard.md)

> [!NOTE]
> Prima di aggiungere un oggetto ATL al progetto, è necessario esaminare i dettagli e i requisiti per l'oggetto negli argomenti correlati della Guida.

## <a name="to-add-an-object-or-a-control-using-the-atl-control-wizard"></a>Per aggiungere un oggetto o un controllo tramite la Creazione guidata controllo ATL

1. In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul nodo del progetto e scegliere **Aggiungi** dal menu di scelta rapida. Fare clic su **Aggiungi classe**.

   Verrà visualizzata la finestra di dialogo [Aggiungi classe](../../ide/adding-a-class-visual-cpp.md#add-class-dialog-box).

1. Con la cartella **ATL** selezionata nel riquadro **Categorie**, selezionare un oggetto da inserire dal riquadro **Modelli**. Fare clic su **Apri**. Verrà visualizzata la procedura guidata per il codice per l'oggetto selezionato.

   > [!NOTE]
   > Per aggiungere un oggetto ATL a un progetto MFC, è necessario aggiungere il supporto ATL al progetto esistente. A tale scopo, seguire le istruzioni disponibili in [Aggiunta del supporto ATL a un progetto MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md).

   In alternativa, se si tenta di aggiungere un oggetto ATL a un progetto MFC senza prima aver aggiunto il supporto ATL, Visual Studio chiederà di specificare se si vuole aggiungere al progetto il supporto ATL. Fare clic su **Sì** per aggiungere il supporto ATL al progetto e aprire la procedura guidata ATL selezionata.

## <a name="see-also"></a>Vedi anche

[Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md)<br/>
[Tipi di progetto C++ in Visual Studio](../../build/reference/visual-cpp-project-types.md)<br/>
[Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)<br/>
[Programmazione con ATL e codice C Run-Time](../../atl/programming-with-atl-and-c-run-time-code.md)<br/>
[Configurazioni di progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md)
