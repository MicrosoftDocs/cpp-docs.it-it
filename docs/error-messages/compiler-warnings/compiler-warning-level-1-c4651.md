---
title: Compilatore avviso (livello 1) C4651 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4651
dev_langs:
- C++
helpviewer_keywords:
- C4651
ms.assetid: f1ea82aa-4dc1-4972-b55a-57fdb962f0dd
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: dce099d657341ebc957c95ab0cd14f508f9e36ee
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4651"></a>Avviso del compilatore (livello 1) C4651
'definizione' specificato per l'intestazione precompilata ma non per la compilazione corrente  
  
 La definizione è stata specificata quando l'intestazione precompilata è stato generato, ma non in questa compilazione.  
  
 La definizione sarà più attivo all'interno dell'intestazione precompilata, ma non nella parte restante del codice.  
  
 Se un'intestazione precompilata è stata creata con /DSYMBOL, il compilatore genera questo avviso se la compilazione /Yu non dispone di /DSYMBOL.  Aggiungere /DSYMBOL alla riga di comando /Yu risolve il problema.