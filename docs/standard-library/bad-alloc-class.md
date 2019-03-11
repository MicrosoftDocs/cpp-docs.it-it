---
title: Classe bad_alloc
ms.date: 11/04/2016
f1_keywords:
- new/std::bad_alloc
helpviewer_keywords:
- bad_alloc class
ms.assetid: 6429a8e6-5a49-4907-8d56-f4a4ec8131d0
ms.openlocfilehash: 63b474d0209a5cc385de9dc11b56d5de8382a9cf
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57751531"
---
# <a name="badalloc-class"></a>Classe bad_alloc

La classe descrive un'eccezione generata per indicare che una richiesta di allocazione ha avuto esito negativo.

## <a name="syntax"></a>Sintassi

```cpp
class bad_alloc : public exception {
    bad_alloc();
virtual ~bad_alloc();

};
```

## <a name="remarks"></a>Note

Il valore restituito da `what` è una stringa C definita dall'implementazione. Nessuna delle funzioni membro genera eccezioni.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<new>

**Spazio dei nomi:** std

## <a name="example"></a>Esempio

```cpp
// bad_alloc.cpp
// compile with: /EHsc
#include<new>
#include<iostream>
using namespace std;

int main() {
   char* ptr;
   try {
      ptr = new char[(~unsigned int((int)0)/2) - 1];
      delete[] ptr;
   }
   catch( bad_alloc &ba) {
      cout << ba.what( ) << endl;
   }
}
```

## <a name="sample-output"></a>Esempio di output

```Output
bad allocation
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<new>

## <a name="see-also"></a>Vedere anche

[Classe exception](../standard-library/exception-class.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
