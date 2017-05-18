---
title: Errore del compilatore C3489 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3489
dev_langs:
- C++
helpviewer_keywords:
- C3489
ms.assetid: 47b58d69-459d-4499-abc7-5f0b9303d773
caps.latest.revision: 8
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
ms.openlocfilehash: dd21e87beb83169e9ee827ad36903ac61d624ae3
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c3489"></a>Errore del compilatore C3489
'var' è obbligatorio quando la modalità di acquisizione predefinita è per valore  
  
 Quando si specifica che la modalità di acquisizione predefinita per un'espressione lambda è in base al valore, non è possibile passare una variabile per valore alla clausola di acquisizione dell'espressione.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
-   Non passare in modo esplicito la variabile alla clausola di acquisizione oppure  
  
-   Non specificare l'acquisizione per valore come modalità predefinita oppure  
  
-   Specificare l'acquisizione per riferimento come modalità predefinita oppure  
  
-   Passare la variabile per riferimento alla clausola di acquisizione. In questo modo il comportamento dell'espressione lambda potrebbe cambiare.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3489 perché la variabile `n` viene visualizzata per valore nella clausola di acquisizione di un'espressione lambda la cui modalità predefinita è per valore:  
  
```  
// C3489a.cpp  
  
int main()  
{  
   int n = 5;  
   [=, n]() { return n; } (); // C3489  
}  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente mostra quattro possibili soluzioni all'errore C3489:  
  
```  
// C3489b.cpp  
  
int main()  
{  
   int n = 5;  
  
   // Possible resolution 1:  
   // Do not explicitly pass n to the capture clause.  
   [=]() { return n; } ();  
  
   // Possible resolution 2:  
   // Do not specify by-value as the default capture mode.  
   [n]() { return n; } ();  
  
   // Possible resolution 3:  
   // Specify by-reference as the default capture mode.  
   [&, n]() { return n; } ();  
  
   // Possible resolution 4:  
   // Pass n by reference to the capture clause.  
   [&n]() { return n; } ();  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
