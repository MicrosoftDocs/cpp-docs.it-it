---
title: Controllo dei tipi (CRT)
ms.date: 11/04/2016
f1_keywords:
- c.types
helpviewer_keywords:
- checking type
- variable argument functions
- type checking
ms.assetid: 1ba7590b-d1c0-4636-b6a0-e231395abdad
ms.openlocfilehash: bb5aecc2b47aa8e88666f42d8022395bf99fd85e
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57747683"
---
# <a name="type-checking-crt"></a>Controllo dei tipi (CRT)

Il compilatore esegue un controllo dei tipi limitato sulle funzioni che possono accettare un numero variabile di argomenti, come indicato di seguito:

|Chiamata di funzione|Argomenti con controllo del tipo|
|-------------------|-----------------------------|
|`_cprintf_s`, `_cscanf_s`, `printf_s`, `scanf_s`|Primo argomento (stringa di formato)|
|`fprintf_s`, `fscanf_s`, `sprintf_s`, `sscanf_s`|Primi due argomenti (file o buffer e stringa di formato)|
|`_snprintf_s`|Primi tre argomenti (file o buffer, conteggio e stringa di formato)|
|`_open`|Primi due argomenti (percorso e flag `_open`)|
|`_sopen_s`|Primi tre argomenti (percorso, flag `_open` e modalità di condivisione)|
|`_execl`, `_execle`, `_execlp`, `_execlpe`|Primi due argomenti (percorso e puntatore al primo argomento)|
|`_spawnl`, `_spawnle`, `_spawnlp`, `_spawnlpe`|Primi tre argomenti (flag modalità, percorso e puntatore al primo argomento)|

Il compilatore esegue lo stesso controllo dei tipi limitato per le controparti a caratteri wide corrispondenti di queste funzioni.

## <a name="see-also"></a>Vedere anche

[Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md)
