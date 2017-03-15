---
title: "Errore del compilatore C2975 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2975"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2975"
ms.assetid: 526f6b9d-6c76-4c12-9252-1b1d7c1e06c7
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C2975
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'arg': argomento di modello non valido per 'tipo'. Prevista espressione costante in fase di compilazione  
  
 L'argomento di template non corrisponde alla dichiarazione del template. Un'espressione costante deve trovarsi tra parentesi angolari.  Non è consentito utilizzare le variabili come argomenti effettivi di un template.  Controllare la definizione del template per individuare i tipi corretti.  
  
 Il seguente codice di esempio genera l'errore C2975:  
  
```  
// C2975.cpp  
template<int I>  
class X {};  
  
int main() {  
   int i = 4, j = 2;  
   X<i + j> x1;   // C2975  
   X<6> x2;   // OK  
}  
```  
  
 L'errore C2975 si verifica anche quando si utilizza \_\_LINE\_\_ come costante in fase di compilazione con [\/ZI](../../build/reference/z7-zi-zi-debug-information-format.md).  Una soluzione consiste nel compilare con [\/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) anziché **\/ZI**.  
  
```  
// C2975b.cpp  
// compile with: /ZI  
// processor: x86  
template<long line>   
void test(void) {}  
  
int main() {  
   test<__LINE__>();   // C2975  
}  
```