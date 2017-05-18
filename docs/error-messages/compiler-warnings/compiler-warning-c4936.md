---
title: Avviso del compilatore C4936 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4936
dev_langs:
- C++
helpviewer_keywords:
- C4936
ms.assetid: 6676de35-bf1b-4d0b-a70f-b5734130336c
caps.latest.revision: 12
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: cc82b83860786ffc3f0aee73ede18ecadef16a7a
ms.openlocfilehash: 58d702067c186eeeea94768a03836b64577961ca
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-warning-c4936"></a>Avviso del compilatore C4936
questo __declspec è supportato solo con la compilazione con /clr o /clr:pure  
  
 Il **/clr: pure** l'opzione del compilatore è deprecato in Visual Studio 2015.  
  
 Oggetto `__declspec` ma che è stato utilizzato modificatore `__declspec` modificatore è valido solo quando compilato con uno del [/clr](../../build/reference/clr-common-language-runtime-compilation.md) opzioni.  
  
 Per ulteriori informazioni, vedere [appdomain](../../cpp/appdomain.md) e [processo](../../cpp/process.md).  
  
 C4936 viene sempre generato come errore.  È possibile disabilitare C4936 con il [avviso](../../preprocessor/warning.md) pragma.  
  
 L'esempio seguente genera l'avviso C4936:  
  
```  
// C4936.cpp  
// compile with: /c  
// #pragma warning (disable : 4936)  
__declspec(process) int i;   // C4936  
__declspec(appdomain) int j;   // C4936  
```
