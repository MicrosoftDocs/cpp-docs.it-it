---
title: "Avviso del compilatore (livello 4) C4365 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4365"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4365"
ms.assetid: af4b4191-bdfd-4dbb-8229-3ba4405df257
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 4) C4365
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'azione': conversione da 'tipo\_1' a 'tipo\_2'. Errore di corrispondenza tra signed e unsigned  
  
 Si è tentato, ad esempio, di convertire un valore unsigned in un valore signed.  
  
 L'avviso C4365 è disattivato per impostazione predefinita.  Per ulteriori informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4365:  
  
```  
// C4365.cpp  
// compile with: /W4  
#pragma warning(default:4365)  
  
int f(int) { return 0; }  
void Test(size_t i) {}  
  
int main() {  
   unsigned int n = 10;  
   int o = 10;  
   n++;  
   f(n);   // C4365  
   f(o);   // OK  
  
   Test( -19 );   // C4365  
}  
```