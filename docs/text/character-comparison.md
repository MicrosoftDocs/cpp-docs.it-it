---
title: Confronto di caratteri | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- comparing characters
- MBCS [C++], character comparison
- characters [C++], comparing
ms.assetid: 18846e44-3e6e-40c4-9b42-3153fb15db20
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c3412939bac9dace6f3abaacda75ed73d6e60f21
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46428070"
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