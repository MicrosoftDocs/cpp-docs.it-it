---
title: Errore irreversibile C1210 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-csharp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C1210
dev_langs:
- C++
helpviewer_keywords:
- C1210
ms.assetid: e2208309-c284-425c-a7e8-48e96e66f35b
caps.latest.revision: 7
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
ms.sourcegitcommit: cc82b83860786ffc3f0aee73ede18ecadef16a7a
ms.openlocfilehash: f3abd56aebdf7e83bbab10b6083ad6fc14987fbd
ms.lasthandoff: 02/24/2017

---
# <a name="fatal-error-c1210"></a>Errore irreversibile C1210
/clr:pure e /clr:safe non supportate dalla versione del runtime installata  
  
 Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015.  
  
 L'errore C1210 si verifica quando è presente un compilatore per la versione corrente, ma un Common Language Runtime di una versione precedente.  
  
 Alcune funzionalità del compilatore potrebbero non funzionare in una versione precedente del runtime.  
  
 Per risolvere l'errore C1210, installare la versione di Common Language Runtime che deve essere usata con il compilatore.
