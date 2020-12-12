---
description: 'Altre informazioni su: errore degli strumenti del linker LNK1302'
title: Errore degli strumenti del linker LNK1302
ms.date: 11/04/2016
f1_keywords:
- LNK1302
helpviewer_keywords:
- LNK1302
ms.assetid: aea3c753-c2c4-4249-bbc3-f2d4f0164b5e
ms.openlocfilehash: 33e9a406cde7910c7340fdfe256711c47eee45cf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97193695"
---
# <a name="linker-tools-error-lnk1302"></a>Errore degli strumenti del linker LNK1302

supportato solo il collegamento di .netmodule sicuri; impossibile collegare .netmodule

Un. netmodule (compilato con **/LN**) è stato passato al linker in un tentativo utente di richiamare il collegamento MSIL.  Un modulo C++ è valido per il collegamento MSIL se viene compilato con **/CLR: safe**.

Per correggere l'errore, compilare con **/CLR: safe** per abilitare il collegamento MSIL oppure passare il file **/CLR** o **/CLR: pure** . obj al linker anziché al modulo.

Per ulteriori informazioni, vedere

- [/LN (Crea modulo MSIL)](../../build/reference/ln-create-msil-module.md)

- [File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md)
