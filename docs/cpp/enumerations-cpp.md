---
title: Enumerazioni (C++)
ms.date: 06/01/2018
f1_keywords:
- enum_cpp
helpviewer_keywords:
- declarations, enumerations
- enumerators, declaring
- enum keyword [C++]
- named constants, enumeration declarations
- declaring enumerations
ms.assetid: 081829db-5dca-411e-a53c-bffef315bcb3
ms.openlocfilehash: 67b03256390d5447ae5accc28dd450a7f60f485c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80180186"
---
# <a name="enumerations-c"></a>Enumerazioni (C++)

Un'enumerazione è un tipo definito dall'utente costituito da un set di costanti integrali note come enumeratori.

> [!NOTE]
>  Questo articolo illustra il tipo di C++ **enumerazione** del linguaggio standard ISO e il tipo di **classe enum** con ambito (o fortemente tipizzato), introdotto in c++ 11. Per informazioni sulla **classe enum pubblica** o sui tipi di **classe Enum privati** in C++/CLI C++e/CX, vedere [enum class](../extensions/enum-class-cpp-component-extensions.md).

## <a name="syntax"></a>Sintassi

```
// unscoped enum:
enum [identifier] [: type]
{enum-list};

// scoped enum:
enum [class|struct]
[identifier] [: type]
{enum-list};
```

```cpp
// Forward declaration of enumerations  (C++11):
enum A : int; // non-scoped enum must have type specified
enum class B; // scoped enum defaults to int but ...
enum class C : short;  // ... may have any integral underlying type
```

## <a name="parameters"></a>Parametri

*identifier*<br/>
Nome del tipo assegnato all'enumerazione.

*type*<br/>
Tipo sottostante degli enumeratori. Tutti gli enumeratori dispongono dello stesso tipo sottostante. Può essere un tipo integrale qualsiasi.

*elenco enum*<br/>
Elenco degli enumeratori nell'enumerazione separati da virgola. Ogni enumeratore o nome della variabile nell'ambito deve essere univoco. I valori possono essere tuttavia duplicati. In un'enumerazione senza ambito, l'ambito è l'ambito circostante; in un'enumerazione con ambito, l'ambito è *enum-list* stesso.  In un'enumerazione con ambito, l'elenco può essere vuoto, che in effetti definisce un nuovo tipo integrale.

*class*<br/>
Utilizzando questa parola chiave nella dichiarazione, si specifica che l'enumerazione è con ambito ed è necessario fornire un *identificatore* . È anche possibile usare la parola chiave **struct** al posto della **classe**, perché sono semanticamente equivalenti in questo contesto.

## <a name="enumerator-scope"></a>Ambito enumeratore

Un'enumerazione fornisce contesto per descrivere un intervallo di valori rappresentati come costanti denominate e che vengono chiamati anche enumeratori. Nei tipi di enumerazione C e C++ gli enumeratori non qualificati sono visibili in tutto l'ambito in cui viene dichiarata l'enumerazione. Nelle enumerazioni con ambito il nome dell'enumeratore deve essere qualificato dal nome del tipo di enumerazione. Nell'esempio seguente viene illustrata questa differenza di base tra i due tipi di enumerazioni:

```cpp
namespace CardGame_Scoped
{
    enum class Suit { Diamonds, Hearts, Clubs, Spades };

    void PlayCard(Suit suit)
    {
        if (suit == Suit::Clubs) // Enumerator must be qualified by enum type
        { /*...*/}
    }
}

namespace CardGame_NonScoped
{
    enum Suit { Diamonds, Hearts, Clubs, Spades };

    void PlayCard(Suit suit)
    {
        if (suit == Clubs) // Enumerator is visible without qualification
        { /*...*/
        }
    }
}
```

A ogni nome nell'enumerazione viene assegnato un valore integrale che corrisponde alla posizione di tale valore nell'ordine dei valori nell'enumerazione. Per impostazione predefinita, al primo valore viene assegnato 0, a quello successivo viene assegnato 1 e così via, ma è possibile impostare in modo esplicito il valore di un enumeratore, come illustrato di seguito:

```cpp
enum Suit { Diamonds = 1, Hearts, Clubs, Spades };
```

All'enumeratore `Diamonds` viene assegnato al valore `1`. Gli enumeratori successivi, se viene loro assegnato un valore esplicito, ricevono il valore dell'enumeratore precedente più uno. Nell'esempio precedente `Hearts` avrebbe il valore 2, `Clubs` avrebbe il valore 3 e così via.

Ogni enumeratore viene considerato come una costante e deve avere un nome univoco all'interno dell'ambito in cui è definita l' **enumerazione** (per le enumerazioni senza ambito) o all'interno dell' **enum** stesso (per le enumerazioni con ambito). I valori assegnati ai nomi non devono essere univoci. Ad esempio, se la dichiarazione di un'enumerazione senza ambito `Suit` è la seguente:

```cpp
enum Suit { Diamonds = 5, Hearts, Clubs = 4, Spades };
```

I valori di `Diamonds`, `Hearts`, `Clubs` e `Spades` sono rispettivamente 5, 6, 4 e 5. Si noti che 5 viene usato più di una volta. Questo è consentito anche se potrebbe non essere previsto. Queste regole sono identiche a quelle delle enumerazioni con ambito.

## <a name="casting-rules"></a>Regole di cast

Le costanti di enumerazione senza ambito possono essere convertite in modo implicito in **int**, ma un **int** non è mai convertibile in modo implicito in un valore enum. Nell'esempio seguente viene mostrato cosa avviene se si tenta di assegnare a `hand` un valore che non sia `Suit`:

```cpp
int account_num = 135692;
Suit hand;
hand = account_num; // error C2440: '=' : cannot convert from 'int' to 'Suit'
```

È necessario un cast per convertire un valore **int** in un enumeratore con ambito o senza ambito. È tuttavia possibile alzare di livello un enumeratore senza ambito in un Integer senza un cast.

```cpp
int account_num = Hearts; //OK if Hearts is in a unscoped enum
```

L'uso di conversioni implicite in questo modo può generare effetti collaterali imprevisti. Per eliminare gli errori di programmazione associati alle enumerazioni senza ambito, i valori delle enumerazioni con ambito sono fortemente tipizzati. Gli enumeratori con ambito devono essere qualificati dal nome del tipo di enumerazione (identificatore) e non possono essere convertiti in modo implicito, come illustrato nell'esempio seguente:

```cpp
namespace ScopedEnumConversions
{
    enum class Suit { Diamonds, Hearts, Clubs, Spades };

    void AttemptConversions()
    {
        Suit hand;
        hand = Clubs; // error C2065: 'Clubs' : undeclared identifier
        hand = Suit::Clubs; //Correct.
        int account_num = 135692;
        hand = account_num; // error C2440: '=' : cannot convert from 'int' to 'Suit'
        hand = static_cast<Suit>(account_num); // OK, but probably a bug!!!

        account_num = Suit::Hearts; // error C2440: '=' : cannot convert from 'Suit' to 'int'
        account_num = static_cast<int>(Suit::Hearts); // OK
    }
}
```

Notare che la riga `hand = account_num;` causa ancora l'errore che si verifica con le enumerazioni senza ambito, come illustrato in precedenza. È consentita con un cast esplicito. Tuttavia, con le enumerazioni con ambito, la conversione tentata nell'istruzione successiva, `account_num = Suit::Hearts;`, non è più consentita senza un cast esplicito.

## <a name="enums-with-no-enumerators"></a><a name="no_enumerators"></a>Enumerazioni senza enumeratori

**Visual Studio 2017 versione 15,3 e successive** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)): definendo un'enumerazione (regolare o con ambito) con un tipo sottostante esplicito e senza enumeratori, è possibile introdurre un nuovo tipo integrale senza conversione implicita in un altro tipo. Utilizzando questo tipo anziché il tipo sottostante incorporato, è possibile eliminare il rischio di errori evidenti causati da conversioni implicite involontarie.

```cpp
enum class byte : unsigned char { };
```

Il nuovo tipo è una copia esatta del tipo sottostante e pertanto ha la stessa convenzione di chiamata, il che significa che può essere usato tra le ABI senza alcuna riduzione delle prestazioni. Non è necessario alcun cast quando le variabili del tipo vengono inizializzate tramite l'inizializzazione Direct-List. Nell'esempio seguente viene illustrato come inizializzare le enumerazioni senza enumeratori in diversi contesti:

```cpp
enum class byte : unsigned char { };

enum class E : int { };
E e1{ 0 };
E e2 = E{ 0 };

struct X
{
    E e{ 0 };
    X() : e{ 0 } { }
};

E* p = new E{ 0 };

void f(E e) {};

int main()
{
    f(E{ 0 });
    byte i{ 42 };
    byte j = byte{ 42 };

    // unsigned char c = j; // C2440: 'initializing': cannot convert from 'byte' to 'unsigned char'
    return 0;
}
```

## <a name="see-also"></a>Vedere anche

[Dichiarazioni di enumerazioni C](../c-language/c-enumeration-declarations.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
