---
title: Errore del compilatore C2441 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2441
dev_langs:
- C++
helpviewer_keywords:
- C2441
ms.assetid: ffbd6573-777a-48dd-892f-5cf4a758dcab
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6557e913f2bd34fda9d435d44020697a925af4e4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2441"></a>Errore del compilatore C2441
'variabile': un simbolo dichiarato con declspec (Process) deve essere const in /clr: pure modalità  
  
 Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015.  
  
 Per impostazione predefinita, le variabili sono per dominio applicazione sotto **/clr: pure**. Una variabile contrassegnata `__declspec(process)` in **/clr: pure** è soggetta a errori se modificato in un dominio applicazione e di lettura in un altro.  
  
 Pertanto, il compilatore impone le variabili per processo `const` in **/clr: pure**, apportato li leggere solo in tutti i domini applicazione.  
  
 Per ulteriori informazioni, vedere [processo](../../cpp/process.md) e [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2441.  
  
```  
// C2441.cpp  
// compile with: /clr:pure /c  
__declspec(process) int i;   // C2441  
__declspec(process) const int j = 0;   // OK  
```