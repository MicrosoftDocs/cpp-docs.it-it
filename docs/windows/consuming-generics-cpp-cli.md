---
title: Uso dei Generics (C + + CLI) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- generics [C++], consuming from .NET languages
ms.assetid: e6330ef5-e907-432e-b527-7a22f5899639
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: cf1c7c0894eacc828a011c8c5f9fef8c2d78fba8
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39652513"
---
# <a name="consuming-generics-ccli"></a>Utilizzo dei generics (C++/CLI)
I generics creati con un linguaggio .NET possono essere utilizzati in altri linguaggi .NET. A differenza dei modelli, un generico in un assembly compilato rimane sempre generico. Pertanto, è possibile creare un'istanza del tipo generico in un assembly diverso e persino in un linguaggio diverso rispetto all'assembly in cui è stato definito il tipo generico.  
  
## <a name="example"></a>Esempio  
  
### <a name="description"></a>Descrizione  
 In questo esempio viene illustrata una classe generica definita in C#.  
  
### <a name="code"></a>Codice  
  
```cs  
// consuming_generics_from_other_NET_languages.cs  
// compile with: /target:library  
// a C# program  
public class CircularList<ItemType> {  
   class ListNode    {  
      public ItemType m_item;  
      public ListNode next;  
      public ListNode(ItemType item) {  
         m_item = item;  
      }  
   }  
  
   ListNode first, last;  
  
   public CircularList() {}  
  
   public void Add(ItemType item) {  
      ListNode newnode = new ListNode(item);  
      if (first == null) {  
         first = last = newnode;  
         first.next = newnode;  
         last.next = first;  
      }  
      else {  
         newnode.next = first;  
         first = newnode;  
         last.next = first;  
      }   
   }  
  
   public void Remove(ItemType item) {  
      ListNode iter = first;  
      if (first.m_item.Equals( item )) {  
         first =   
         last.next = first.next;  
      }  
      for ( ; iter != last ; iter = iter.next )  
         if (iter.next.m_item.Equals( item )) {  
              if (iter.next == last)  
                  last = iter;  
              iter.next = iter.next.next;  
              return;  
          }  
   }  
  
   public void PrintAll() {  
      ListNode iter = first;  
      do {  
         System.Console.WriteLine( iter.m_item );  
         iter = iter.next;  
      } while (iter != last);  
   }  
}  
```  
  
## <a name="example"></a>Esempio  
  
### <a name="description"></a>Descrizione  
 In questo viene utilizzato l'assembly creato in C#.  
  
### <a name="code"></a>Codice  
  
```cpp  
// consuming_generics_from_other_NET_languages_2.cpp  
// compile with: /clr  
#using <consuming_generics_from_other_NET_languages.dll>  
using namespace System;  
class NativeClass {};  
ref class MgdClass {};  
  
int main() {  
   CircularList<int>^ circ1 = gcnew CircularList<int>();  
   CircularList<MgdClass^>^ circ2 = gcnew CircularList<MgdClass^>();  
  
   for (int i = 0 ; i < 100 ; i += 10)  
      circ1->Add(i);  
   circ1->Remove(50);  
   circ1->PrintAll();  
}  
```  
  
```Output  
90  
80  
70  
60  
40  
30  
20  
10  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Generics](../windows/generics-cpp-component-extensions.md)