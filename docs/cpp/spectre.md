---
title: Spectre | Microsoft Docs
ms.custom: ''
ms.date: 1/23/2018
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- spectre_cpp
- spectre
- nomitigation
dev_langs:
- C++
helpviewer_keywords:
- __declspec keyword (C++), spectre
- spectre __declspec keyword
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a51d47764ea4515fcbc2cb3b7aa37fd341cd130e
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39463229"
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

Il codice seguente viene illustrato come utilizzare `__declspec(spectre(nomitigation))`.

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
 [__declspec](../cpp/declspec.md)  
 [Parole chiave](../cpp/keywords-cpp.md)  
 [/Qspectre](../build/reference/qspectre.md)  
