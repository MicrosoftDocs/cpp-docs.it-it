---
title: Unione di Menu della Guida | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- menus [MFC], merging
- merging Help menus [MFC]
- Help [MFC], for active document containers
ms.assetid: 9d615999-79ba-471a-9288-718f0c903d49
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c4d3ae9509edcbe79417bb37d02f4f585b2da653
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="help-menu-merging"></a>Unione di menu della Guida
Quando un oggetto è attivo in un contenitore, il menu di protocollo di unione dei documenti OLE fornisce l'oggetto controllo completo di **Guida** menu. Di conseguenza, gli argomenti della Guida del contenitore non sono disponibili, a meno che l'utente disattiva l'oggetto. L'architettura active document containment amplia le regole per l'unione per consentire il contenitore e un documento attivo di condividere il menu dei menu sul posto. Le nuove regole sono semplicemente ulteriori convenzioni sul componente che possiede la parte del menu di scelta e modalità di costruzione di menu condiviso.  
  
 La nuova convenzione è semplice. Nei documenti attivi, il **Guida** menu dispone di due voci di menu di primo livello organizzate come segue:  
  
 `Help`  
  
 `Container Help >`  
  
 `Object Help    >`  
  
 Ad esempio, quando una sezione di Word è attiva del Raccoglitore di Office, il **Guida** menu appariranno come indicato di seguito:  
  
 `Help`  
  
 `Binder Help >`  
  
 `Word Help   >`  
  
 Entrambe le voci di menu sono menu a discesa in cui le voci di menu aggiuntive specifiche per il contenitore e dell'oggetto vengono fornite per l'utente. Le voci visualizzate variano a seconda di contenitore e gli oggetti coinvolti.  
  
 Per costruire l'oggetto unito **Guida** menu, l'architettura active document containment modifica la normale procedura di documenti OLE. In base ai documenti OLE, la barra dei menu unito può avere sei gruppi di menu, vale a dire **File**, **modifica**, **contenitore**, `Object`, **finestra**, **Guida**, in questo ordine. In ogni gruppo, possono essere presenti zero o più menu. I gruppi di **File**, **contenitore**, e **finestra** appartiene al contenitore e i gruppi di **modifica**, **dioggetto,** e **Guida** appartiene all'oggetto. Se l'oggetto deve eseguire l'unione di menu, crea una barra dei menu vuota e lo passa al contenitore. Il contenitore inserisce quindi il relativo menu, chiamando **IOleInPlaceFrame:: InsertMenus**. L'oggetto passa inoltre una struttura che è una matrice di sei valori LONG (**OLEMENUGROUPWIDTHS**). Dopo aver inserito i menu, il contenitore indica quanti menu sono stati aggiunti in ciascuno dei relativi gruppi, quindi restituisce. L'oggetto viene inserito il relativo menu, prestando attenzione al numero di menu in ciascun gruppo contenitore. Infine, l'oggetto passa la barra dei menu sottoposto a merge e la matrice, che contiene il numero di menu in ogni gruppo, a OLE, che restituisce un "descrittore di menu" opaco gestiscono. In seguito l'oggetto passa l'handle e barra dei menu unito al contenitore, tramite **SetMenu**. In questo momento, il contenitore viene visualizzata la barra dei menu unito e passa l'handle a OLE, in modo che potrà effettuare l'invio corretto dei messaggi di menu.  
  
 Nella procedura modificato documento attivo, è necessario innanzitutto inizializzare l'oggetto di **OLEMENUGROUPWIDTHS** elementi su zero prima di passarlo al contenitore. Il contenitore esegue un inserimento di menu nello stato normale con una sola eccezione: gli inserimenti contenitore un **Guida** menu come l'ultimo elemento e archivia il valore 1 nell'ultima voce (sesto) del **OLEMENUGROUPWIDTHS** matrice (vale a dire larghezza [5], che appartiene al gruppo dell'oggetto della Guida in linea). Questo **Guida** menu conterrà un solo elemento, ovvero un sottomenu, il "**contenitore** >" menu a discesa come descritto in precedenza.  
  
 L'oggetto viene quindi eseguito il relativo codice di inserimento di menu nello stato normale, tranne il fatto che prima di inserire il **Guida** menu, controlla la voce del sesto il **OLEMENUGROUPWIDTHS** matrice. Se il valore è 1 e il nome dell'ultimo menu è **Guida** o stringa localizzata appropriata, quindi viene inserito l'oggetto relativo **Guida** menu come sottomenu del contenitore **Guida** dal menu.  
  
 I set di oggetti quindi al sesto elemento della **OLEMENUGROUPWIDTHS** a zero e incrementa di uno al quinto elemento. Ciò consente di sapere che OLE di **Guida** menu appartiene al contenitore e i messaggi di menu corrispondente a tale menu (e i relativi sottomenu) devono essere indirizzati al contenitore. È responsabilità del contenitore per l'inoltro `WM_INITMENUPOPUP`, **WM_SELECT**, **WM_COMMAND**e altri messaggi relativi a menu che appartengono a una parte dell'oggetto di **della Guida**  menu. Questa operazione viene eseguita tramite `WM_INITMENU` per cancellare un flag che indica il contenitore se l'utente ha esplorato l'oggetto **Guida** menu. Il contenitore resta `WM_MENUSELECT` di entrata o uscita da un elemento qualsiasi il **Guida** menu che non aggiunge automaticamente il contenitore. In ingresso, significa che l'utente si è spostato in un menu di oggetto, in modo che il contenitore imposta il flag "nel menu della Guida di oggetto" e utilizza lo stato del flag per rollforward `WM_MENUSELECT`, `WM_INITMENUPOPUP`, e **WM_COMMAND** messaggi, come minimo, a la finestra di oggetto. (In uscita, il contenitore Cancella il flag e quindi elabora i messaggi stessi se stesso.) Il contenitore deve utilizzare la finestra restituita da dell'oggetto **IOleInPlaceActiveObejct:: GetWindow** fungere da destinazione per questi messaggi.  
  
 Se l'oggetto rileva uno zero al sesto elemento della **OLEMENUGROUPWIDTHS**, procede secondo le normale regole di documenti OLE. Questa procedura descrive i contenitori che partecipano **Guida** unione sia per quelli che non di menu.  
  
 Quando l'oggetto chiama **SetMenu**, prima di visualizzazione unito barra dei menu, i controlli contenitore, se il **Guida** menu dispone di un sottomenu aggiuntivo, oltre a ciò che è il contenitore inserito. Se in tal caso, il contenitore esce dall'area relativa **Guida** menu nella barra dei menu unito. Se il **Guida** menu non dispone di un sottomenu aggiuntivo, verrà rimosso il contenitore relativo **Guida** menu dalla barra dei menu unito. Questa procedura descrive gli oggetti che fanno parte di **Guida** unione sia per quelli che non di menu.  
  
 Infine, quando è necessario separare il menu, l'oggetto rimuove inserted **Guida** menu oltre a rimuovere l'altro inserito menu. Quando il contenitore della rimozione dei menu, verrà rimosse relativo **Guida** menu oltre agli altri menu inserito.  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori documenti attivi](../mfc/active-document-containers.md)

