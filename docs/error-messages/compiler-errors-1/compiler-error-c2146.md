---
title: Errore del compilatore C2146 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2146
dev_langs: C++
helpviewer_keywords: C2146
ms.assetid: 6bfb7de6-6723-4486-9350-c66ef88d7a64
caps.latest.revision: "14"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a7da8021cabb5eab31ae12912374268ee4d7d24b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2146"></a>Errore del compilatore C2146
Errore di sintassi: 'token' prima dell'identificatore 'identifier' mancante  
  
 Il compilatore prevedeva `token` e trovare `identifier` invece.  Possibili cause:  
  
1.  Errore di ortografia o lettere maiuscole/minuscole.  
  
2.  Identificatore di tipo mancante nella dichiarazione dell'identificatore.  
  
 Questo errore può essere causato da un errore di battitura. Errore [C2065](../../error-messages/compiler-errors-1/compiler-error-c2065.md) precede in genere questo errore.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2146.  
  
```  
// C2146.cpp  
class CDeclaredClass {};  
  
class CMyClass {  
   CUndeclared m_myClass;   // C2146  
   CDeclaredClass m_myClass2;   // OK  
};  
  
int main() {  
   int x;  
   int t x;   // C2146 : missing semicolon before 'x'  
}  
```  
  
## <a name="example"></a>Esempio  
 Questo errore può anche essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: mancante `typename` (parola chiave).  
  
 L'esempio seguente viene compilato in Visual Studio .NET 2002 ma non funziona in Visual Studio .NET 2003:  
  
```  
// C2146b.cpp  
// compile with: /c  
template <typename T>  
struct X {  
   struct Y {  
      int i;  
   };  
   Y memFunc();  
};  
  
template <typename T>  
X<T>::Y func() { }   // C2146  
  
// OK  
template <typename T>  
typename X<T>::Y func() { }  
```  
  
## <a name="example"></a>Esempio  
 Si verifica anche questo errore come risultato delle operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: specializzazioni esplicite non si trovano più parametri di modello dal modello principale.  
  
 L'utilizzo di `T` dal modello principale non è consentito nella specializzazione esplicita. Per il codice sia valido nelle versioni di Visual Studio .NET 2003 e Visual Studio .NET di Visual C++, sostituire tutte le istanze del parametro di modello nella specializzazione con il tipo specializzato in modo esplicito.  
  
 L'esempio seguente viene compilato in Visual Studio .NET, ma non funziona in Visual Studio .NET 2003:  
  
```  
// C2146_c.cpp  
// compile with: /c  
template <class T>   
struct S;  
  
template <>   
struct S<int> {  
   T m_t;   // C2146  
   int m_t2;   // OK  
};  
```