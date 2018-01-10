---
title: Errore del compilatore C2061 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2061
dev_langs: C++
helpviewer_keywords: C2061
ms.assetid: b0e61c0c-a205-4820-b9aa-301d6c6fe6eb
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e18810742efa94cdd130c1e11a2cdda0656c9921
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2061"></a>Errore del compilatore C2061
Errore di sintassi: identificatore 'identifier'  
  
 Il compilatore ha rilevato un identificatore in una posizione imprevista. Verificare che l'opzione `identifier` viene dichiarata prima di utilizzarlo.  
  
 Un inizializzatore può essere racchiusi tra parentesi. Per evitare questo problema, racchiudere il dichiaratore tra parentesi o renderlo un `typedef`.  
  
 Questo errore potrebbe essere causato anche quando il compilatore rileva un'espressione come un argomento di modello di classe. Utilizzare [typename](../../cpp/typename.md) per indicare al compilatore è un tipo.  
  
 L'esempio seguente genera l'errore C2061:  
  
```  
// C2061.cpp  
// compile with: /c  
template < A a >   // C2061  
// try the following line instead  
// template < typename b >  
class c{};  
```  
  
 C2061 può verificarsi se si passa un nome di istanza per [typeid](../../windows/typeid-cpp-component-extensions.md):  
  
```  
// C2061b.cpp  
// compile with: /clr  
ref struct G {  
   int i;  
};  
  
int main() {  
   G ^ pG = gcnew G;  
   System::Type ^ pType = typeid<pG>;   // C2061  
   System::Type ^ pType2 = typeid<G>;   // OK  
}  
```