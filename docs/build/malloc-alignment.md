---
title: Allineamento malloc | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: a8d1d1b4-5122-456f-9a64-a50e105e55a5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: aa6e2748691eeb8a11834bcf8e6962252be7ab3f
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45712062"
---
# <a name="malloc-alignment"></a>Allineamento malloc

[malloc](../c-runtime-library/reference/malloc.md) garantisce la restituzione di memoria allineata in modo adeguato per archiviare qualsiasi oggetto con un allineamento fondamentale e che possa adattarsi alla quantità di memoria allocata. Oggetto *allineamento fondamentale* è un tipo di allineamento minore o uguale al massimo allineamento supportato dall'implementazione senza una specifica di allineamento. (In Visual C++, si tratta dell'allineamento richiesto per un `double`, o 8 byte. Nel codice destinato a piattaforme a 64 bit, è 16 byte.) Ad esempio, un'allocazione a quattro byte vengono allineata in base a un limite supporta qualsiasi oggetto a quattro byte o più piccolo.

Visual C++ supporta i tipi che hanno *allineamento esteso*, che sono anche dette *sovrallineati* tipi. Ad esempio, i tipi SSE [__m128](../cpp/m128.md) e `__m256`e i tipi dichiarati utilizzando `__declspec(align( n ))` in cui `n` è maggiore di 8, presentano un allineamento esteso. Allineamento della memoria in base a un limite è appropriato per un oggetto che richiede l'allineamento esteso non è garantito da `malloc`. Per allocare memoria per i tipi sovrallineati, utilizzare [aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) e funzioni correlate.

## <a name="see-also"></a>Vedere anche

[Uso dello stack](../build/stack-usage.md)<br/>
[align](../cpp/align-cpp.md)<br/>
[__declspec](../cpp/declspec.md)