---
title: Errore irreversibile del compilatore di risorse RW1025
ms.date: 11/04/2016
f1_keywords:
- RW1025
helpviewer_keywords:
- RW1025
ms.assetid: 561a02af-e7e0-442a-8ad3-a00b2ca1b62e
ms.openlocfilehash: 9b6697dff0a445cc342f30d08bd79822b02df7b8
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80172725"
---
# <a name="resource-compiler-fatal-error-rw1025"></a>Errore irreversibile del compilatore di risorse RW1025

Memoria heap esaurita

Verificare la presenza di software residente in memoria che potrebbe occupare molto spazio. Utilizzare il programma CHKDSK per individuare la quantità di memoria consentita.

Se si crea un file di risorse di grandi dimensioni, suddividere lo script di risorse in due file. Dopo aver creato due file res, usare la riga di comando MS-DOS per unirli:

```
copy first.res /b + second.res /b full.res
```
