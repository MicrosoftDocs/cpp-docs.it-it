---
title: Lettura di intervalli | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 99de29ce-ab14-46f4-97e1-2081fd996b53
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 76530dfdac917dfbde50bc3fb1b17a3c31178729
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46030241"
---
# <a name="reading-ranges"></a>Intervalli di lettura

**ANSI 4.9.6.2** L'interpretazione di un trattino (-) che non sia il primo o l'ultimo carattere in scanlist per la conversione di % [ nella funzione `fscanf`

Nella riga seguente

```
fscanf( fileptr, "%[A-Z]", strptr);
```

viene letto qualsiasi numero di caratteri, nell'intervallo che va dalla A alla Z, nella stringa alla quale punta `strptr`.

## <a name="see-also"></a>Vedere anche

[Funzioni della libreria](../c-language/library-functions.md)