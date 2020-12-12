---
description: 'Ulteriori informazioni su: ASP, ATL Active Server pagina Creazione guidata componente'
title: ASP, Creazione guidata componente ASP ATL
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.class.atl.asp.asp
helpviewer_keywords:
- ATL Active Server Page Component Wizard, ASP
ms.assetid: 4d8cafd6-5e12-4461-8911-29288896af3c
ms.openlocfilehash: e9cc11cf60c3a87d6891c98a72eb240729d1a739
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97165537"
---
# <a name="asp-atl-active-server-page-component-wizard"></a>ASP, Creazione guidata componente ASP ATL

Utilizzare questa pagina della creazione guidata componente della pagina Active Server ATL per specificare le impostazioni facoltative per la gestione delle informazioni e dello stato relative al componente ASP.

- **Metodi facoltativi**

   Aggiunge i metodi ASP facoltativi, **OnStartPage** e **OnEndPage**, all'oggetto. Questa opzione deve essere selezionata per impostare gli oggetti intrinseci di Active Server Pages. Per impostazione predefinita, è selezionata.

- **OnStartPage/OnEndPage**

   [OnStartPage](/previous-versions//ms691624\(v=vs.85\)) viene chiamato la prima volta che lo script tenta di accedere all'oggetto. **OnEndPage** viene chiamato quando l'oggetto ha terminato l'elaborazione dello script.

- **Oggetto intrinseco**

   È necessario selezionare l'opzione **OnStartPage/OnEndPage** per impostare gli oggetti intrinseci ASP.

|Opzione|Description|
|------------|-----------------|
|**Richiesta**|Consente di accedere all'oggetto della **richiesta** intrinseca Active Server Pages. L'oggetto Request viene usato per passare una richiesta HTTP.|
|**Response**.|Fornisce l'accesso all'oggetto **risposta** intrinseco di Active Server Pages. In risposta a una richiesta, l'oggetto Response invia informazioni al browser da visualizzare all'utente.|
|**Sessione**|Consente di accedere all'oggetto di **sessione** intrinseco Active Server Pages. L'oggetto **Session** mantiene le informazioni sulla sessione utente corrente, incluse l'archiviazione e il recupero delle informazioni sullo stato.|
|**Applicazione**|Consente di accedere all'oggetto **applicazione** intrinseco di Active Server Pages. L'oggetto **applicazione** gestisce lo stato condiviso tra più oggetti ASP.|
|**Server**|Consente di accedere all'oggetto **Server** intrinseco Active Server Pages. L'oggetto **Server** consente di creare altri oggetti ASP.|

## <a name="see-also"></a>Vedi anche

[Creazione guidata componente ASP ATL](../../atl/reference/atl-active-server-page-component-wizard.md)<br/>
[Componente pagine ASP ATL](../../atl/reference/adding-an-atl-active-server-page-component.md)
