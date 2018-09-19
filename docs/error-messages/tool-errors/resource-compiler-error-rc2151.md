---
title: Errore del compilatore di risorse RC2151 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- RC2151
dev_langs:
- C++
helpviewer_keywords:
- RC2151
ms.assetid: 3c47e535-c78d-4338-aab9-9b47e2c34728
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a15f3f1237df9e4b706a2c2048dddd6d5db395d5
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46109782"
---
# <a name="resource-compiler-error-rc2151"></a>Errore del compilatore di risorse RC2151

non è possibile riutilizzare le costanti di stringa

Si usa lo stesso valore due volte in un **STRINGTABLE** istruzione. Assicurarsi che non si stia sovrapposizione valori decimali ed esadecimali.

Ogni ID in un **STRINGTABLE** devono essere univoci. Per ottenere la massima efficienza utilizzare costanti contigue che avviano un multiplo di 16.