---
title: Errore irreversibile C1189
ms.date: 04/27/2018
f1_keywords:
- C1189
helpviewer_keywords:
- C1189
ms.assetid: 2e5c8a78-edd4-411c-b619-558a96be148a
ms.openlocfilehash: 06d42316a0109ac063bba43cefebd9aab71c2e72
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62229059"
---
# <a name="fatal-error-c1189"></a>Errore irreversibile C1189

> **\#Errore:** *messaggio di errore fornito dall'utente*

## <a name="remarks"></a>Note

C1189 viene generato dal `#error` direttiva. Lo sviluppatore che codifica la direttiva specifica il testo del messaggio di errore. Per altre informazioni, vedere [#error (direttiva) (C/C++)](../../preprocessor/hash-error-directive-c-cpp.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C1189. Nell'esempio, lo sviluppatore rilascia un messaggio di errore personalizzato perché il `_WIN32` identificatore non definito:

```cpp
// C1189.cpp
#undef _WIN32
#if !defined(_WIN32)
#error _WIN32 must be defined   // C1189
#endif
```

## <a name="see-also"></a>Vedere anche

[Direttiva #define (C/C++)](../../preprocessor/hash-define-directive-c-cpp.md)