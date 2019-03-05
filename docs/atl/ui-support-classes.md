---
title: Classi di supporto dell'interfaccia utente (ATL)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- vc.atl.ui
helpviewer_keywords:
- user interfaces, support classes
- user interfaces, ATL classes
ms.assetid: 313dfc95-308a-4118-b919-5a3c3673b865
ms.openlocfilehash: 09b7aa26fc2f4597f741865ec94222bd65b85665
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57297036"
---
# <a name="ui-support-classes"></a>Classi di supporto dell'interfaccia utente

Le classi seguenti forniscono il supporto dell'interfaccia utente generale:

- [IDocHostUIHandlerDispatch](../atl/reference/idochostuihandlerdispatch-interface.md) un'interfaccia per il motore di rendering e l'analisi HTML di Microsoft.

- [IOleObjectImpl](../atl/reference/ioleobjectimpl-class.md) fornisce i metodi principali attraverso il quale comunica un contenitore con un controllo. Gestisce l'attivazione e disattivazione dei controlli sul posto.

- [IOleInPlaceObjectWindowlessImpl](../atl/reference/ioleinplaceobjectwindowlessimpl-class.md) gestisce la riattivazione dei controlli sul posto. Consente a un controllo senza finestra per ricevere i messaggi, nonché di partecipare alle operazioni di trascinamento e rilascio.

- [IOleInPlaceActiveObjectImpl](../atl/reference/ioleinplaceactiveobjectimpl-class.md) semplifica la comunicazione tra un controllo sul posto e il relativo contenitore.

- [IViewObjectExImpl](../atl/reference/iviewobjecteximpl-class.md) consente a un controllo da visualizzare se stesso direttamente e notificare le modifiche in una visualizzazione personalizzata al contenitore. Fornisce supporto per sfarfallio disegno, i controlli non rettangolari e trasparenti e l'hit test.

## <a name="related-articles"></a>Articoli correlati

[Esercitazione ATL](../atl/active-template-library-atl-tutorial.md)

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../atl/atl-class-overview.md)
