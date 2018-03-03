---
title: ASP, creazione guidata componente ASP ATL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- vc.codewiz.class.atl.asp.asp
dev_langs:
- C++
helpviewer_keywords:
- ATL Active Server Page Component Wizard, ASP
ms.assetid: 4d8cafd6-5e12-4461-8911-29288896af3c
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 69d3837cc0996c0e0e0784214cfbfa6744afbf94
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="asp-atl-active-server-page-component-wizard"></a>ASP, Creazione guidata componente ASP ATL
Utilizzare questa pagina della finestra attiva Server pagina Creazione guidata componente ATL per specificare impostazioni facoltative per la gestione delle informazioni e lo stato correlato al componente di ASP.  
  
 **Metodi facoltativi**  
 Aggiunge metodi ASP facoltativi **OnStartPage** e **OnEndPage**, all'oggetto. Questa opzione per impostare gli oggetti intrinseci di ASP. Per impostazione predefinita, viene selezionato.  
  
-   **OnStartPage o OnEndPage** [OnStartPage](https://msdn.microsoft.com/library/ms691624.aspx) viene chiamato la prima volta che lo script tenta di accedere all'oggetto. **OnEndPage** viene chiamato quando l'oggetto è terminato l'elaborazione dello script.  
  
 **Oggetto intrinseco**  
 È necessario selezionare il **OnStartPage o OnEndPage** opzione per impostare gli oggetti intrinseci di ASP.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Richiesta**|Fornisce l'accesso a Active Server Pages intrinseco **richiesta** oggetto. L'oggetto richiesta viene utilizzato per passare a una richiesta HTTP.|  
|**Risposta**|Fornisce l'accesso a Active Server Pages intrinseco **risposta** oggetto. In risposta a una richiesta, l'oggetto Response invia informazioni al browser per visualizzare all'utente.|  
|**Sessione**|Fornisce l'accesso a Active Server Pages intrinseco **sessione** oggetto. Il **sessione** gestisce le informazioni sulla sessione utente corrente, e archivia e recupera le informazioni sullo stato.|  
|**Applicazione**|Fornisce l'accesso a Active Server Pages intrinseco **applicazione** oggetto. Il **applicazione** gestisce uno stato condiviso da più oggetti ASP.|  
|**Server**|Fornisce l'accesso a Active Server Pages intrinseco **Server** oggetto. Il **Server** oggetto consente di creare altri oggetti ASP.|  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata componente ASP ATL](../../atl/reference/atl-active-server-page-component-wizard.md)   
 [Componente pagine ASP ATL](../../atl/reference/adding-an-atl-active-server-page-component.md)

