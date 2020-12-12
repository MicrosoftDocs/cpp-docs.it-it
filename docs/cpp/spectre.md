---
description: 'Altre informazioni su: Spectre'
title: spectre
ms.date: 01/23/2018
f1_keywords:
- spectre_cpp
- spectre
- nomitigation
helpviewer_keywords:
- __declspec keyword (C++), spectre
- spectre __declspec keyword
ms.openlocfilehash: fc1f56a59dea1eaa3596a6f7a7c0347ab822e302
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97113818"
---
# <a name="spectre"></a>spectre

**Specifico di Microsoft**

Indica al compilatore di non inserire le istruzioni della barriera di esecuzione speculativa Spectre Variant 1 per una funzione.

## <a name="syntax"></a>Sintassi

> **__declspec (Spectre (nomitigation))**

## <a name="remarks"></a>Commenti

L'opzione del compilatore [/Qspectre](../build/reference/qspectre.md) fa sì che il compilatore inserisca istruzioni per la barriera di esecuzione speculativa. Vengono inserite quando l'analisi indica che esiste una vulnerabilità di sicurezza di Spectre variante 1. Le istruzioni specifiche emesse dipendono dal processore. Sebbene queste istruzioni abbiano un impatto minimo sulle dimensioni o sulle prestazioni del codice, in alcuni casi il codice non è influenzato dalla vulnerabilità e richiede prestazioni massime.

L'analisi degli esperti potrebbe determinare che una funzione è sicura da un limite del bypass del controllo dei limiti di Spectre variante 1. In tal caso, è possibile disattivare la generazione del codice di mitigazione all'interno di una funzione applicando `__declspec(spectre(nomitigation))` alla dichiarazione di funzione.

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

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[/Qspectre](../build/reference/qspectre.md)
