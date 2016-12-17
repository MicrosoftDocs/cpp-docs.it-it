---
title: "Operatori di uguaglianza: == e != | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "not_eq"
  - "!="
  - "=="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "!= (operatore)"
  - "== (operatore)"
  - "operatore di uguaglianza"
  - "uguaglianza (operatore)"
  - "uguaglianza (operatore), sintassi"
  - "diverso da (operatore di confronto)"
  - "not_eq (operatore)"
ms.assetid: ba4e9659-2392-4fb4-be5a-910a2a6df45a
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatori di uguaglianza: == e !=
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
      expression == expression  
expression != expression  
```  
  
## Note  
 Gli operatori di uguaglianza binari confrontano i propri operandi per verificare identità o disuguaglianza.  
  
 Gli operatori di uguaglianza, uguale a \(`==`\) e non uguale a \(`!=`\), hanno precedenza inferiore rispetto agli operatori relazionali, ma si comportano in modo analogo.  Il tipo di risultato per questi operatori è `bool`.  
  
 L'operatore uguale a \(`==`\) restituisce **true** \(1\) se entrambi gli operandi hanno lo stesso valore; in caso contrario, l'operando restituisce **false** \(0\).  L'operatore non uguale \(`!=`\) restituisce **true** se gli operandi non hanno lo stesso valore, in caso contrario, l'operando restituisce **false**.  
  
## Parola chiave operator per \!\=  
 L'operatore `not_eq` è il testo equivalente di `!=`.  Esistono due modi per accedere all'operatore `not_eq` nei programmi: includere il file di intestazione `iso646.h` o eseguire la compilazione con l'opzione del compilatore [\/Za](../build/reference/za-ze-disable-language-extensions.md) \(disabilita estensioni linguaggio\).  
  
## Esempio  
  
```  
// expre_Equality_Operators.cpp  
// compile with: /EHsc  
#include <iostream>  
  
using namespace std;  
  
int main() {  
   cout  << boolalpha  
         << "The true expression 3 != 2 yields: "  
         << (3 != 2) << endl  
         << "The false expression 20 == 10 yields: "  
         << (20 == 10) << endl;  
}  
```  
  
 Gli operatori di uguaglianza possono confrontare i puntatori ai membri dello stesso tipo.  In tale confronto, vengono eseguite le conversioni puntatore a membro, come illustrato in [Conversioni puntatore a membro](../misc/pointer-to-member-conversions.md).  I puntatori ai membri possono essere confrontati a un'espressione costante che restituisce 0.  
  
## Vedere anche  
 [Espressioni con operatori binari](../cpp/expressions-with-binary-operators.md)   
 [Operatori C\+\+](../misc/cpp-operators.md)   
 [Operatori C\+\+, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori relazionali e operatori di uguaglianza C](../c-language/c-relational-and-equality-operators.md)