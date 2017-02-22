---
title: "Espressioni primarie | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "espressioni [C++], rappresentazione formale"
  - "espressioni [C++], nome"
  - "espressioni [C++], primarie"
  - "espressioni [C++], nomi completi"
  - "espressioni primarie"
ms.assetid: 8ef9a814-6058-4b93-9b6e-e8eb8350b1ca
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Espressioni primarie
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le espressioni primarie sono i blocchi predefiniti di espressioni più complesse.  Sono valori letterali, nomi e nomi qualificati dall'operatore di risoluzione dell'ambito \(`::`\).  Un'espressione primaria può avere uno dei seguenti formati:  
  
```  
  
        literal  
this  
:: name  
name   
( expression )  
```  
  
 *literal* è un'espressione primaria costante.  Il tipo di tale valore letterale dipende dal formato della specifica.  Per informazioni complete sulla specifica dei valori letterali, vedere [Valori letterali](../cpp/numeric-boolean-and-pointer-literals-cpp.md).  
  
 La parola chiave **this** è un puntatore a un oggetto classe.  È disponibile all'interno delle funzioni membro non statiche e fa riferimento all'istanza della classe per cui è stata richiamata la funzione.  La parola chiave **this** non può essere utilizzata all'esterno del corpo di una funzione membro di una classe  
  
 Il tipo del puntatore **this** è `type` **\*const** \(in cui `type` è il nome della classe\) all'interno delle funzioni che non modificano in modo specifico il puntatore **this**.  Nell'esempio seguente vengono illustrate le dichiarazioni di funzione membro e i tipi di **this**:  
  
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
  
 Per ulteriori informazioni sulla modifica del tipo del puntatore **this**, vedere [Tipo del puntatore this](../misc/type-of-this-pointer.md).  
  
 L'operatore di risoluzione dell'ambito \(`::`\) seguito da un nome costituisce un'espressione primaria.  Tali nomi devono essere nomi in ambito globale e non nomi di membri.  Il tipo di questa espressione è determinato dalla dichiarazione del nome.  È un l\-value, ovvero può essere visualizzato a sinistra di un'espressione dell'operatore di assegnazione, se il nome dichiarante è un l\-value.  L'operatore di risoluzione dell'ambito consente di fare riferimento a un nome globale, anche se il nome è nascosto nell'ambito corrente.  Per un esempio su come utilizzare l'operatore di risoluzione dell'ambito, vedere [Ambito](../cpp/scope-visual-cpp.md).  
  
 Un'espressione racchiusa tra parentesi è un'espressione primaria il cui tipo e il cui valore sono identici a quelli dell'espressione non racchiusa tra parentesi.  Si tratta di un l\-value se l'espressione non racchiusa tra parentesi è un l\-value.  
  
 Nel contesto della sintassi dell'espressione primaria specificata in precedenza, *name* indica qualsiasi elemento nella sintassi descritta per [Nomi](http://msdn.microsoft.com/it-it/1c49cc24-08d5-4884-b170-ba8ed42d80db), anche se quando si utilizza l'operatore di risoluzione dell'ambito prima del nome, i tipi di nomi che possono verificarsi solo in una classe non sono consentiti.  Sono inclusi i nomi delle funzioni di conversione definite dall'utente e i nomi dei distruttori.  
  
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
  
 Gli esempi riportati di seguito sono tutti considerati *name* e pertanto espressioni primarie, in diversi modi:  
  
```  
MyClass // a identifier  
MyClass::f // a qualified name  
operator = // an operator function name  
operator char* // a conversion operator function name  
~MyClass // a destructor name  
A::B   // a qualified name  
A<int> // a template id  
```  
  
## Vedere anche  
 [Tipi di espressioni](../cpp/types-of-expressions.md)