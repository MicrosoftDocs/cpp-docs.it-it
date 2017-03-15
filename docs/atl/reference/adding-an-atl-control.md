---
title: "Aggiunta di un controllo ATL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL (progetti), aggiunta di controlli"
  - "controlli [ATL], aggiunta ai progetti"
ms.assetid: 10223e7e-fdb7-4163-80c6-44aeafa8e6ce
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Aggiunta di un controllo ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare la Creazione guidata controllo ATL per aggiungere un oggetto interfaccia utente a un progetto che supporti le interfacce per tutti i potenziali contenitori.  Affinché supporti tali interfacce, è necessario che il progetto sia stato creato come applicazione ATL o come applicazione MFC con supporto ATL.  È possibile utilizzare la [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL.  
  
### Per aggiungere un controllo ATL al progetto  
  
1.  In **Esplora soluzioni** o [Visualizzazione classi](http://msdn.microsoft.com/it-it/8d7430a9-3e33-454c-a9e1-a85e3d2db925) fare clic con il pulsante destro del mouse sul nome del progetto a cui aggiungere l'oggetto semplice ATL.  
  
2.  Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi classe**.  
  
3.  Nel riquadro Modelli della finestra di dialogo [Aggiungi classe](../../ide/add-class-dialog-box.md) fare clic su **Controllo ATL**, quindi scegliere **Aggiungi** per visualizzare la [Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md).  
  
 È possibile utilizzare la **Creazione guidata controllo ATL** per creare uno dei tre tipi di controlli seguenti:  
  
-   Un controllo standard  
  
-   Un controllo composito  
  
-   Un controllo DHTML  
  
 È inoltre possibile ridurre le dimensioni del controllo e rimuovere le interfacce non utilizzate dalla maggior parte dei contenitori selezionando **Controllo minimo** nella schermata **Opzioni** della procedura guidata.  
  
## Vedere anche  
 [Adding Functionality to the Composite Control](../../atl/adding-functionality-to-the-composite-control.md)   
 [Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md)   
 [ATLFire Sample](http://msdn.microsoft.com/it-it/5b2649f1-f45b-4cfb-9c4b-4d9459c26b09)