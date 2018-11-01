---
title: 'Server di automazione: problemi di durata degli oggetti'
ms.date: 11/04/2016
helpviewer_keywords:
- objects [MFC], lifetime
- lifetime, automation server
- Automation servers, object lifetime
- servers, lifetime of Automation
ms.assetid: 342baacf-4015-4a0e-be2f-321424f1cb43
ms.openlocfilehash: 904c3023d7f27bd144c306d9d92810a91a48ecfa
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50637645"
---
# <a name="automation-servers-object-lifetime-issues"></a>Server di automazione: problemi di durata degli oggetti

Quando un client di automazione crea o attiva un elemento OLE, il server passa al client un puntatore a tale oggetto. Il client stabilisce un riferimento all'oggetto tramite una chiamata alla funzione OLE [IUnknown:: AddRef](/windows/desktop/api/unknwn/nf-unknwn-iunknown-addref). Il riferimento è in vigore fino a quando il client chiama [IUnknown:: Release](/windows/desktop/api/unknwn/nf-unknwn-iunknown-release). Le applicazioni client scritte con le classi OLE della libreria MFC non devono necessariamente effettuare queste chiamate; tali operazioni vengono eseguite dal framework. Il sistema OLE e il server stesso possono definire dei riferimenti all'oggetto. Un server non deve eliminare definitivamente un oggetto fintanto che rimangono attivi riferimenti esterni all'oggetto.

Il framework gestisce un conteggio interno del numero di riferimenti a qualsiasi oggetto server derivato da [CCmdTarget](../mfc/reference/ccmdtarget-class.md). Questo numero viene aggiornato ogni volta che viene aggiunto o rilasciato un riferimento all'oggetto da un client di automazione o da altra entità.

Quando il conteggio dei riferimenti è 0, il framework chiama la funzione virtuale [CCmdTarget:: OnFinalRelease](../mfc/reference/ccmdtarget-class.md#onfinalrelease). L'implementazione predefinita di questa funzione chiama il **eliminare** operatore da eliminare questo oggetto.

La libreria MFC fornisce funzionalità aggiuntive per il controllo del comportamento dell'applicazione quando dei client esterni possiedono riferimenti agli oggetti dell'applicazione. Oltre a mantenere il conteggio dei riferimenti a ogni oggetto, i server mantengono un conteggio complessivo degli oggetti attivi. Le funzioni globali [AfxOleLockApp](../mfc/reference/application-control.md#afxolelockapp) e [AfxOleUnlockApp](../mfc/reference/application-control.md#afxoleunlockapp) aggiornare il conteggio di oggetti attivi. Se il numero del conteggio è diverso da zero, l'applicazione non termina quando l'utente sceglie Chiudi da menu di sistema o Esci dal menu File. Al contrario, la finestra principale dell'applicazione viene nascosta (ma non eliminata definitivamente) fino a completamento di tutte le richieste pendenti da parte dei client. In genere, `AfxOleLockApp` e `AfxOleUnlockApp` vengono chiamate rispettivamente nei costruttori e nei distruttori delle classi che supportano l'automazione.

In alcune circostanze il server viene costretto a terminare mentre un client possiede ancora un riferimento a un oggetto. Ad esempio, una risorsa dalla quale dipende il server potrebbe diventare non disponibile e causare così un errore da parte del server. L'utente potrebbe inoltre chiudere un documento server contenente oggetti a cui fanno riferimento altre applicazioni.

In Windows SDK, vedere `IUnknown::AddRef` e `IUnknown::Release`.

## <a name="see-also"></a>Vedere anche

[Server di automazione](../mfc/automation-servers.md)<br/>
[AfxOleCanExitApp](../mfc/reference/application-control.md#afxolecanexitapp)

