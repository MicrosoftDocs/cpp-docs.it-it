---
title: "Aggiunta di oggetti e controlli a un progetto ATL | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.appwiz.ATL.controls"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata controllo ATL"
  - "ATL (progetti), aggiunta di controlli"
  - "ATL (progetti), aggiunta di oggetti"
  - "controlli [ATL], aggiunta ai progetti"
  - "oggetti [C++], aggiunta ai progetti ATL"
  - "procedure guidate [C++], ATL (progetti)"
ms.assetid: c0adcbd0-07fe-4c55-a8fd-8c2c65ecdaad
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiunta di oggetti e controlli a un progetto ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare una creazione guidata codice ATL per aggiungere un oggetto o un controllo ai progetti basati su ATL o MFC.  Per ogni controllo o oggetto COM aggiunto vengono generati file CPP e H, nonché un file RGS per il supporto del Registro di sistema basato su script.  In Visual Studio sono disponibili le creazioni guidate codice ATL riportate di seguito.  
  
||||  
|-|-|-|  
|[Oggetto semplice ATL](../../atl/reference/atl-simple-object-wizard.md)|[Finestra di dialogo ATL](../../atl/reference/atl-dialog-wizard.md)|[Controllo ATL](../../atl/reference/atl-control-wizard.md)|  
|[Pagina delle proprietà ATL](../../atl/reference/atl-property-page-wizard.md)|[Componente pagine ASP ATL](../../atl/reference/atl-active-server-page-component-wizard.md)|[Consumer OLE DB ATL](../../atl/reference/atl-ole-db-consumer-wizard.md)|  
|[Aggiungi supporto ATL a MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md)|[Creazione guidata componente ATL COM\+ 1.0](../../atl/reference/atl-com-plus-1-0-component-wizard.md)|[Provider OLE DB ATL](../../atl/reference/atl-ole-db-provider-wizard.md)|  
  
> [!NOTE]
>  Prima di aggiungere un oggetto ATL al progetto, è opportuno verificarne i dettagli e i requisiti negli argomenti della Guida correlati.  
  
### Per aggiungere un oggetto o un controllo mediante la Creazione guidata controllo ATL  
  
1.  Fare clic con il pulsante destro del mouse sul nodo del progetto in Esplora soluzioni, quindi scegliere **Aggiungi** dal menu di scelta rapida.  Scegliere **Aggiungi classe**.  
  
     Verrà visualizzata la finestra di dialogo [Aggiungi classe](../../ide/add-class-dialog-box.md).  
  
2.  Una volta selezionata la cartella ATL nel riquadro Categorie, selezionare un oggetto da inserire dal riquadro Modelli.  Scegliere **Apri**.  Verrà visualizzata la creazione guidata codice relativa all'oggetto selezionato.  
  
    > [!NOTE]
    >  Per aggiungere un oggetto ATL a un progetto MFC, è necessario aggiungere il supporto ATL al progetto esistente.  A questo scopo, attenersi alla procedura illustrata nell'argomento [Aggiunta del supporto ATL a un progetto MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md).  
  
     Se invece si tenta di aggiungere un oggetto ATL al progetto MFC senza aver precedentemente aggiunto il supporto ATL, verrà chiesto di specificare se si desidera aggiungere il supporto ATL al progetto.  Scegliere **Sì** per aggiungere il supporto ATL al progetto e aprire la procedura guidata ATL selezionata.  
  
## Vedere anche  
 [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md)   
 [Tipi di progetto Visual C\+\+](../../ide/visual-cpp-project-types.md)   
 [Creazione di progetti desktop tramite le creazioni guidate applicazioni](../../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md)   
 [Programmazione con il codice runtime C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)   
 [Configurazioni predefinite di progetti ATL](../../atl/reference/default-atl-project-configurations.md)