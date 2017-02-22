---
title: "Avviso degli strumenti del linker LNK4248 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4248"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4248"
ms.assetid: e40523ff-e3cb-4ba6-ab79-23f0f339f6cf
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Avviso degli strumenti del linker LNK4248
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

token typeref \(token\) non risolto per 'tipo'; l'immagine potrebbe non essere eseguita  
  
 Un tipo non presenta una definizione nei metadati del codice MSIL.  
  
 L'errore LNK4248 può verificarsi quando in un modulo MSIL \(compilato con **\/clr**\) è presente una sola dichiarazione con prototipo relativa a un tipo a cui viene fatto riferimento nel modulo stesso e tale modulo è collegato a un modulo nativo in cui è presente una definizione per il tipo.  
  
 In questo caso il linker fornirà la definizione del tipo nativo nei metadati del codice MSIL e in tal modo sarà possibile specificare il comportamento corretto.  
  
 Tuttavia, se una dichiarazione del tipo con prototipo è un tipo CLR, è possibile che la definizione del tipo nativo non sia corretta.  
  
 Per ulteriori informazioni, vedere [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
### Per correggere l'errore  
  
1.  Fornire la definizione del tipo nel modulo MSIL.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore LNK4248.  Definire la struttura A da risolvere.  
  
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
  
## Esempio  
 Nell'esempio riportato di seguito viene illustrata una definizione con prototipo di un tipo.  
  
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
  
## Esempio  
 Nell'esempio seguente viene generato l'errore LNK4248.  
  
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