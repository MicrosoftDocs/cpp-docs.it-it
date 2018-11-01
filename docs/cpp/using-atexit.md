---
title: Utilizzo di atexit
ms.date: 11/04/2016
f1_keywords:
- atexit
helpviewer_keywords:
- atexit function
ms.assetid: d28fda17-c3d4-4af6-ba44-f44886bbb237
ms.openlocfilehash: 06baba59b5765f853f081b34d73be28a187730ba
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50637450"
---
# <a name="using-atexit"></a>Utilizzo di atexit

Con il [atexit](../c-runtime-library/reference/atexit.md) (funzione), è possibile specificare una funzione di elaborazione uscita che viene eseguita prima della chiusura del programma. Nessun oggetto statico globale inizializzato prima della chiamata a **atexit** vengono eliminati definitivamente prima dell'esecuzione della funzione di elaborazione uscita.

## <a name="see-also"></a>Vedere anche

[Altre considerazioni di terminazione](../cpp/additional-termination-considerations.md)