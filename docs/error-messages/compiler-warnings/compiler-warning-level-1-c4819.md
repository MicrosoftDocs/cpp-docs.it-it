---
title: Avviso del compilatore (livello 1) C4819
ms.date: 11/04/2016
f1_keywords:
- C4819
helpviewer_keywords:
- C4819
ms.assetid: c0316e85-249c-414d-9df0-622d077c6bc2
ms.openlocfilehash: c0ca29a304fbd05cb0c6b7d1b06414304c70fb2a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50596612"
---
# <a name="compiler-warning-level-1-c4819"></a>Avviso del compilatore (livello 1) C4819

Il file contiene un carattere che non può essere rappresentato nella tabella codici corrente (numero). Salvare il file in formato Unicode per evitare perdite di dati.

C4819 si verifica quando un file di origine ANSI viene compilato in un sistema con una tabella codici che non può rappresentare tutti i caratteri nel file.

Per risolvere C4819, salvare il file in formato Unicode. In Visual Studio, scegliere **File**, **opzioni di salvataggio avanzate**. Nel **opzioni di salvataggio avanzate** finestra di dialogo, selezionare un tipo di codifica che può rappresentare tutti i caratteri nel file, ad esempio UTF-8 e quindi scegliere **OK**.