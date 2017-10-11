---
title: Errore del compilatore C3532 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3532
dev_langs:
- C++
helpviewer_keywords:
- C3532
ms.assetid: 51067853-eda8-4f59-86e8-8924e16d3a95
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: e78db21d00ea93378358a1147163276fb12bdfd5
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3532"></a>Errore del compilatore C3532
'type': utilizzo non corretto del 'auto'  
  
 Impossibile dichiarare il tipo indicato con il `auto` (parola chiave). Ad esempio, è possibile usare il `auto` (parola chiave) per dichiarare una matrice o un metodo il tipo restituito.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
1.  Verificare che l'espressione di inizializzazione restituisce un tipo valido.  
  
2.  Verificare che non si dichiara una matrice o un tipo restituito del metodo.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C3532 perché il `auto` (parola chiave) non è possibile dichiarare un tipo restituito del metodo.  
  
```  
// C3532a.cpp  
// Compile with /Zc:auto  
auto f(){}   // C3532  
```  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C3532 perché il `auto` (parola chiave) non è possibile dichiarare una matrice.  
  
```  
// C3532b.cpp  
// Compile with /Zc:auto  
int main()  
{  
   int x[5];  
   auto a[5];            // C3532  
   auto b[1][2];         // C3532  
   auto y[5] = x;        // C3532  
   auto z[] = {1, 2, 3}; // C3532  
   auto w[] = x;         // C3532  
   return 0;  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Auto (parola chiave)](../../cpp/auto-keyword.md)
