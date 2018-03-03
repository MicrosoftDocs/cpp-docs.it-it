---
title: Spectre | Documenti Microsoft
ms.custom: 
ms.date: 1/23/2018
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
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
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b515d25d4818cf8b6213a37f3fe78df4f3882a69
ms.sourcegitcommit: 9a0a287d6940591523af959ebdac5affa36220da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/25/2018
---
# <a name="spectre"></a>Spectre

**Sezione specifica Microsoft**

Indica al compilatore di non inserire Spectre variante 1 esecuzione speculativo barriera le istruzioni per una funzione.

## <a name="syntax"></a>Sintassi

> **declspec (spectre(nomitigation))**  

## <a name="remarks"></a>Note

Il [/Qspectre](../build/reference/qspectre.md) l'opzione del compilatore indica al compilatore di inserire le istruzioni di barriera di esecuzione speculativo in analisi indica che esiste una vulnerabilità di sicurezza Spectre variante 1. Le istruzioni specifiche generate dipendono dal processore. Durante queste istruzioni devono avere un impatto minimo sulle prestazioni o la dimensione del codice, potrebbero essere presenti casi in cui non è interessato da questa vulnerabilità, il codice e richiede le massime prestazioni.

Analisi esperto potrebbero determinare che una funzione è protetta da un difetto di bypass Spectre variante 1 limiti controllo. In tal caso, è possibile eliminare la generazione di codice di attenuazione all'interno di una funzione applicando `__declspec(spectre(nomitigation))` alla dichiarazione di funzione.

> [!CAUTION]
> Il **/Qspectre** istruzioni barriera esecuzione speculativo forniscono importanti della protezione e hanno effetto trascurabile sulle prestazioni. Di conseguenza, è consigliabile non eliminarli, tranne nel raro caso in cui le prestazioni di una funzione siano un problema critico e la sicurezza della funzione sia nota.

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
