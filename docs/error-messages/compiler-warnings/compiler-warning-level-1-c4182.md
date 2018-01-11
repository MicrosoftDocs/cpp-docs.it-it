---
title: Compilatore avviso (livello 1) C4182 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C4182
dev_langs: C++
helpviewer_keywords: C4182
ms.assetid: 8970f3c6-e2dd-407e-b2ec-964360eb8b43
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3ef78cebafcb07977611f92ad9f49a3d5b2c3dde
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4182"></a>Avviso del compilatore (livello 1) C4182
\#includere il livello di nidificazione profonda 'number'; possibile ricorsione infinita  
  
 Il compilatore ha esaurito lo spazio nell'heap a causa del numero di file di inclusione annidati. Un file di inclusione è annidato quando viene incluso da un altro file di inclusione.  
  
 Questo messaggio è puramente informativo e precede l'errore [C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md).