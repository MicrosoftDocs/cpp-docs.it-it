---
title: 'Server di automazione: problemi di durata degli oggetti'
ms.date: 11/04/2016
helpviewer_keywords:
- objects [MFC], lifetime
- lifetime, automation server
- Automation servers, object lifetime
- servers, lifetime of Automation
ms.assetid: 342baacf-4015-4a0e-be2f-321424f1cb43
ms.openlocfilehash: 6e8c4189e8c895cf41323528c70d9277645d8f9d
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619064"
---
# <a name="automation-servers-object-lifetime-issues"></a>Server di automazione: problemi di durata degli oggetti

Quando un client di automazione crea o attiva un elemento OLE, il server passa al client un puntatore a tale oggetto. Il client stabilisce un riferimento all'oggetto tramite una chiamata alla funzione OLE [IUnknown:: AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref). Questo riferimento è attivo fino a quando il client chiama [IUnknown:: Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release). (Le applicazioni client scritte con le classi OLE del libreria Microsoft Foundation Class non devono effettuare queste chiamate. il Framework lo esegue). Il sistema OLE e il server stesso possono stabilire riferimenti all'oggetto. Un server non deve eliminare definitivamente un oggetto fintanto che rimangono attivi riferimenti esterni all'oggetto.

Il Framework mantiene un conteggio interno del numero di riferimenti a qualsiasi oggetto server derivato da [CCmdTarget](reference/ccmdtarget-class.md). Questo numero viene aggiornato ogni volta che viene aggiunto o rilasciato un riferimento all'oggetto da un client di automazione o da altra entità.

Quando il conteggio dei riferimenti diventa 0, il Framework chiama la funzione virtuale [CCmdTarget:: OnFinalRelease](reference/ccmdtarget-class.md#onfinalrelease). L'implementazione predefinita di questa funzione chiama l'operatore **Delete** per eliminare l'oggetto.

La libreria MFC fornisce funzionalità aggiuntive per il controllo del comportamento dell'applicazione quando dei client esterni possiedono riferimenti agli oggetti dell'applicazione. Oltre a mantenere il conteggio dei riferimenti a ogni oggetto, i server mantengono un conteggio complessivo degli oggetti attivi. Le funzioni globali [AfxOleLockApp](reference/application-control.md#afxolelockapp) e [AfxOleUnlockApp](reference/application-control.md#afxoleunlockapp) aggiornano il numero di oggetti attivi dell'applicazione. Se il numero del conteggio è diverso da zero, l'applicazione non termina quando l'utente sceglie Chiudi da menu di sistema o Esci dal menu File. Al contrario, la finestra principale dell'applicazione viene nascosta (ma non eliminata definitivamente) fino a completamento di tutte le richieste pendenti da parte dei client. In genere, `AfxOleLockApp` e `AfxOleUnlockApp` vengono chiamate rispettivamente nei costruttori e nei distruttori delle classi che supportano l'automazione.

In alcune circostanze il server viene costretto a terminare mentre un client possiede ancora un riferimento a un oggetto. Ad esempio, una risorsa dalla quale dipende il server potrebbe diventare non disponibile e causare così un errore da parte del server. L'utente potrebbe inoltre chiudere un documento server contenente oggetti a cui fanno riferimento altre applicazioni.

Nel Windows SDK, vedere `IUnknown::AddRef` e `IUnknown::Release` .

## <a name="see-also"></a>Vedere anche

[Server di automazione](automation-servers.md)<br/>
[AfxOleCanExitApp](reference/application-control.md#afxolecanexitapp)
