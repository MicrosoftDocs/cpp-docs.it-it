---
title: Unione di menu della Guida
ms.date: 11/04/2016
helpviewer_keywords:
- menus [MFC], merging
- merging Help menus [MFC]
- Help [MFC], for active document containers
ms.assetid: 9d615999-79ba-471a-9288-718f0c903d49
ms.openlocfilehash: 1bd70af6f24ee6f9873b89b2060f4b2d90149c90
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84620137"
---
# <a name="help-menu-merging"></a>Unione di menu della Guida

Quando un oggetto è attivo all'interno di un contenitore, il protocollo di Unione dei menu del documento OLE fornisce all'oggetto il controllo completo del menu della **Guida** . Di conseguenza, gli argomenti della guida del contenitore non sono disponibili, a meno che l'utente non disattivi l'oggetto. L'architettura di contenimento dei documenti attiva si espande sulle regole per l'Unione dei menu sul posto per consentire sia al contenitore che a un documento attivo attivo di condividere il menu. Le nuove regole sono semplicemente convenzioni aggiuntive sul componente proprietario della parte del menu e su come viene costruito il menu condiviso.

La nuova convenzione è semplice. Nei documenti **attivi il menu** ? include due voci di menu di primo livello organizzate nel modo seguente:

`Help`

`Container Help >`

`Object Help    >`

Ad esempio, quando una sezione di Word è attiva nel gestore di associazione di Office, **il menu?** verrà visualizzato come segue:

`Help`

`Binder Help >`

`Word Help   >`

Entrambe le voci di menu sono menu a cascata in cui vengono fornite all'utente eventuali voci di menu aggiuntive specifiche per il contenitore e l'oggetto. Gli elementi visualizzati qui variano in funzione del contenitore e degli oggetti necessari.

Per costruire questo menu della **Guida** Unito, l'architettura di contenimento del documento attiva modifica la normale procedura dei documenti OLE. In base ai documenti OLE, la barra dei menu unita può includere sei gruppi di menu, ovvero **file**, **modifica**, **contenitore**, **oggetto**, **finestra**, **Guida**, in questo ordine. In ogni gruppo possono essere presenti zero o più menu. Il **file**dei gruppi, il **contenitore**e la **finestra** appartengono al contenitore e i gruppi **modifica**, **oggetto** e **Guida** appartengono all'oggetto. Quando l'oggetto desidera eseguire l'Unione di menu, crea una barra dei menu vuota e la passa al contenitore. Il contenitore inserisce quindi i menu chiamando `IOleInPlaceFrame::InsertMenus` . L'oggetto passa inoltre una struttura che è una matrice di sei valori LONG (**OLEMENUGROUPWIDTHS**). Dopo aver inserito i menu, il contenitore contrassegna il numero di menu aggiunti in ogni gruppo e quindi restituisce. Quindi, l'oggetto inserisce i menu, prestando attenzione al numero di menu in ogni gruppo di contenitori. Infine, l'oggetto passa la barra dei menu unita e la matrice, che contiene il numero di menu in ogni gruppo, a OLE, che restituisce un handle opaco "menu descrittore". Successivamente l'oggetto passa tale handle e la barra dei menu unita al contenitore, tramite `IOleInPlaceFrame::SetMenu` . Al momento, il contenitore Visualizza la barra dei menu unita e passa l'handle a OLE, in modo che OLE possa eseguire l'invio corretto dei messaggi di menu.

Nella procedura modificata del documento attivo, l'oggetto deve innanzitutto inizializzare gli elementi **OLEMENUGROUPWIDTHS** su zero prima di passarli al contenitore. Il contenitore esegue quindi un inserimento di menu normale con un'unica eccezione: il contenitore inserisce un menu? come ultimo elemento e archivia il valore 1 nell'ultima voce (Sesto) della matrice **OLEMENUGROUPWIDTHS** (ovvero Width [5], che appartiene al gruppo **della Guida dell'** oggetto). Questo menu della **Guida** includerà un solo elemento che è un sottomenu, il menu a cascata "> della**Guida del contenitore** ", come descritto in precedenza.

L'oggetto esegue quindi il normale codice di inserimento del menu, ad eccezione del fatto che prima di **inserire il relativo menu?** , viene controllata la sesta voce della matrice **OLEMENUGROUPWIDTHS** . Se il valore è 1 e il nome dell'ultimo menu è la **Guida** (o la stringa localizzata appropriata), l'oggetto inserisce il **menu della guida come** sottomenu del menu della **Guida** del contenitore.

L'oggetto imposta quindi il sesto elemento di **OLEMENUGROUPWIDTHS** su zero e incrementa di uno il quinto elemento. In questo modo OLE sa che il menu **Guida** appartiene al contenitore e che i messaggi di menu corrispondenti a tale menu (e ai relativi sottomenu) devono essere indirizzati al contenitore. È quindi responsabilità del contenitore trasmettere **WM_INITMENUPOPUP**, **WM_SELECT**, **WM_COMMAND**e altri messaggi correlati ai menu che appartengono alla parte dell'oggetto del menu della **Guida** . Questa operazione viene eseguita utilizzando **WM_INITMENU** per cancellare un flag che indica al contenitore se l'utente è stato spostato nel menu della **Guida** dell'oggetto. Il contenitore controlla quindi **WM_MENUSELECT** per entrare o uscire da qualsiasi elemento del menu? che non è stato **aggiunto dal contenitore** . Alla voce, significa che l'utente è passato a un menu oggetto, quindi il contenitore imposta il flag "nel menu della Guida dell'oggetto" e usa lo stato del flag per inviare come minimo i messaggi di **WM_MENUSELECT**, **WM_INITMENUPOPUP**e **WM_COMMAND** alla finestra degli oggetti. Al termine dell'uscita, il contenitore Cancella il flag e quindi elabora gli stessi messaggi. Il contenitore deve usare la finestra restituita dalla funzione dell'oggetto `IOleInPlaceActiveObejct::GetWindow` come destinazione per questi messaggi.

Se l'oggetto rileva uno zero nel sesto elemento di **OLEMENUGROUPWIDTHS**, procede secondo le normali regole dei documenti OLE. In questa procedura vengono illustrati i contenitori che partecipano all'Unione dei menu?, **oltre a quelli** che non lo fanno.

Quando l'oggetto chiama `IOleInPlaceFrame::SetMenu` , prima di visualizzare la barra dei menu unita, il contenitore verifica **Help** se il menu? contiene un sottomenu aggiuntivo, oltre a ciò che è stato inserito nel contenitore. In tal caso, il contenitore lascia **il menu?** nella barra dei menu unita. Se il menu **Guida** non dispone di un sottomenu aggiuntivo, il contenitore rimuoverà il **menu?** dalla barra dei menu unita. In questa procedura vengono descritti gli oggetti che partecipano all'Unione dei menu?, **oltre a quelli** che non lo sono.

Infine, quando è il momento di disassemblare il menu, l'oggetto rimuove il menu della **Guida** inserito, oltre a rimuovere gli altri menu inseriti. Quando il contenitore rimuove i menu, il menu della **Guida** viene rimosso oltre agli altri menu inseriti.

## <a name="see-also"></a>Vedere anche

[Contenitori documenti attivi](active-document-containers.md)
