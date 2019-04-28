---
title: Errore del compilatore di risorse RC2151
ms.date: 11/04/2016
f1_keywords:
- RC2151
helpviewer_keywords:
- RC2151
ms.assetid: 3c47e535-c78d-4338-aab9-9b47e2c34728
ms.openlocfilehash: 8eaa50bc6080e37a4a74585eb03cbe4e40893bce
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62173444"
---
# <a name="resource-compiler-error-rc2151"></a>Errore del compilatore di risorse RC2151

non è possibile riutilizzare le costanti di stringa

Si usa lo stesso valore due volte in un **STRINGTABLE** istruzione. Assicurarsi che non si stia sovrapposizione valori decimali ed esadecimali.

Ogni ID in un **STRINGTABLE** devono essere univoci. Per ottenere la massima efficienza utilizzare costanti contigue che avviano un multiplo di 16.