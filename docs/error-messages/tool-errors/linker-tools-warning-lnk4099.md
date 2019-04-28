---
title: Avviso degli strumenti del linker LNK4099
ms.date: 11/04/2016
f1_keywords:
- LNK4099
helpviewer_keywords:
- LNK4099
ms.assetid: 358170a4-07cd-43fe-918f-82c32757ffc5
ms.openlocfilehash: dcf4d44c3a0b5b10035af763040c2912afc8c6f7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62310890"
---
# <a name="linker-tools-warning-lnk4099"></a>Avviso degli strumenti del linker LNK4099

File PDB 'filename' non è stato trovato con '/ libreria di oggetti' o 'path'; oggetto collegato senza informazioni di debug

Il linker non è riuscito a trovare il file con estensione pdb. Copiarlo nella directory contenente `object/library`.

Per trovare il nome del file con estensione pdb associato al file oggetto:

1. Estrarre un file di oggetti dalla libreria con [lib](../../build/reference/lib-reference.md) **/estrarre:**`objectname`**obj** `xyz` **lib**.

1. Controllare il percorso del file con estensione pdb con **dumpbin /section:. debug$ T /rawdata** `objectname` **obj**.

È anche possibile eseguire la compilazione con [/Z7](../../build/reference/z7-zi-zi-debug-information-format.md), in modo che il file pdb non è necessario utilizzare o rimuovere le [/debug](../../build/reference/debug-generate-debug-info.md) se non si dispone di file con estensione PDB per gli oggetti a cui ci si collega l'opzione del linker.