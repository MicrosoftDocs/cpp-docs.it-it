---
title: Overload degli operatori
ms.date: 11/04/2016
f1_keywords:
- operator_cpp
- operator
helpviewer_keywords:
- redefinable operators [C++]
- non-redefinable operators [C++]
- operator keyword [C++]
- operators [C++], overloading
- operator overloading
ms.assetid: 56ad4c4f-dd0c-45e0-adaa-08fe98cb1f8e
ms.openlocfilehash: 822bd5efb3125e69ff60aa42ba6419969cace403
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227231"
---
# <a name="operator-overloading"></a>Overload degli operatori

La **`operator`** parola chiave dichiara una funzione che specifica il significato di *operator-symbol* quando viene applicata alle istanze di una classe. In tal modo è possibile assegnare più significati all'operatore, che diventa quindi operatore di overload. Il compilatore distingue tra i diversi significati di un operatore esaminando i tipi degli operandi.

## <a name="syntax"></a>Sintassi

> *tipo* **`operator`** di *operatore-symbol* **(** *parameter-list* **)**

## <a name="remarks"></a>Osservazioni

È possibile ridefinire la funzione della maggior parte degli operatori incorporati globalmente o classe per classe. Gli operatori di overload vengono implementati come funzioni.

Il nome di un operatore di overload è **`operator`** *x*, dove *x* è l'operatore visualizzato nella tabella seguente. Per eseguire l'overload dell'operatore di addizione, ad esempio, si definisce una funzione denominata **operator +**. Analogamente, per eseguire l'overload dell'operatore di addizione/assegnazione, **+=** , definire una funzione denominata **operator + =**.

### <a name="redefinable-operators"></a>Operatori ridefinibili

|Operatore|Nome|Type|
|--------------|----------|----------|
|**,**|Virgola|Binary|
|**!**|NOT logico|Unaria|
|**!=**|Disuguaglianza|Binary|
|**%**|Modulus|Binary|
|**%=**|Assegnazione modulo|Binary|
|**&**|AND bit per bit|Binary|
|**&**|Address-of|Unaria|
|**&&**|AND logico|Binary|
|**&=**|Assegnazione AND bit per bit|Binary|
|**( )**|Chiamata di funzione|—|
|**( )**|Operatore cast|Unaria|
|**&#42;**|Moltiplicazione|Binary|
|**&#42;**|Dereferenziazione del puntatore|Unaria|
|**&#42;=**|Assegnazione di moltiplicazione|Binary|
|**+**|Addizione|Binary|
|**+**|Più unario|Unaria|
|**++**|Incremento <sup>1</sup>|Unaria|
|**+=**|Assegnazione di addizione|Binary|
|**-**|Sottrazione|Binary|
|**-**|Negazione unaria|Unaria|
|**--**|Decrementa <sup>1</sup>|Unaria|
|**-=**|Assegnazione di sottrazione|Binary|
|**->**|Selezione dei membri|Binary|
|**->&#42;**|Selezione puntatore a membro|Binary|
|**/**|Divisione|Binary|
|**/=**|Assegnazione di divisione|Binary|
|**\<**|Minore di|Binary|
|**<<**|Spostamento a sinistra|Binary|
|**<<=**|Assegnazione di spostamento a sinistra|Binary|
|**<=**|Minore o uguale a|Binary|
|**=**|Assegnazione|Binary|
|**==**|Uguaglianza|Binary|
|**>**|Maggiore di|Binary|
|**>=**|Maggiore o uguale a|Binary|
|**>>**|Spostamento a destra|Binary|
|**>>=**|Assegnazione di spostamento a destra|Binary|
|**[ ]**|Indice inferiore di matrice|—|
|**^**|OR esclusivo|Binary|
|**^=**|Assegnazione OR esclusivo|Binary|
|**&#124;**|OR inclusivo bit per bit|Binary|
|**&#124;=**|Assegnazione OR inclusivo bit per bit|Binary|
|**&#124;&#124;**|OR logico|Binary|
|**~**|Complemento di uno|Unaria|
|**`delete`**|Elimina|—|
|**`new`**|Nuovo|—|
|operatori di conversione|operatori di conversione|Unaria|

<sup>1</sup> sono presenti due versioni degli operatori di incremento e decremento unari: preincrement e postincrement.

Per ulteriori informazioni, vedere [regole generali per l'overload degli operatori](../cpp/general-rules-for-operator-overloading.md) . Negli argomenti seguenti vengono descritti i vincoli per le diverse categorie di operatori di overload:

- [Operatori unari](../cpp/overloading-unary-operators.md)

- [Operatori binari](../cpp/binary-operators.md)

- [Assegnazione](../cpp/assignment.md)

- [Chiamata di funzione](../cpp/function-call-cpp.md)

- [Indice](../cpp/subscripting.md)

- [Accesso ai membri di classe](../cpp/member-access.md)

- [Incremento e decremento](../cpp/increment-and-decrement-operator-overloading-cpp.md).

- [Conversioni di tipi definiti dall'utente](../cpp/user-defined-type-conversions-cpp.md)

Gli operatori elencati nella tabella seguente non possono essere sottoposti a overload. La tabella include i simboli del preprocessore **#** e **##** .

### <a name="nonredefinable-operators"></a>Operatori non ridefinibili

|Operatore|Nome|
|-|-|
|**.**|Selezione dei membri|
|**. &#42;**|Selezione puntatore a membro|
|**::**|Risoluzione ambito|
|**? :**|Condizionale|
|**#**|Preprocessore - Conversione in stringa|
|**##**|Preprocessore - Concatenamento|

Anche se gli operatori di overload vengono in genere chiamati in modo implicito dal compilatore quando vengono rilevati nel codice, possono essere chiamati in modo esplicito in modo analogo a qualsiasi altra funzione di membro o non membro:

```cpp
Point pt;
pt.operator+( 3 );  // Call addition operator to add 3 to pt.
```

## <a name="example"></a>Esempio

Nell'esempio seguente viene sovraccarico l' **+** operatore per aggiungere due numeri complessi e viene restituito il risultato.

```cpp
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

```Output
6.8, 11.2
```

## <a name="in-this-section"></a>Contenuto della sezione

- [Regole generali per l'overload degli operatori](../cpp/general-rules-for-operator-overloading.md)

- [Overload degli operatori unari](../cpp/overloading-unary-operators.md)

- [Operatori binari](../cpp/binary-operators.md)

- [Assegnazione](../cpp/assignment.md)

- [Chiamata di funzione](../cpp/function-call-cpp.md)

- [Indice](../cpp/subscripting.md)

- [Accesso ai membri](../cpp/member-access.md)

## <a name="see-also"></a>Vedere anche

[Operatori C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
