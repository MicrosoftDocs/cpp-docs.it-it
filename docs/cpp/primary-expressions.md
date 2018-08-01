---
title: Espressioni primarie | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- primary expressions
- expressions [C++], name
- expressions [C++], literal
- expressions [C++], primary
- expressions [C++], qualified names
ms.assetid: 8ef9a814-6058-4b93-9b6e-e8eb8350b1ca
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3a178510c02cd7ae0238686c6ff6634466715ddf
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39408346"
---
# <a name="primary-expressions"></a>Espressioni primarie
Le espressioni primarie sono i blocchi predefiniti di espressioni più complesse. Sono valori letterali, nomi e nomi qualificati dall'operatore di risoluzione dell'ambito (`::`).  Un'espressione primaria può avere uno dei seguenti formati:  
  
```  
literal  
this
name  
::name ( expression )  
```  
  
 Oggetto *letterale* è un'espressione primaria costante. Il tipo di tale valore letterale dipende dal formato della specifica. Visualizzare [valori letterali](../cpp/numeric-boolean-and-pointer-literals-cpp.md) per informazioni complete su come specificare i valori letterali.  
  
 Il **ciò** (parola chiave) è un puntatore a un oggetto classe. È disponibile all'interno delle funzioni membro non statiche e fa riferimento all'istanza della classe per cui è stata richiamata la funzione. Il **ciò** parola chiave non può essere utilizzata all'esterno del corpo di una funzione membro di classe.  
  
 Il tipo del **ciò** puntatore si trova `type`  **\*const** (in cui `type` è il nome della classe) all'interno di funzioni di modifica non specificamente il **questo** puntatore. L'esempio seguente mostra membro dichiarazioni di funzione e i tipi di **ciò**:  
  
```cpp 
// expre_Primary_Expressions.cpp  
// compile with: /LD  
class Example  
{  
public:  
    void Func();          //  * const this  
    void Func() const;    //  const * const this  
    void Func() volatile; //  volatile * const this  
};  
```  
  
 Visualizzare [questo puntatore](this-pointer.md) per altre informazioni sulla modifica del tipo del **ciò** puntatore.  
  
 L'operatore di risoluzione dell'ambito (`::`) seguito da un nome costituisce un'espressione primaria.  Tali nomi devono essere nomi in ambito globale e non nomi di membri.  Il tipo di questa espressione è determinato dalla dichiarazione del nome. È un l-value, ovvero può essere visualizzato a sinistra di un'espressione dell'operatore di assegnazione, se il nome dichiarante è un l-value. L'operatore di risoluzione dell'ambito consente di fare riferimento a un nome globale, anche se il nome è nascosto nell'ambito corrente. Visualizzare [ambito](../cpp/scope-visual-cpp.md) per un esempio di come usare l'operatore di risoluzione dell'ambito.  
  
 Un'espressione racchiusa tra parentesi è un'espressione primaria il cui tipo e il cui valore sono identici a quelli dell'espressione non racchiusa tra parentesi. Si tratta di un l-value se l'espressione non racchiusa tra parentesi è un l-value.  
  
 Gli esempi di espressioni primarie includono:  
  
```cpp 
100 // literal  
'c' // literal  
this // in a member function, a pointer to the class instance  
::func // a global function  
::operator + // a global operator function  
::A::B // a global qualified name  
( i + 1 ) // a parenthesized expression  
```  
  
 Gli esempi seguenti sono tutti considerati *nomi*e pertanto espressioni primarie, in diversi modi:  
  
```cpp 
MyClass // a identifier  
MyClass::f // a qualified name  
operator = // an operator function name  
operator char* // a conversion operator function name  
~MyClass // a destructor name  
A::B   // a qualified name  
A<int> // a template id  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di espressioni](../cpp/types-of-expressions.md)