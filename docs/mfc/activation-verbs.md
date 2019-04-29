---
title: 'Attivazione: Verbi'
ms.date: 11/04/2016
helpviewer_keywords:
- verbs [MFC]
- OLE [MFC], activation
- edit verb [MFC]
- activation [MFC], verbs
- OLE [MFC], editing
- Primary verb [MFC]
- OLE activation {MFC]
ms.assetid: eb56ff23-1de8-43ad-abeb-dc7346ba7b70
ms.openlocfilehash: baf8e0ac3527407b2e5ba77dfdf3921419217fd7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62392908"
---
# <a name="activation-verbs"></a>Attivazione: Verbi

Questo articolo spiega play ruolo primario e secondario verbi in OLE [attivazione](../mfc/activation-cpp.md).

In genere, facendo doppio clic su un elemento incorporato che consente all'utente di modificarlo. Tuttavia, alcuni elementi non funzionano in questo modo. Ad esempio, facendo doppio clic su un elemento creato con l'applicazione del registratore di suoni non aprire il server in una finestra separata. al contrario, riproduce il suono.

Il motivo di questa differenza di comportamento è che gli elementi registratore di suoni hanno un diverso "verbo primario". Il verbo primario è l'azione eseguita quando l'utente fa doppio clic su un elemento OLE. Per la maggior parte dei tipi di elementi OLE, il verbo primario è modifica, che avvia il server che ha creato l'elemento. Per alcuni tipi di elementi, ad esempio elementi registratore di suoni, il verbo primario è Play.

Molti tipi di elementi OLE supportano solo un verbo e la modifica è quello più comune. Tuttavia, alcuni tipi di elementi supportano più verbi. Ad esempio, gli elementi supportano il registratore di suoni modifica come un verbo secondario.

Un altro verbo utilizzato di frequente è aperta. Il verbo Open è identico alla modifica, ad eccezione del fatto viene avviata l'applicazione server in una finestra separata. Questo verbo deve essere usato quando l'applicazione del contenitore o l'applicazione server non supporta l'attivazione sul posto.

Verbi di diverso da verbo primario devono essere richiamati tramite un comando sottomenu quando l'elemento è selezionato. Il sottomenu contiene tutti i verbi supportati dall'elemento e in genere è raggiungibile tramite il *typename* **oggetto** comando il **modifica** menu. Per informazioni sul *nomeTipo* **oggetto** comando, vedere l'articolo [menu e risorse: Aggiunte di contenitori](../mfc/menus-and-resources-container-additions.md).

I verbi supportati da un'applicazione server sono elencati nel database di registrazione di Windows. Se l'applicazione server viene scritto con la libreria Microsoft Foundation Class, verranno automaticamente registrati tutti i verbi quando viene avviato il server. In caso contrario, è necessario registrarli durante la fase di inizializzazione dell'applicazione server. Per altre informazioni, vedere l'articolo [registrazione](../mfc/registration.md).

## <a name="see-also"></a>Vedere anche

[Attivazione](../mfc/activation-cpp.md)<br/>
[Contenitori](../mfc/containers.md)<br/>
[Server](../mfc/servers.md)
