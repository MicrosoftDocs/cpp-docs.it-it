---
title: Intervalli di lettura
ms.date: 11/04/2016
ms.assetid: 99de29ce-ab14-46f4-97e1-2081fd996b53
ms.openlocfilehash: 86bb24647084d8bdc452960bab631587c2413276
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56150493"
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
