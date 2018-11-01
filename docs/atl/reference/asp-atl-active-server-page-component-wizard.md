---
title: ASP, Creazione guidata componente ASP ATL
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.class.atl.asp.asp
helpviewer_keywords:
- ATL Active Server Page Component Wizard, ASP
ms.assetid: 4d8cafd6-5e12-4461-8911-29288896af3c
ms.openlocfilehash: c6ab66fc606b58e87ac65373bf9f6a0662a720ab
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50640271"
---
# <a name="asp-atl-active-server-page-component-wizard"></a>ASP, Creazione guidata componente ASP ATL

Utilizzare questa pagina della finestra attiva Server pagina Creazione guidata componente ATL per specificare le impostazioni facoltative per la gestione delle informazioni e lo stato correlato al componente ASP.

- **Metodi facoltativi**

   Aggiunge i metodi facoltativi ASP **OnStartPage** e **OnEndPage**, all'oggetto. Questa opzione deve essere selezionata per impostare gli oggetti intrinseci ASP. Per impostazione predefinita, viene selezionato.

- **OnStartPage/OnEndPage**

   [OnStartPage](https://msdn.microsoft.com/library/ms691624.aspx) viene chiamato la prima volta lo script cerca di accedere all'oggetto. **OnEndPage** viene chiamato quando l'oggetto è terminata l'elaborazione dello script.

- **Oggetto intrinseco**

   È necessario selezionare la **OnStartPage/OnEndPage** opzione per impostare gli oggetti intrinseci ASP.

|Opzione|Descrizione|
|------------|-----------------|
|**Richiesta**|Fornisce l'accesso a Active Server Pages intrinseco **richiedere** oggetto. L'oggetto richiesta viene usato per passare una richiesta HTTP.|
|**Risposta**|Fornisce l'accesso a Active Server Pages intrinseco **risposta** oggetto. In risposta a una richiesta, l'oggetto risposta invia informazioni al browser per visualizzare all'utente.|
|**Sessione**|Fornisce l'accesso a Active Server Pages intrinseco **sessione** oggetto. Il **sessione** gestisce le informazioni relative alla sessione utente corrente, tra cui archiviare e recuperare le informazioni sullo stato.|
|**Applicazione**|Fornisce l'accesso a Active Server Pages intrinseco **applicazione** oggetto. Il **applicazione** gestisce uno stato condiviso tra più oggetti ASP.|
|**Server**|Fornisce l'accesso a Active Server Pages intrinseco **Server** oggetto. Il **Server** oggetto consente di creare altri oggetti ASP.|

## <a name="see-also"></a>Vedere anche

[Creazione guidata componente ASP ATL](../../atl/reference/atl-active-server-page-component-wizard.md)<br/>
[Componente pagine ASP ATL](../../atl/reference/adding-an-atl-active-server-page-component.md)

