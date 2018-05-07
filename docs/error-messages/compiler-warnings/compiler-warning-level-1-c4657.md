---
title: Compilatore avviso (livello 1) C4657 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4657
dev_langs:
- C++
helpviewer_keywords:
- C4657
ms.assetid: eb750050-cea6-4ead-b80c-d5dcd4971cfc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 270cfb458b43d72ca1102cee128ed5998d74f665
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4657"></a>Avviso del compilatore (livello 1) C4657
l'espressione utilizza un tipo dati nuovo rispetto all'ultima compilazione  
  
 Dall'ultima compilazione riuscita, è stato modificato o aggiunto un tipo di dati che risulta quindi nuovo nel codice sorgente. Modifica e continuazione non supporta le modifiche ai tipi di dati.  
  
 Questo avviso verrà seguito da [Errore irreversibile C1092](../../error-messages/compiler-errors-1/fatal-error-c1092.md). Per altre informazioni, vedere [Modifiche al codice supportate](/visualstudio/debugger/supported-code-changes-cpp).  
  
### <a name="to-remove-this-warning-without-ending-the-current-debug-session"></a>Per rimuovere questo avviso senza terminare la sessione di debug corrente  
  
1.  Modificare il tipo di dati allo stato precedente all'errore.  
  
2.  Scegliere **Applica modifiche del codice** dal menu **Debug**.  
  
### <a name="to-remove-this-error-without-changing-your-source-code"></a>Per rimuovere questo errore senza modificare il codice sorgente  
  
1.  Scegliere **Arresta debug** dal menu **Debug**.  
  
2.  Scegliere **Compila** dal menu **Compilazione**.