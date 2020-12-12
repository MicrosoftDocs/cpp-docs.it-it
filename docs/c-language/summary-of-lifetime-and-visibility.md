---
description: 'Altre informazioni su: Riepilogo di durata e visibilità'
title: Riepilogo di durata e di visibilità
ms.date: 11/04/2016
helpviewer_keywords:
- lifetime, and visibility
- visibility, identifiers
ms.assetid: ea05a253-7658-482c-9a6b-abd71169c42d
ms.openlocfilehash: a1ce139b4fdc2562862eaef1828ec481685eca60
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97114481"
---
# <a name="summary-of-lifetime-and-visibility"></a>Riepilogo di durata e di visibilità

Nella tabella seguente è riportato un riepilogo delle caratteristiche di visibilità e di durata per la maggior parte degli identificatori. Le prime tre colonne forniscono gli attributi che definiscono la durata e la visibilità. Un identificatore con gli attributi forniti nelle prime tre colonne presenta la durata e la visibilità illustrate nella colonne quarta e quinta. Tuttavia, questa tabella non considera tutti i possibili casi. Per altre informazioni, fare riferimento a [Classi di archiviazione](../c-language/c-storage-classes.md).

### <a name="summary-of-lifetime-and-visibility"></a>Riepilogo di durata e di visibilità

|Attributi:<br /><br /> Level|Elemento|Classe di archiviazione<br /><br /> Identificatore|Risultato:<br /><br /> Durata|Visibilità|
|---------------------------|----------|----------------------------------|--------------------------|----------------|
|Ambito di tipo file|Definizione di variabile|**`static`**|Globale|Resto del file di origine in cui si verifica|
||Dichiarazione di variabile|**`extern`**|Globale|Resto del file di origine in cui si verifica|
||Prototipo o definizione di funzione|**`static`**|Globale|File di origine singolo|
||Prototipo di funzione|**`extern`**|Globale|Resto del file di origine|
|Ambito del blocco|Dichiarazione di variabile|**`extern`**|Globale|Blocca|
||Definizione di variabile|**`static`**|Globale|Blocca|
||Definizione di variabile|**`auto`** o **`register`**|Locale|Blocca|

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

Nell'esempio seguente vengono illustrati i blocchi, l'annidamento e la visibilità di variabili:

### <a name="code"></a>Codice

```c
// Lifetime_and_Visibility.c

#include <stdio.h>

int i = 1;  // i defined at external level

int main()  // main function defined at external level
{
    printf_s( "%d\n", i ); // Prints 1 (value of external level i)
    {                                 // Begin first nested block
        int i = 2, j = 3;          // i and j defined at internal level
        printf_s( "%d %d\n", i, j );  // Prints 2, 3
        {                             // Begin second nested block
            int i = 0;                // i is redefined
            printf_s( "%d %d\n", i, j ); // Prints 0, 3
        }                             // End of second nested block
        printf_s( "%d\n", i );        // Prints 2 (outer definition
                                      //  restored)
    }                                 // End of first nested block
    printf_s( "%d\n", i );            // Prints 1 (external level
                                      // definition restored)
    return 0;
}
```

### <a name="comments"></a>Commenti

In questo esempio, sono disponibili quattro livelli di visibilità: il livello esterno e tre livelli di blocco. I valori vengono visualizzati sullo schermo come indicato nei commenti che seguono ogni istruzione.

## <a name="see-also"></a>Vedi anche

[Durata, ambito, visibilità e collegamento](../c-language/lifetime-scope-visibility-and-linkage.md)
