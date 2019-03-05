---
title: Unione di menu della Guida
ms.date: 11/04/2016
helpviewer_keywords:
- menus [MFC], merging
- merging Help menus [MFC]
- Help [MFC], for active document containers
ms.assetid: 9d615999-79ba-471a-9288-718f0c903d49
ms.openlocfilehash: e1e8f9af696b6ea4cd485f4215e1c8425098e987
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57296846"
---
# <a name="help-menu-merging"></a>Unione di menu della Guida

Quando un oggetto è attivo in un contenitore, il menu di protocollo di unione dei documenti OLE fornisce il controllo completo di oggetti del **aiutare** menu. Di conseguenza, gli argomenti della Guida del contenitore non sono disponibili, a meno che l'utente disattiva l'oggetto. Le regole di unione per consentire il contenitore sia un documento attivo che è attivo per condividere il menu di scelta dei menu posto amplia l'architettura di contenimento di documenti attivi. Le nuove regole sono convenzioni aggiuntive semplicemente sulla quale componente proprietario quale parte del menu di scelta e come costruire il menu condiviso.

La nuova convenzione è semplice. Nei documenti attivi il **aiutare** menu sono disponibili due voci di menu di primo livello organizzati come indicato di seguito:

`Help`

`Container Help >`

`Object Help    >`

Ad esempio, quando una sezione di Word è attiva il raccoglitore di Office, il **aiutare** menu apparirebbe come segue:

`Help`

`Binder Help >`

`Word Help   >`

Menu a discesa in cui le voci di menu aggiuntive specifiche per il contenitore e l'oggetto vengono fornite all'utente sono entrambe opzioni di menu. Le voci visualizzate variano con il contenitore e gli oggetti coinvolti.

Per costruire l'oggetto unito **aiutare** menu, l'architettura active document containment modifica la normale procedura di documenti OLE. In base ai documenti OLE, la barra di menu unita può avere sei gruppi di menu, vale a dire **File**, **Edit**, **contenitore**, **oggetto**,  **Finestra**, **aiutare**, in questo ordine. In ogni gruppo, possono esistere zero o più menu. I gruppi **File**, **contenitore**, e **finestra** appartengono a gruppi e il contenitore **Edit**, **(oggetto),** e **aiutare** appartiene all'oggetto. Se l'oggetto deve eseguire l'unione di menu, crea una barra dei menu vuota e lo passa al contenitore. Il contenitore quindi inserisce i menu, chiamando `IOleInPlaceFrame::InsertMenus`. L'oggetto passa inoltre una struttura che è una matrice di sei valori LONG (**OLEMENUGROUPWIDTHS**). Dopo aver inserito i menu, il contenitore contrassegna menu quanti sono stati aggiunti in ognuno dei relativi gruppi e quindi restituisce. L'oggetto inserisce quindi il menu di scelta, con particolare attenzione al conteggio dei menu in ogni gruppo di contenitori. Infine, l'oggetto passa la barra dei menu unito e matrice, che contiene il conteggio dei menu di scelta in ciascun gruppo, a OLE, che restituisce un oggetto opaco "descrittore del menu" gestiscono. In un secondo momento l'oggetto passa tale handle e la barra di menu unita al contenitore, tramite `IOleInPlaceFrame::SetMenu`. A questo punto, il contenitore viene visualizzata la barra di menu unita e passa l'handle a OLE, in modo che OLE può effettuare l'invio corretto di messaggi di menu.

Nella procedura modificata documento attivo, è necessario innanzitutto inizializzare l'oggetto di **OLEMENUGROUPWIDTHS** elementi su zero prima di passarlo al contenitore. Il contenitore esegue quindi un inserimento di menu nello stato normale con una sola eccezione: Gli inserimenti contenitore un **aiutare** menu come ultimo elemento e archivia il valore 1 nell'ultima voce (sesto) del **OLEMENUGROUPWIDTHS** matrice (vale a dire, larghezza [5], che appartiene al gruppo dell'oggetto della Guida). Ciò **aiutare** menu è presente un solo elemento che è un sottomenu, il "**contenitore della Guida in linea** >" menu a discesa come descritto in precedenza.

L'oggetto esegue quindi il codice di inserimento di menu nello stato normale e con la differenza che prima di inserire relativi **aiutare** menu, viene verificato il movimento del sesto il **OLEMENUGROUPWIDTHS** matrice. Se il valore è 1 e il nome dell'ultimo menu è **aiutare** (o stringa localizzata appropriata), inserisce l'oggetto relativo **consentono** menu come sottomenu del contenitore **Guida** menu di scelta.

L'oggetto quindi imposta il sesto elemento della **OLEMENUGROUPWIDTHS** su zero e incrementa di uno al quinto elemento. In questo modo OLE sapere che il **aiutare** dal menu a cui appartiene il contenitore e i messaggi di menu corrispondenti per tale menu (e i relativi sottomenu) devono essere indirizzati al contenitore. È quindi responsabilità del contenitore per l'inoltro **WM_INITMENUPOPUP**, **WM_SELECT**, **WM_COMMAND**e altri messaggi relativi a menu che appartengono all'oggetto parte del **aiutare** menu. Questa operazione viene eseguita tramite **WM_INITMENU** un flag che indica al contenitore se l'utente ha esplorato l'oggetto deve essere cancellato **Guida** menu. Controlla quindi il contenitore **WM_MENUSELECT** di entrata o uscita da qualsiasi elemento il **Guida** menu che il contenitore non apportassero stesso. In ingresso, significa che l'utente si è spostato in un menu di oggetti, in modo che il contenitore imposta il flag "nel menu della Guida di oggetto" e utilizza lo stato del flag per rollforward **WM_MENUSELECT**, **WM_INITMENUPOPUP**e  **WM_COMMAND** messaggi, come minimo, nella finestra di oggetto. (In uscita, il contenitore Cancella il flag e quindi elabora se stesso questi stessi messaggi). Il contenitore deve usare la finestra restituita da dell'oggetto `IOleInPlaceActiveObejct::GetWindow` fungere da destinazione per questi messaggi.

Se l'oggetto rileva uno zero in sesto elemento della **OLEMENUGROUPWIDTHS**, procede secondo le normali regole di documenti OLE. Questa procedura riguarda tutti i contenitori che partecipano **aiutare** unione sia per quelli che non prevedono di menu.

Quando l'oggetto chiama `IOleInPlaceFrame::SetMenu`prima che venga visualizzato il menu unito a barre, i controlli contenitore se il **aiutare** menu dispone di un sottomenu aggiuntivo, oltre a ciò che ha inserito il contenitore. Se, pertanto, il contenitore lascia relativi **aiutare** menu nella barra dei menu unito. Se il **aiutare** menu non dispone di un sottomenu aggiuntivo, verrà rimosso il contenitore relativo **Guida** menu dalla barra dei menu unito. Questa procedura riguarda tutti gli oggetti che partecipano **aiutare** unione sia per quelli che non prevedono di menu.

Infine, al momento per disassemblare il menu di scelta, l'oggetto rimuove inserita **aiutare** menu oltre a rimuovere l'altra inserito i menu. Quando il contenitore della rimozione dei menu, verranno rimossi relativi **aiutare** menu oltre a altri menu inserito.

## <a name="see-also"></a>Vedere anche

[Contenitori documenti attivi](../mfc/active-document-containers.md)
