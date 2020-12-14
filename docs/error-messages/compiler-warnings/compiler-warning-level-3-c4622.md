---
description: 'Altre informazioni su: avviso del compilatore (livello 3) C4622'
title: Avviso del compilatore (livello 3) C4622
ms.date: 11/04/2016
f1_keywords:
- C4622
helpviewer_keywords:
- C4622
ms.assetid: d3c879f0-4492-4f4b-b26d-230993f3a933
ms.openlocfilehash: aa7ca3f2b31f369e40b5344e008655b84b13cd1b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97244810"
---
# <a name="compiler-warning-level-3-c4622"></a>Avviso del compilatore (livello 3) C4622

Sovrascrittura delle informazioni di debug generate durante la creazione dell'intestazione precompilata nel file oggetto: 'file'

Le informazioni CodeView nel file specificato sono andate perse durante la compilazione con l'opzione [/Yu](../../build/reference/yu-use-precompiled-header-file.md) (Usa intestazione precompilata).

Rinominare il file oggetto (usando [/Fo](../../build/reference/fo-object-file-name.md)) quando si crea o si usa il file di intestazione precompilata e collegare usando il nuovo file oggetto.
