---
title: Compilatore avviso (livello 1) C4819 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4819
dev_langs:
- C++
helpviewer_keywords:
- C4819
ms.assetid: c0316e85-249c-414d-9df0-622d077c6bc2
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b515a3f5e840bbc93f37420866023ee778b404ee
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4819"></a>Avviso del compilatore (livello 1) C4819
Il file contiene un carattere che non può essere rappresentato nella tabella codici corrente (numero). Salvare il file in formato Unicode per evitare perdite di dati.  
  
 C4819 si verifica quando un file di origine ANSI viene compilato in un sistema con una tabella codici che non può rappresentare tutti i caratteri nel file.  
  
 Per risolvere C4819, salvare il file in formato Unicode. In Visual Studio, scegliere **File**, **opzioni di salvataggio avanzate**. Nel **opzioni di salvataggio avanzate** finestra di dialogo, selezionare una codifica che può rappresentare tutti i caratteri nel file, ad esempio UTF-8: e quindi scegliere **OK**.