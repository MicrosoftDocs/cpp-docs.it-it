---
title: obsoleto (C++) | Documenti Microsoft
ms.custom: 
ms.date: 03/28/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- deprecated
- deprecated_cpp
dev_langs:
- C++
helpviewer_keywords:
- __declspec keyword [C++], deprecated
- deprecated __declspec keyword
ms.assetid: beef1129-9434-4cb3-8392-f1eb29e04805
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 9ac25648e2d19da82f6c213992699c237e05c01e
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="deprecated-c"></a>deprecated (C++)
Questo argomento vengono illustrate le specifiche di Microsoft declspec dichiarazione deprecata. Per informazioni su C++ 14 `[[deprecated]]` attributo e indicazioni su quando usare tale attributo e il declspec specifiche di Microsoft o il pragma, vedere [gli attributi Standard di C++](attributes2.md).

 Con le eccezioni riportate di seguito, il **deprecato** dichiarazione offre le stesse funzionalità come il [deprecato](../preprocessor/deprecated-c-cpp.md) pragma:  
  
-   Il **deprecato** dichiarazione consente di specificare formati specifici degli overload di funzione come deprecati, mentre il formato del pragma si applica a tutti gli overload di un nome di funzione.  
  
-   Il **deprecato** dichiarazione consente di specificare un messaggio che verrà visualizzato in fase di compilazione. Il testo del messaggio può provenire da una macro.  
  
-   Le macro possono essere contrassegnate solo come deprecate con il **deprecato** pragma.  
  
 Se il compilatore rileva l'utilizzo di standard o un identificatore deprecato [ `[[deprecated]]` ](attributes2.md) attributo, un [l'avviso C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md) viene generato l'avviso.  
  
## <a name="example"></a>Esempio  
 Nel seguente codice di esempio viene illustrato come contrassegnare funzioni come deprecate e come specificare un messaggio che verrà visualizzato in fase di compilazione, quando viene utilizzata la funzione deprecata.  
  
```  
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
  
```  
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
 [declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)
