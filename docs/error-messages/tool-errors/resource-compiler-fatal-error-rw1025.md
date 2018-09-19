---
title: Errore irreversibile del compilatore di risorse RW1025 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- RW1025
dev_langs:
- C++
helpviewer_keywords:
- RW1025
ms.assetid: 561a02af-e7e0-442a-8ad3-a00b2ca1b62e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2bf7bdeed320c004ffb75fa1d25d9b89147b0c13
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46117400"
---
# <a name="resource-compiler-fatal-error-rw1025"></a>Errore irreversibile del compilatore di risorse RW1025

Memoria heap distante insufficiente

Verificare la presenza del software residente in memoria che occupi troppo spazio. Utilizzare il programma CHKDSK per scoprire la quantità di memoria è necessario.

Se si sta creando un file di risorse di grandi dimensioni, suddividere lo script di risorsa in due file. Dopo aver creato i due file con estensione res, usare la riga di comando di MS-DOS per unirle in join tra loro:

```
copy first.res /b + second.res /b full.res
```