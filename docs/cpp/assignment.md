---
title: Assegnazione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- operators [C++], assignment
- assignment operators [C++], overloaded
ms.assetid: d87e4f89-f8f5-42c1-9d3c-184bca9d0e15
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 27e78f7429c4d2a0f83ff7184460eb2ae69df129
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38960986"
---
# <a name="assignment"></a>Assegnazione
L'operatore di assegnazione (**=**) è, in senso stretto, un operatore binario. La relativa dichiarazione è identica a qualsiasi altro operatore binario, con le seguenti eccezioni:  
  
-   Deve essere una funzione membro non statica. No **operatore =** può essere dichiarato come una funzione non membro.  
  
-   Non è ereditato da classi derivate.  
  
-   Un valore predefinito **operatore =** funzione può essere generata dal compilatore per i tipi di classe se non ne esiste alcuno.  
  
 Nell'esempio seguente viene illustrato come dichiarare un operatore di assegnazione:  
  
```cpp 
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
  
```cpp 
pt1 = pt2 = pt3;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Overload degli operatori](../cpp/operator-overloading.md)