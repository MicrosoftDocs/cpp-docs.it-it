---
title: Sequenze di caratteri | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 1e6961a9-150e-4c13-b427-9af4b6a1fb7a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5cf3b52b8a4e76062d06b0b9ca3d4535b79595c5
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46061513"
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