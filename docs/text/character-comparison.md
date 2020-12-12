---
description: 'Altre informazioni su: confronto di caratteri'
title: Confronto tra caratteri
ms.date: 11/04/2016
helpviewer_keywords:
- comparing characters
- MBCS [C++], character comparison
- characters [C++], comparing
ms.assetid: 18846e44-3e6e-40c4-9b42-3153fb15db20
ms.openlocfilehash: 0e00e087074a70145f1a73694293edc3c522d69f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97297005"
---
# <a name="character-comparison"></a>Confronto tra caratteri

Usare i suggerimenti seguenti:

- Il confronto tra un byte di apertura noto e un carattere ASCII funziona correttamente:

    ```cpp
    if( *sz1 == 'A' )
    ```

- Il confronto di due caratteri sconosciuti richiede l'uso di una delle macro definite in Mbstring. h:

    ```cpp
    if( !_mbccmp( sz1, sz2) )
    ```

   In questo modo si garantisce che entrambi i byte di un carattere a byte doppio vengano confrontati per l'uguaglianza.

## <a name="see-also"></a>Vedi anche

[Suggerimenti per la programmazione MBCS](../text/mbcs-programming-tips.md)<br/>
[Overflow del buffer](../text/buffer-overflow.md)
