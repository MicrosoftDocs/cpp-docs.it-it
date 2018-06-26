---
title: Unione di Menu della Guida | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- menus [MFC], merging
- merging Help menus [MFC]
- Help [MFC], for active document containers
ms.assetid: 9d615999-79ba-471a-9288-718f0c903d49
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ecdc450bbab725c6f81cf23e16fa32a2246b2b3a
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36931292"
---
# <a name="help-menu-merging"></a>Unione di menu della Guida
Quando un oggetto è attivo in un contenitore, il menu di protocollo di unione dei documenti OLE offre il controllo completo di oggetto del **Guida** menu. Di conseguenza, gli argomenti della Guida del contenitore non sono disponibili, a meno che l'utente disattiva l'oggetto. L'architettura active document containment ampliate le regole per l'unione per consentire il contenitore sia un documento attivo che è attivo per condividere il menu di scelta dei menu sul posto. Le nuove regole sono semplicemente ulteriori convenzioni sul componente che possiede la parte del menu e modalità di costruzione di menu condiviso.  
  
 La nuova convenzione è semplice. Nei documenti attivi il **Guida** menu sono due voci di menu di primo livello organizzate come segue:  
  
 `Help`  
  
 `Container Help >`  
  
 `Object Help    >`  
  
 Ad esempio, quando una sezione di Word è attiva del Raccoglitore di Office, il **Guida** menu appariranno come indicato di seguito:  
  
 `Help`  
  
 `Binder Help >`  
  
 `Word Help   >`  
  
 Entrambe le voci di menu sono menu a discesa in cui le voci di menu aggiuntive specifiche per il contenitore e dell'oggetto vengono fornite all'utente. Le voci visualizzate variano con il contenitore e gli oggetti coinvolti.  
  
 Per costruire questo unite **Guida** menu, architettura active document containment modifica la normale procedura di documenti OLE. In base ai documenti OLE, la barra dei menu unito può avere sei gruppi di menu, vale a dire **File**, **modificare**, **contenitore**, **oggetto**,  **Finestra**, **Guida**, in questo ordine. In ogni gruppo, possono esistere zero o più menu. I gruppi **File**, **contenitore**, e **finestra** appartenere al contenitore e i gruppi **modifica**, **,oggetto** e **Guida** appartiene all'oggetto. Quando l'oggetto vuole eseguire l'unione di menu, crea una barra dei menu vuoto e lo passa al contenitore. Il contenitore inserisce quindi il relativo menu, chiamando `IOleInPlaceFrame::InsertMenus`. L'oggetto passa inoltre una struttura che è una matrice di sei valori LONG (**OLEMENUGROUPWIDTHS**). Dopo aver inserito i comandi di menu, il contenitore indica quanti menu sono stati aggiunti in ciascuno dei relativi gruppi, quindi restituisce. L'oggetto inserisce quindi il relativo menu, prestando attenzione al numero di menu in ciascun gruppo contenitore. Infine, l'oggetto passa la barra dei menu unito e la matrice, che contiene il conteggio dei menu in ogni gruppo, a OLE, che restituisce un opaco "descrittore del menu" gestiscono. In un secondo momento l'oggetto passa tale handle e barra dei menu unito al contenitore, tramite `IOleInPlaceFrame::SetMenu`. In questo momento, il contenitore viene visualizzato l'indicatore di voce di menu unita e lo passa l'handle a OLE, in modo che OLE può effettuare l'invio corretto dei messaggi di menu.  
  
 Nella procedura modificato documento attivo, è necessario innanzitutto inizializzare l'oggetto di **OLEMENUGROUPWIDTHS** elementi su zero prima di passarlo al contenitore. Il contenitore esegue un inserimento di menu nello stato normale con una sola eccezione: gli inserimenti contenitore un **Guida** menu come l'ultimo elemento e archivia il valore 1 nell'ultima voce (sesto) del **OLEMENUGROUPWIDTHS** matrice (vale a dire, larghezza [5], che appartiene al gruppo dell'oggetto della Guida). Ciò **Guida** menu conterrà un solo elemento che è un sottomenu, il "**Guida contenitore** >" menu cascade come descritto in precedenza.  
  
 L'oggetto viene quindi eseguito il relativo codice di inserimento di menu nello stato normale, tranne il fatto che prima di inserire il relativo **Guida** menu, controlla la voce del sesto il **OLEMENUGROUPWIDTHS** matrice. Se il valore è 1 e il nome dell'ultimo menu è **Guida** (o stringa localizzata appropriata), quindi viene inserito l'oggetto relativo **Guida** menu come sottomenu del contenitore **Guida** menu di scelta.  
  
 I set di oggetti quindi al sesto elemento della **OLEMENUGROUPWIDTHS** su zero e incrementa il quinto elemento di uno. In questo modo OLE sapere che la **Guida** menu appartiene al contenitore e i messaggi di menu corrispondente a tale menu (e i relativi sottomenu) devono essere indirizzati al contenitore. È quindi responsabilità del contenitore per l'inoltro **WM_INITMENUPOPUP**, **WM_SELECT**, **WM_COMMAND**e altri messaggi relativi a menu che appartengono all'oggetto parte di **Guida** menu. Questa operazione viene eseguita tramite **WM_INITMENU** per cancellare un flag che indica il contenitore se l'utente ha esplorato l'oggetto **Guida** menu. Quindi controlla il contenitore **WM_MENUSELECT** di entrata o uscita da un elemento qualsiasi il **Guida** menu che il contenitore non aggiungere se stesso. In ingresso, significa che l'utente è passato in un menu di oggetto, in modo che il contenitore imposta il flag "nel menu Guida oggetto" e utilizza lo stato del flag per rollforward **WM_MENUSELECT**, **WM_INITMENUPOPUP**e  **WM_COMMAND** messaggi, come minimo, nella finestra di oggetto. (In uscita, il contenitore Cancella il flag e gli stessi messaggi quindi elabora se stesso.) Il contenitore deve utilizzare la finestra restituita da dell'oggetto `IOleInPlaceActiveObejct::GetWindow` fungere da destinazione per questi messaggi.  
  
 Se l'oggetto rileva uno zero al sesto elemento della **OLEMENUGROUPWIDTHS**, procede secondo le normale regole di documenti OLE. Questa procedura descrive i contenitori che partecipano **Guida** unione sia per quelli che non di menu.  
  
 Quando l'oggetto chiama `IOleInPlaceFrame::SetMenu`prima che la visualizzazione unito barra dei menu, i controlli contenitore che il **Guida** menu dispone di un sottomenu aggiuntivo, oltre a ciò che ha inserito il contenitore. Se in tal caso, il contenitore esce dall'area relativa **Guida** menu nella barra dei menu unito. Se il **Guida** menu non dispone di un sottomenu aggiuntivo, verrà rimosso il contenitore relativo **Guida** menu dalla barra dei menu unito. Questa procedura descrive gli oggetti che fanno parte di **Guida** unione sia per quelli che non di menu.  
  
 Infine, al momento per disassemblare il menu di scelta, l'oggetto rimuove inserted **Guida** menu oltre a rimuovere l'altra inserito i menu. Quando il contenitore della rimozione dei menu, verranno rimossi relativa **Guida** menu oltre ad altri menu inserito.  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori documenti attivi](../mfc/active-document-containers.md)

