---
title: Avviso del compilatore (livello 3) C4535
ms.date: 11/04/2016
f1_keywords:
- C4535
helpviewer_keywords:
- C4535
ms.assetid: 2c5ad1aa-2558-41d1-8f06-47fef74c8d9b
ms.openlocfilehash: ba10bff1da4875d81f73a65474ba9728d5aa1673
ms.sourcegitcommit: 217fac22604639ebd62d366a69e6071ad5b724ac
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/19/2019
ms.locfileid: "74189024"
---
# <a name="compiler-warning-level-3-c4535"></a>Avviso del compilatore (livello 3) C4535

la chiamata di _set_se_translator () richiede/EHa

L'uso di [_set_se_translator](../../c-runtime-library/reference/set-se-translator.md) richiede l'opzione del compilatore [/EHA](../../build/reference/eh-exception-handling-model.md) e non **/EHS**.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4535.

```cpp
// C4535.cpp
// compile with: /W3 /EHsc /c
// C4535 expected
// to fix, compile with /EHa instead
#include <stdio.h>
#include <windows.h>
#include <eh.h>

void SEFunc();
void trans_func( unsigned int, EXCEPTION_POINTERS* );

class SE_Exception {
private:
   unsigned int nSE;
public:
   SE_Exception() {}
   SE_Exception( unsigned int n ) : nSE( n ) {}
   ~SE_Exception() {}
   unsigned int getSeNumber() { return nSE; }
};

int main() {
   try {
      _set_se_translator( trans_func );
      SEFunc();
   }
   catch( SE_Exception e ) {
      printf_s( "Caught a __try exception with SE_Exception.\n" );
   }
}

void SEFunc() {
   __try {
      int x, y=0;
      x = 5 / y;
   }
   __finally {
      printf_s( "In finally\n" );
   }
}

void trans_func( unsigned int u, EXCEPTION_POINTERS* pExp ) {
   printf_s( "In trans_func.\n" );
   throw SE_Exception();
}
```