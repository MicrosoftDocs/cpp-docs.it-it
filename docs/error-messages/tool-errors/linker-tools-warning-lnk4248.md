---
title: Strumenti del linker LNK4248 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK4248
dev_langs:
- C++
helpviewer_keywords:
- LNK4248
ms.assetid: e40523ff-e3cb-4ba6-ab79-23f0f339f6cf
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 01053ddbbb0c7d234f6b465392f5bbe991ea329c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-warning-lnk4248"></a>Avviso degli strumenti del linker LNK4248
token non risolto typeref (token) per 'type'. immagine non può essere eseguita  
  
 Un tipo non dispone di una definizione nei metadati MSIL.  
  
 Errore LNK4248 può verificarsi quando è presente solo una dichiarazione con prototipo per un tipo in un modulo MSIL (compilato con **/clr**), in cui il tipo viene fatto riferimento nel modulo e il modulo è collegato a un modulo nativo con una definizione per il tipo.  
  
 In questo caso, il linker fornirà la definizione di tipo nativo nei metadati MSIL e questo può fornire il comportamento corretto.  
  
 Tuttavia, se una dichiarazione con prototipo è un tipo CLR, quindi definizione di tipo nativo del linker potrebbe non essere corretto  
  
 Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
1.  Fornire la definizione di tipo nel modulo MSIL.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore LNK4248. Definire la struttura di risolvere.  
  
```  
// LNK4248.cpp  
// compile with: /clr /W1  
// LNK4248 expected  
struct A;  
void Test(A*){}  
  
int main() {  
   Test(0);  
}  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente è una definizione in avanti di un tipo.  
  
```  
// LNK4248_2.cpp  
// compile with: /clr /c  
class A;   // provide a definition for A here to resolve  
A * newA();  
int valueA(A * a);  
  
int main() {  
   A * a = newA();  
   return valueA(a);  
}  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore LNK4248.  
  
```  
// LNK4248_3.cpp  
// compile with: /c  
// post-build command: link LNK4248_2.obj LNK4248_3.obj  
class A {  
public:   
   int b;  
};  
  
A* newA() {  
   return new A;  
}  
  
int valueA(A * a) {  
   return (int)a;  
}  
```