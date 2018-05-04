---
title: Progettazione di raccolta e le interfacce di enumeratore (ATL) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- enumerator interfaces
- collection interfaces
ms.assetid: ea19a39e-6333-41a1-be62-5435c236640e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 05649cce0e80af6f54327545cef7b663d69babf9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="design-principles-for-collection-and-enumerator-interfaces"></a>Principi di progettazione per la raccolta ed enumeratore (interfacce)
Esistono diversi principi di progettazione protetti da ogni tipo di interfaccia:  
  
-   Fornisce un'interfaccia di raccolta *casuale* l'accesso a un *singolo* elemento nella raccolta tramite il **elemento** (metodo), consente ai client individua il numero di elementi presenti nella raccolta tramite il **conteggio** proprietà, e spesso consente ai client di aggiungere e rimuovere elementi.  
  
-   Fornisce un'interfaccia di enumeratore *seriale* l'accesso a *più* gli elementi in una raccolta, quindi non consente al client di individuare il numero di elementi presenti nella raccolta (fino a quando l'enumeratore interrompe la restituzione gli elementi), e non fornisce alcun modo di aggiunta o rimozione di elementi.  
  
 Ogni tipo di interfaccia svolge un ruolo diverso nel fornire l'accesso agli elementi in una raccolta.  
  
## <a name="see-also"></a>Vedere anche  
 [Raccolte ed enumeratori](../atl/atl-collections-and-enumerators.md)

