---
title: Riga di comando D9027 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- D9027
dev_langs:
- C++
helpviewer_keywords:
- D9027
ms.assetid: 2a29edc5-5649-48f2-9058-2057c747284c
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: 7d569243a6d0d1669a8964ab9c419cb0e7428ba9
ms.lasthandoff: 04/04/2017

---
# <a name="command-line-warning-d9027"></a>Avviso della riga di comando D9027
file di origine '\<filename >' ignorato  
  
 CL.exe ignorato il file di origine di input.  
  
 Questo avviso può essere causato da uno spazio tra l'opzione /Fo e un nome di file di output in una riga di comando con l'opzione/c. Ad esempio:  
  
```  
cl /c /Fo output.obj input.c   
```  
  
 Poiché è presente uno spazio tra /Fo e `output.obj`, CL.exe accetta `output.obj` come il nome del file di input. Per risolvere il problema, rimuovere lo spazio:  
  
```  
cl /c /Fooutput.obj input.c   
```
