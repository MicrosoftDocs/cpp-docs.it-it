---
title: Pragma setlocale
ms.date: 08/29/2019
f1_keywords:
- setlocale_CPP
- vc-pragma.setlocale
helpviewer_keywords:
- pragmas, setlocale
- setlocale pragma
ms.assetid: e60b43d9-fbdf-4c4e-ac85-805523a13b86
ms.openlocfilehash: 9603c132610e0cfb1e8f955be48271870527105b
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219378"
---
# <a name="setlocale-pragma"></a>Pragma setlocale

Definisce le *impostazioni locali*, il paese, l'area geografica e la lingua da usare per la conversione di costanti a caratteri "wide" e valori letterali stringa.

## <a name="syntax"></a>Sintassi

> **#pragma setlocale ("** [ *locale-String* ] **")**

## <a name="remarks"></a>Osservazioni

Poiché l'algoritmo per la conversione di caratteri multibyte in caratteri wide può variare in base alle impostazioni locali, oppure la compilazione può essere eseguita in impostazioni locali diverse da cui verrà eseguito un file eseguibile, questo pragma fornisce un modo per specificare le impostazioni locali di destinazione in fase di compilazione. Garantisce che le stringhe a caratteri wide vengano archiviate nel formato corretto.

La *stringa delle impostazioni locali* predefinita è "".

Le impostazioni locali "C" esegue il mapping di ogni carattere nella stringa al relativo valore come **`wchar_t`** . Gli altri valori validi per `setlocale` sono le voci presenti nell'elenco delle [stringhe della lingua](../c-runtime-library/language-strings.md) . Ad esempio, è possibile specificare:

```cpp
#pragma setlocale("dutch")
```

La possibilità di specificare una stringa di lingua dipende dalla tabella codici e dal supporto dell'ID lingua nel computer.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
