---
title: Compilatore avviso (livello 1) C4651 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4651
dev_langs:
- C++
helpviewer_keywords:
- C4651
ms.assetid: f1ea82aa-4dc1-4972-b55a-57fdb962f0dd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0015102a44b71f342b125532d20849590157ee0c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4651"></a>Avviso del compilatore (livello 1) C4651
'definizione' specificato per l'intestazione precompilata ma non per la compilazione corrente  
  
 La definizione è stata specificata quando l'intestazione precompilata è stato generato, ma non in questa compilazione.  
  
 La definizione sarà più attivo all'interno dell'intestazione precompilata, ma non nella parte restante del codice.  
  
 Se un'intestazione precompilata è stata creata con /DSYMBOL, il compilatore genera questo avviso se la compilazione /Yu non dispone di /DSYMBOL.  Aggiungere /DSYMBOL alla riga di comando /Yu risolve il problema.