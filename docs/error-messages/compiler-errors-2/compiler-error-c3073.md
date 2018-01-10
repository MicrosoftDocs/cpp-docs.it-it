---
title: Errore del compilatore C3073 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3073
dev_langs: C++
helpviewer_keywords: C3073
ms.assetid: b24b9b8b-f9fb-4c3c-a1a0-97fad2081bfc
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 046b1d17ea0264e01a4acd9eb93e5babb826b756
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3073"></a>Errore del compilatore C3073
'type': classe di riferimento dispone di un costruttore di copia definito dall'utente  
  
 In un [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) compilazione, il compilatore non genererà un costruttore di copia per un tipo riferimento. In qualsiasi **/clr** compilazione, è necessario definire il proprio costruttore di copia per un tipo di riferimento se si prevede che un'istanza del tipo da copiare.  
  
 Per ulteriori informazioni, vedere [semantica dello Stack C++ per i tipi riferimento](../../dotnet/cpp-stack-semantics-for-reference-types.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3073.  
  
```  
// C3073.cpp  
// compile with: /clr  
ref class R {  
public:  
   R(int) {}  
};  
  
ref class S {  
public:  
   S(int) {}  
   S(const S %rhs) {}   // copy constructor  
};  
  
void f(R) {}  
void f2(S) {}  
void f3(R%){}  
  
int main() {  
   R r(1);  
   f(r);   // C3073  
   f3(r);   // OK  
  
   S s(1);  
   f2(s);   // OK  
}  
```