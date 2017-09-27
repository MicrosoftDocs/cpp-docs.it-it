---
title: Espressioni primarie | Documenti Microsoft
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
- primary expressions
- expressions [C++], name
- expressions [C++], literal
- expressions [C++], primary
- expressions [C++], qualified names
ms.assetid: 8ef9a814-6058-4b93-9b6e-e8eb8350b1ca
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
ms.openlocfilehash: 2ba603c19a88849c15c9402e21d2acf39bb9f54d
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="primary-expressions"></a>Espressioni primarie
Le espressioni primarie sono i blocchi predefiniti di espressioni più complesse. Sono valori letterali, nomi e nomi qualificati dall'operatore di risoluzione dell'ambito (`::`).  Un'espressione primaria può avere uno dei seguenti formati:  
  
```  
  
      literal  
      this  
:: namename( expression )  
```  
  
 Oggetto *letterale* è un'espressione primaria costante. Il tipo di tale valore letterale dipende dal formato della specifica. Vedere [valori letterali](../cpp/numeric-boolean-and-pointer-literals-cpp.md) per informazioni complete su come specificare i valori letterali.  
  
 Il **questo** (parola chiave) è un puntatore a un oggetto della classe. È disponibile all'interno delle funzioni membro non statiche e fa riferimento all'istanza della classe per cui è stata richiamata la funzione. Il **questo** parola chiave non può essere utilizzata all'esterno del corpo di una funzione membro di classe.  
  
 Il tipo del **questo** puntatore è `type` ** \*const** (dove `type` è il nome della classe) all'interno di funzioni non modifica il **questo** puntatore. Nell'esempio seguente viene membro dichiarazioni di funzione e i tipi di **questo**:  
  
```  
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
  
 Vedere [l'indicatore di misura](this-pointer.md) per ulteriori informazioni sulla modifica del tipo del **questo** puntatore.  
  
 L'operatore di risoluzione dell'ambito (`::`) seguito da un nome costituisce un'espressione primaria.  Tali nomi devono essere nomi in ambito globale e non nomi di membri.  Il tipo di questa espressione è determinato dalla dichiarazione del nome. È un l-value, ovvero può essere visualizzato a sinistra di un'espressione dell'operatore di assegnazione, se il nome dichiarante è un l-value. L'operatore di risoluzione dell'ambito consente di fare riferimento a un nome globale, anche se il nome è nascosto nell'ambito corrente. Vedere [ambito](../cpp/scope-visual-cpp.md) per un esempio di come utilizzare l'operatore di risoluzione dell'ambito.  
  
 Un'espressione racchiusa tra parentesi è un'espressione primaria il cui tipo e il cui valore sono identici a quelli dell'espressione non racchiusa tra parentesi. Si tratta di un l-value se l'espressione non racchiusa tra parentesi è un l-value.  
  
 Nel contesto dell'indicata in precedenza, la sintassi di espressione primaria *nome* corrisponde a qualsiasi nella sintassi descritta per [nomi](http://msdn.microsoft.com/en-us/1c49cc24-08d5-4884-b170-ba8ed42d80db), anche quando tramite l'operatore di risoluzione dell'ambito prima del nome, i tipi di nomi che può verificarsi solo in una classe non sono consentiti.  Sono inclusi i nomi delle funzioni di conversione definite dall'utente e i nomi dei distruttori.  
  
 Gli esempi di espressioni primarie includono:  
  
```  
100 // literal  
'c' // literal  
this // in a member function, a pointer to the class instance  
::func // a global function  
::operator + // a global operator function  
::A::B // a global qualified name  
( i + 1 ) // a parenthesized expression  
```  
  
 Gli esempi seguenti vengono tutti considerati *nomi*e pertanto espressioni primarie, in diversi modi:  
  
```  
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
