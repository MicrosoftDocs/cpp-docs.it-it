---
title: Confronto tra caratteri
ms.date: 11/04/2016
helpviewer_keywords:
- comparing characters
- MBCS [C++], character comparison
- characters [C++], comparing
ms.assetid: 18846e44-3e6e-40c4-9b42-3153fb15db20
ms.openlocfilehash: 075a22634f254c2ea634a1171ee157971fe5918e
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57749334"
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
