---
title: Errore del compilatore C2951 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2951
dev_langs:
- C++
helpviewer_keywords:
- C2951
ms.assetid: c6f95aa2-c894-425b-a51c-d40d70c8daa1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0883b0942fdfbe3d55a540fbed35a0affc73be5b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2951"></a>Errore del compilatore C2951
le dichiarazioni di tipo sono consentite solo spazio dei nomi globale, o l'ambito di classe  
  
 È possibile dichiarare un generico o la classe modello di fuori globale o ambito dello spazio dei nomi. Se si apportano le dichiarazioni di tipo generico o modello in un file di inclusione, assicurarsi che il file di inclusione sia in ambito globale.  
  
 L'esempio seguente genera l'errore C2951:  
  
```  
// C2951.cpp  
template <class T>  
class A {};  
  
int main() {  
   template <class T>   // C2951  
   class B {};  
}  
```  
  
 C2951 può verificarsi anche quando si usano i generics:  
  
```  
// C2951b.cpp  
// compile with: /clr /c  
  
// OK  
generic <class T>   
ref class GC { };  
  
int main() {  
   generic <class T> ref class GC2 {};   // C2951  
}  
```