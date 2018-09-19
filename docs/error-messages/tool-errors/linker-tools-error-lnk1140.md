---
title: Strumenti del linker LNK1140 errore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1140
dev_langs:
- C++
helpviewer_keywords:
- LNK1140
ms.assetid: 468d7651-a7cd-47b9-aead-5bb2fab56121
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9f850360bc749a41e548cebae9f58f9fc7d3d420
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46044704"
---
# <a name="linker-tools-error-lnk1140"></a>Errore degli strumenti del linker LNK1140

Troppi moduli per database di programma. il collegamento con /PDB: NONE

Il progetto contiene più di 4096 moduli.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Ricollegare usando [/PDB: NONE](../../build/reference/pdb-use-program-database.md).

1. Compilare alcuni moduli senza le informazioni di debug.

1. Ridurre il numero dei moduli.