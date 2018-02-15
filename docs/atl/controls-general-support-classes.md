---
title: 'Controlli ATL: Classi di supporto generale | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- vc.atl.controls
dev_langs:
- C++
helpviewer_keywords:
- controls [ATL]
- general support classes
ms.assetid: cf73f1d2-7542-48e3-b8c8-9d3abf29f85b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e6164fc5cb25c724cf8999c3e6f3f2d71ade0589
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="controls-general-support-classes"></a>Controlli: Classi di supporto generale
Le classi seguenti forniscono il supporto generale per i controlli ATL:  
  
-   [CComControl](../atl/reference/ccomcontrol-class.md) è costituito da dati e funzioni membri di supporto sono essenziali per i controlli ATL.  
  
-   [IOleControlImpl](../atl/reference/iolecontrolimpl-class.md) fornisce i metodi necessari per i controlli.  
  
-   [IOleObjectImpl](../atl/reference/ioleobjectimpl-class.md) fornisce i metodi dell'entità da un contenitore per comunicare con un controllo. Gestisce l'attivazione e disattivazione dei controlli sul posto.  
  
-   [IQuickActivateImpl](../atl/reference/iquickactivateimpl-class.md) combina l'inizializzazione in una singola chiamata di contenitori per evitare ritardi durante il caricamento dei controlli.  
  
-   [IPointerInactiveImpl](../atl/reference/ipointerinactiveimpl-class.md) gestisce l'interazione del mouse minima per un controllo inattivo in caso contrario.  
  
## <a name="sample-program"></a>Programma di esempio  
 [ATLFire](../visual-cpp-samples.md)  
  
## <a name="related-articles"></a>Articoli correlati  
 [Esercitazione ATL](../atl/active-template-library-atl-tutorial.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../atl/atl-class-overview.md)

