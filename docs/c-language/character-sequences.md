---
title: Sequenze di caratteri
ms.date: 11/04/2016
ms.assetid: 1e6961a9-150e-4c13-b427-9af4b6a1fb7a
ms.openlocfilehash: 42fb6b61771feb3eaedfb4ce1e674003df91b263
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62312687"
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
