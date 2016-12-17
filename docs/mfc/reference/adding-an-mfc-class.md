---
title: "Aggiunta di una classe MFC | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.classes.adding.mfc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi [C++], aggiunta di MFC"
  - "MFC, aggiunta di classi"
ms.assetid: 9a96b67f-40bf-43d4-8872-2f8dfc5404f1
caps.latest.revision: 13
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiunta di una classe MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per aggiungere a un progetto classi derivate dalle classi della libreria MFC \(Microsoft Foundation Class\), utilizzare il comando **Aggiungi classe** disponibile in [Visualizzazione classi](http://msdn.microsoft.com/it-it/8d7430a9-3e33-454c-a9e1-a85e3d2db925).  Specificare il nome della nuova classe, quindi selezionare la classe base e l'ID dell'eventuale finestra di dialogo alla quale è associata.  Verranno creati un file di intestazione e un file di implementazione, che saranno aggiunti al progetto.  
  
> [!NOTE]
>  È possibile aggiungere classi MFC a un'applicazione COM ATL se questa è stata inizialmente [creata con il supporto MFC](../../atl/reference/mfc-support-in-atl-projects.md).  È anche possibile aggiungere classi MFC ai progetti Win32 con supporto MFC.  
  
### Per aggiungere una classe MFC al progetto  
  
1.  In Visualizzazione classi fare clic con il pulsante destro del mouse sul nome del progetto.  Scegliere **Aggiungi**, quindi **Aggiungi classe** per aprire la finestra di dialogo [Aggiungi classe](../../ide/add-class-dialog-box.md).  
  
2.  Nel riquadro Modelli selezionare **Classe MFC** e fare clic su **Aggiungi**.  
  
3.  Definire le impostazioni per la nuova classe nella finestra di dialogo [Creazione guidata classe MFC](../../mfc/reference/mfc-add-class-wizard.md).  
  
4.  Scegliere **Fine** per uscire dalla procedura guidata e visualizzare la nuova classe in Visualizzazione classi.  È anche possibile visualizzare i file creati dalla procedura guidata in **Esplora soluzioni**.  
  
## Vedere anche  
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)   
 [Cenni preliminari sulle classi](../../mfc/class-library-overview.md)