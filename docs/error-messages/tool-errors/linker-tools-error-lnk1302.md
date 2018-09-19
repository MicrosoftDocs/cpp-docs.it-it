---
title: Strumenti del linker LNK1302 errore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1302
dev_langs:
- C++
helpviewer_keywords:
- LNK1302
ms.assetid: aea3c753-c2c4-4249-bbc3-f2d4f0164b5e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3dc85b37d58e12602c02c2207c1f38bda9344e59
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46045510"
---
# <a name="linker-tools-error-lnk1302"></a>Errore degli strumenti del linker LNK1302

supportato solo il collegamento di .netmodule sicuri; impossibile collegare .netmodule

Un file con estensione netmodule (compilato con **/LN**) è stato passato al linker nel tentativo di un utente per richiamare il collegamento MSIL.  È valido per il collegamento MSIL se viene compilato con un modulo C++ **/CLR: safe**.

Per correggere questo errore, eseguire la compilazione con **/CLR: safe** per abilitare il collegamento MSIL o passare il **/clr** oppure **/clr: pure** file con estensione obj per il linker anziché il modulo.

Per altre informazioni, vedere

- [/LN (crea modulo MSIL)](../../build/reference/ln-create-msil-module.md)

- [File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md)