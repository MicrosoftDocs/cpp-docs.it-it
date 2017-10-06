---
title: Assegnazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- operators [C++], assignment
- assignment operators [C++], overloaded
ms.assetid: d87e4f89-f8f5-42c1-9d3c-184bca9d0e15
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: c80a11e38225a8ed4fa424bbd3009e5701848cbd
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="assignment"></a>Assegnazione
L'operatore di assegnazione (**=**) è in linea puramente teorica, un operatore binario. La relativa dichiarazione è identica a qualsiasi altro operatore binario, con le seguenti eccezioni:  
  
-   Deve essere una funzione membro non statica. Nessun `operator=` può essere dichiarato come funzione non membro.  
  
-   Non è ereditato da classi derivate.  
  
-   Una funzione predefinita `operator=` può essere generata dal compilatore per i tipi di classe, se non ne esiste una. (Per ulteriori informazioni sull'impostazione predefinita `operator=` funzioni, vedere [membro assegnazione e inizializzazione](http://msdn.microsoft.com/en-us/94048213-8b49-4416-8069-b1b7a6f271f9).)  
  
 Nell'esempio seguente viene illustrato come dichiarare un operatore di assegnazione:  
  
```  
// assignment.cpp  
class Point  
{  
public:  
   Point &operator=( Point & );  // Right side is the argument.  
   int _x, _y;  
};  
  
// Define assignment operator.  
Point &Point::operator=( Point &ptRHS )  
{  
   _x = ptRHS._x;  
   _y = ptRHS._y;  
  
   return *this;  // Assignment operator returns left side.  
}  
  
int main()  
{  
}  
```  
  
 Si noti che l'argomento fornito è il lato destro dell'espressione. L'operatore restituisce l'oggetto per mantenere il comportamento dell'operatore di assegnazione, che restituisce il valore del lato sinistro una volta completata l'assegnazione. In questo modo vengono consentite istruzioni di scrittura come:  
  
```  
pt1 = pt2 = pt3;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Overload degli operatori](../cpp/operator-overloading.md)
