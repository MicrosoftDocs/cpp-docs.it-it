---
title: Errore degli strumenti del linker LNK1302
ms.date: 11/04/2016
f1_keywords:
- LNK1302
helpviewer_keywords:
- LNK1302
ms.assetid: aea3c753-c2c4-4249-bbc3-f2d4f0164b5e
ms.openlocfilehash: c3b1117b31db4759b385943323a581da7a58f0c4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62160445"
---
# <a name="linker-tools-error-lnk1302"></a>Errore degli strumenti del linker LNK1302

supportato solo il collegamento di .netmodule sicuri; impossibile collegare .netmodule

Un file con estensione netmodule (compilato con **/LN**) è stato passato al linker nel tentativo di un utente per richiamare il collegamento MSIL.  È valido per il collegamento MSIL se viene compilato con un modulo C++ **/CLR: safe**.

Per correggere questo errore, eseguire la compilazione con **/CLR: safe** per abilitare il collegamento MSIL o passare il **/clr** oppure **/clr: pure** file con estensione obj per il linker anziché il modulo.

Per altre informazioni, vedere

- [/LN (crea modulo MSIL)](../../build/reference/ln-create-msil-module.md)

- [File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md)