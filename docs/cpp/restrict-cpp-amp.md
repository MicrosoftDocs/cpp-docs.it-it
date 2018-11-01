---
title: restrict (C++ AMP)
ms.date: 11/04/2016
f1_keywords:
- cpu_CPP
- amp_CPP
helpviewer_keywords:
- restrict clause (C++ AMP)
ms.assetid: 07d3291f-7edf-456b-8828-283ac8673661
ms.openlocfilehash: 3609e3f0541cfd8a8af8559d8d49e6a77c00d91c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50660005"
---
# <a name="restrict-c-amp"></a>restrict (C++ AMP)

L'indicatore di restrizione può essere applicato a dichiarazioni lambda e di funzione. Tale indicatore applica restrizioni sul codice della funzione e sul comportamento della funzione nelle applicazioni che utilizzano il runtime C++ AMP (Accelerated Massive Parallelism) di C++.

> [!NOTE]
>  Per informazioni sul **limitare** parola chiave che fa parte delle **declspec** gli attributi di classi di archiviazione, vedere [limitare](../cpp/restrict.md).

Il **limitare** clausola assume le forme seguenti:

|Clausola|Descrizione|
|------------|-----------------|
|`restrict(cpu)`|La funzione può utilizzare il linguaggio C++ completo. Solo altre funzioni dichiarate tramite le funzioni restrict(cpu) possono chiamare la funzione.|
|`restrict(amp)`|La funzione può utilizzare solo un subset del linguaggio C++ che C++ AMP può accelerare.|
|Sequenza di `restrict(cpu)` e `restrict(amp)`.|La funzione deve rispettare le limitazioni sia di `restrict(cpu)` che di `restrict(amp)`. La funzione può essere chiamata dalle funzioni dichiarate tramite `restrict(cpu)`, `restrict(amp)`, `restrict(cpu, amp)` o `restrict(amp, cpu)`.<br /><br /> La forma `restrict(A) restrict(B)` può essere scritta come `restrict(A,B)`.|

## <a name="remarks"></a>Note

Il **limitare** la parola chiave è una parola chiave contestuale. Gli indicatori di restrizione `cpu` e `amp` non sono parole chiave riservate. L'elenco degli indicatori non è estensibile. Una funzione che non è un **limitare** clausola equivale a una funzione che ha il `restrict(cpu)` clausola.

Una funzione con la clausola `restrict(amp)` è caratterizzata dalle limitazioni seguenti:

- La funzione può chiamare solo funzioni con la clausola `restrict(amp)`.

- È necessario che sia possibile rendere la funzione inline.

- La funzione può dichiarare solo **int**, **unsigned int**, **float**, e **double** variabili, nonché classi e strutture che contengono solo questi tipi. **bool** è consentito, ma deve essere allineata a 4 byte se usate in un tipo composto.

- Le funzioni lambda non possono essere acquisite per riferimento e non possono acquisire puntatori.

- I riferimenti e i puntatori con riferimento indiretto singolo sono supportati solo come variabili locali, argomenti di funzione e tipi restituiti.

- Gli elementi seguenti non sono consentiti:

   - Ricorsione.

   - Le variabili dichiarate con il [volatile](../cpp/volatile-cpp.md) (parola chiave).

   - Funzioni virtuali.

   - Puntatori a funzioni.

   - Puntatori a funzioni membro.

   - Puntatori in strutture.

   - Puntatori a puntatori.

   - **Vai a** istruzioni.

   - Istruzioni con etichetta.

   - **provare**, **catch**, o **throw** istruzioni.

   - Variabili globali.

   - Variabili statiche. Uso [parola chiave tile_static](../cpp/tile-static-keyword.md) invece.

   - **dynamic_cast** cast.

   - Il **typeid** operatore.

   - Dichiarazioni asm.

   - Funzioni varargs.

Per una discussione sulle limitazioni delle funzioni, vedere [limitare le restrizioni (amp)](https://blogs.msdn.microsoft.com/nativeconcurrency/2011/12/19/restrictamp-restrictions-part-0-of-n-introduction/).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il `restrict(amp)`clausola.

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