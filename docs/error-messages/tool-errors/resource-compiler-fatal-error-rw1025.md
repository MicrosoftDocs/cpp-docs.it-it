---
title: Errore irreversibile del compilatore di risorse RW1025
ms.date: 11/04/2016
f1_keywords:
- RW1025
helpviewer_keywords:
- RW1025
ms.assetid: 561a02af-e7e0-442a-8ad3-a00b2ca1b62e
ms.openlocfilehash: 8ecfc11f5cc991294d966a4b6c75d8da6669d5b1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50575682"
---
# <a name="resource-compiler-fatal-error-rw1025"></a>Errore irreversibile del compilatore di risorse RW1025

Memoria heap distante insufficiente

Verificare la presenza del software residente in memoria che occupi troppo spazio. Utilizzare il programma CHKDSK per scoprire la quantità di memoria è necessario.

Se si sta creando un file di risorse di grandi dimensioni, suddividere lo script di risorsa in due file. Dopo aver creato i due file con estensione res, usare la riga di comando di MS-DOS per unirle in join tra loro:

```
copy first.res /b + second.res /b full.res
```