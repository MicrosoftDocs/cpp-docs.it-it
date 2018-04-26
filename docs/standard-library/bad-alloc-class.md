---
title: Classe bad_alloc | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- new/std::bad_alloc
dev_langs:
- C++
helpviewer_keywords:
- bad_alloc class
ms.assetid: 6429a8e6-5a49-4907-8d56-f4a4ec8131d0
caps.latest.revision: 26
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7ccff017974b0f813b1c8d2212b6cc981f968bc8
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
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

Il valore restituito da **what** è una stringa C definita dall'implementazione. Nessuna delle funzioni membro genera eccezioni.

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

[Classe di eccezione](../standard-library/exception-class.md) [Thread Safety nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
