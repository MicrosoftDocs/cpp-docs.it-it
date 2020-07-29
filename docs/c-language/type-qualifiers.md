---
title: Qualificatori di tipo
ms.date: 11/04/2016
helpviewer_keywords:
- volatile keyword [C], type qualifier
- type qualifiers
- volatile keyword [C]
- qualifiers for types
- const keyword [C]
- memory, access using volatile
- volatile keyword [C], type specifier
ms.assetid: bb4c6744-1dd7-40a8-b4eb-f5585be30908
ms.openlocfilehash: 729e9f65fd1054b8381f45b81e5276846145ebc1
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87198723"
---
# <a name="type-qualifiers"></a>Qualificatori di tipo

I qualificatori di tipo forniscono una delle due proprietà a un identificatore. Il **`const`** qualificatore di tipo dichiara un oggetto come non modificabile. Il **`volatile`** qualificatore di tipo dichiara un elemento il cui valore può essere modificato legittimamente da un elemento che esula dal controllo del programma in cui viene visualizzato, ad esempio un thread in esecuzione simultanea.

I due qualificatori di tipo, **`const`** e **`volatile`** , possono essere visualizzati solo una volta in una dichiarazione. I qualificatori di tipo possono essere visualizzati con qualsiasi identificatore di tipo; tuttavia, non possono apparire dopo la prima virgola in una dichiarazione multipla dell'elemento. Ad esempio le seguenti dichiarazioni sono valide:

```
typedef volatile int VI;
const int ci;
```

Queste dichiarazioni non sono valide:

```
typedef int *i, volatile *vi;
float f, const cf;
```

I qualificatori di tipo sono rilevanti solo in caso di accesso agli identificatori come l-value nelle espressioni. Per informazioni su l-value ed espressioni, vedere [Espressioni L-Value e R-Value](../c-language/l-value-and-r-value-expressions.md).

## <a name="syntax"></a>Sintassi

*type-qualifier*: **constvolatile**

Di seguito sono riportate le **`const`** dichiarazioni legali e **`volatile`** :

```
int const *p_ci;       /* Pointer to constant int */
int const (*p_ci);     /* Pointer to constant int */
int *const cp_i;       /* Constant pointer to int */
int (*const cp_i);     /* Constant pointer to int */
int volatile vint;     /* Volatile integer        */
```

Se la specifica di un tipo matrice include i qualificatori di tipo, viene qualificato l'elemento, non il tipo di matrice. Se la specifica del tipo di funzione include i qualificatori, il comportamento non è definito. Né **`volatile`** né **`const`** influiscono sull'intervallo di valori o proprietà aritmetiche dell'oggetto.

In questo elenco viene descritto come utilizzare **`const`** e **`volatile`** .

- La **`const`** parola chiave può essere usata per modificare qualsiasi tipo fondamentale o aggregato o un puntatore a un oggetto di qualsiasi tipo o **`typedef`** . Se un elemento viene dichiarato con solo il **`const`** qualificatore di tipo, il tipo viene considerato **const int**. Una **`const`** variabile può essere inizializzata o può essere inserita in un'area di archiviazione di sola lettura. La **`const`** parola chiave è utile per dichiarare i puntatori a **`const`** , perché ciò richiede che la funzione non modifichi il puntatore in alcun modo.

- Il compilatore presuppone che, in qualsiasi punto del programma, a una **`volatile`** variabile possa accedere un processo sconosciuto che utilizza o modifica il valore. Di conseguenza, indipendentemente dalle ottimizzazioni specificate nella riga di comando, il codice per ogni assegnazione o riferimento di una **`volatile`** variabile deve essere generato anche se sembra non avere alcun effetto.

   Se **`volatile`** viene usato da solo, **`int`** si presuppone. L' **`volatile`** identificatore di tipo può essere utilizzato per fornire accesso affidabile a posizioni di memoria speciali. Utilizzare **`volatile`** con oggetti dati a cui è possibile accedere o che possono essere modificati dai gestori del segnale, eseguendo simultaneamente programmi o mediante hardware speciale come I registri di I/O mappati alla memoria. È possibile dichiarare una variabile come **`volatile`** per la sua durata oppure è possibile eseguire il cast di un singolo riferimento come **`volatile`** .

- Un elemento può essere sia **`const`** che **`volatile`** , nel qual caso l'elemento non può essere modificato legittimamente dal proprio programma, ma potrebbe essere modificato da un processo asincrono.

## <a name="see-also"></a>Vedere anche

[Dichiarazioni e tipi](../c-language/declarations-and-types.md)
