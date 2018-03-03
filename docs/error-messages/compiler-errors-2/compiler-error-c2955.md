---
title: Errore del compilatore C2955 | Documenti Microsoft
ms.custom: 
ms.date: 03/28/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2955
dev_langs:
- C++
helpviewer_keywords:
- C2955
ms.assetid: 77709fb6-d69b-46fd-a62f-e8564563d01b
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3ccb8eabf42fdc47b58261633ceb61cf9bc0b15d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2955"></a>Errore del compilatore C2955
'identifier': l'utilizzo di modello di classe o alias generico richiede un elenco di argomenti di modello o generici  
  
 Non è possibile usare un modello di classe o una classe generica come identificatore senza un elenco di argomenti di modello o generici.  
  
 Per ulteriori informazioni, vedere [modelli di classe](../../cpp/class-templates.md).  
  
 L'esempio seguente genera l'errore C2955 e mostra come risolverlo:  
  
```  
// C2955.cpp  
// compile with: /c  
template<class T>   
class X {};  
  
X x1;   // C2955  
X<int> x2;   // OK - this is how to fix it.  
```  
  
 L'errore C2955 può verificarsi anche quando si tenta una definizione non inline per una funzione dichiarata in un modello di classe:  
  
```  
// C2955_b.cpp  
// compile with: /c  
template <class T>  
class CT {  
public:  
   void CTFunc();  
   void CTFunc2();  
};  
  
void CT::CTFunc() {}   // C2955  
  
// OK - this is how to fix it  
template <class T>  
void CT<T>::CTFunc2() {}  
  
```  
  
 C2955 può verificarsi anche quando si usano i generics:  
  
```  
// C2955_c.cpp  
// compile with: /clr  
generic <class T>   
ref struct GC {   
   T t;  
};  
  
int main() {  
   GC^ g;   // C2955  
   GC <int>^ g;  
}  
```

## <a name="example"></a>Esempio
**Visual Studio 2017 e versioni successiva:** il compilatore individua correttamente gli elenchi di argomenti di modello mancante quando il modello viene visualizzato in un elenco di parametri di modello (ad esempio come parte di un argomento di modello predefinito o un parametro di modello non di tipo). Il codice seguente viene compilato in Visual Studio 2015 ma genera un errore in Visual Studio 2017.

```
template <class T> class ListNode;
template <class T> using ListNodeMember = ListNode<T> T::*;
template <class T, ListNodeMember M> class ListHead; // C2955: 'ListNodeMember': use of alias 
                                                     // template requires template argument list

// correct:  template <class T, ListNodeMember<T> M> class ListHead;
```
