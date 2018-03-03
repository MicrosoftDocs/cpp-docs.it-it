---
title: C4191 (livello 3) di avviso del compilatore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4191
dev_langs:
- C++
helpviewer_keywords:
- C4191
ms.assetid: 576d3bc6-95b7-448a-af31-5d798452df09
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4a40f5a05b4efc030cd545f2ffd27325fca86294
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-3-c4191"></a>Avviso del compilatore (livello 3) C4191
'operator/operation': conversione non affidabile da 'type of expression' in 'type required'  
  
 Numerose operazioni in cui sono usati puntatori a funzione sono considerate non affidabili:  
  
-   Tipi di funzione con diverse convenzioni di chiamata.  
  
-   Tipi di funzione con diverse convenzioni di restituzione.  
  
-   Tipi restituiti o tipi di argomento con diverse dimensioni, categorie di tipi o classificazioni.  
  
-   Lunghezze diverse degli elenchi di argomenti (su `__cdecl`, solo sul cast da un elenco più lungo a uno più breve, anche se quest'ultimo è varargs).  
  
-   Puntatore ai dati (diverso da **void\***) con alias basato su un puntatore a funzione.  
  
-   Qualsiasi altra differenza di tipo che restituisce un errore o un avviso su un `reinterpret_cast`.  
  
 La chiamata di questa funzione tramite il puntatore risultante può causare l'arresto anomalo del programma.  
  
 Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .  
  
 L'esempio seguente genera l'errore C4191:  
  
```  
// C4191.cpp  
// compile with: /W3 /clr  
#pragma warning(default: 4191)  
  
void __clrcall f1() { }  
void __cdecl   f2() { }  
  
typedef void (__clrcall * fnptr1)();  
typedef void (__cdecl   * fnptr2)();  
  
int main() {  
   fnptr1 fp1 = static_cast<fnptr1>(&f1);  
   fnptr2 fp2 = (fnptr2) &f2;  
  
   fnptr1 fp3 = (fnptr1) &f2;   // C4191  
   fnptr2 fp4 = (fnptr2) &f1;   // C4191  
};  
```