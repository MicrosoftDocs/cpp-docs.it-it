---
title: Confronto tra caratteri
ms.date: 11/04/2016
helpviewer_keywords:
- comparing characters
- MBCS [C++], character comparison
- characters [C++], comparing
ms.assetid: 18846e44-3e6e-40c4-9b42-3153fb15db20
ms.openlocfilehash: 206910d4b76f93a92ee5230a227d6f0346a85e61
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50615410"
---
# <a name="character-comparison"></a>Confronto tra caratteri

Usare i suggerimenti seguenti:

- Confronto di un byte iniziale noto con un carattere ASCII funziona correttamente:

    ```cpp
    if( *sz1 == 'A' )
    ```

- Confronto tra due caratteri sconosciuti richiede l'uso di una delle macro definite in Mbstring. h:

    ```cpp
    if( !_mbccmp( sz1, sz2) )
    ```

   Ciò garantisce che entrambi i byte di un carattere a byte doppio devono essere confrontati per verificarne l'uguaglianza.

## <a name="see-also"></a>Vedere anche

[Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)<br/>
[Overflow del buffer](../text/buffer-overflow.md)