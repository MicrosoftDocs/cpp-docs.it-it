---
title: Spectre
ms.date: 1/23/2018
f1_keywords:
- spectre_cpp
- spectre
- nomitigation
helpviewer_keywords:
- __declspec keyword (C++), spectre
- spectre __declspec keyword
ms.openlocfilehash: 2377a3c23be1e27bfe4f2df23eb00823635fa05d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50592010"
---
# <a name="spectre"></a>Spectre

**Sezione specifica Microsoft**

Indica al compilatore di non inserire istruzioni di barriera di Spectre variante 1 l'esecuzione speculativa per una funzione.

## <a name="syntax"></a>Sintassi

> **declspec (spectre(nomitigation))**

## <a name="remarks"></a>Note

Il [/Qspectre](../build/reference/qspectre.md) opzione del compilatore indica al compilatore di inserire le istruzioni di barriera di esecuzione speculativa in cui analisi indica che esiste una vulnerabilità di sicurezza di Spectre variante 1. Le istruzioni specifiche generate variano a seconda del processore. Anche se queste istruzioni devono avere un impatto minimo sulle prestazioni o la dimensione del codice, potrebbero esserci casi in cui il codice non è influenzato dalla vulnerabilità e richiede le massime prestazioni.

Analisi degli esperti potrebbero determinare che una funzione è protetta da un difetto del bypass controllo dei limiti di Spectre variante 1. In tal caso, è possibile eliminare la generazione di codice di mitigazione all'interno di una funzione applicando `__declspec(spectre(nomitigation))` alla dichiarazione di funzione.

> [!CAUTION]
> Il **/Qspectre** esecuzione speculativa barriera istruzioni offrono una protezione importanti e hanno effetto trascurabile sulle prestazioni. Di conseguenza, è consigliabile non eliminarli, tranne nel raro caso in cui le prestazioni di una funzione siano un problema critico e la sicurezza della funzione sia nota.

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
