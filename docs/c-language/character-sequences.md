---
title: Sequenze di caratteri
ms.date: 11/04/2016
ms.assetid: 1e6961a9-150e-4c13-b427-9af4b6a1fb7a
ms.openlocfilehash: dea24a2ae5887ea8c0111d8251ba4d9d03ccba0f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50489661"
---
# <a name="character-sequences"></a>Sequenze di caratteri

**ANSI 3.8.2** Mapping delle sequenze di caratteri dei file di origine

Le istruzioni del preprocessore utilizzano lo stesso set di caratteri delle istruzioni del file di origine, con l'eccezione che le sequenze di escape non sono supportate.

Di conseguenza, per specificare un percorso di un file di inclusione, utilizzare solo una barra rovesciata:

```
#include "path1\path2\myfile"
```

Nel codice sorgente sono necessarie due barre rovesciate:

```
fil = fopen( "path1\\path2\\myfile", "rt" );
```

## <a name="see-also"></a>Vedere anche

[Direttive di pre-elaborazione](../c-language/preprocessing-directives.md)