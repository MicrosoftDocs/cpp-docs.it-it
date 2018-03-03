---
title: Gruppi a schede MDI | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- mdi [MFC], tabbed groups
- tabbed grous [MFC]
ms.assetid: 0a464f36-39b7-4e68-8b67-ec175de28377
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9606d28f6e2057072a0c9fc356e3bc7ca7cdc19b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mdi-tabbed-groups"></a>Gruppi a schede MDI
La funzionalità dei gruppi a schede MDI (interfaccia) documento più consente applicazioni multiple document interface (MDI) visualizzare uno o più finestre a schede (o i gruppi di finestre a schede, noti come *gruppi a schede*) nell'area client MDI. Le finestre a schede possono essere allineate orizzontalmente o verticalmente. Se un'applicazione dispone di più di un gruppo MDI a schede, i gruppi vengono separati da barre di divisione.  
  
## <a name="features"></a>Funzionalità  
 Di seguito vengono elencate le funzionalità dei gruppi MDI a schede:  
  
-   Un'applicazione può creare finestre a schede in modo dinamico.  
  
-   Un'applicazione può allineare le finestre a schede orizzontalmente o verticalmente.  
  
-   I gruppi di finestre a schede sono separati da barre di divisione. L'utente può ridimensionare i gruppi a schede spostando la barra di divisione.  
  
-   L'utente può trascinare singole schede tra i gruppi.  
  
-   L'utente può trascinare singole schede per creare nuovi gruppi.  
  
-   L'utente può spostare le schede o creare nuovi gruppi utilizzando un menu di scelta rapida.  
  
-   In un'applicazione è possibile salvare e caricare il layout delle finestre a schede.  
  
-   In un'applicazione è possibile salvare e caricare l'elenco dei documenti MDI.  
  
-   In un'applicazione è possibile accedere ai singoli gruppi a schede e modificarne i parametri.  
  
### <a name="using-mdi-tabbed-groups"></a>Utilizzo dei gruppi MDI a schede  
 Le seguenti attività vengono in genere eseguite con i gruppi MDI a schede:  
  
-   Per abilitare i gruppi MDI a schede per una finestra cornice principale, chiamare [CMDIFrameWndEx:: Enablemditabbedgroups](../mfc/reference/cmdiframewndex-class.md#enablemditabbedgroups). Il secondo parametro di questo metodo è un'istanza della classe `CMDITabInfo`. È possibile utilizzare i parametri predefiniti o è possibile modificarli prima di chiamare `CMDIFrameWndEx::EnableMDITabbedGroups`.  
  
-   Per modificare le proprietà di un gruppo MDI a schede, creare o modificare un oggetto `CMDITabInfo` e chiamare nuovamente `CMDIFrameWndEx::EnableMDITabbedGroups`.  
  
-   Per ottenere un elenco di finestre MDI a schede, chiamare `CMDIFrameWndEx::GetMDITabGroups`.  
  
-   Per creare un nuovo gruppo MDI a schede accanto a un gruppo a schede attivo, chiamare `CMDIFrameWndEx::MDITabNewGroup`.  
  
-   Per spostare lo stato attivo per l'input sulla finestra precedente o successiva di un gruppo a schede, chiamare `CMDIFrameWndEx::MDITabMoveToNextGroup`.  
  
-   Per determinare se una finestra è un membro di un gruppo MDI a schede, chiamare `CMDIFrameWndEx::IsMemberOfMDITabGroup`.  
  
-   Per determinare se le schede MDI o i gruppi MDI a schede sono abilitati per una finestra cornice principale, chiamare `CMDIFrameWndEx::AreMDITabs`. Per determinare solo se i gruppi MDI a schede sono abilitati, chiamare `CMDIFrameWndEx::IsMDITabbedGroup`.  
  
-   Per visualizzare un menu di scelta rapida quando l'utente fa clic su una scheda o la trascina in un altro gruppo MDI a schede, eseguire l'override di `CMDIFrameWndEx::OnShowMDITabContextMenu` nella classe derivata da `CMDIFrameWndEx`. Se questo metodo non viene implementato, nell'applicazione non verrà visualizzato il menu di scelta rapida.  
  
-   Per salvare il layout dei gruppi MDI a schede in un'applicazione, chiamare `CMDIFrameWndEx::SaveMDIState`. Per caricare il profilo di un gruppo MDI a schede precedentemente salvato, chiamare `CMDIFrameWndEx::LoadMDIState`. È inoltre possibile chiamare questi metodi per caricare o salvare l'elenco dei documenti aperti in un'applicazione MDI. Per ulteriori informazioni sul salvataggio e il caricamento dello stato MDI, vedere [CMDIFrameWndEx:: Loadmdistate](../mfc/reference/cmdiframewndex-class.md#loadmdistate).  
  
## <a name="see-also"></a>Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)   
 [CMDIFrameWndEx (classe)](../mfc/reference/cmdiframewndex-class.md)   
 [Classe CMDIChildWndEx](../mfc/reference/cmdichildwndex-class.md)   
 [Classe CMDITabInfo](../mfc/reference/cmditabinfo-class.md)
