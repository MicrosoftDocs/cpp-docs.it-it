---
title: "Aggiunta di un oggetto semplice ATL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.codewiz.classes.adding.atl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL (progetti), aggiunta di oggetti"
  - "ATL, oggetti semplici"
  - "oggetti [ATL]"
ms.assetid: 9c57d2ef-0447-4c84-8982-3304b8e49847
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Aggiunta di un oggetto semplice ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per aggiungere un oggetto ATL \(Active Template Library\) al progetto, è necessario che questo sia stato creato come applicazione ATL o come applicazione MFC con supporto ATL.  È possibile utilizzare la [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL.  
  
 È possibile definire le interfacce COM per il nuovo oggetto ATL al momento della creazione o aggiungerle in un secondo momento utilizzando il comando [Implementa interfaccia](../../ide/implement-interface-wizard.md) del menu di scelta rapida in Visualizzazione classi.  
  
### Per aggiungere un oggetto semplice ATL al progetto ATL COM  
  
1.  In **Esplora soluzioni** o [Visualizzazione classi](http://msdn.microsoft.com/it-it/8d7430a9-3e33-454c-a9e1-a85e3d2db925) fare clic con il pulsante destro del mouse sul nome del progetto a cui aggiungere l'oggetto semplice ATL.  
  
2.  Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi classe**.  
  
3.  Nel riquadro Modelli della finestra di dialogo [Aggiungi classe](../../ide/add-class-dialog-box.md) fare clic su **Oggetto semplice ATL**, quindi scegliere **Apri** per visualizzare la [Creazione guidata oggetto semplice ATL](../../atl/reference/atl-simple-object-wizard.md).  
  
4.  Impostare le opzioni aggiuntive per il progetto nella schermata [Opzioni](../../atl/reference/options-atl-simple-object-wizard.md) della Creazione guidata oggetto semplice ATL.  
  
5.  Scegliere **Fine** per aggiungere l'oggetto al progetto.  
  
## Vedere anche  
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una nuova interfaccia in un progetto ATL](../../atl/reference/adding-a-new-interface-in-an-atl-project.md)   
 [Adding Connection Points to an Object](../../atl/adding-connection-points-to-an-object.md)   
 [Aggiunta di un metodo](../../ide/adding-a-method-visual-cpp.md)   
 [Classe MFC](../../mfc/reference/adding-an-mfc-class.md)   
 [Aggiunta di una classe C\+\+ generica](../../ide/adding-a-generic-cpp-class.md)