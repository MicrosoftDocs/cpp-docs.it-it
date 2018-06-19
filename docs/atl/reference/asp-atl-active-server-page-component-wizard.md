---
title: ASP, creazione guidata componente ASP ATL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.codewiz.class.atl.asp.asp
dev_langs:
- C++
helpviewer_keywords:
- ATL Active Server Page Component Wizard, ASP
ms.assetid: 4d8cafd6-5e12-4461-8911-29288896af3c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: dfe27a64a2086f08c5a29e2961d069771fdbc4e6
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32356139"
---
# <a name="asp-atl-active-server-page-component-wizard"></a>ASP, Creazione guidata componente ASP ATL
Utilizzare questa pagina della finestra attiva Server pagina Creazione guidata componente ATL per specificare impostazioni facoltative per la gestione delle informazioni e lo stato correlato al componente di ASP.  
  
 **Metodi facoltativi**  
 Aggiunge metodi ASP facoltativi **OnStartPage** e **OnEndPage**, all'oggetto. Questa opzione per impostare gli oggetti intrinseci di ASP. Per impostazione predefinita, viene selezionato.  
  
-   **OnStartPage o OnEndPage** [OnStartPage](https://msdn.microsoft.com/library/ms691624.aspx) viene chiamato la prima volta lo script tenta di accedere all'oggetto. **OnEndPage** viene chiamato quando l'oggetto è terminato l'elaborazione dello script.  
  
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

