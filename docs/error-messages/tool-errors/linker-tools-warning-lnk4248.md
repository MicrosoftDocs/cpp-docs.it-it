---
title: Strumenti del linker LNK4248 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4248
dev_langs:
- C++
helpviewer_keywords:
- LNK4248
ms.assetid: e40523ff-e3cb-4ba6-ab79-23f0f339f6cf
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e3b67661d1ad260f388f8425420711ae2f708ce3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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