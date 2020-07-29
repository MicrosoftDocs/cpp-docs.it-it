---
title: :::no-loc(switch):::istruzione (C++)
description: "Riferimento all'istruzione C++ standard :::no-loc(switch)::: in Microsoft Visual Studio c++."
ms.date: 04/25/2020
f1_keywords:
- :::no-loc(default):::_cpp
- :::no-loc(switch):::_cpp
- :::no-loc(case):::_cpp
helpviewer_keywords:
- ':::no-loc(switch)::: keyword [C++]'
- ':::no-loc(case)::: keyword [C++], in :::no-loc(switch)::: statements'
- ':::no-loc(default)::: keyword [C++]'
no-loc:
- ':::no-loc(switch):::'
- ':::no-loc(case):::'
- ':::no-loc(default):::'
- ':::no-loc(break):::'
- ':::no-loc(while):::'
- ':::no-loc(opt):::'
ms.assetid: 6c3f3ed3-5593-463c-8f4b-b33742b455c6
ms.openlocfilehash: d71989b6d8af0213c4cd6d4fbd8d5a84b318701a
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223590"
---
# <a name="no-locswitch-statement-c"></a>`:::no-loc(switch):::`istruzione (C++)

Consente la selezione tra più sezioni di codice, in base al valore di un'espressione integrale.

## <a name="syntax"></a>Sintassi

> *`selection-statement`*:\
> &nbsp;&nbsp;&nbsp;&nbsp;**`:::no-loc(switch):::`**&nbsp;**`(`**&nbsp;*`init-statement`*<sub>:::no-loc(opt):::</sub> <sup>C++ 17</sup>&nbsp;*`condition`*&nbsp;**`)`**&nbsp;*`statement`*

> *`init-statement`*:\
> &nbsp;&nbsp;&nbsp;&nbsp; *`expression-statement`*\
> &nbsp;&nbsp;&nbsp;&nbsp; *`simple-declaration`*

> *`condition`*:\
> &nbsp;&nbsp;&nbsp;&nbsp; *`expression`*\
> &nbsp;&nbsp;&nbsp;&nbsp; *`attribute-specifier-seq`*<sub>:::no-loc(opt):::</sub>&nbsp;*`decl-specifier-seq`*&nbsp;*`declarator`*&nbsp;*`brace-or-equal-initializer`*

> *`labeled-statement`*:\
> &nbsp;&nbsp;&nbsp;&nbsp; **`:::no-loc(case):::`**&nbsp;*`constant-expression`*&nbsp;**`:`**&nbsp;*`statement`*\
> &nbsp;&nbsp;&nbsp;&nbsp; **`:::no-loc(default):::`**&nbsp;**`:`**&nbsp;*`statement`*

## <a name="remarks"></a>Osservazioni

Un' **`:::no-loc(switch):::`** istruzione fa sì che il controllo venga trasferito a uno *`labeled-statement`* nel corpo dell'istruzione, a seconda del valore di *`condition`* .

*`condition`* Deve avere un tipo integrale o essere un tipo di classe con una conversione non ambigua nel tipo integrale. La promozione integrale viene svolta come descritto in [conversioni standard](standard-conversions.md).

Il **`:::no-loc(switch):::`** corpo dell'istruzione è costituito da una serie di **`:::no-loc(case):::`** etichette e da un' :::no-loc(opt)::: etichetta ionale **`:::no-loc(default):::`** . Un oggetto *`labeled-statement`* è una di queste etichette e le istruzioni che seguono. Le istruzioni con etichette non sono requisiti sintattici, ma l' **`:::no-loc(switch):::`** istruzione non ha alcun significato. Nessuno dei due *`constant-expression`* valori nelle **`:::no-loc(case):::`** istruzioni può restituire lo stesso valore. L' **`:::no-loc(default):::`** etichetta può essere visualizzata una sola volta. L' **`:::no-loc(default):::`** istruzione viene spesso posizionata alla fine, ma può essere visualizzata in qualsiasi punto del **`:::no-loc(switch):::`** corpo dell'istruzione. Un' **`:::no-loc(case):::`** **`:::no-loc(default):::`** etichetta o può essere presente solo all'interno di un' **`:::no-loc(switch):::`** istruzione.

*`constant-expression`* In ogni **`:::no-loc(case):::`** etichetta viene convertito in un valore costante che è dello stesso tipo di *`condition`* . Quindi, viene confrontato con per verificarne l' *`condition`* uguaglianza. Il controllo passa alla prima istruzione dopo il **`:::no-loc(case):::`** *`constant-expression`* valore che corrisponde al valore di *`condition`* . Il comportamento risultante è illustrato nella tabella seguente.

### <a name="no-locswitch-statement-behavior"></a>`:::no-loc(switch):::`comportamento dell'istruzione

| Condizione | Azione |
|--|--|
| Il valore convertito corrisponde a quello dell'espressione di controllo promossa. | Il controllo viene trasferito all'istruzione che segue tale etichetta. |
| Nessuna costante corrisponde alle costanti nelle **`:::no-loc(case):::`** etichette; **`:::no-loc(default):::`** è presente un'etichetta. | Il controllo viene trasferito all' **`:::no-loc(default):::`** etichetta. |
| Nessuna costante corrisponde alle costanti nelle **`:::no-loc(case):::`** etichette **`:::no-loc(default):::`** . non è presente alcuna etichetta. | Il controllo viene trasferito all'istruzione dopo l' **`:::no-loc(switch):::`** istruzione. |

Se viene trovata un'espressione corrispondente, l'esecuzione può proseguire con **`:::no-loc(case):::`** le **`:::no-loc(default):::`** etichette o successive. L' [`:::no-loc(break):::`](../cpp/:::no-loc(break):::-statement-cpp.md) istruzione viene utilizzata per arrestare l'esecuzione e trasferire il controllo all'istruzione dopo l' **`:::no-loc(switch):::`** istruzione. Senza un' **`:::no-loc(break):::`** istruzione, viene eseguita ogni istruzione dall' **`:::no-loc(case):::`** etichetta corrispondente alla fine di **`:::no-loc(switch):::`** , incluso **`:::no-loc(default):::`** . Ad esempio:

```cpp
// :::no-loc(switch):::_statement1.cpp
#include <stdio.h>

int main() {
   const char *buffer = "Any character stream";
   int upper:::no-loc(case):::_A, lower:::no-loc(case):::_a, other;
   char c;
   upper:::no-loc(case):::_A = lower:::no-loc(case):::_a = other = 0;

   :::no-loc(while)::: ( c = *buffer++ )   // Walks buffer until NULL
   {
      :::no-loc(switch)::: ( c )
      {
         :::no-loc(case)::: 'A':
            upper:::no-loc(case):::_A++;
            :::no-loc(break):::;
         :::no-loc(case)::: 'a':
            lower:::no-loc(case):::_a++;
            :::no-loc(break):::;
         :::no-loc(default)::::
            other++;
      }
   }
   printf_s( "\nUpper:::no-loc(case)::: A: %d\nLower:::no-loc(case)::: a: %d\nTotal: %d\n",
      upper:::no-loc(case):::_A, lower:::no-loc(case):::_a, (upper:::no-loc(case):::_A + lower:::no-loc(case):::_a + other) );
}
```

Nell'esempio precedente, `upper:::no-loc(case):::_A` viene incrementato se `c` è un valore superiore :::no-loc(case)::: `'A'` . L' **`:::no-loc(break):::`** istruzione dopo `upper:::no-loc(case):::_A++` termina l'esecuzione del **`:::no-loc(switch):::`** corpo dell'istruzione e il controllo passa al **`:::no-loc(while):::`** ciclo. Senza l' **`:::no-loc(break):::`** istruzione, l'esecuzione passa alla successiva istruzione con etichetta, in modo che `lower:::no-loc(case):::_a` e `other` venga incrementato anche. Uno scopo analogo viene servito dall' **`:::no-loc(break):::`** istruzione per `:::no-loc(case)::: 'a'` . Se `c` è un oggetto inferiore :::no-loc(case)::: `'a'` , `lower:::no-loc(case):::_a` viene incrementato e l' **`:::no-loc(break):::`** istruzione termina il **`:::no-loc(switch):::`** corpo dell'istruzione. Se `c` non è un oggetto `'a'` o `'A'` , l' **`:::no-loc(default):::`** istruzione viene eseguita.

**Visual Studio 2017 e versioni successive:** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)) l' `[[fallthrough]]` attributo viene specificato nello standard c++ 17. È possibile usarlo in un' **`:::no-loc(switch):::`** istruzione. Si tratta di un suggerimento per il compilatore o per chiunque legga il codice, il cui comportamento è intenzionale. Il compilatore Microsoft C++ non avverte attualmente il comportamento del FallThrough, pertanto questo attributo non ha alcun effetto sul comportamento del compilatore. Nell'esempio, l'attributo viene applicato a un'istruzione vuota all'interno dell'istruzione con etichetta senza terminazione. In altre parole, il punto e virgola è necessario.

```cpp
int main()
{
    int n = 5;
    :::no-loc(switch)::: (n)
    {

    :::no-loc(case)::: 1:
        a();
        :::no-loc(break):::;
    :::no-loc(case)::: 2:
        b();
        d();
        [[fallthrough]]; // I meant to do this!
    :::no-loc(case)::: 3:
        c();
        :::no-loc(break):::;
    :::no-loc(default)::::
        d();
        :::no-loc(break):::;
    }

    return 0;
}
```

**Visual Studio 2017 versione 15,3 e successive** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)). Un' **`:::no-loc(switch):::`** istruzione può includere una *`init-statement`* clausola che termina con un punto e virgola. Introduce e Inizializza una variabile il cui ambito è limitato al blocco dell' **`:::no-loc(switch):::`** istruzione:

```cpp
    :::no-loc(switch)::: (Gadget gadget(args); auto s = gadget.get_status())
    {
    :::no-loc(case)::: status::good:
        gadget.zip();
        :::no-loc(break):::;
    :::no-loc(case)::: status::bad:
        throw BadGadget();
    };
```

Un blocco interno di un' **`:::no-loc(switch):::`** istruzione può contenere definizioni con inizializzatori purché siano *raggiungibili*, ovvero non ignorate da tutti i possibili percorsi di esecuzione. I nomi introdotti utilizzando queste dichiarazioni hanno ambito locale. Ad esempio:

```cpp
// :::no-loc(switch):::_statement2.cpp
// C2360 expected
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    :::no-loc(switch):::( tolower( *argv[1] ) )
    {
        // Error. Unreachable declaration.
        char szChEntered[] = "Character entered was: ";

    :::no-loc(case)::: 'a' :
        {
        // Declaration of szChEntered OK. Local scope.
        char szChEntered[] = "Character entered was: ";
        cout << szChEntered << "a\n";
        }
        :::no-loc(break):::;

    :::no-loc(case)::: 'b' :
        // Value of szChEntered undefined.
        cout << szChEntered << "b\n";
        :::no-loc(break):::;

    :::no-loc(default)::::
        // Value of szChEntered undefined.
        cout << szChEntered << "neither a nor b\n";
        :::no-loc(break):::;
    }
}
```

Un' **`:::no-loc(switch):::`** istruzione può essere annidata. Quando nidificate, **`:::no-loc(case):::`** le **`:::no-loc(default):::`** etichette o sono associate all'istruzione più vicina **`:::no-loc(switch):::`** che le racchiude.

### <a name="microsoft-specific-behavior"></a>Comportamento specifico di Microsoft

Microsoft C++ non limita il numero di **`:::no-loc(case):::`** valori in un' **`:::no-loc(switch):::`** istruzione. Tale numero è limitato solo dalla memoria disponibile.

## <a name="see-also"></a>Vedere anche

[Istruzioni di selezione](../cpp/selection-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
