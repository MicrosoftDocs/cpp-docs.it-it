---
title: Allineamento malloc | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: a8d1d1b4-5122-456f-9a64-a50e105e55a5
caps.latest.revision: "14"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4d9acaf1c8912e1b563bb5d05ae600d1430049e6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="malloc-alignment"></a>Allineamento malloc
[malloc](../c-runtime-library/reference/malloc.md) garantisce la restituzione di memoria che viene corretto allineamento per l'archiviazione di qualsiasi oggetto con un allineamento fondamentale e che potrebbero rientrare nella quantità di memoria allocata. Oggetto *allineamento fondamentale* è un tipo di allineamento è minore o uguale al maggiore allineamento supportato dall'implementazione senza una specifica di allineamento. (In Visual C++, si tratta dell'allineamento richiesto per un `double`, o 8 byte. Nel codice destinato a piattaforme a 64 bit, è 16 byte.) Ad esempio, un'allocazione di quattro byte verrà allineata a un limite che supporta tutti gli oggetti più piccoli o di quattro byte.  
  
 Visual C++ consente a tipi che dispongono di *estesi allineamento*, che sono anche noti come *eccessiva allineato* tipi. Ad esempio, i tipi di istruzioni SSE [m128](../cpp/m128.md) e `__m256`e i tipi vengono dichiarati utilizzando `__declspec(align( n ))` dove `n` maggiore di 8 è stato esteso l'allineamento. Allineamento della memoria su un limite è adatto per un oggetto che richiede l'allineamento estesa non è garantita da `malloc`. Per allocare memoria per tipi allineati eccessiva, utilizzare [aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) e funzioni correlate.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo dello stack](../build/stack-usage.md)   
 [Allinea](../cpp/align-cpp.md)   
 [__declspec](../cpp/declspec.md)