---
title: Overload dell'operatore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- operator_cpp
- operator
dev_langs: C++
helpviewer_keywords:
- redefinable operators [C++]
- non-redefinable operators [C++]
- operator keyword [C++]
- operators [C++], overloading
- operator overloading
ms.assetid: 56ad4c4f-dd0c-45e0-adaa-08fe98cb1f8e
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 3844dc5b53defcb02f1dab1a97f05760d05d531f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="operator-overloading"></a>Overload degli operatori
La parola chiave `operator` dichiara una funzione che specifica il significato di `operator-symbol` quando viene applicato a istanze di una classe. In tal modo è possibile assegnare più significati all'operatore, che diventa quindi operatore di overload. Il compilatore distingue tra i diversi significati di un operatore esaminando i tipi degli operandi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
type operator operator-symbol ( parameter-list )  
```  
  
## <a name="remarks"></a>Note  
 È possibile ridefinire la funzione della maggior parte degli operatori incorporati globalmente o classe per classe. Gli operatori di overload vengono implementati come funzioni.  
  
 Il nome di un operatore di overload è `operator x`, dove `x` è l'operatore come appare nella tabella seguente. Ad esempio per eseguire l'overload dell'operatore di addizione, viene definita una funzione denominata `operator+`. Analogamente, per eseguire l'overload dell'operatore di addizione/assegnazione `+=`, è necessario definire una funzione denominata `operator+=`.  
  
### <a name="redefinable-operators"></a>Operatori ridefinibili  
  
|Operatore|Nome|Tipo|  
|--------------|----------|----------|  
|`,`|Virgola|Binario|  
|`!`|NOT logico|Unario|  
|`!=`|Disuguaglianza|Binario|  
|`%`|Modulo|Binario|  
|`%=`|Assegnazione modulo|Binario|  
|`&`|AND bit per bit|Binario|  
|`&`|Address-of|Unario|  
|`&&`|AND logico|Binario|  
|`&=`|Assegnazione AND bit per bit|Binario|  
|`( )`|Chiamata di funzione|—|  
|`( )`|Operatore cast|Unario|  
|`*`|Moltiplicazione|Binario|  
|`*`|Dereferenziazione del puntatore|Unario|  
|`*=`|Assegnazione di moltiplicazione|Binario|  
|`+`|Addizione|Binario|  
|`+`|Più unario|Unario|  
|`++`|Incremento <sup>1</sup>|Unario|  
|`+=`|Assegnazione di addizione|Binario|  
|`-`|Sottrazione|Binario|  
|`-`|Negazione unaria|Unario|  
|`--`|Decremento <sup>1</sup>|Unario|  
|`-=`|Assegnazione di sottrazione|Binario|  
|`->`|Selezione dei membri|Binario|  
|`->*`|Selezione puntatore a membro|Binario|  
|`/`|Divisione|Binario|  
|`/=`|Assegnazione di divisione|Binario|  
|`<`|Minore di|Binario|  
|`<<`|Spostamento a sinistra|Binario|  
|`<<=`|Assegnazione di spostamento a sinistra|Binario|  
|`<=`|Minore o uguale a|Binario|  
|`=`|Assegnazione|Binario|  
|`==`|Uguaglianza|Binario|  
|`>`|Maggiore di|Binario|  
|`>=`|Maggiore o uguale a|Binario|  
|`>>`|Spostamento a destra|Binario|  
|`>>=`|Assegnazione di spostamento a destra|Binario|  
|`[ ]`|Indice di matrice|—|  
|`^`|OR esclusivo|Binario|  
|`^=`|Assegnazione OR esclusivo|Binario|  
|`&#124;`|OR inclusivo bit per bit|Binario|  
|`&#124;=`|Assegnazione OR inclusivo bit per bit|Binario|  
|`&#124;&#124;`|OR logico|Binario|  
|`~`|Complemento di uno|Unario|  
|`delete`|`Delete`|—|  
|`new`|`New`|—|  
|`conversion operators`|operatori di conversione|Unario|  
  
 1 incrementano di due versioni dell'operatore unario e gli operatori di decremento presente: incremento prefisso e incremento suffisso.  
  
 Vedere [regole generali per overload di operatori](../cpp/general-rules-for-operator-overloading.md) per ulteriori informazioni. Negli argomenti seguenti vengono descritti i vincoli per le diverse categorie di operatori di overload:  
  
-   [Operatori unari](../cpp/overloading-unary-operators.md)  
  
-   [Operatori binari](../cpp/binary-operators.md)  
  
-   [Assegnazione](../cpp/assignment.md)  
  
-   [Chiamata di funzione](../cpp/function-call-cpp.md)  
  
-   [Indice](../cpp/subscripting.md)  
  
-   [Accesso ai membri di classe](../cpp/member-access.md)  
  
-   [Incremento e decremento](../cpp/increment-and-decrement-operator-overloading-cpp.md).  
  
-   [Conversioni di tipo definito dall'utente](../cpp/user-defined-type-conversions-cpp.md)  
  
 Gli operatori elencati nella tabella seguente non possono essere sottoposti a overload. La tabella include i simboli del preprocessore `#` e `##`.  
  
### <a name="nonredefinable-operators"></a>Operatori non ridefinibili  
  
|||  
|-|-|  
|`Operator`|`Name`|  
|`.`|Selezione dei membri|  
|`.*`|Selezione puntatore a membro|  
|`::`|Risoluzione ambito|  
|`? :`|Condizionale|  
|`#`|Preprocessore - Conversione in stringa|  
|`##`|Preprocessore - Concatenamento|  
  
 Anche se gli operatori di overload vengono in genere chiamati in modo implicito dal compilatore quando vengono rilevati nel codice, possono essere chiamati in modo esplicito in modo analogo a qualsiasi altra funzione di membro o non membro:  
  
```  
Point pt;  
pt.operator+( 3 );  // Call addition operator to add 3 to pt.  
```  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene eseguito l'overload dell'operatore `+` per sommare due numeri complessi e restituire il risultato.  
  
```  
// operator_overloading.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
struct Complex {  
   Complex( double r, double i ) : re(r), im(i) {}  
   Complex operator+( Complex &other );  
   void Display( ) {   cout << re << ", " << im << endl; }  
private:  
   double re, im;  
};  
  
// Operator overloaded using a member function  
Complex Complex::operator+( Complex &other ) {  
   return Complex( re + other.re, im + other.im );  
}  
  
int main() {  
   Complex a = Complex( 1.2, 3.4 );  
   Complex b = Complex( 5.6, 7.8 );  
   Complex c = Complex( 0.0, 0.0 );  
  
   c = a + b;  
   c.Display();  
}  
```  
  
## <a name="output"></a>Output  
  
```  
6.8, 11.2  
```  
  
## <a name="in-this-section"></a>In questa sezione  
  
1.  [Regole generali per overload di operatori](../cpp/general-rules-for-operator-overloading.md)  
  
2.  [Overload degli operatori unari](../cpp/overloading-unary-operators.md)  
  
3.  [Operatori binari](../cpp/binary-operators.md)  
  
4.  [Assegnazione](../cpp/assignment.md)  
  
5.  [Chiamata di funzione](../cpp/function-call-cpp.md)  
  
6.  [Indice](../cpp/subscripting.md)  
  
7.  [Accesso ai membri](../cpp/member-access.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori C++ predefiniti, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Parole chiave](../cpp/keywords-cpp.md)