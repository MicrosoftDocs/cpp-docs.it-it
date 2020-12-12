---
description: 'Altre informazioni su: sequenze di caratteri'
title: Sequenze di caratteri
ms.date: 11/04/2016
ms.assetid: 1e6961a9-150e-4c13-b427-9af4b6a1fb7a
ms.openlocfilehash: ac5642371389047bd8ce3a83e02dc13802167dc0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97305078"
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

## <a name="see-also"></a>Vedi anche

[Direttive di pre-elaborazione](../c-language/preprocessing-directives.md)
