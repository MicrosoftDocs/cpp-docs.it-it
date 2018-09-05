---
title: Classi di supporto dell'interfaccia utente (ATL) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.atl.ui
dev_langs:
- C++
helpviewer_keywords:
- user interfaces, support classes
- user interfaces, ATL classes
ms.assetid: 313dfc95-308a-4118-b919-5a3c3673b865
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1aa28c172b4eb22366d2af55d040cb52c9e84a31
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43755235"
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

