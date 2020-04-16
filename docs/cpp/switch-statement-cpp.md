---
title: switchl'istruzione (C)
description: Riferimento switch all'istruzione standard di C, in Microsoft Visual Studio.
ms.date: 04/15/2020
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
ms.assetid: 6c3f3ed3-5593-463c-8f4b-b33742b455c6
ms.openlocfilehash: 1f65d4699423d74be9c75a9be47e543a9a1256e2
ms.sourcegitcommit: 9266fc76ac2e872e35a208b4249660dfdfc87cba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/16/2020
ms.locfileid: "81480827"
---
# <a name="opno-locswitch-statement-c"></a>switchl'istruzione (C)

Consente la selezione tra più sezioni di codice, in base al valore di un'espressione integrale.

## <a name="syntax"></a>Sintassi

> **`switch (`**\[ *initialization* initialization **`;`**] *espressione***`)`**\
> **`{`**\
> &nbsp;&nbsp;&nbsp;&nbsp;**`case`***constant-expression* **`:`** *(istruzione)*\
> &nbsp;&nbsp;&nbsp;&nbsp;\[**`default :`***istruzione*] \
> **`}`**

## <a name="remarks"></a>Osservazioni

*L'espressione* deve avere un tipo integrale o essere un tipo di classe con una conversione non ambigua in tipo integrale. La promozione integrale avviene come descritto in [Conversioni Standard](standard-conversions.md).

Il **switch** corpo dell'istruzione **case** è costituito **default** da una serie di etichette e da un'etichetta facoltativa. Collettivamente, le istruzioni che seguono le etichette sono chiamate istruzioni *con etichetta.* Le istruzioni etichettate non sono requisiti sintattici, ma l'istruzione **switch** è priva di significato senza di esse. Due espressioni costanti **case** nelle istruzioni non possono restituire lo stesso valore. L'etichetta **default** può apparire una sola volta. L'istruzione **default** viene spesso posta alla fine, ma può **switch** apparire in qualsiasi punto del corpo dell'istruzione. Un'etichetta **case** o **default** può **switch** apparire solo all'interno di un'istruzione.

*L'espressione costante* **case** in ogni etichetta viene convertita nel tipo di *espressione*. Quindi, viene confrontato con *l'espressione* per l'uguaglianza. Il controllo passa **case** all'istruzione la cui *espressione costante* corrisponde al valore di *expression*. Il comportamento risultante è illustrato nella tabella seguente.

### <a name="switch-statement-behavior"></a>Comportamento delle istruzioni Switch

| Condizione | Azione |
|--|--|
| Il valore convertito corrisponde a quello dell'espressione di controllo promossa. | Il controllo viene trasferito all'istruzione che segue tale etichetta. |
| Nessuna delle costanti corrisponde alle costanti **case** nelle etichette; è **default** presente un'etichetta. | Il controllo viene **default** trasferito all'etichetta. |
| Nessuna delle costanti corrisponde alle costanti **case** nelle etichette; non **default** è presente alcuna etichetta. | Il controllo viene trasferito **switch** all'istruzione dopo l'istruzione. |

Se viene trovata un'espressione corrispondente, **case** **default** l'esecuzione può continuare in un secondo momento o in etichette. L'istruzione [`break`](../cpp/break-statement-cpp.md) viene utilizzata per interrompere l'esecuzione **switch** e trasferire il controllo all'istruzione dopo l'istruzione. Senza **break** un'istruzione, viene eseguita ogni istruzione dall'etichetta corrispondente **case** alla fine di **switch**, incluso il , che include l'istruzione **default**. Ad esempio:

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

Nell'esempio precedente `uppercase_A` viene incrementato se `c` è una `'A'` maiuscola. **break** L'istruzione `uppercase_A++` dopo termina **switch** l'esecuzione del corpo **while** dell'istruzione e il controllo passa al ciclo. Senza **break** l'istruzione, l'esecuzione sarebbe "fall attraverso" `lowercase_a` per `other` l'istruzione con etichetta successiva, in modo che e sarebbe anche incrementato. Uno scopo simile è **break** servito `case 'a'`dalla dichiarazione per . Se `c` è un `'a'` `lowercase_a` carattere minuscolo, viene incrementato e l'istruzione **break** termina il corpo dell'istruzione. **switch** Se `c` non è `'a'` `'A'`un **default** o , l'istruzione viene eseguita.

**Visual Studio 2017 e versioni successive:** (disponibile con [/std:c'17](../build/reference/std-specify-language-standard-version.md)) L'attributo `[[fallthrough]]` è specificato nello standard C . È possibile utilizzarlo **switch** in un'istruzione. È un suggerimento per il compilatore, o chiunque legga il codice, che il comportamento fall-through è intenzionale. Attualmente, il compilatore Microsoft C' non avvisa in caso di comportamento di fallthrough, pertanto questo attributo non ha alcun effetto sul comportamento del compilatore. Nell'esempio, l'attributo viene applicato a un'istruzione vuota all'interno dell'istruzione con etichetta senza terminazione. In altre parole, il punto e virgola è necessario.

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

**Visual Studio 2017 versione 15.3 e versioni successive** (disponibile con [/std:c](../build/reference/std-specify-language-standard-version.md) Un'istruzione switch può avere una clausola di *inizializzazione.* Introduce e inizializza una variabile il cui ambito è switch limitato al blocco dell'istruzione:

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

Un blocco interno **switch** di un'istruzione può contenere definizioni con inizializzazioni, purché siano *raggiungibili,* ovvero non ignorate da tutti i possibili percorsi di esecuzione. I nomi introdotti utilizzando queste dichiarazioni hanno ambito locale. Ad esempio:

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

Un'istruzione **switch** può essere annidata. Quando sono **case** annidate, le etichette o **default** vengono associate all'istruzione più vicina **switch** che le racchiude.

### <a name="microsoft-specific-behavior"></a>Comportamento specifico di Microsoft

Microsoft C non limita il **case** numero **switch** di valori in un'istruzione. Tale numero è limitato solo dalla memoria disponibile. ANSI C richiede che **case** in un'istruzione **switch** siano consentite almeno 257 etichette.

Il default per Microsoft C è che le estensioni Microsoft sono abilitate. Utilizzare l'opzione del compilatore [/a](../build/reference/za-ze-disable-language-extensions.md) per disabilitare queste estensioni.

## <a name="see-also"></a>Vedere anche

[Istruzioni di selezione](../cpp/selection-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
