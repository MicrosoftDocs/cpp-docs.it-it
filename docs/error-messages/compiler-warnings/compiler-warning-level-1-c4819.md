---
title: Compilatore avviso (livello 1) C4819 | Documenti Microsoft
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
ms.openlocfilehash: 718e0783c3f7afcc9af958f7940f437ac4c944b7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4819"></a>Avviso del compilatore (livello 1) C4819
Il file contiene un carattere che non può essere rappresentato nella tabella codici corrente (numero). Salvare il file in formato Unicode per evitare perdite di dati.  
  
 C4819 si verifica quando un file di origine ANSI viene compilato in un sistema con una tabella codici che non può rappresentare tutti i caratteri nel file.  
  
 Per risolvere C4819, salvare il file in formato Unicode. In Visual Studio, scegliere **File**, **opzioni di salvataggio avanzate**. Nel **opzioni di salvataggio avanzate** finestra di dialogo, selezionare una codifica che può rappresentare tutti i caratteri nel file, ad esempio UTF-8: e quindi scegliere **OK**.