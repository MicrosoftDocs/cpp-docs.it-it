---
title: Friend (C++) | Microsoft Docs
ms.custom: ''
ms.date: 07/02/2018
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- friend_cpp
dev_langs:
- C++
helpviewer_keywords:
- member access, from friend functions
- friend classes [C++]
- friend keyword [C++]
ms.assetid: 8fe9ee55-d56f-40cd-9075-d9fb1375aff4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f2a49d760f6a91a0eec8cee74489f8e3267c2fcc
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46017158"
---
# <a name="friend-c"></a>friend (C++)

In alcuni casi, è più pratico concedere l'accesso a livello di membro alle funzioni che non sono membri di una classe o a tutti i membri in una classe separata. Solo l'implementatore della classe può dichiarare i rispettivi elementi friend. Una funzione o una classe non può dichiarare se stessa come elemento friend di una classe. In una definizione di classe, usare il **friend** (parola chiave) e il nome di una funzione non membro o un'altra classe per concedere l'accesso ai membri privati e protetti della classe. In una definizione di modello, un parametro di tipo possa essere dichiarato come friend.

## <a name="syntax"></a>Sintassi

```
class friend F
friend F;
```

## <a name="friend-declarations"></a>Dichiarazioni Friend

Se si dichiara una funzione Friend che non è stata dichiarata precedentemente, tale funzione viene esportata nell'ambito nonclass contenitore.

Le funzioni dichiarate in una dichiarazione friend vengono considerate come se fossero state dichiarate usando la **extern** (parola chiave). Per altre informazioni, vedere [extern](extern-cpp.md).

Sebbene le funzioni con ambito globale possono essere dichiarate come Friend prima dei relativi prototipi, le funzioni membro non possono essere dichiarate come Friend prima che venga visualizzata la relativa dichiarazione di classe completa. Nel codice seguente è illustrato il motivo dell'errore:

```cpp
class ForwardDeclared;   // Class name is known.
class HasFriends
{
    friend int ForwardDeclared::IsAFriend();   // C2039 error expected
};
```

L'esempio precedente immette il nome della classe `ForwardDeclared` nell'ambito, ma la dichiarazione completa (in particolare, la parte che dichiara la funzione `IsAFriend`) non è nota. Pertanto, il **friend** dichiarazione nella classe `HasFriends` genera un errore.

A partire da c++11, esistono due forme di dichiarazioni friend per una classe:

```cpp
friend class F;
friend F;
```

Il primo modulo introduce una nuova classe F se delle classi esistenti con lo stesso nome è stata trovata nello spazio dei nomi di colonne più interno. **C++11**: il secondo form non introduce una nuova classe; può essere utilizzato quando la classe è già stata dichiarata e deve essere usato quando si dichiara un parametro di tipo di modello o un typedef come friend.

Usare `class friend F` quando il tipo di riferimento non è ancora stato dichiarato:

```cpp
namespace NS
{
    class M
    {
        class friend F;  // Introduces F but doesn't define it
    };
}
```

```cpp
namespace NS
{
    class M
    {
        friend F; // error C2433: 'NS::F': 'friend' not permitted on data declarations
    };
}
```

Nell'esempio seguente `friend F` si intende il `F` classe dichiarata all'esterno dell'ambito di NS.

```cpp
class F {};
namespace NS
{
    class M
    {
        friend F;  // OK
    };
}
```

Usare `friend F` per dichiarare un parametro di modello come friend:

```cpp
template <typename T>
class my_class
{
    friend T;
    //...
};
```

Usare `friend F` per dichiarare un typedef come friend:

```cpp
class Foo {};
typedef Foo F;

class G
{
    friend F; // OK
    friend class F // Error C2371 -- redefinition
};
```

Per dichiarare due classi che rappresentano elementi Friend l'uno dell'altro, la seconda classe per intero deve essere specificata come Friend della prima classe. Il motivo di questa restrizione è che il compilatore dispone di informazioni sufficienti per dichiarare le singole funzioni Friend solo nel punto in cui la seconda classe viene dichiarata.

> [!NOTE]
>  Sebbene la seconda classe per intero debba essere Friend della prima classe, è possibile selezionare le funzioni nella prima classe che saranno Friend della seconda classe.

## <a name="friend-functions"></a>funzioni di tipo friend

Oggetto **friend** è una funzione che non è un membro di una classe, ma ha accesso ai membri privati e protetti della classe. Le funzioni friend non sono considerate membri della classe; sono funzioni esterne normali a cui vengono concessi privilegi di accesso speciali. Gli elementi Friend non sono nell'ambito della classe e non vengono chiamati utilizzando gli operatori di selezione dei membri (**.** e -**>**) a meno che non sono membri di un'altra classe. Oggetto **friend** funzione viene dichiarata dalla classe che concede l'accesso. Il **friend** dichiarazione può essere inserita in un punto qualsiasi nella dichiarazione di classe. Non è influenzata dalle parole chiave di controllo di accesso.

Nell'esempio seguente viene illustrata una classe `Point` e una funzione friend `ChangePrivate`. Il **friend** funzione ha accesso al membro dati privato del `Point` riceve come parametro dell'oggetto.

```cpp
// friend_functions.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;
class Point
{
    friend void ChangePrivate( Point & );
public:
    Point( void ) : m_i(0) {}
    void PrintPrivate( void ){cout << m_i << endl; }

private:
    int m_i;
};

void ChangePrivate ( Point &i ) { i.m_i++; }

int main()
{
   Point sPoint;
   sPoint.PrintPrivate();
   ChangePrivate(sPoint);
   sPoint.PrintPrivate();
// Output: 0
           1
}
```

## <a name="class-members-as-friends"></a>Membri di classe come elementi friend

Le funzioni membro di classe possono essere dichiarate come friend in altre classi. Si consideri l'esempio seguente:

```cpp
// classes_as_friends1.cpp
// compile with: /c
class B;

class A {
public:
   int Func1( B& b );

private:
   int Func2( B& b );
};

class B {
private:
   int _b;

   // A::Func1 is a friend function to class B
   // so A::Func1 has access to all members of B
   friend int A::Func1( B& );
};

int A::Func1( B& b ) { return b._b; }   // OK
int A::Func2( B& b ) { return b._b; }   // C2248
```

Nell'esempio precedente, solo alla funzione `A::Func1( B& )` viene concesso l'accesso Friend alla classe `B`. Di conseguenza, accedere al membro privato `_b` sia corretto in `Func1` della classe `A` ma non in `Func2`.

Una classe `friend` è una classe in cui tutte le funzioni membro sono funzioni Friend di una classe, ovvero, le cui funzioni membro hanno accesso agli altri membri privati e protetti della classe. Si supponga che la dichiarazione `friend` nella classe `B` sia stata:

```cpp
friend class A;
```

In tal caso, a tutte le funzioni membro nella classe `A` sarebbe stato concesso l'accesso Friend alla classe `B`. Il codice seguente è un esempio di una classe Friend:

```cpp
// classes_as_friends2.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;
class YourClass {
friend class YourOtherClass;  // Declare a friend class
public:
   YourClass() : topSecret(0){}
   void printMember() { cout << topSecret << endl; }
private:
   int topSecret;
};

class YourOtherClass {
public:
   void change( YourClass& yc, int x ){yc.topSecret = x;}
};

int main() {
   YourClass yc1;
   YourOtherClass yoc1;
   yc1.printMember();
   yoc1.change( yc1, 5 );
   yc1.printMember();
}
```

L'accesso Friend non è reciproco a meno che non venga specificato in modo esplicito come tale. Nell'esempio precedente, le funzioni membro di `YourClass` non possono accedere ai membri privati di `YourOtherClass`.

Un tipo gestito non può avere nessuna funzione Friend, classe Friend o interfaccia Friend.

L'accesso Friend non è ereditato, pertanto classi derivate da `YourOtherClass` non possono accedere a membri privati di `YourClass`. L'accesso Friend non è transitivo, pertanto classi che rappresentano elementi friend di `YourOtherClass` non possono accedere a membri privati di `YourClass`.

Nella figura seguente vengono illustrate quattro dichiarazioni di classe: `Base`, `Derived`, `aFriend` e `anotherFriend`. Solo la classe `aFriend` ha accesso diretto ai membri privati di `Base` (e a tutti i membri che `Base` possa aver ereditato).

![Implicazioni della relazione friend](../cpp/media/vc38v41.gif "vc38V41") implicazioni di relazioni friend

## <a name="inline-friend-definitions"></a>Definizioni di elementi friend inline

Le funzioni friend possono essere definite all'interno delle dichiarazioni di classe. Queste funzioni sono funzioni inline e, analogamente alle funzioni membro inline, si comportano come se fossero definite immediatamente dopo la visualizzazione di tutti i membri di classe ma prima della chiusura dell'ambito di classe (ovvero la fine della dichiarazione di classe).

Le funzioni friend definite all'interno delle dichiarazioni di classe non sono considerate come esistenti nell'ambito della classe che le contiene, ma si trovano in ambito file.

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)