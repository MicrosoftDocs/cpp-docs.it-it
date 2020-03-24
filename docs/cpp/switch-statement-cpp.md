---
title: Istruzione switch (C++)
ms.date: 05/06/2019
f1_keywords:
- default_cpp
- switch_cpp
- case_cpp
helpviewer_keywords:
- switch keyword [C++]
- case keyword [C++], in switch statements
- default keyword [C++]
ms.assetid: 6c3f3ed3-5593-463c-8f4b-b33742b455c6
ms.openlocfilehash: 6b09c0eac939f7ca6a12b68ce5deb3fb83ad27c6
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80160814"
---
# <a name="switch-statement-c"></a>Istruzione switch (C++)

Consente la selezione tra più sezioni di codice, in base al valore di un'espressione integrale.

## <a name="syntax"></a>Sintassi

```
   switch ( init; expression )
   case constant-expression : statement
   [default  : statement]
```

## <a name="remarks"></a>Osservazioni

L' *espressione* deve essere di un tipo integrale o di un tipo di classe per il quale esiste una conversione non ambigua nel tipo integrale. La promozione integrale viene eseguita come descritto in [conversioni standard](standard-conversions.md).

Il corpo dell'istruzione **Switch** è costituito da una serie di etichette **case** e da un'etichetta **predefinita** facoltativa. Due espressioni costanti nelle istruzioni **case** non possono restituire lo stesso valore. L'etichetta **predefinita** può essere visualizzata una sola volta. Le istruzioni con etichette non sono requisiti sintattici, ma l'istruzione **Switch** non è significativa senza di essi.   L'istruzione default non deve necessariamente essere alla fine; può apparire in un punto qualsiasi del corpo dell'istruzione switch. Un'etichetta case o default può apparire solo all'interno di un'istruzione switch.

*Constant-Expression* in ogni etichetta **case** viene convertito nel tipo di *espressione* e viene confrontato con *Expression* per verificarne l'uguaglianza. Il controllo passa all'istruzione la **cui** *espressione constant-expression* corrisponde al valore di *Expression*. Il comportamento risultante è illustrato nella tabella seguente.

### <a name="switch-statement-behavior"></a>Comportamento dell'istruzione switch

|Condizione|Azione|
|---------------|------------|
|Il valore convertito corrisponde a quello dell'espressione di controllo promossa.|Il controllo viene trasferito all'istruzione che segue tale etichetta.|
|Nessuna costante corrisponde alle costanti nelle etichette del **case** ; è presente un'etichetta **predefinita** .|Il controllo viene trasferito all'etichetta **predefinita** .|
|Nessuna costante corrisponde alle costanti nelle etichette del **case** ; l'etichetta **predefinita** non è presente.|Il controllo viene trasferito all'istruzione dopo l'istruzione **Switch** .|

Se viene trovata un'espressione corrispondente, il controllo non viene impedito da etichette **case** o **predefinite** successive. L'istruzione [break](../cpp/break-statement-cpp.md) viene utilizzata per arrestare l'esecuzione e trasferire il controllo all'istruzione dopo l'istruzione **Switch** . Senza un'istruzione **break** , viene eseguita ogni istruzione dall'etichetta **case** corrispondente alla fine dell' **opzione**, incluso il **valore predefinito**. Ad esempio:

```cpp
// switch_statement1.cpp
#include <stdio.h>

int main() {
   char *buffer = "Any character stream";
   int capa, lettera, nota;
   char c;
   capa = lettera = nota = 0;

   while ( c = *buffer++ )   // Walks buffer until NULL
   {
      switch ( c )
      {
         case 'A':
            capa++;
            break;
         case 'a':
            lettera++;
            break;
         default:
            nota++;
      }
   }
   printf_s( "\nUppercase a: %d\nLowercase a: %d\nTotal: %d\n",
      capa, lettera, (capa + lettera + nota) );
}
```

Nell'esempio precedente `capa` viene incrementato se `c` è una `A` maiuscola. L'istruzione **break** dopo `capa++` termina l'esecuzione del corpo dell'istruzione **Switch** e il controllo passa al ciclo **while** . Senza l'istruzione **break** , l'esecuzione passa alla successiva istruzione con etichetta, in modo che venga incrementato anche `lettera` e `nota`. Uno scopo analogo viene servito dall'istruzione **break** per `case 'a'`. Se `c` è una `a`minuscola, `lettera` viene incrementata e l'istruzione **break** termina il corpo dell'istruzione **Switch** . Se `c` non è un `a` o `A`, viene eseguita l'istruzione **predefinita** .

**Visual Studio 2017 e versioni successive:** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)) l'attributo `[[fallthrough]]` viene specificato nello standard c++ 17. Può essere usato in un'istruzione **Switch** come hint per il compilatore (o per chiunque legga il codice) che è previsto il comportamento ricadente. Il compilatore C++ Microsoft non avverte attualmente il comportamento del FallThrough, pertanto questo attributo non ha alcun effetto sul comportamento del compilatore. Si noti che l'attributo viene applicato a un'istruzione vuota all'interno dell'istruzione con etichetta. in altre parole, il punto e virgola è necessario.

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

**Visual Studio 2017 versione 15,3 e successive** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)): un'istruzione switch può introdurre e inizializzare una variabile il cui ambito è limitato al blocco dell'istruzione switch:

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

Un blocco interno di un'istruzione **Switch** può contenere definizioni con inizializzazioni purché siano raggiungibili, ovvero non ignorate da tutti i possibili percorsi di esecuzione. I nomi introdotti utilizzando queste dichiarazioni hanno ambito locale. Ad esempio:

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

Un'istruzione **Switch** può essere annidata. In questi casi, le etichette **case** o **default** sono associate all'istruzione **Switch** più vicina che li racchiude.

**Sezione specifica Microsoft**

Microsoft C non limita il numero di valori case in un'istruzione **Switch** . Tale numero è limitato solo dalla memoria disponibile. ANSI C richiede che siano consentite almeno 257 etichette case in un'istruzione **Switch** .

Per impostazione predefinita, in Microsoft C le estensioni Microsoft sono abilitate. Usare l'opzione del compilatore [/za](../build/reference/za-ze-disable-language-extensions.md) per disabilitare queste estensioni.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Istruzioni di selezione](../cpp/selection-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
