---
title: spectre
ms.date: 01/23/2018
f1_keywords:
- spectre_cpp
- spectre
- nomitigation
helpviewer_keywords:
- __declspec keyword (C++), spectre
- spectre __declspec keyword
ms.openlocfilehash: 40eee25dec867ae3fce7a6b2d4715f0be81bfe76
ms.sourcegitcommit: effb516760c0f956c6308eeded48851accc96b92
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70926362"
---
# <a name="spectre"></a>spectre

**Sezione specifica Microsoft**

Indica al compilatore di non inserire le istruzioni della barriera di esecuzione speculativa Spectre Variant 1 per una funzione.

## <a name="syntax"></a>Sintassi

> **__declspec( spectre(nomitigation) )**

## <a name="remarks"></a>Note

L'opzione del compilatore [/Qspectre](../build/reference/qspectre.md) fa sì che il compilatore inserisca istruzioni per la barriera di esecuzione speculativa. Vengono inserite quando l'analisi indica che esiste una vulnerabilità di sicurezza di Spectre variante 1. Le istruzioni specifiche emesse dipendono dal processore. Sebbene queste istruzioni abbiano un impatto minimo sulle dimensioni o sulle prestazioni del codice, in alcuni casi il codice non è influenzato dalla vulnerabilità e richiede prestazioni massime.

L'analisi degli esperti potrebbe determinare che una funzione è sicura da un limite del bypass del controllo dei limiti di Spectre variante 1. In tal caso, è possibile disattivare la generazione del codice di mitigazione all'interno di una `__declspec(spectre(nomitigation))` funzione applicando alla dichiarazione di funzione.

> [!CAUTION]
> Le istruzioni per la barriera di esecuzione speculativa **/Qspectre** forniscono una protezione importante per la sicurezza e hanno un impatto trascurabile sulle prestazioni. Di conseguenza, è consigliabile non eliminarli, tranne nel raro caso in cui le prestazioni di una funzione siano un problema critico e la sicurezza della funzione sia nota.

## <a name="example"></a>Esempio

L'esempio di codice mostra come usare un oggetto `__declspec(spectre(nomitigation))`.

```cpp
// compile with: /c /Qspectre
static __declspec(spectre(nomitigation))
int noSpectreIssues() {
    // No Spectre variant 1 vulnerability here
    // ...
    return 0;
}

int main() {
    noSpectreIssues();
    return 0;
}
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[/Qspectre](../build/reference/qspectre.md)
