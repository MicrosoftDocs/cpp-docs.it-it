---
title: Errore del compilatore C2872 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2872
dev_langs:
- C++
helpviewer_keywords:
- C2872
ms.assetid: c619ef97-6e0e-41d7-867c-f8d28a07d553
caps.latest.revision: 11
author: corob-msft
ms.author: corob
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
translationtype: Machine Translation
ms.sourcegitcommit: 65e7a7bd56096fbeec61b651ab494d82edef9c90
ms.openlocfilehash: d53dbd9429ba3c1a525b85a3ef9f2e70152ddfa2
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2872"></a>Errore del compilatore C2872
'simbolo': simbolo ambiguo  
  
Il compilatore non può determinare quale simbolo si fa riferimento a.  
  
C2872 può verificarsi se un file di intestazione contiene un [direttiva using](../../cpp/namespaces-cpp.md#using_directives)e viene incluso un file di intestazione successivo e contiene un tipo che è anche nello spazio dei nomi specificato nella `using` (direttiva). Specificare un `using` direttiva solo dopo che tutti i file di intestazione vengono specificati con `#include`.  
  
 Per ulteriori informazioni sull'errore C2872, vedere gli articoli della Knowledge Base [PRB: del compilatore errori quando si utilizza #import di XML in Visual C++ .NET](http://support.microsoft.com/kb/316317) e ["errore C2872: 'Piattaforma': simbolo ambiguo" messaggio di errore quando si utilizza lo spazio dei nomi Windows::Foundation::Metadata in Visual Studio 2013](https://support.microsoft.com/kb/2890859).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C2872:  
  
```cpp  
// C2872.cpp  
namespace A {  
   int i;  
}  
  
using namespace A;  
int i;  
int main() {  
   ::i++;   // ok  
   A::i++;   // ok  
   i++;   // C2872 ::i or A::i?  
}  
```
