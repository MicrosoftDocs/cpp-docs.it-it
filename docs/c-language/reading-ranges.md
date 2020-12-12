---
description: 'Altre informazioni su: letture degli intervalli'
title: Intervalli di lettura
ms.date: 11/04/2016
ms.assetid: 99de29ce-ab14-46f4-97e1-2081fd996b53
ms.openlocfilehash: afb1ff0f25360de7c47663279bf6f54dd7ca6a48
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97309121"
---
# <a name="reading-ranges"></a>Intervalli di lettura

**ANSI 4.9.6.2** L'interpretazione di un trattino (-) che non sia il primo o l'ultimo carattere in scanlist per la conversione di % [ nella funzione `fscanf`

Nella riga seguente

```
fscanf( fileptr, "%[A-Z]", strptr);
```

viene letto qualsiasi numero di caratteri, nell'intervallo che va dalla A alla Z, nella stringa alla quale punta `strptr`.

## <a name="see-also"></a>Vedi anche

[Funzioni della libreria](../c-language/library-functions.md)
