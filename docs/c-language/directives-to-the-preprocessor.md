---
title: Direttive al preprocessore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: adc6251e-cf6b-4508-bdbb-55f446c838d3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f1ddecf1e205cc9a6d7f09a27fbf243417540e49
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46033563"
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

## <a name="see-also"></a>Vedere anche

[File e programmi di origine](../c-language/source-files-and-source-programs.md)