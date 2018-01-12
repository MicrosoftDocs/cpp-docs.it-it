---
title: Compilatore avviso (livello 4) C4513 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4513
dev_langs: C++
helpviewer_keywords: C4513
ms.assetid: 6877334a-f30a-4184-9483-dac3348737a4
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c07828569b789c6035b5ea28d47d7fd026341026
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-4-c4513"></a>Avviso del compilatore (livello 4) C4513
'class': Impossibile generare un distruttore  
  
 Il compilatore può generare un distruttore predefinito per la classe specificata. è stato creato senza un distruttore. Il distruttore è in una classe di base che non è possibile accedere alla classe derivata. Se la classe base ha un distruttore privato, renderlo pubblico o protetto.