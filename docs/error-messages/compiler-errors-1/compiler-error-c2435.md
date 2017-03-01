---
title: Errore del compilatore C2435 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
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
translationtype: Machine Translation
ms.sourcegitcommit: cc82b83860786ffc3f0aee73ede18ecadef16a7a
ms.openlocfilehash: dbc2045eae70cacd42e13ddb7cc8ecb3d60b8596
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2435"></a>Errore del compilatore C2435
'variabile': l'inizializzazione dinamica richiede CRT gestito, non può essere compilato con /CLR: safe  
  
 Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015.  
  
 Inizializzazione di variabili di dominio di applicazione globale richiede la libreria CRT compilata con `/clr:pure`, che non genera un'immagine verificabile.  
  
 Per ulteriori informazioni, vedere [appdomain](../../cpp/appdomain.md) e [processo](../../cpp/process.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C2435:  
  
```  
// C2435.cpp  
// compile with: /clr:safe /c  
int globalvar = 0;   // C2435  
  
__declspec(process)  
int globalvar2 = 0;  
```
