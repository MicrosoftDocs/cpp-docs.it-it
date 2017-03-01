---
title: Errore del compilatore C2393 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2393
dev_langs:
- C++
helpviewer_keywords:
- C2393
ms.assetid: 4bd95728-e813-4ce8-844a-c6ebe235ca82
caps.latest.revision: 11
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
ms.openlocfilehash: 078454c9824a734863796ab5810056147d17879c
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2393"></a>Errore del compilatore C2393
'simbolo': simbolo per ogni dominio di applicazione non possa essere allocata nel segmento 'segmento'  
  
 Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015.  
  
 L'utilizzo di [appdomain](../../cpp/appdomain.md) variabili implica che si esegue la compilazione con **/clr: pure** o **/CLR: safe**, e un'immagine pura o safe non può contenere segmenti di dati.  
  
 Vedere [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) per ulteriori informazioni.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C2393.  
  
```  
// C2393.cpp  
// compile with: /clr:pure /c  
#pragma data_seg("myseg")  
int n = 0;   // C2393  
```
