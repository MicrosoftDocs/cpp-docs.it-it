---
title: Compilatore avviso (livello 1) C4819 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4819
dev_langs:
- C++
helpviewer_keywords:
- C4819
ms.assetid: c0316e85-249c-414d-9df0-622d077c6bc2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ac468bc605c261b66f47fdf40efd1a01a5383d58
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46074279"
---
# <a name="compiler-warning-level-1-c4819"></a>Avviso del compilatore (livello 1) C4819

Il file contiene un carattere che non può essere rappresentato nella tabella codici corrente (numero). Salvare il file in formato Unicode per evitare perdite di dati.

C4819 si verifica quando un file di origine ANSI viene compilato in un sistema con una tabella codici che non può rappresentare tutti i caratteri nel file.

Per risolvere C4819, salvare il file in formato Unicode. In Visual Studio, scegliere **File**, **opzioni di salvataggio avanzate**. Nel **opzioni di salvataggio avanzate** finestra di dialogo, selezionare un tipo di codifica che può rappresentare tutti i caratteri nel file, ad esempio UTF-8 e quindi scegliere **OK**.