---
title: "ASP, Creazione guidata componente ASP ATL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.codewiz.class.atl.asp.asp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata componente ASP ATL, ASP"
ms.assetid: 4d8cafd6-5e12-4461-8911-29288896af3c
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# ASP, Creazione guidata componente ASP ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare questa schermata della Creazione guidata componente ASP ATL per specificare impostazioni facoltative per la gestione delle informazioni e dello stato in relazione al componente ASP.  
  
 **Metodi facoltativi**  
 È possibile aggiungere all'oggetto i metodi ASP facoltativi **OnStartPage** e **OnEndPage**.  La selezione di questa opzione è necessaria per impostare gli oggetti ASP intrinseci.  Per impostazione predefinita, l'opzione è selezionata.  
  
-   **OnStartPage\/OnEndPage** [OnStartPage](https://msdn.microsoft.com/en-us/library/ms691624.aspx) viene chiamato la prima volta che lo script tenta di accedere all'oggetto.  **OnEndPage** viene chiamato quando l'oggetto termina l'elaborazione dello script.  
  
 **Oggetti intrinseci**  
 Per impostare gli oggetti ASP intrinseci è necessario selezionare l'opzione **OnStartPage\/OnEndPage**.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Richiesta**|Utilizzare questa opzione per fornire l'accesso all'oggetto ASP intrinseco **Request** ,  che viene utilizzato per passare una richiesta HTTP.|  
|**Risposta**|Utilizzare questa opzione per fornire l'accesso all'oggetto ASP intrinseco **Response** che, in risposta a una richiesta, invia le informazioni al browser in modo che vengano visualizzate all'utente.|  
|**Session**|Utilizzare questa opzione per fornire l'accesso all'oggetto ASP intrinseco **Session**,  che gestisce le informazioni sulla sessione utente corrente e archivia e recupera le informazioni sullo stato.|  
|**Applicazione**|Utilizzare questa opzione per fornire l'accesso all'oggetto ASP intrinseco **Application**,  che gestisce uno stato condiviso da più oggetti ASP.|  
|**Server**|Utilizzare questa opzione per fornire l'accesso all'oggetto ASP intrinseco **Server**,  che consente la creazione di altri oggetti ASP.|  
  
## Vedere anche  
 [Creazione guidata componente ASP ATL](../../atl/reference/atl-active-server-page-component-wizard.md)   
 [ATL Active Server Page Component](../../atl/reference/adding-an-atl-active-server-page-component.md)