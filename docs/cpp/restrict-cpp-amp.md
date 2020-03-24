---
title: restrict (C++ AMP)
ms.date: 11/04/2016
f1_keywords:
- cpu_CPP
- amp_CPP
helpviewer_keywords:
- restrict clause (C++ AMP)
ms.assetid: 07d3291f-7edf-456b-8828-283ac8673661
ms.openlocfilehash: a100ece1a0c67be01b31f38bdca17e78c2e1b6f9
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80179107"
---
# <a name="restrict-c-amp"></a>restrict (C++ AMP)

L'indicatore di restrizione può essere applicato a dichiarazioni lambda e di funzione. Tale indicatore applica restrizioni sul codice della funzione e sul comportamento della funzione nelle applicazioni che utilizzano il runtime C++ AMP (Accelerated Massive Parallelism) di C++.

> [!NOTE]
>  Per informazioni sulla parola chiave **Restrict** che fa parte dell' **__declspec** attributi della classe di archiviazione, vedere [Restrict](../cpp/restrict.md).

La clausola **Restrict** utilizza i formati seguenti:

|Clausola|Descrizione|
|------------|-----------------|
|`restrict(cpu)`|La funzione può utilizzare il linguaggio C++ completo. Solo altre funzioni dichiarate tramite le funzioni restrict(cpu) possono chiamare la funzione.|
|`restrict(amp)`|La funzione può utilizzare solo un subset del linguaggio C++ che C++ AMP può accelerare.|
|Sequenza di `restrict(cpu)` e `restrict(amp)`.|La funzione deve rispettare le limitazioni sia di `restrict(cpu)` che di `restrict(amp)`. La funzione può essere chiamata dalle funzioni dichiarate tramite `restrict(cpu)`, `restrict(amp)`, `restrict(cpu, amp)` o `restrict(amp, cpu)`.<br /><br /> La forma `restrict(A) restrict(B)` può essere scritta come `restrict(A,B)`.|

## <a name="remarks"></a>Osservazioni

La parola chiave **Restrict** è una parola chiave contestuale. Gli indicatori di restrizione `cpu` e `amp` non sono parole chiave riservate. L'elenco degli indicatori non è estensibile. Una funzione che non ha una clausola **Restrict** equivale a una funzione con la clausola `restrict(cpu)`.

Una funzione con la clausola `restrict(amp)` è caratterizzata dalle limitazioni seguenti:

- La funzione può chiamare solo funzioni con la clausola `restrict(amp)`.

- È necessario che sia possibile rendere la funzione inline.

- La funzione può dichiarare solo le variabili **int**, **unsigned int**, **float**e **Double** , nonché le classi e le strutture che contengono solo questi tipi. è consentito anche **bool** , ma deve essere allineato a 4 byte se usato in un tipo composto.

- Le funzioni lambda non possono essere acquisite per riferimento e non possono acquisire puntatori.

- I riferimenti e i puntatori con riferimento indiretto singolo sono supportati solo come variabili locali, argomenti di funzione e tipi restituiti.

- Gli elementi seguenti non sono consentiti:

   - Ricorsione.

   - Variabili dichiarate con la parola chiave [volatile](../cpp/volatile-cpp.md) .

   - Funzioni virtuali.

   - Puntatori a funzioni.

   - Puntatori a funzioni membro.

   - Puntatori in strutture.

   - Puntatori a puntatori.

   - istruzioni **goto** .

   - Istruzioni con etichetta.

   - istruzioni **try**, **catch**o **throw** .

   - Variabili globali.

   - Variabili statiche. In alternativa, usare [Tile_static parola chiave](../cpp/tile-static-keyword.md) .

   - Cast **dynamic_cast** .

   - Operatore **typeid** .

   - Dichiarazioni asm.

   - Funzioni varargs.

Per informazioni sulle limitazioni delle funzioni, vedere [limitazioni (amp)](https://blogs.msdn.microsoft.com/nativeconcurrency/2011/12/19/restrictamp-restrictions-part-0-of-n-introduction/).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare la clausola `restrict(amp)`.

```cpp
void functionAmp() restrict(amp) {}
void functionNonAmp() {}

void callFunctions() restrict(amp)
{
    // int is allowed.
    int x;
    // long long int is not allowed in an amp-restricted function. This generates a compiler error.
    // long long int y;

    // Calling an amp-restricted function is allowed.
    functionAmp();

    // Calling a non-amp-restricted function is not allowed.
    // functionNonAmp();
}
```

## <a name="see-also"></a>Vedere anche

[C++ AMP (C++ Accelerated Massive Parallelism)](../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)
