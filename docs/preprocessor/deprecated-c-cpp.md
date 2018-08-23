---
title: deprecato (C/C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- vc-pragma.deprecated
- deprecated_CPP
dev_langs:
- C++
helpviewer_keywords:
- deprecated pragma
- pragmas, deprecated
ms.assetid: 9c046f12-7875-499a-8d5d-12f8642fed2d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d51ee23ab4e4be9cf24b913cb0c4ffa325a9bbf5
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42538833"
---
# <a name="deprecated-cc"></a>deprecated (C/C++)
Il **deprecato** pragma consente di indicare che una funzione, tipo o qualsiasi altro identificatore non potrebbe essere più supportato in un'edizione futura di rilascio o non devono più essere utilizzati.  
> [!NOTE]
> Per informazioni su C++ 14 `[[deprecated]]` attributo e indicazioni su quando usare tale attributo Visual Studio di Microsoft declspec o pragma, vedere [attributi Standard di C++](../cpp/attributes.md) attributo.
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma deprecated( identifier1 [,identifier2, ...] )  
```  
  
## <a name="remarks"></a>Note  
Quando il compilatore rileva un identificatore specificato da un **deprecate** pragma, genera avviso del compilatore [C4995](../error-messages/compiler-warnings/compiler-warning-level-3-c4995.md).   
  
È possibile deprecare i nomi di macro. Inserire il nome della macro tra virgolette, altrimenti l'espansione della macro viene eseguita.  
  
Poiché il **deprecato** pragma funziona su tutti gli identificatori corrispondenti e le firme non preso in considerazione, non è l'opzione migliore per deprecare le versioni specifiche di funzioni in overload. Qualsiasi nome di funzione corrispondente che viene inserito nell'ambito attiva l'avviso.

Si consiglia di usare C++ 14 `[[deprecated]]` dell'attributo, quando possibile, anziché il **deprecato** pragma. Specifiche di Microsoft [__declspec(deprecated)](../cpp/deprecated-cpp.md) modificatore di dichiarazione è anche una scelta migliore in molti casi più il **deprecata** pragma. Il `[[deprecated]]` attributo e `__declspec(deprecated)` modificatore consentono di specificare lo stato deprecato per formati specifici delle funzioni in overload. L'avviso di diagnostica viene visualizzata solo nei riferimenti alla funzione in overload specifico dell'attributo o modificatore viene applicato a.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// pragma_directive_deprecated.cpp  
// compile with: /W3  
#include <stdio.h>  
void func1(void) {  
}  
  
void func2(void) {  
}  
  
int main() {  
   func1();  
   func2();  
   #pragma deprecated(func1, func2)  
   func1();   // C4995  
   func2();   // C4995  
}  
```  
  
Nell'esempio seguente viene illustrato come deprecare una classe:  
  
```cpp  
// pragma_directive_deprecated2.cpp  
// compile with: /W3  
#pragma deprecated(X)  
class X {  // C4995  
public:  
   void f(){}  
};  
  
int main() {  
   X x;   // C4995  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 
[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)