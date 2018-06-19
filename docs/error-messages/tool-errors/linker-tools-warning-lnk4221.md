---
title: Strumenti del linker LNK4221 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4221
dev_langs:
- C++
helpviewer_keywords:
- LNK4221
ms.assetid: 8e2eb2de-9532-4b85-908a-8c9ff5c4cccb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8906c4308b8586d5b1312739921f58063e820deb
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33301008"
---
# <a name="linker-tools-warning-lnk4221"></a>Avviso degli strumenti del linker LNK4221
Questo file oggetto non definisce i simboli pubblici non definiti in precedenza, quindi non essere utilizzata da qualsiasi operazione che utilizza la libreria di collegamento  
  
 Prendere in considerazione i seguenti due frammenti di codice.  
  
```  
// a.cpp  
#include <atlbase.h>  
```  
  
```  
// b.cpp  
#include <atlbase.h>  
int function()  
{  
   return 0;  
}  
  
```  
  
 Per compilare i file e creare due file oggetto, eseguire **cl /c a.cpp cpp b. cpp** un prompt dei comandi. Se si collegano file oggetto eseguendo **b. obj. obj /out link /lib**, verrà visualizzato l'avviso LNK4221. Se si collegano gli oggetti eseguendo **. obj b. obj /out link /lib**, non verrà visualizzato un avviso.  
  
 Nel secondo scenario viene generato alcun avviso perché il linker funziona in modo last-in First-Out (LIFO). Nel primo scenario, b. obj viene elaborata prima. obj e. obj non ha nuovi simboli da aggiungere. Indicando al linker di elaborazione. obj, è possibile evitare l'avviso.  
  
 Una causa comune di questo errore è quando due file di origine specificano l'opzione [/Yc (Crea precompilata File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md) con lo stesso nome di file di intestazione specificato nella **intestazione precompilata** campo. Una causa comune di questo problema riguarda stdafx. h, poiché per impostazione predefinita, stdafx.cpp include stdafx. h e non aggiunge nuovi simboli. Se un altro file di origine include stdafx. h con **/Yc** e il file con estensione obj associato viene elaborato prima stdafx, il linker genererà LNK4221.  
  
 Un modo per risolvere questo problema consiste nell'assicurarsi che per ogni intestazione precompilata, è presente un solo file di origine che include con **/Yc**. Tutti gli altri file di origine è necessario utilizzare le intestazioni precompilate. Per ulteriori informazioni su come modificare questa impostazione, vedere [/Yu (utilizza il File intestazione precompilata)](../../build/reference/yu-use-precompiled-header-file.md).