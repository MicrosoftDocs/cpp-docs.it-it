---
title: Avviso del compilatore (livello 3) C4622
ms.date: 11/04/2016
f1_keywords:
- C4622
helpviewer_keywords:
- C4622
ms.assetid: d3c879f0-4492-4f4b-b26d-230993f3a933
ms.openlocfilehash: 88a41c7f9edb1d2a9f6d4547336a77bd5e362882
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62401748"
---
# <a name="compiler-warning-level-3-c4622"></a>Avviso del compilatore (livello 3) C4622

Sovrascrittura delle informazioni di debug generate durante la creazione dell'intestazione precompilata nel file oggetto: 'file'

Le informazioni CodeView nel file specificato sono andate perse durante la compilazione con l'opzione [/Yu](../../build/reference/yu-use-precompiled-header-file.md) (Usa intestazione precompilata).

Rinominare il file oggetto (usando [/Fo](../../build/reference/fo-object-file-name.md)) quando si crea o si usa il file di intestazione precompilata e collegare usando il nuovo file oggetto.