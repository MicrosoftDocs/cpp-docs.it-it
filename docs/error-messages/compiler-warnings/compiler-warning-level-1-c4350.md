---
title: Compilatore avviso (livello 1) C4350 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4350
dev_langs:
- C++
helpviewer_keywords:
- C4350
ms.assetid: 4cc8ed67-64c4-4da5-a7a5-a639232baa23
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 141f5552c4b86e170587f42ebabf5e2e597b4e96
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-1-c4350"></a>Avviso del compilatore (livello 1) C4350
modifica del comportamento: viene chiamato 'membro1' anziché 'membro2'  
  
 Un rvalue non può essere associato a un riferimento non const. Nelle versioni di Visual C++ prima di Visual Studio 2003, è possibile associare un riferimento rvalue a un riferimento non const in un'inizializzazione diretta. Questo codice ora genera un avviso.  
  
 Per garantire la compatibilità con le versioni precedenti, è comunque possibile associare un rvalue a materiale di riferimento non const, ma le conversioni standard vengono preferite laddove possibile.  
  
 Questo avviso rappresenta una modifica del comportamento dal compilatore Visual C++ .NET 2002. Se abilitata, questo avviso eventualmente essere generato per il codice corretto. Ad esempio, potrebbe essere generato quando si utilizza il **std:: auto_ptr** modello di classe.  
  
 Se viene visualizzato questo avviso, esaminare il codice per vedere se dipende dall'associazione rvalue a materiale di riferimento non const. Aggiunta di una variabile const al riferimento o fornire un overload di riferimento const aggiuntivo può risolvere il problema.  
  
 Per impostazione predefinita, questo avviso non è attivo. Per ulteriori informazioni, vedere [gli avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
 L'esempio seguente genera l'errore C4350:  
  
```cpp  
// C4350.cpp  
// compile with: /W1  
#pragma warning (default : 4350)  
class A {};  
  
class B  
{  
public:  
   B(B&){}  
   // try the following instead:  
   // B(const B&){}  
  
   B(A){}  
   operator A(){ return A();}  
};  
  
B source() { return A(); }  
  
int main()  
{  
   B ap(source());   // C4350  
}  
```
