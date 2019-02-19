---
title: Sequenze di caratteri
ms.date: 11/04/2016
ms.assetid: 1e6961a9-150e-4c13-b427-9af4b6a1fb7a
ms.openlocfilehash: 42fb6b61771feb3eaedfb4ce1e674003df91b263
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56149932"
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
