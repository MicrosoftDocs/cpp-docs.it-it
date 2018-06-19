---
title: Errore del compilatore C3492 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3492
dev_langs:
- C++
helpviewer_keywords:
- C3492
ms.assetid: b1dc6342-9133-4b1f-a9c3-e8c65d20d121
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: de9fb29b13c1bbae7c86f80da53c11590e7c7d2b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33253574"
---
# <a name="compiler-error-c3492"></a>Errore del compilatore C3492
'var': impossibile acquisire un membro di un'unione anonima  
  
 Non è possibile acquisire un membro di un'unione senza nome.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
-   Assegnare un nome all'unione e passare la struttura di unione completa all'elenco di acquisizione dell'espressione lambda.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3492 perché acquisisce un membro di un'unione anonima:  
  
```  
// C3492a.cpp  
  
int main()  
{  
   union  
   {  
      char ch;  
      int x;  
   };  
  
   ch = 'y';  
   [&x](char ch) { x = ch; }(ch); // C3492  
}  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente risolve l'errore C3492, assegnando un nome all'unione e passando la struttura di unione completa all'elenco di acquisizione dell'espressione lambda:  
  
```  
// C3492b.cpp  
  
int main()  
{  
   union  
   {  
      char ch;  
      int x;  
   } u;  
  
   u.ch = 'y';  
   [&u](char ch) { u.x = ch; }(u.ch);  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)