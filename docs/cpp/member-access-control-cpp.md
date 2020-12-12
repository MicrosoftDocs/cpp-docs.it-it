---
description: 'Altre informazioni su: controllo di accesso membri (C++)'
title: Controllo di accesso dei membri [C++]
ms.date: 11/19/2018
helpviewer_keywords:
- access control [C++]
- member access [C++]
- member-access control [C++]
ms.assetid: 2d596bca-56ad-4277-94e1-ce3db45fa14a
ms.openlocfilehash: 2cce7cb98e76098f3c20a6c2404f91ccf40db1cb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97206877"
---
# <a name="member-access-control-c"></a>Controllo di accesso dei membri [C++]

I controlli di accesso consentono di separare l'interfaccia [pubblica](../cpp/public-cpp.md) di una classe dai dettagli di implementazione [privati](../cpp/private-cpp.md) e i membri [protetti](../cpp/protected-cpp.md) che vengono utilizzati solo dalle classi derivate. L'identificatore di accesso si applica a tutti i membri dichiarati dopo l'identificatore stesso, fino a quando non viene rilevato l'identificatore di accesso successivo.

```cpp
class Point
{
public:
    Point( int, int ) // Declare public constructor.;
    Point();// Declare public default constructor.
    int &x( int ); // Declare public accessor.
    int &y( int ); // Declare public accessor.

private:                 // Declare private state variables.
    int _x;
    int _y;

protected:      // Declare protected function for derived classes only.
    Point ToWindowCoords();
};
```

L'accesso predefinito si trova **`private`** in una classe e **`public`** in uno struct o Union. Gli specificatori di accesso in una classe possono essere usati per un numero qualsiasi di volte in qualunque ordine. L'allocazione di memoria per oggetti di tipo classe è indipendente dall'implementazione, ma ai membri vengono assegnati gli indirizzi di memoria successivamente superiori tra gli identificatori di accesso.

## <a name="member-access-control"></a>Controllo dell'accesso ai membri

|Tipo di accesso|Significato|
|--------------------|-------------|
|[privata](../cpp/private-cpp.md)|I membri della classe dichiarati come **`private`** possono essere usati solo dalle funzioni membro e dagli elementi Friend (classi o funzioni) della classe.|
|[protected](../cpp/protected-cpp.md)|I membri della classe dichiarati come **`protected`** possono essere utilizzati dalle funzioni membro e dagli elementi Friend (classi o funzioni) della classe. Inoltre, possono essere usati dalle classi derivate dalla classe.|
|[public](../cpp/public-cpp.md)|I membri della classe dichiarati come **`public`** possono essere utilizzati da qualsiasi funzione.|

Il controllo di accesso consente di impedire l'uso di oggetti secondo modalità di uso non previsto. Questa protezione viene persa quando vengono eseguite conversioni esplicite (di tipo cast).

> [!NOTE]
> Il controllo di accesso è ugualmente applicabile a tutti i nomi: funzioni membro, dati membro, classi annidate ed enumeratori.

## <a name="access-control-in-derived-classes"></a>Controllo di accesso nelle classi derivate

I due seguenti fattori controllano quali membri di una classe base sono accessibili in una classe derivata; questi stessi fattori controllano anche l'accesso ai membri ereditati presenti nella classe derivata:

- Indica se la classe derivata dichiara la classe di base usando l' **`public`** identificatore di accesso.

- Quale è l'accesso ai membri presenti nella della classe base.

La tabella riportata di seguito mostra l'interazione tra questi fattori e come è possibile determinare l'accesso ai membri della classe base.

### <a name="member-access-in-base-class"></a>Accesso ai membri nella classe base

|private|protected|Pubblico|
|-------------|---------------|------------|
|Sempre inaccessibile indipendentemente dall'accesso della derivazione|Privato nella classe derivata se si usa la derivazione privata|Privato nella classe derivata se si usa la derivazione privata|
||Protetto nella classe derivata se si usa la derivazione protetta|Protetto nella classe derivata se si usa la derivazione protetta|
||Protetto nella classe derivata se si usa la derivazione pubblica|Pubblico nella classe derivata se si usa la derivazione pubblica|

L'esempio seguente illustra questi concetti.

```cpp
// access_specifiers_for_base_classes.cpp
class BaseClass
{
public:
    int PublicFunc(); // Declare a public member.
protected:
    int ProtectedFunc(); // Declare a protected member.
private:
    int PrivateFunc(); // Declare a private member.
};

// Declare two classes derived from BaseClass.
class DerivedClass1 : public BaseClass
{
    void foo()
    {
        PublicFunc();
        ProtectedFunc();
        PrivateFunc(); // function is inaccessible
    }
};

class DerivedClass2 : private BaseClass
{
    void foo()
    {
        PublicFunc();
        ProtectedFunc();
        PrivateFunc(); // function is inaccessible
    }
};

int main()
{
    DerivedClass1 derived_class1;
    DerivedClass2 derived_class2;
    derived_class1.PublicFunc();
    derived_class2.PublicFunc(); // function is inaccessible
}
```

In `DerivedClass1` la funzione membro `PublicFunc` è un membro pubblico e `ProtectedFunc` è un membro protetto perché `BaseClass` è una classe base pubblica. `PrivateFunc` è privato per `BaseClass` ed è accessibile a tutte le classi derivate.

In `DerivedClass2` le funzioni `PublicFunc` e `ProtectedFunc` sono considerate membri privati perché `BaseClass` è una classe base privata. Anche in questo caso `PrivateFunc` è privato per `BaseClass` ed è inaccessibile a tutte le classi derivate.

È possibile dichiarare una classe derivata senza identificatore di accesso della classe base. In tal caso, la derivazione viene considerata privata se la dichiarazione della classe derivata usa la **`class`** parola chiave. La derivazione è considerata pubblica se la dichiarazione della classe derivata usa la **`struct`** parola chiave. Ad esempio, il seguente codice:

```cpp
class Derived : Base
...
```

Equivale a:

```cpp
class Derived : private Base
...
```

In modo analogo, il seguente codice.

```cpp
struct Derived : Base
...
```

Equivale a:

```cpp
struct Derived : public Base
...
```

Si noti che i membri dichiarati con accesso privato non sono accessibili alle funzioni o alle classi derivate a meno che tali funzioni o classi non vengano dichiarate utilizzando la **`friend`** dichiarazione nella classe di base.

Un **`union`** tipo non può avere una classe base.

> [!NOTE]
> Quando si specifica una classe base privata, è consigliabile usare in modo esplicito la **`private`** parola chiave per consentire agli utenti della classe derivata di comprendere l'accesso ai membri.

## <a name="access-control-and-static-members"></a>Controllo di accesso e membri statici

Quando si specifica una classe base come **`private`** , ha effetto solo sui membri non statici. I membri statici pubblici sono ancora accessibili nelle classi derivate. Tuttavia, l'accesso ai membri della classe base usando i puntatori, i riferimenti o gli oggetti può richiedere una conversione, momento in cui viene nuovamente applicato il controllo di accesso. Si consideri l'esempio seguente:

```cpp
// access_control.cpp
class Base
{
public:
    int Print();             // Nonstatic member.
    static int CountOf();    // Static member.
};

// Derived1 declares Base as a private base class.
class Derived1 : private Base
{
};
// Derived2 declares Derived1 as a public base class.
class Derived2 : public Derived1
{
    int ShowCount();    // Nonstatic member.
};
// Define ShowCount function for Derived2.
int Derived2::ShowCount()
{
   // Call static member function CountOf explicitly.
    int cCount = Base::CountOf();     // OK.

   // Call static member function CountOf using pointer.
    cCount = this->CountOf();  // C2247. Conversion of
                               //  Derived2 * to Base * not
                               //  permitted.
    return cCount;
}
```

Nel codice precedente, il controllo di accesso impedisce la conversione da un puntatore a `Derived2` in un puntatore a `Base`. Il **`this`** puntatore è implicitamente di tipo `Derived2 *` . Per selezionare la `CountOf` funzione, **`this`** deve essere convertito nel tipo `Base *` . Tale conversione non è consentita perché `Base` è una classe base indiretta privata di `Derived2`. La conversione in un tipo di classe base privata è accettabile solo per i puntatori alle classi derivate immediate. Di conseguenza, i puntatori di tipo `Derived1 *` possono essere convertiti nel tipo `Base *`.

Si noti che la chiamata alla funzione `CountOf` in modo esplicito, senza utilizzare un puntatore, un riferimento o un oggetto per selezionarla, non implica alcuna conversione. La chiamata è pertanto consentita.

I membri e gli elementi friend di una classe derivata, `T`, possono convertire un puntatore a `T` in un puntatore a una classe base diretta privata `T`.

## <a name="access-to-virtual-functions"></a>Accesso alle funzioni virtuali

Il controllo di accesso applicato alle funzioni [virtuali](../cpp/virtual-cpp.md) è determinato dal tipo usato per effettuare la chiamata di funzione. L'esecuzione dell'override delle dichiarazioni di funzione non influisce sul controllo accessi per un determinato tipo. Ad esempio:

```cpp
// access_to_virtual_functions.cpp
class VFuncBase
{
public:
    virtual int GetState() { return _state; }
protected:
    int _state;
};

class VFuncDerived : public VFuncBase
{
private:
    int GetState() { return _state; }
};

int main()
{
   VFuncDerived vfd;             // Object of derived type.
   VFuncBase *pvfb = &vfd;       // Pointer to base type.
   VFuncDerived *pvfd = &vfd;    // Pointer to derived type.
   int State;

   State = pvfb->GetState();     // GetState is public.
   State = pvfd->GetState();     // C2248 error expected; GetState is private;
}
```

Nell'esempio precedente, chiamando la funzione virtuale `GetState` mediante un al tipo `VFuncBase` viene chiamato `VFuncDerived::GetState` e `GetState` viene considerato come pubblico. Tuttavia, chiamando `GetState` con un puntatore al tipo `VFuncDerived` è una violazione del controllo accessi perché `GetState` è dichiarato privato nella classe `VFuncDerived`.

> [!CAUTION]
> La funzione virtuale `GetState` può essere chiamata usando un puntatore alla classe base `VFuncBase`. Ciò non significa che la funzione chiamata è la versione della classe base di tale funzione.

## <a name="access-control-with-multiple-inheritance"></a>Controllo di accesso con ereditarietà multipla

In reticoli con ereditarietà multipla che includono classi base virtuali un nome specificato può essere raggiunto da più di un percorso. Poiché a questi percorsi differenti è possibile applicare un controllo di accesso diverso, il compilatore sceglie il percorso con maggiori possibilità di accesso. Vedere la figura seguente.

![Rappresentazione grafica dell'accesso ai percorsi di un'ereditarietà](../cpp/media/vc38v91.gif "Rappresentazione grafica dell'accesso ai percorsi di un'ereditarietà") <br/>
Rappresentazione grafica dell'accesso ai percorsi di un'ereditarietà

Nella figura un nome dichiarato nella classe `VBase` viene sempre raggiunto tramite la classe `RightPath`. Il percorso corretto è più accessibile perché `RightPath` dichiara `VBase` come classe base pubblica, mentre `LeftPath` dichiara `VBase` come privata.

## <a name="see-also"></a>Vedi anche

[Riferimenti per il linguaggio C++](../cpp/cpp-language-reference.md)
