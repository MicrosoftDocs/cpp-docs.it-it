---
title: Errore del compilatore C2872 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 66798adc96121837b4ac2dd238b9887d3c5b7eef
ms.openlocfilehash: c81fc315c4bb893b96876b7b67b42806a3246583
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="compiler-error-c2872"></a>Errore del compilatore C2872
'*simbolo*': simbolo ambiguo  
  
Il compilatore non può determinare quale simbolo a cui si fa riferimento. Più di un simbolo con il nome specificato è nell'ambito. Vedere le note al messaggio di errore per i percorsi di file e le dichiarazioni il compilatore ha trovato per il simbolo ambiguo. Per risolvere questo problema, è possibile qualificare completamente il simbolo ambiguo utilizzando lo spazio dei nomi, ad esempio, `std::byte` o `::byte`. È inoltre possibile utilizzare un [alias dello spazio dei nomi](../../cpp/namespaces-cpp.md#namespace_aliases) per fornire uno spazio dei nomi incluso un nome breve appropriato da utilizzare quando per evitare ambiguità tra simboli del codice sorgente.  
  
C2872 può verificarsi se un file di intestazione include un [direttiva using](../../cpp/namespaces-cpp.md#using_directives), e viene incluso un file di intestazione successivo che contiene un tipo che è anche nello spazio dei nomi specificato nella `using` direttiva. Specificare un `using` direttiva solo dopo tutti i file di intestazione vengono specificati con `#include`.  
  
 Per ulteriori informazioni sull'errore C2872, vedere gli articoli della Knowledge Base [PRB: del compilatore errori quando si utilizza #import con XML in Visual C++ .NET](http://support.microsoft.com/kb/316317) e ["errore C2872: 'Platform': simbolo ambiguo" messaggio di errore quando si utilizza lo spazio dei nomi Windows::Foundation::Metadata in Visual Studio 2013](https://support.microsoft.com/kb/2890859).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2872, perché è un riferimento ambiguo a una variabile denominata `i`; due variabili con lo stesso nome sono nell'ambito:  
  
```cpp  
// C2872.cpp  
// compile with: cl /EHsc C2872.cpp  
namespace A {  
   int i;  
}  
  
using namespace A;  
int i;  
int main() {  
   ::i++;   // ok, uses i from global namespace  
   A::i++;   // ok, uses i from namespace A  
   i++;   // C2872 ambiguous: ::i or A::i? 
   // To fix this issue, use the fully qualified name
   // for the intended variable. 
}  
```
