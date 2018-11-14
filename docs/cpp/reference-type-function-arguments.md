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
ms.openlocfilehash: 2a0bd21023bd1c6bc14b1f587c85960cf1e8b820
ms.sourcegitcommit: 31a2a9845f5e1d35ab054906d8cdc6582a5220bd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2018
ms.locfileid: "51597716"
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

Il codice precedente mostra che si accede a membri di una struttura passata per riferimento usando l'operatore di selezione dei membri (**.**) anziché l'operatore di selezione dei membri del puntatore (**->**).

Anche se gli argomenti passati come tipi riferimento osservino la sintassi dei tipi non puntatore, mantengono una caratteristica importante dei tipi di puntatore: ovvero sono modificabili a meno che non dichiarati come **const**. Poiché lo scopo del codice precedente non è quello di modificare l'oggetto `date`, un prototipo di funzione più appropriato è il seguente:

```cpp
long DateOfYear( const Date& date );
```

Questo prototipo garantisce che la funzione `DateOfYear` non modificherà il relativo argomento.

Qualsiasi funzione con prototipo che utilizza un tipo riferimento può accettare un oggetto dello stesso tipo al suo posto perché viene eseguita una conversione standard dalla *nomeTipo* al *nomeTipo* <strong>&</strong>.

## <a name="see-also"></a>Vedere anche

[Riferimenti](../cpp/references-cpp.md)<br/>
