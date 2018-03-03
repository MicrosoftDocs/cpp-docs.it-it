---
title: Compilatore (livello 4) Avviso C4092 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4092
dev_langs:
- C++
helpviewer_keywords:
- C4092
ms.assetid: 396ae826-a892-4327-bd66-f4762376d72b
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6eec21584ec56567b818f23e7dfcf5fb708369ee
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-4-c4092"></a>Compilatore (livello 4) Avviso C4092
sizeof restituisce 'long senza segno'  
  
 L'operando del `sizeof` operatore era molto grande, pertanto `sizeof` restituito un valore unsigned **lungo**. Questo avviso viene visualizzato nelle estensioni Microsoft ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)). In compatibilità ANSI (/Za), il risultato viene invece troncato.