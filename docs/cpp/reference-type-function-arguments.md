---
title: Argomenti della funzione tipo-riferimento
ms.date: 08/27/2018
helpviewer_keywords:
- arguments [C++], function
- functions [C++], parameters
- function parameters [C++], reference-type
- function arguments [C++], reference-type
- passing parameters [C++], reference-type arguments
ms.assetid: 0a70e831-9e76-46c0-821d-aeba13d73cc0
ms.openlocfilehash: 5a409efbe2908954d394656cb989ad6b80a9ce22
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233639"
---
# <a name="reference-type-function-arguments"></a>Argomenti della funzione tipo-riferimento

È spesso più efficiente passare alle funzioni riferimenti anziché oggetti di grandi dimensioni. In questo modo il compilatore può passare l'indirizzo dell'oggetto rispettando la sintassi che sarebbe stata usata per accedere all'oggetto. Si consideri l'esempio seguente che usa la struttura `Date`.

```cpp
// reference_type_function_arguments.cpp
#include <iostream>

struct Date
{
    short Month;
    short Day;
    short Year;
};

// Create a date of the form DDDYYYY (day of year, year)
// from a Date.
long DateOfYear( Date& date )
{
    static int cDaysInMonth[] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };
    long dateOfYear = 0;

    // Add in days for months already elapsed.
    for ( int i = 0; i < date.Month - 1; ++i )
        dateOfYear += cDaysInMonth[i];

    // Add in days for this month.
    dateOfYear += date.Day;

    // Check for leap year.
    if ( date.Month > 2 &&
        (( date.Year % 100 != 0 || date.Year % 400 == 0 ) &&
        date.Year % 4 == 0 ))
        dateOfYear++;

    // Add in year.
    dateOfYear *= 10000;
    dateOfYear += date.Year;

    return dateOfYear;
}

int main()
{
    Date date{ 8, 27, 2018 };
    long dateOfYear = DateOfYear(date);
    std::cout << dateOfYear << std::endl;
}
```

Il codice precedente mostra che è possibile accedere ai membri di una struttura passata per riferimento utilizzando l'operatore di selezione dei membri (**.**) anziché l'operatore di selezione dei membri del puntatore ( **->** ).

Sebbene gli argomenti passati come tipi di riferimento osservino la sintassi dei tipi non puntatore, mantengono una caratteristica importante dei tipi di puntatore: sono modificabili a meno che non dichiarati come **`const`** . Poiché lo scopo del codice precedente non è quello di modificare l'oggetto `date`, un prototipo di funzione più appropriato è il seguente:

```cpp
long DateOfYear( const Date& date );
```

Questo prototipo garantisce che la funzione `DateOfYear` non modificherà il relativo argomento.

Qualsiasi funzione con prototipo che accetta un tipo di riferimento può accettare un oggetto dello stesso tipo al suo posto perché è presente una conversione standard da *typeName* a *typeName* <strong>&</strong> .

## <a name="see-also"></a>Vedere anche

[Riferimenti](../cpp/references-cpp.md)<br/>
