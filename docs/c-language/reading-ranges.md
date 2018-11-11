---
title: Intervalli di lettura
ms.date: 11/04/2016
ms.assetid: 99de29ce-ab14-46f4-97e1-2081fd996b53
ms.openlocfilehash: b5c6a6baf43b8786fbd0301e4b89ea856d839606
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50604107"
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