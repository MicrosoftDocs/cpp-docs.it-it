---
title: Errore del compilatore C2813 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- C2813
ms.assetid: 6cf2135f-7b82-42d1-909a-5e864308a09c
caps.latest.revision: 9
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
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: fc5f5437751abf6bcb11299e8484a199275db970
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c2813"></a>Errore del compilatore C2813
\#importazione non è supportata con /MP  
  
 Errore C2813 viene generato se in un comando del compilatore si specifica il **/MP** contiene l'opzione del compilatore e due o più file da compilare e uno o più file di[#import](../../preprocessor/hash-import-directive-cpp.md) direttiva del preprocessore. Il [#import](../../preprocessor/hash-import-directive-cpp.md) direttiva genera classi C++ tra i tipi nella libreria dei tipi specificata e quindi scrive tali classi in due file di intestazione. Il [#import](../../preprocessor/hash-import-directive-cpp.md) direttiva non è supportata perché se più unità di compilazione importano la stessa libreria dei tipi, viene generato un conflitto quando tentano di scrivere gli stessi file di intestazione nello stesso momento.  
  
 Questo errore del compilatore e **/MP** l'opzione del compilatore sono nuove in [!INCLUDE[vs_orcas_long](../../atl/reference/includes/vs_orcas_long_md.md)].  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C2813. La riga di comando nel commento "compile with:" indica al compilatore di usare le opzioni **/MP** e **/c** per compilare diversi file. Almeno uno dei file contiene il [#import](../../preprocessor/hash-import-directive-cpp.md) direttiva. A scopo di verifica, nell'esempio viene usato due volte lo stesso file.  
  
```  
// C2813.cpp  
// compile with: /MP /c C2813.cpp C2813.cpp  
#import "C:\windows\system32\stdole2.tlb"   // C2813  
int main()   
{  
}  
```
