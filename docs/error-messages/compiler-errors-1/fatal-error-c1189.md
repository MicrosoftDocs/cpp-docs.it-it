---
title: Errore irreversibile C1189
ms.date: 04/27/2018
f1_keywords:
- C1189
helpviewer_keywords:
- C1189
ms.assetid: 2e5c8a78-edd4-411c-b619-558a96be148a
ms.openlocfilehash: 2217b865109cc48151e4e96b2d38b88764c0c64f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80203637"
---
# <a name="fatal-error-c1189"></a>Errore irreversibile C1189

> **errore\#:** *messaggio di errore fornito dall'utente*

## <a name="remarks"></a>Osservazioni

C1189 viene generato dalla direttiva `#error`. Lo sviluppatore che codifica la direttiva specifica il testo del messaggio di errore. Per ulteriori informazioni, vedere [#error direttiva (C/C++)](../../preprocessor/hash-error-directive-c-cpp.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C1189. Nell'esempio, lo sviluppatore genera un messaggio di errore personalizzato perché l'identificatore `_WIN32` non è definito:

```cpp
// C1189.cpp
#undef _WIN32
#if !defined(_WIN32)
#error _WIN32 must be defined   // C1189
#endif
```

## <a name="see-also"></a>Vedere anche

[Direttiva #define (C/C++)](../../preprocessor/hash-define-directive-c-cpp.md)
