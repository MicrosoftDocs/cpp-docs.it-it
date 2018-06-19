---
title: Errore irreversibile C1189 | Documenti Microsoft
ms.custom: ''
ms.date: 04/27/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1189
dev_langs:
- C++
helpviewer_keywords:
- C1189
ms.assetid: 2e5c8a78-edd4-411c-b619-558a96be148a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 051b7eb965526d12311dfacaeae7a00e4fbe4e75
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33199794"
---
# <a name="fatal-error-c1189"></a>Errore irreversibile C1189

> **\#Errore:** *messaggio di errore fornito dall'utente*

## <a name="remarks"></a>Note

Viene generato l'errore C1189 dal `#error` direttiva. Lo sviluppatore che codifica la direttiva specifica il testo del messaggio di errore. Per ulteriori informazioni, vedere [#error (direttiva) (C/C++)](../../preprocessor/hash-error-directive-c-cpp.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C1189. Nell'esempio, lo sviluppatore emette un messaggio di errore personalizzato perché il `_WIN32` identificatore non definito:

```cpp
// C1189.cpp
#undef _WIN32
#if !defined(_WIN32)
#error _WIN32 must be defined   // C1189
#endif
```

## <a name="see-also"></a>Vedere anche

[Direttiva #define (C/C++)](../../preprocessor/hash-define-directive-c-cpp.md)