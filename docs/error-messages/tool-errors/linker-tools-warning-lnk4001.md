---
title: Strumenti del linker LNK4001 avviso | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4001
dev_langs:
- C++
helpviewer_keywords:
- LNK4001
ms.assetid: 0a8b1c3a-64ce-4311-b7c0-065995059246
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f684e85233c4df777a53f03f07936137c425946e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46070419"
---
# <a name="linker-tools-warning-lnk4001"></a>Avviso degli strumenti del linker LNK4001

Nessun file oggetto specificato; librerie utilizzate

Il linker è stato passato a uno o più file con estensione LIB, ma non i file con estensione obj.

Poiché il linker non è in grado di accedere alle informazioni in un file con estensione LIB che è in grado di accedere in un file obj, questo avviso indica che è necessario specificare in modo esplicito altre opzioni del linker. Ad esempio, potrebbe essere necessario specificare il [/MACHINE](../../build/reference/machine-specify-target-platform.md), [/out](../../build/reference/out-output-file-name.md), o [/ENTRY](../../build/reference/entry-entry-point-symbol.md) opzioni.