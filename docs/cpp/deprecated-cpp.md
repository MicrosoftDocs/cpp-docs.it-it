---
title: deprecate (C++) | Microsoft Docs
ms.custom: ''
ms.date: 03/28/2017
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- deprecated_cpp
dev_langs:
- C++
helpviewer_keywords:
- __declspec keyword [C++], deprecated
- deprecated __declspec keyword
ms.assetid: beef1129-9434-4cb3-8392-f1eb29e04805
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 77748cd69a3424bb4b2e209a0a447d39eae25147
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39466904"
---
# <a name="deprecated-c"></a>deprecated (C++)
Questo argomento vengono illustrate le specifiche di Microsoft declspec dichiarazione deprecata. Per informazioni su C++ 14 `[[deprecated]]` attributo e indicazioni su quando usare l'attributo e le specifiche di Microsoft declspec o pragma, vedere [attributi Standard di C++](attributes.md).

Con le eccezioni riportate di seguito, il **deprecato** dichiarazione offre la stessa funzionalità il [deprecata](../preprocessor/deprecated-c-cpp.md) pragma:  
  
-   Il **deprecato** dichiarazione consente di specificare formati specifici degli overload di funzione come deprecati, mentre il formato del pragma viene applicato a tutti gli overload di un nome di funzione.  
  
-   Il **deprecato** dichiarazione consente di specificare un messaggio che verrà visualizzato in fase di compilazione. Il testo del messaggio può provenire da una macro.  
  
-   Le macro possono essere contrassegnate solo come deprecate con il **deprecato** pragma.  
  
 Se il compilatore rileva l'uso di standard o un identificatore deprecato [ `[[deprecated]]` ](attributes.md) attributo, una [C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md) viene generato l'avviso.  
  
## <a name="example"></a>Esempio  
 Nel seguente codice di esempio viene illustrato come contrassegnare funzioni come deprecate e come specificare un messaggio che verrà visualizzato in fase di compilazione, quando viene utilizzata la funzione deprecata.  
  
```cpp 
// deprecated.cpp  
// compile with: /W3  
#define MY_TEXT "function is deprecated"  
void func1(void) {}  
__declspec(deprecated) void func1(int) {}  
__declspec(deprecated("** this is a deprecated function **")) void func2(int) {}  
__declspec(deprecated(MY_TEXT)) void func3(int) {}  
  
int main() {  
   func1();  
   func1(1);   // C4996  
   func2(1);   // C4996  
   func3(1);   // C4996  
}  
```  
  
## <a name="example"></a>Esempio  
 Nel seguente codice di esempio viene illustrato come contrassegnare classi come deprecate e come specificare un messaggio che verrà visualizzato in fase di compilazione, quando viene utilizzata la classe deprecata.  
  
```cpp 
// deprecate_class.cpp  
// compile with: /W3  
struct __declspec(deprecated) X {  
   void f(){}  
};  
  
struct __declspec(deprecated("** X2 is deprecated **")) X2 {  
   void f(){}  
};  
  
int main() {  
   X x;   // C4996  
   X2 x2;   // C4996  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [__declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)