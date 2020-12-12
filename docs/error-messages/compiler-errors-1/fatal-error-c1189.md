---
description: 'Altre informazioni su: errore irreversibile C1189'
title: Errore irreversibile C1189
ms.date: 04/27/2018
f1_keywords:
- C1189
helpviewer_keywords:
- C1189
ms.assetid: 2e5c8a78-edd4-411c-b619-558a96be148a
ms.openlocfilehash: 4e71903c6567aedf85de81db59b66e45684d8507
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97123591"
---
# <a name="fatal-error-c1189"></a>Errore irreversibile C1189

> **\# errore:** *messaggio di errore fornito dall'utente*

## <a name="remarks"></a>Commenti

C1189 viene generato dalla `#error` direttiva. Lo sviluppatore che codifica la direttiva specifica il testo del messaggio di errore. Per ulteriori informazioni, vedere [direttiva #error (C/C++)](../../preprocessor/hash-error-directive-c-cpp.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C1189. Nell'esempio, lo sviluppatore genera un messaggio di errore personalizzato perché l' `_WIN32` identificatore non è definito:

```cpp
// C1189.cpp
#undef _WIN32
#if !defined(_WIN32)
#error _WIN32 must be defined   // C1189
#endif
```

## <a name="see-also"></a>Vedi anche

[Direttiva #define (C/C++)](../../preprocessor/hash-define-directive-c-cpp.md)
