---
title: "Gruppi a schede MDI | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MDI, gruppi a schede"
  - "gruppi a schede"
ms.assetid: 0a464f36-39b7-4e68-8b67-ec175de28377
caps.latest.revision: 18
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gruppi a schede MDI
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La funzionalità dei gruppi a schede dell'interfaccia a documenti multipli \(MDI\) consente alle applicazioni dell'interfaccia a documenti multipli \(MDI\) di visualizzare una o più finestre a schede \(o gruppi di finestre a schede, noti come *gruppi a schede*\) nell'area client MDI.  Le finestre a schede possono essere allineate orizzontalmente o verticalmente.  Se un'applicazione dispone di più di un gruppo MDI a schede, i gruppi vengono separati da barre di divisione.  
  
## Funzionalità  
 Di seguito vengono elencate le funzionalità dei gruppi MDI a schede:  
  
-   Un'applicazione può creare dinamicamente le finestre a schede.  
  
-   Un'applicazione può allineare orizzontalmente o verticalmente le finestre a schede.  
  
-   I gruppi di finestre a schede vengono separati da barre di divisione.  L'utente può ridimensionare i gruppi a schede utilizzando la barra di divisione.  
  
-   L'utente può trascinare singole schede tra gruppi.  
  
-   L'utente può trascinare singole schede per creare nuovi gruppi.  
  
-   L'utente può spostare le schede o creare nuovi gruppi utilizzando un menu di scelta rapida.  
  
-   Un'applicazione può salvare e caricare il layout delle finestre a schede.  
  
-   Un'applicazione può salvare e caricare l'elenco dei documenti MDI.  
  
-   Un'applicazione può accedere ai singoli gruppi a schede e modificare i relativi parametri.  
  
### Utilizzare i gruppi MDI a schede  
 Le seguenti attività vengono in genere eseguite con i gruppi MDI a schede:  
  
-   Per abilitare i gruppi MDI a schede per una finestra cornice principale, chiamare [CMDIFrameWndEx::EnableMDITabbedGroups](../Topic/CMDIFrameWndEx::EnableMDITabbedGroups.md).  Il secondo parametro di questo metodo è un'istanza della classe `CMDITabInfo`.  È possibile utilizzare i parametri predefiniti o è possibile modificarli prima di chiamare `CMDIFrameWndEx::EnableMDITabbedGroups`.  
  
-   Per modificare le proprietà di un gruppo MDI a schede, creare o modificare un oggetto `CMDITabInfo` e chiamare nuovamente `CMDIFrameWndEx::EnableMDITabbedGroups`.  
  
-   Per ottenere un elenco di finestre MDI a schede, chiamare `CMDIFrameWndEx::GetMDITabGroups`.  
  
-   Per creare un nuovo gruppo MDI a schede accanto ad un gruppo a schede attivo, chiamare `CMDIFrameWndEx::MDITabNewGroup`.  
  
-   Per spostare lo stato attivo per l'input sulla finestra precedente o successiva di un gruppo a schede, chiamare `CMDIFrameWndEx::MDITabMoveToNextGroup`.  
  
-   Per determinare se una finestra è un membro di un gruppo MDI a schede chiamare `CMDIFrameWndEx::IsMemberOfMDITabGroup`.  
  
-   Per determinare se le schede MDI o i gruppi MDI a schede sono abilitati per una finestra cornice principale, chiamare `CMDIFrameWndEx::AreMDITabs`.  Per determinare quali gruppi MDI a schede sono abilitati, chiamare `CMDIFrameWndEx::IsMDITabbedGroup`.  
  
-   Per visualizzare un menu di scelta rapida quando l'utente fa clic su una scheda o la trascina in un altro gruppo MDI a schede, eseguire l'override di `CMDIFrameWndEx::OnShowMDITabContextMenu` in una classe derivata da `CMDIFrameWndEx`.  Se non si implementa questo metodo, l'applicazione non visualizzerà il menu di scelta rapida.  
  
-   Per salvare il layout dei gruppi MDI a schede in un'applicazione, chiamare `CMDIFrameWndEx::SaveMDIState`.  Per caricare un profilo dei gruppi MDI a schede precedentemente salvato, chiamare `CMDIFrameWndEx::LoadMDIState`.  È inoltre possibile chiamare questi metodi per caricare o salvare l'elenco dei documenti aperti in un'applicazione MDI.  Per ulteriori informazioni sul caricamento e sul salvataggio dello stato MDI, vedere [CMDIFrameWndEx::LoadMDIState](../Topic/CMDIFrameWndEx::LoadMDIState.md).  
  
## Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)   
 [Classe CMDIFrameWndEx](../mfc/reference/cmdiframewndex-class.md)   
 [Classe CMDIChildWndEx](../mfc/reference/cmdichildwndex-class.md)   
 [CMDITabInfo Class](../mfc/reference/cmditabinfo-class.md)