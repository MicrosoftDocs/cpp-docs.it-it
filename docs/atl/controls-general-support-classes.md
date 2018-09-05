---
title: 'Controlli ATL: Classi di supporto generale | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.atl.controls
dev_langs:
- C++
helpviewer_keywords:
- controls [ATL]
- general support classes
ms.assetid: cf73f1d2-7542-48e3-b8c8-9d3abf29f85b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 18bf4bf2d2081402762026d6f26bd4650f9908fe
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43751446"
---
# <a name="controls-general-support-classes"></a>Controlli: Classi di supporto generale

Le classi seguenti forniscono il supporto generale per i controlli ATL:

- [CComControl](../atl/reference/ccomcontrol-class.md) costituito dai membri di dati e funzioni helper essenziali per i controlli ATL.

- [IOleControlImpl](../atl/reference/iolecontrolimpl-class.md) fornisce i metodi necessari per i controlli.

- [IOleObjectImpl](../atl/reference/ioleobjectimpl-class.md) fornisce i metodi principali attraverso il quale comunica un contenitore con un controllo. Gestisce l'attivazione e disattivazione dei controlli sul posto.

- [IQuickActivateImpl](../atl/reference/iquickactivateimpl-class.md) combina l'inizializzazione in un'unica chiamata per evitare ritardi durante il caricamento dei controlli dei contenitori.

- [IPointerInactiveImpl](../atl/reference/ipointerinactiveimpl-class.md) gestisce l'interazione del mouse minima per un controllo inattivo in caso contrario.

## <a name="sample-program"></a>Programma di esempio

[ATLFire](../visual-cpp-samples.md)

## <a name="related-articles"></a>Articoli correlati

[Esercitazione ATL](../atl/active-template-library-atl-tutorial.md)

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../atl/atl-class-overview.md)

