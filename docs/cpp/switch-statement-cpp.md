---
title: switchistruzione (C++)
description: Riferimento all'istruzione C++ standard switch in Microsoft Visual Studio c++.
ms.date: 04/25/2020
f1_keywords:
- default_cpp
- switch_cpp
- case_cpp
helpviewer_keywords:
- switch keyword [C++]
- case keyword [C++], in switch statements
- default keyword [C++]
no-loc:
- switch
- case
- default
- break
- while
- opt
ms.assetid: 6c3f3ed3-5593-463c-8f4b-b33742b455c6
ms.openlocfilehash: d43a7a64b5a74f00833093ae8999d73edd7f5753
ms.sourcegitcommit: c4cf8976939dd0e13e25b82930221323ba6f15d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/12/2020
ms.locfileid: "83204155"
---
# <a name="switch-statement-c"></a>`switch`istruzione (C++)

Consente la selezione tra più sezioni di codice, in base al valore di un'espressione integrale.

## <a name="syntax"></a>Sintassi

> *`selection-statement`*:\
> &nbsp;&nbsp;&nbsp;&nbsp;__`switch`__&nbsp;__`(`__&nbsp;*`init-statement`*<sub>opt</sub> <sup>C++ 17</sup>&nbsp;*`condition`*&nbsp;__`)`__&nbsp;*`statement`*

> *`init-statement`*:\
> &nbsp;&nbsp;&nbsp;&nbsp; *`expression-statement`*\
> &nbsp;&nbsp;&nbsp;&nbsp; *`simple-declaration`*

> *`condition`*:\
> &nbsp;&nbsp;&nbsp;&nbsp; *`expression`*\
> &nbsp;&nbsp;&nbsp;&nbsp; *`attribute-specifier-seq`*<sub>opt</sub>&nbsp;*`decl-specifier-seq`*&nbsp;*`declarator`*&nbsp;*`brace-or-equal-initializer`*

> *`labeled-statement`*:\
> &nbsp;&nbsp;&nbsp;&nbsp; __`case`__&nbsp;*`constant-expression`*&nbsp;__`:`__&nbsp;*`statement`*\
> &nbsp;&nbsp;&nbsp;&nbsp; __`default`__&nbsp;__`:`__&nbsp;*`statement`*

## <a name="remarks"></a>Osservazioni

Un' __`switch`__ istruzione fa sì che il controllo venga trasferito a uno *`labeled-statement`* nel corpo dell'istruzione, a seconda del valore di *`condition`* .

*`condition`* Deve avere un tipo integrale o essere un tipo di classe con una conversione non ambigua nel tipo integrale. La promozione integrale viene svolta come descritto in [conversioni standard](standard-conversions.md).

Il __`switch`__ corpo dell'istruzione è costituito da una serie di __`case`__ etichette e da un'etichetta facoltativa __`default`__ . Un oggetto *`labeled-statement`* è una di queste etichette e le istruzioni che seguono. Le istruzioni con etichette non sono requisiti sintattici, ma l' __`switch`__ istruzione non ha alcun significato. Nessuno dei due *`constant-expression`* valori nelle __`case`__ istruzioni può restituire lo stesso valore. L' __`default`__ etichetta può essere visualizzata una sola volta. L' __`default`__ istruzione viene spesso posizionata alla fine, ma può essere visualizzata in qualsiasi punto del __`switch`__ corpo dell'istruzione. Un' __`case`__ __`default`__ etichetta o può essere presente solo all'interno di un' __`switch`__ istruzione.

*`constant-expression`* In ogni __`case`__ etichetta viene convertito in un valore costante che è dello stesso tipo di *`condition`* . Quindi, viene confrontato con per verificarne l' *`condition`* uguaglianza. Il controllo passa alla prima istruzione dopo il __`case`__ *`constant-expression`* valore che corrisponde al valore di *`condition`* . Il comportamento risultante è illustrato nella tabella seguente.

### <a name="switch-statement-behavior"></a>`switch`comportamento dell'istruzione

| Condizione | Azione |
|--|--|
| Il valore convertito corrisponde a quello dell'espressione di controllo promossa. | Il controllo viene trasferito all'istruzione che segue tale etichetta. |
| Nessuna costante corrisponde alle costanti nelle __`case`__ etichette; __`default`__ è presente un'etichetta. | Il controllo viene trasferito all' __`default`__ etichetta. |
| Nessuna costante corrisponde alle costanti nelle __`case`__ etichette __`default`__ . non è presente alcuna etichetta. | Il controllo viene trasferito all'istruzione dopo l' __`switch`__ istruzione. |

Se viene trovata un'espressione corrispondente, l'esecuzione può proseguire con __`case`__ le __`default`__ etichette o successive. L' [`break`](../cpp/break-statement-cpp.md) istruzione viene utilizzata per arrestare l'esecuzione e trasferire il controllo all'istruzione dopo l' __`switch`__ istruzione. Senza un' __`break`__ istruzione, viene eseguita ogni istruzione dall' __`case`__ etichetta corrispondente alla fine di __`switch`__ , incluso __`default`__ . Ad esempio:

```cpp
// switch_statement1.cpp
#include <stdio.h>

int main() {
   const char *buffer = "Any character stream";
   int uppercase_A, lowercase_a, other;
   char c;
   uppercase_A = lowercase_a = other = 0;

   while ( c = *buffer++ )   // Walks buffer until NULL
   {
      switch ( c )
      {
         case 'A':
            uppercase_A++;
            break;
         case 'a':
            lowercase_a++;
            break;
         default:
            other++;
      }
   }
   printf_s( "\nUppercase A: %d\nLowercase a: %d\nTotal: %d\n",
      uppercase_A, lowercase_a, (uppercase_A + lowercase_a + other) );
}
```

Nell'esempio precedente `uppercase_A` viene incrementato se `c` è una `'A'` maiuscola. L' __`break`__ istruzione dopo `uppercase_A++` termina l'esecuzione del __`switch`__ corpo dell'istruzione e il controllo passa al __`while`__ ciclo. Senza l' __`break`__ istruzione, l'esecuzione passa alla successiva istruzione con etichetta, in modo che `lowercase_a` e `other` venga incrementato anche. Uno scopo analogo viene servito dall' __`break`__ istruzione per `case 'a'` . Se `c` è un carattere minuscolo `'a'` , `lowercase_a` viene incrementato e l' __`break`__ istruzione termina il __`switch`__ corpo dell'istruzione. Se `c` non è un oggetto `'a'` o `'A'` , l' __`default`__ istruzione viene eseguita.

**Visual Studio 2017 e versioni successive:** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)) l' `[[fallthrough]]` attributo viene specificato nello standard c++ 17. È possibile usarlo in un' __`switch`__ istruzione. Si tratta di un suggerimento per il compilatore o per chiunque legga il codice, il cui comportamento è intenzionale. Il compilatore Microsoft C++ non avverte attualmente il comportamento del FallThrough, pertanto questo attributo non ha alcun effetto sul comportamento del compilatore. Nell'esempio, l'attributo viene applicato a un'istruzione vuota all'interno dell'istruzione con etichetta senza terminazione. In altre parole, il punto e virgola è necessario.

```cpp
int main()
{
    int n = 5;
    switch (n)
    {

    case 1:
        a();
        break;
    case 2:
        b();
        d();
        [[fallthrough]]; // I meant to do this!
    case 3:
        c();
        break;
    default:
        d();
        break;
    }

    return 0;
}
```

**Visual Studio 2017 versione 15,3 e successive** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)). Un' __`switch`__ istruzione può includere una *`init-statement`* clausola che termina con un punto e virgola. Introduce e Inizializza una variabile il cui ambito è limitato al blocco dell' __`switch`__ istruzione:

```cpp
    switch (Gadget gadget(args); auto s = gadget.get_status())
    {
    case status::good:
        gadget.zip();
        break;
    case status::bad:
        throw BadGadget();
    };
```

Un blocco interno di un' __`switch`__ istruzione può contenere definizioni con inizializzatori purché siano *raggiungibili*, ovvero non ignorate da tutti i possibili percorsi di esecuzione. I nomi introdotti utilizzando queste dichiarazioni hanno ambito locale. Ad esempio:

```cpp
// switch_statement2.cpp
// C2360 expected
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    switch( tolower( *argv[1] ) )
    {
        // Error. Unreachable declaration.
        char szChEntered[] = "Character entered was: ";

    case 'a' :
        {
        // Declaration of szChEntered OK. Local scope.
        char szChEntered[] = "Character entered was: ";
        cout << szChEntered << "a\n";
        }
        break;

    case 'b' :
        // Value of szChEntered undefined.
        cout << szChEntered << "b\n";
        break;

    default:
        // Value of szChEntered undefined.
        cout << szChEntered << "neither a nor b\n";
        break;
    }
}
```

Un' __`switch`__ istruzione può essere annidata. Quando nidificate, __`case`__ le __`default`__ etichette o sono associate all'istruzione più vicina __`switch`__ che le racchiude.

### <a name="microsoft-specific-behavior"></a>Comportamento specifico di Microsoft

Microsoft C++ non limita il numero di __`case`__ valori in un' __`switch`__ istruzione. Tale numero è limitato solo dalla memoria disponibile.

## <a name="see-also"></a>Vedere anche

[Istruzioni di selezione](../cpp/selection-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
