---
title: Errore del compilatore C2441 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2441
dev_langs:
- C++
helpviewer_keywords:
- C2441
ms.assetid: ffbd6573-777a-48dd-892f-5cf4a758dcab
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
ms.sourcegitcommit: cc82b83860786ffc3f0aee73ede18ecadef16a7a
ms.openlocfilehash: 1b98c85df0db4e947ceb5722715f5d020e1ecbec
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2441"></a>Errore del compilatore C2441
'variabile': un simbolo dichiarato con declspec (Process) deve essere const in /clr: pure modalità  
  
 Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015.  
  
 Per impostazione predefinita, le variabili sono per dominio applicazione sotto **/clr: pure**. Una variabile contrassegnata `__declspec(process)` in **/clr: pure** è soggetta a errori se modificato in un dominio applicazione e di lettura in un altro.  
  
 Pertanto, il compilatore impone le variabili per processo `const` in **/clr: pure**, operazioni di lettura li solo in tutti i domini applicazione.  
  
 Per ulteriori informazioni, vedere [processo](../../cpp/process.md) e [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C2441.  
  
```  
// C2441.cpp  
// compile with: /clr:pure /c  
__declspec(process) int i;   // C2441  
__declspec(process) const int j = 0;   // OK  
```
