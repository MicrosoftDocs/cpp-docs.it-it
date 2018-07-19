---
title: Progettazione di raccolta e le interfacce dell'enumeratore (ATL) | Microsoft Docs
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
ms.openlocfilehash: ab8b42804ca892c80971928b869e09ccdf479d68
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37851327"
---
# <a name="design-principles-for-collection-and-enumerator-interfaces"></a>Principi di progettazione per la raccolta e le interfacce dell'enumeratore
Esistono diversi principi di progettazione alla base di ogni tipo di interfaccia:  
  
-   Fornisce un'interfaccia di raccolta *casuale* l'accesso a un *singolo* elemento nella raccolta tramite il `Item` metodo, consente ai client di individuare il numero di elementi presenti nella raccolta tramite il `Count` proprietà, e spesso consente ai client di aggiungere e rimuovere elementi.  
  
-   Fornisce un'interfaccia dell'enumeratore *seriale* accedere al *più* elementi in una raccolta, questa funzionalità non consente al client di individuare il numero di elementi presenti nella raccolta (fino a quando l'enumeratore si arresta la restituzione gli elementi), e non fornisce alcun modo di aggiunta o rimozione di elementi.  
  
 Ogni tipo di interfaccia svolge un ruolo diverso di fornire l'accesso agli elementi in una raccolta.  
  
## <a name="see-also"></a>Vedere anche  
 [Raccolte ed enumeratori](../atl/atl-collections-and-enumerators.md)

