---
title: Overload dell'operatore &lt;&lt; per classi personalizzate
ms.date: 11/04/2016
helpviewer_keywords:
- operator<<, overloading for your own classes
- operator <<, overloading for your own classes
ms.assetid: ad1d2c49-d84e-48a8-9c09-121f28b10bf0
ms.openlocfilehash: c470bb7335a5997ae26327f99b8c5f31d20b4edb
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68452058"
---
# <a name="overloading-the-ltlt-operator-for-your-own-classes"></a>Overload dell'operatore &lt;&lt; per classi personalizzate

I flussi di input usano l'operatore di inserimento (`<<`) per i tipi standard. È possibile eseguire l'overload dell'operatore `<<` per le classi personalizzate.

## <a name="example"></a>Esempio

L'esempio di funzione `write` ha illustrato l'uso di una struttura `Date`. La data rappresenta il candidato ideale per una classe C++ nella quale i membri dati (mese, giorno e anno) sono nascosti nella visualizzazione. Un flusso di output è la destinazione logica per la visualizzazione di tale struttura. Questo codice visualizza una data usando l'oggetto `cout`:

```cpp
Date dt(1, 2, 92);

cout <<dt;
```

Per fare in modo che `cout` accetti un oggetto `Date` dopo l'operatore di inserimento, eseguire l'overload dell'operatore di inserimento in modo che riconosca un oggetto `ostream` a sinistra e un oggetto `Date` a destra. La funzione dell'operatore `<<` in overload deve quindi essere dichiarata come Friend della classe `Date` in modo che possa accedere ai dati privati all'interno di un oggetto `Date`.

```cpp
// overload_date.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

class Date
{
    int mo, da, yr;
public:
    Date(int m, int d, int y)
    {
        mo = m; da = d; yr = y;
    }
    friend ostream& operator<<(ostream& os, const Date& dt);
};

ostream& operator<<(ostream& os, const Date& dt)
{
    os << dt.mo << '/' << dt.da << '/' << dt.yr;
    return os;
}

int main()
{
    Date dt(5, 6, 92);
    cout << dt;
}
```

```Output
5/6/92
```

## <a name="remarks"></a>Note

L'operatore in overload restituisce un riferimento all'oggetto `ostream` originale, pertanto è possibile combinare gli inserimenti:

```cpp
cout <<"The date is" <<dt <<flush;
```

## <a name="see-also"></a>Vedere anche

[Flussi di output](../standard-library/output-streams.md)
