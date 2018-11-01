---
title: Progettazione di raccolta e le interfacce dell'enumeratore (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- enumerator interfaces
- collection interfaces
ms.assetid: ea19a39e-6333-41a1-be62-5435c236640e
ms.openlocfilehash: 8c7f782f52391b162a8b32a97961269178999ee0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50538203"
---
# <a name="design-principles-for-collection-and-enumerator-interfaces"></a>Principi di progettazione per la raccolta e le interfacce dell'enumeratore

Esistono diversi principi di progettazione alla base di ogni tipo di interfaccia:

- Fornisce un'interfaccia di raccolta *casuale* l'accesso a un *singolo* elemento nella raccolta tramite il `Item` metodo, consente ai client di individuare il numero di elementi presenti nella raccolta tramite il `Count` proprietà, e spesso consente ai client di aggiungere e rimuovere elementi.

- Fornisce un'interfaccia dell'enumeratore *seriale* accedere al *più* elementi in una raccolta, questa funzionalità non consente al client di individuare il numero di elementi presenti nella raccolta (fino a quando l'enumeratore si arresta la restituzione gli elementi), e non fornisce alcun modo di aggiunta o rimozione di elementi.

Ogni tipo di interfaccia svolge un ruolo diverso di fornire l'accesso agli elementi in una raccolta.

## <a name="see-also"></a>Vedere anche

[Raccolte ed enumeratori](../atl/atl-collections-and-enumerators.md)

