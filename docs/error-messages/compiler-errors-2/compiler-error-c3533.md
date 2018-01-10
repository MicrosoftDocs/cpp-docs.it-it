---
title: Errore del compilatore C3533 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3533
dev_langs: C++
helpviewer_keywords: C3533
ms.assetid: a68b1ba5-466e-4190-a1a4-505ccfe548b7
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e7bcd9c710ac5cdd50b966a72291918459d984be
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3533"></a>Errore del compilatore C3533
'type': un parametro non può avere un tipo che contiene 'auto'  
  
 Un parametro di metodo o di modello non può essere dichiarato con la `auto` parola chiave se il valore predefinito [/Zc: Auto](../../build/reference/zc-auto-deduce-variable-type.md) è attiva l'opzione del compilatore.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
1.  Rimuovere il `auto` parola chiave dalla dichiarazione del parametro.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C3535 perché dichiara un parametro di funzione con il `auto` (parola chiave) e viene compilato con **/Zc: Auto**.  
  
```  
// C3533a.cpp  
// Compile with /Zc:auto  
void f(auto j){} // C3533  
```  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C3535 perché dichiara un parametro di modello con il `auto` (parola chiave) e viene compilato con **/Zc: Auto**.  
  
```  
// C3533b.cpp  
// Compile with /Zc:auto  
template<auto T> class C{}; // C3533  
```  
  
## <a name="see-also"></a>Vedere anche  
 [parola chiave Auto](../../cpp/auto-keyword.md)   
 [/Zc: auto (deduzione del tipo di variabile)](../../build/reference/zc-auto-deduce-variable-type.md)