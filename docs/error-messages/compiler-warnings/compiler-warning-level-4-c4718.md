---
title: Compilatore avviso (livello 4) C4718 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4718
dev_langs:
- C++
helpviewer_keywords:
- C4718
ms.assetid: 29507f8a-b024-42c1-a3b8-f35d1f2641f3
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 214c481f4ad77a7a67190cd7427e0cd5775ccc8c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-4-c4718"></a>Avviso del compilatore (livello 4) C4718
'function call': la chiamata ricorsiva non ha effetti collaterali e verrà eliminata  
  
 Una funzione contiene una chiamata ricorsiva, ma non ha altri effetti collaterali. Una chiamata a questa funzione viene eliminata. Questo non incide sulla correttezza del programma, ma sul comportamento. L'esistenza della chiamata potrebbe determinare un'eccezione di overflow dello stack in fase di esecuzione, eventualità che viene eliminata con la rimozione della chiamata.