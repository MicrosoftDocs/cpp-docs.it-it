---
description: 'Altre informazioni su: direttive per il preprocessore'
title: Direttive al preprocessore
ms.date: 11/04/2016
ms.assetid: adc6251e-cf6b-4508-bdbb-55f446c838d3
ms.openlocfilehash: 50691647436f492b329b6af43a626e933453d3a3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97213956"
---
# <a name="directives-to-the-preprocessor"></a>Direttive al preprocessore

Una "direttiva" indica al preprocessore C di eseguire un'azione specifica nel testo del programma prima della compilazione. Le [direttive per il preprocessore](../preprocessor/preprocessor-directives.md) sono descritte dettagliatamente nel *Riferimento al preprocessore*. In questo esempio viene utilizzata la direttiva per il preprocessore `#define`:

```
#define MAX 100
```

Questa istruzione indica al compilatore di sostituire tutte le occorrenze di `MAX` con `100` prima della compilazione. Le direttive per il preprocessore del compilatore C sono:

|#define|#endif|#ifdef|#line|
|--------------|-------------|-------------|------------|
|`#elif`|`#error`|**#ifndef**|**#pragma**|
|`#else`|`#if`|`#include`|`#undef`|

## <a name="see-also"></a>Vedi anche

[File di origine e programmi di origine](../c-language/source-files-and-source-programs.md)
