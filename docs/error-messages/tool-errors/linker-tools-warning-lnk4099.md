---
title: Strumenti del linker LNK4099 avviso | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4099
dev_langs:
- C++
helpviewer_keywords:
- LNK4099
ms.assetid: 358170a4-07cd-43fe-918f-82c32757ffc5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 50bdceaba2e72312febec4819b96df334b5398c2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46026010"
---
# <a name="linker-tools-warning-lnk4099"></a>Avviso degli strumenti del linker LNK4099

File PDB 'filename' non è stato trovato con '/ libreria di oggetti' o 'path'; oggetto collegato senza informazioni di debug

Il linker non è riuscito a trovare il file con estensione pdb. Copiarlo nella directory contenente `object/library`.

Per trovare il nome del file con estensione pdb associato al file oggetto:

1. Estrarre un file di oggetti dalla libreria con [lib](../../build/reference/lib-reference.md) **/estrarre:**`objectname`**obj** `xyz` **lib**.

1. Controllare il percorso del file con estensione pdb con **dumpbin /section:. debug$ T /rawdata** `objectname` **obj**.

È anche possibile eseguire la compilazione con [/Z7](../../build/reference/z7-zi-zi-debug-information-format.md), in modo che il file pdb non è necessario utilizzare o rimuovere le [/debug](../../build/reference/debug-generate-debug-info.md) se non si dispone di file con estensione PDB per gli oggetti a cui ci si collega l'opzione del linker.