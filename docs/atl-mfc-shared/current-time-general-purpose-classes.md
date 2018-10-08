---
title: 'Ora corrente: Classi generiche | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- time, setting current
- current time, CTime object
- procedures, getting current time
- initializing objects, with the current time
- time, getting current
ms.assetid: c39e6775-6a92-4b27-95a7-5c86ed371d8a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9edf381864121d4e3f6c5a2b6cf7c01198368e1e
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48860524"
---
# <a name="current-time-general-purpose-classes"></a>Ora corrente: Classi generiche

La procedura seguente illustra come creare un `CTime` dell'oggetto e inizializzarla con l'ora corrente.

### <a name="to-get-the-current-time"></a>Per ottenere l'ora corrente

1. Allocare un `CTime` dell'oggetto, come indicato di seguito:

   [!code-cpp[NVC_ATLMFC_Utilities#171](../atl-mfc-shared/codesnippet/cpp/current-time-general-purpose-classes_1.cpp)]

   > [!NOTE]
   > Non inizializzato `CTime` gli oggetti non vengono inizializzati per un'ora valida.

1. Chiamare il `CTime::GetCurrentTime` funzione per ottenere l'ora corrente del sistema operativo. Questa funzione restituisce un `CTime` oggetto che può essere utilizzato per impostare il valore di `CTime`, come indicato di seguito:

   [!code-cpp[NVC_ATLMFC_Utilities#172](../atl-mfc-shared/codesnippet/cpp/current-time-general-purpose-classes_2.cpp)]

   Poiché `GetCurrentTime` è una funzione membro statico dal `CTime` (classe), è necessario qualificare il nome con il nome della classe e l'operatore di risoluzione ambito (`::`), `CTime::GetCurrentTime()`.

Naturalmente, i due passaggi descritti in precedenza potrebbero essere combinati in una singola istruzione del programma come indicato di seguito:

[!code-cpp[NVC_ATLMFC_Utilities#173](../atl-mfc-shared/codesnippet/cpp/current-time-general-purpose-classes_3.cpp)]
