---
title: Qualificatori di tipo
description: Descrive i qualificatori di tipo per il linguaggio C usato nel compilatore Microsoft Visual C
ms.date: 11/6/2020
helpviewer_keywords:
- volatile keyword [C], type qualifier
- type qualifiers
- volatile keyword [C]
- qualifiers for types
- const keyword [C]
- memory, access using volatile
- volatile keyword [C], type specifier
ms.assetid: bb4c6744-1dd7-40a8-b4eb-f5585be30908
ms.openlocfilehash: dd36aeb5d142eebbd6e4a339fe6c18925a6fd45a
ms.sourcegitcommit: 3f0c1dcdcce25865d1a1022bcc5b9eec79f69025
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2020
ms.locfileid: "94381610"
---
# <a name="type-qualifiers"></a>Qualificatori di tipo

I qualificatori di tipo forniscono una delle due proprietà a un identificatore. Il **`const`** qualificatore di tipo dichiara un oggetto come non modificabile. Il **`volatile`** qualificatore di tipo dichiara un elemento il cui valore può essere modificato legittimamente da un elemento che esula dal controllo del programma in cui viene visualizzato, ad esempio un thread in esecuzione simultanea.

I qualificatori di tipo,, **`const`** **`restrict`** e **`volatile`** , possono essere visualizzati solo una volta in una dichiarazione. I qualificatori di tipo possono essere visualizzati con qualsiasi identificatore di tipo; Tuttavia, non possono apparire dopo la prima virgola in una dichiarazione a più elementi. Ad esempio le seguenti dichiarazioni sono valide:

```c
typedef volatile int VI;
const int ci;
```

Queste dichiarazioni non sono valide:

```c
typedef int *i, volatile *vi;
float f, const cf;
```

I qualificatori di tipo sono rilevanti solo in caso di accesso agli identificatori come l-value nelle espressioni. Per informazioni su l-value ed espressioni, vedere [Espressioni L-Value e R-Value](../c-language/l-value-and-r-value-expressions.md).

## <a name="syntax"></a>Sintassi

*`type-qualifier`* :\
&emsp;**`const`**\
&emsp;**`restrict`**\
&emsp;**`volatile`**

## <a name="const-and-volatile"></a>`const` e `volatile`

Di seguito sono riportate le **`const`** dichiarazioni legali e **`volatile`** :

```c
int const *p_ci;      // Pointer to constant int
int const (*p_ci);   // Pointer to constant int
int *const cp_i;     // Constant pointer to int
int (*const cp_i);   // Constant pointer to int
int volatile vint;     // Volatile integer
```

Se la specifica di un tipo matrice include i qualificatori di tipo, viene qualificato l'elemento, non il tipo di matrice. Se la specifica del tipo di funzione include i qualificatori, il comportamento non è definito. **`volatile`** e **`const`** non influiscono sull'intervallo di valori o proprietà aritmetiche dell'oggetto.

- La **`const`** parola chiave può essere usata per modificare qualsiasi tipo fondamentale o aggregato o un puntatore a un oggetto di qualsiasi tipo o **`typedef`** . Se un elemento viene dichiarato con solo il **`const`** qualificatore di tipo, il tipo viene considerato **const int**. Una **`const`** variabile può essere inizializzata o può essere inserita in un'area di archiviazione di sola lettura. La **`const`** parola chiave è utile per dichiarare i puntatori a **`const`** , perché ciò richiede che la funzione non modifichi il puntatore in alcun modo.

- Il compilatore presuppone che, in qualsiasi punto del programma, a una **`volatile`** variabile possa accedere un processo sconosciuto che utilizza o modifica il valore. Indipendentemente dalle ottimizzazioni specificate nella riga di comando, il codice per ogni assegnazione o riferimento di una **`volatile`** variabile deve essere generato anche se sembra non avere alcun effetto.

Se **`volatile`** viene usato da solo, **`int`** si presuppone. L' **`volatile`** identificatore di tipo può essere utilizzato per fornire accesso affidabile a posizioni di memoria speciali. Utilizzare **`volatile`** con oggetti dati a cui è possibile accedere o che possono essere modificati dai gestori del segnale, eseguendo simultaneamente programmi o mediante hardware speciale come I registri di I/O mappati alla memoria. È possibile dichiarare una variabile come **`volatile`** per la sua durata oppure è possibile eseguire il cast di un singolo riferimento come **`volatile`** .

- Un elemento può essere sia **`const`** che **`volatile`** , nel qual caso l'elemento non può essere modificato legittimamente dal proprio programma, ma potrebbe essere modificato da un processo asincrono.
 
## `restrict`

Il **`restrict`** qualificatore di tipo, introdotto in C99, può essere applicato alle dichiarazioni del puntatore. Qualifica il puntatore, non quello a cui punta.

**`restrict`** è un hint di ottimizzazione per il compilatore che nessun altro puntatore nell'ambito corrente fa riferimento alla stessa posizione di memoria. Ovvero solo il puntatore o un valore derivato da esso, ad esempio Pointer + 1, viene utilizzato per accedere all'oggetto durante il ciclo di vita del puntatore. Questo consente al compilatore di produrre codice più ottimizzato. C++ dispone di un meccanismo equivalente, [`__restrict`](../cpp/extension-restrict.md)

Tenere presente che **`restrict`** si tratta di un contratto tra l'utente e il compilatore. Se si esegue l'alias di un puntatore contrassegnato con **`restrict`** , il risultato sarà indefinito.

Di seguito è riportato un esempio che usa **`restrict`** :

```c
void test(int* restrict first, int* restrict second, int* val)
{
    *first += *val;
    *second += *val;
}

int main()
{
    int i = 1, j = 2, k = 3;
    test(&i, &j, &k);

    return 0;
}

// Marking union members restrict tells the compiler that
// only z.x or z.y will be accessed in any scope, which allows
// the compiler to optimize access to the members.
union z 
{
    int* restrict x;
    double* restrict y;
};
```

## <a name="see-also"></a>Vedere anche

[`/std` (Specifica la versione standard del linguaggio)](../build/reference/std-specify-language-standard-version.md)\
[Dichiarazioni e tipi](../c-language/declarations-and-types.md)
