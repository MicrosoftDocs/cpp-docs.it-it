---
title: Errore irreversibile C1383 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C1383
dev_langs:
- C++
helpviewer_keywords:
- C1383
ms.assetid: ca224d14-d687-4fd6-80c2-8b82f28924ea
caps.latest.revision: 5
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
ms.openlocfilehash: bbd890a7506059f939ca6d8957f71e20cba771f8
ms.lasthandoff: 04/12/2017

---
# <a name="fatal-error-c1383"></a>Errore irreversibile C1383
l'opzione del compilatore /GL è incompatibile con la versione installata di Common Language Runtime  
  
 L'errore C1383 si verifica quando si usa una versione precedente di Common Language Runtime con un compilatore più recente e durante la compilazione con **/clr** e **/GL.**  
  
 Per risolvere l'errore, non usare **/GL** con **/clr** o installare la versione di Common Language Runtime fornita con il compilatore.  
  
 Per ulteriori informazioni, vedere [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) e [/GL (Ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md).
