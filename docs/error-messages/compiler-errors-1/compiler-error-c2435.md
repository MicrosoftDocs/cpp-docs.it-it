---
title: Errore del compilatore C2435 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2435
dev_langs:
- C++
helpviewer_keywords:
- C2435
ms.assetid: be6aa8f8-579b-42ea-bdd8-2d01393646ad
caps.latest.revision: 12
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 53a3144fe8e87f36a1a5149d292130a9913b646a
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="compiler-error-c2435"></a>Errore del compilatore C2435
'var': l'inizializzazione dinamica richiede codice CRT gestito; Impossibile compilare con /CLR: safe  
  
 Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015.  
  
 Inizializzazione di variabili globali per dominio di applicazione richiede la libreria CRT compilata con `/clr:pure`, che non genera un'immagine verificabile.  
  
 Per ulteriori informazioni, vedere [appdomain](../../cpp/appdomain.md) e [processo](../../cpp/process.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2435:  
  
```  
// C2435.cpp  
// compile with: /clr:safe /c  
int globalvar = 0;   // C2435  
  
__declspec(process)  
int globalvar2 = 0;  
```
