---
description: 'Altre informazioni su: errore degli strumenti del linker LNK1140'
title: Errore degli strumenti del linker LNK1140
ms.date: 11/04/2016
f1_keywords:
- LNK1140
helpviewer_keywords:
- LNK1140
ms.assetid: 468d7651-a7cd-47b9-aead-5bb2fab56121
ms.openlocfilehash: cde57e3594035aecc1cc3608d1329c5bc0752624
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97281197"
---
# <a name="linker-tools-error-lnk1140"></a>Errore degli strumenti del linker LNK1140

troppi moduli per il database di programma; collegamento con/PDB: NONE

Il progetto contiene più di 4096 moduli.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Ricollegare con [/PDB: None](../../build/reference/pdb-use-program-database.md).

1. Compilare alcuni moduli senza informazioni di debug.

1. Ridurre il numero di moduli.
