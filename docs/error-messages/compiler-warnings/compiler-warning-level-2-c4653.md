---
title: Compilatore avviso (livello 2) C4653 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4653
dev_langs: C++
helpviewer_keywords: C4653
ms.assetid: 90ec3317-3d39-4b4c-bcd1-97e7c799e1b6
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8eb855e1c11136cd88c1c1e796d9759581e3ceb3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-2-c4653"></a>Avviso del compilatore (livello 2) C4653
opzione del compilatore 'option' non è coerente con l'intestazione precompilata. opzione della riga di comando corrente ignorata  
  
 Un'opzione specificata con Usa intestazione precompilata ([/Yu](../../build/reference/yu-use-precompiled-header-file.md)) opzione non è coerente con le opzioni specificate durante la creazione dell'intestazione precompilata. Questa compilazione utilizzata l'opzione specificata quando è stato creato l'intestazione precompilata.  
  
 Questo avviso può verificarsi quando un valore diverso per l'opzione di compressione delle strutture ([/Zp](../../build/reference/zp-struct-member-alignment.md)) è stato specificato durante la compilazione dell'intestazione precompilata.