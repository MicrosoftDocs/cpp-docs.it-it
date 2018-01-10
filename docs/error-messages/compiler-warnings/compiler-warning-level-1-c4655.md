---
title: Compilatore avviso (livello 1) C4655 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C4655
dev_langs: C++
helpviewer_keywords: C4655
ms.assetid: 540f2c7a-e4a1-49af-84b4-03eeea1bbf41
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2154681269b2c8ac9d29a699f0542b612748c2a9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4655"></a>Avviso del compilatore (livello 1) C4655
**'**   
 ***simbolo* ': tipo di variabile nuovo rispetto all'ultima compilazione o definito diversamente altrove**  
  
 È stato modificato o aggiunto un nuovo tipo di dati dall'ultima compilazione completata. Modifica e continuazione non supporta le modifiche ai tipi di dati.  
  
 Questo avviso è seguito da un [Errore irreversibile C1092](../../error-messages/compiler-errors-1/fatal-error-c1092.md). Per altre informazioni, vedere [Modifiche al codice supportate](/visualstudio/debugger/supported-code-changes-cpp).  
  
### <a name="to-remove-this-warning-without-ending-the-current-debug-session"></a>Per rimuovere questo avviso senza terminare la sessione di debug corrente  
  
1.  Modificare il tipo di dati allo stato precedente all'errore.  
  
2.  Scegliere **Applica modifiche del codice** dal menu **Debug**.  
  
### <a name="to-remove-this-warning-without-changing-your-source-code"></a>Per rimuovere questo avviso senza modificare il codice sorgente  
  
1.  Scegliere **Arresta debug** dal menu **Debug**.  
  
2.  Scegliere **Compila** dal menu **Compilazione**.