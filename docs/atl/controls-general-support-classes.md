---
description: 'Altre informazioni su: Controlli: classi di supporto generale'
title: 'Controlli ATL: classi di supporto generale'
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- controls [ATL]
- general support classes
ms.assetid: cf73f1d2-7542-48e3-b8c8-9d3abf29f85b
ms.openlocfilehash: a5b147ef2b30f0cc209fdfdabd52b59d7112c475
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97148213"
---
# <a name="controls-general-support-classes"></a>Controlli: classi di supporto generale

Le classi seguenti forniscono supporto generale per i controlli ATL:

- [CComControl](../atl/reference/ccomcontrol-class.md) È costituito da funzioni helper e membri dati essenziali per i controlli ATL.

- [IOleControlImpl](../atl/reference/iolecontrolimpl-class.md) Fornisce i metodi necessari per i controlli.

- [IOleObjectImpl](../atl/reference/ioleobjectimpl-class.md) Fornisce i metodi principali tramite i quali un contenitore comunica con un controllo. Gestisce l'attivazione e la disattivazione dei controlli sul posto.

- [IQuickActivateImpl](../atl/reference/iquickactivateimpl-class.md) Combina l'inizializzazione in una singola chiamata per aiutare i contenitori a evitare ritardi durante il caricamento dei controlli.

- [IPointerInactiveImpl](../atl/reference/ipointerinactiveimpl-class.md) Fornisce un'interazione minima con il mouse per un controllo altrimenti inattivo.

## <a name="sample-program"></a>Programma di esempio

[ATLFire](../overview/visual-cpp-samples.md)

## <a name="related-articles"></a>Articoli correlati

[Esercitazione ATL](../atl/active-template-library-atl-tutorial.md)

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../atl/atl-class-overview.md)
