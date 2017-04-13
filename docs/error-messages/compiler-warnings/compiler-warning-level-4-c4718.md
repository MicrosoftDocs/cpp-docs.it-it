---
title: Compilatore avviso (livello 4) C4718 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4718
dev_langs:
- C++
helpviewer_keywords:
- C4718
ms.assetid: 29507f8a-b024-42c1-a3b8-f35d1f2641f3
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 11bbc611f9f0493f0f3340799959bb635de891b3
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-4-c4718"></a>Avviso del compilatore (livello 4) C4718
'function call': la chiamata ricorsiva non ha effetti collaterali e verrà eliminata  
  
 Una funzione contiene una chiamata ricorsiva, ma non ha altri effetti collaterali. Una chiamata a questa funzione viene eliminata. Questo non incide sulla correttezza del programma, ma sul comportamento. L'esistenza della chiamata potrebbe determinare un'eccezione di overflow dello stack in fase di esecuzione, eventualità che viene eliminata con la rimozione della chiamata.
