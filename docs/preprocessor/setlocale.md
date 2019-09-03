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
ms.openlocfilehash: 219354595e5c63b2f13211d43bfa517d97413251
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70218169"
---
# <a name="setlocale-pragma"></a>Pragma setlocale

Definisce le *impostazioni locali*, il paese, l'area geografica e la lingua da usare per la conversione di costanti a caratteri "wide" e valori letterali stringa.

## <a name="syntax"></a>Sintassi

> **#pragma setlocale ("** [locale *-String* ] **")**

## <a name="remarks"></a>Note

Poiché l'algoritmo per la conversione di caratteri multibyte in caratteri wide può variare in base alle impostazioni locali, oppure la compilazione può essere eseguita in impostazioni locali diverse da cui verrà eseguito un file eseguibile, questo pragma fornisce un modo per specificare le impostazioni locali di destinazione in fase di compilazione. Garantisce che le stringhe a caratteri wide vengano archiviate nel formato corretto.

La *stringa delle impostazioni locali* predefinita è "".

Le impostazioni locali "C" esegue il mapping di ogni carattere nella stringa al relativo valore come **wchar_t**. Gli altri valori validi `setlocale` per sono le voci presenti nell'elenco delle [stringhe della lingua](../c-runtime-library/language-strings.md) . Ad esempio, è possibile specificare:

```cpp
#pragma setlocale("dutch")
```

La possibilità di specificare una stringa di lingua dipende dalla tabella codici e dal supporto dell'ID lingua nel computer.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
