---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4099'
title: Avviso degli strumenti del linker LNK4099
ms.date: 11/04/2016
f1_keywords:
- LNK4099
helpviewer_keywords:
- LNK4099
ms.assetid: 358170a4-07cd-43fe-918f-82c32757ffc5
ms.openlocfilehash: 1e063cce9c884b8952e4bd5807b0d4a7683d4d54
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97133770"
---
# <a name="linker-tools-warning-lnk4099"></a>Avviso degli strumenti del linker LNK4099

Il PDB ' filename ' non è stato trovato con ' Object/Library ' o in ' Path '; oggetto collegato senza informazioni di debug

Il linker non è riuscito a trovare il file con estensione pdb. Copiarlo nella directory che contiene `object/library` .

Per trovare il nome del file con estensione pdb associato al file oggetto:

1. Estrarre un file oggetto dalla libreria con [lib](../../build/reference/lib-reference.md) **/Extract:** `objectname` **. obj** `xyz` **. lib**.

1. Controllare il percorso del file con estensione pdb con **dumpbin/section:. debug $ T/rawdata** `objectname` **. obj**.

È anche possibile eseguire la compilazione con [/Z7](../../build/reference/z7-zi-zi-debug-information-format.md), in modo che non sia necessario usare il PDB oppure rimuovere l'opzione [/debug](../../build/reference/debug-generate-debug-info.md) del linker se non sono presenti file con estensione PDB per gli oggetti da collegare.
