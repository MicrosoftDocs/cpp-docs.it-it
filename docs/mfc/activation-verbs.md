---
description: 'Altre informazioni su: attivazione: verbi'
title: 'Attivazione: verbi'
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
ms.openlocfilehash: 2c680452d87f1fcfd1ee2a0b8362dbaab8c0affd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325932"
---
# <a name="activation-verbs"></a>Attivazione: verbi

Questo articolo illustra la riproduzione dei verbi primari e secondari nell' [attivazione](activation-cpp.md)OLE.

In genere, fare doppio clic su un elemento incorporato consente all'utente di modificarlo. Alcuni elementi, tuttavia, non si comportano in questo modo. Se, ad esempio, si fa doppio clic su un elemento creato con l'applicazione del registratore di suoni, il server non viene aperto in una finestra separata. viene invece riprodotto il suono.

Il motivo di questa differenza di comportamento è che gli elementi del registratore audio hanno un "verbo principale" diverso. Il verbo principale è l'azione eseguita quando l'utente fa doppio clic su un elemento OLE. Per la maggior parte dei tipi di elementi OLE, il verbo principale è Edit, che avvia il server che ha creato l'elemento. Per alcuni tipi di elementi, ad esempio gli elementi del registratore di suoni, il verbo principale è Play.

Molti tipi di elementi OLE supportano un solo verbo e la modifica è la più comune. Tuttavia, alcuni tipi di elementi supportano più verbi. Ad esempio, gli elementi del registratore audio supportano la modifica come verbo secondario.

Un altro verbo usato spesso è aperto. Il verbo Open è identico a Edit, ad eccezione del fatto che l'applicazione server viene avviata in una finestra separata. Questo verbo deve essere utilizzato quando l'applicazione contenitore o l'applicazione server non supporta l'attivazione sul posto.

Quando l'elemento è selezionato, tutti i verbi diversi dal verbo primario devono essere richiamati tramite un comando di sottomenu. Questo sottomenu contiene tutti i verbi supportati dall'elemento e viene in genere raggiunto dal comando dell'  **oggetto** TypeName nel menu **modifica** . Per informazioni sul comando *typeName* **Object** , vedere l'articolo [menu e risorse: aggiunte di contenitori](menus-and-resources-container-additions.md).

I verbi supportati da un'applicazione server sono elencati nel database di registrazione di Windows. Se l'applicazione server viene scritta con il libreria Microsoft Foundation Class, registrerà automaticamente tutti i verbi all'avvio del server. In caso contrario, è necessario registrarli durante la fase di inizializzazione dell'applicazione server. Per ulteriori informazioni, vedere l'articolo relativo alla [registrazione](registration.md).

## <a name="see-also"></a>Vedi anche

[Activation](activation-cpp.md)<br/>
[Contenitori](containers.md)<br/>
[Server](servers.md)
