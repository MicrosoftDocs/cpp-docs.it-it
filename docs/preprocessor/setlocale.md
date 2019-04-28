---
title: setlocale
ms.date: 11/04/2016
f1_keywords:
- setlocale_CPP
- vc-pragma.setlocale
helpviewer_keywords:
- pragmas, setlocale
- setlocale pragma
ms.assetid: e60b43d9-fbdf-4c4e-ac85-805523a13b86
ms.openlocfilehash: b2f28a14b4d4585575a39dd9a936a56a84eeddc4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62179620"
---
# <a name="setlocale"></a>setlocale

Definisce le impostazioni locali (paese/area geografica e la lingua) da utilizzare quando si traducono le costanti a caratteri "wide" e valori letterali stringa.

## <a name="syntax"></a>Sintassi

```
#pragma setlocale( "[locale-string]" )
```

## <a name="remarks"></a>Note

Poiché l'algoritmo per la conversione dei caratteri multibyte in caratteri "wide" può variare dalle impostazioni locali o la compilazione può aver luogo in impostazioni locali diverse da dove un file eseguibile verrà eseguito, questo pragma consente di specificare le impostazioni locali di destinazione in fase di compilazione. In questo modo si garantisce che le stringhe di caratteri "wide" saranno memorizzate nel formato corretto.

Il valore predefinito *stringa delle impostazioni locali* è "".

Le impostazioni locali "C" esegue il mapping di ogni carattere nella stringa al relativo valore come un **wchar_t** (short senza segno). Altri valori validi per `setlocale` sono quelle voci disponibili nel [stringhe relative a lingue](../c-runtime-library/language-strings.md) elenco. Ad esempio, generare:

```cpp
#pragma setlocale("dutch")
```

La possibilità di generare una stringa di linguaggio dipende dal supporto di ID lingua e dalla tabella codici nel computer.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)