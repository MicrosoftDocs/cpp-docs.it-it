---
title: "Avviso del compilatore (livello 4) C4242 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4242"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4242"
ms.assetid: 8df742e1-fbf1-42f3-8e93-c0e1c222dc7e
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Avviso del compilatore (livello 4) C4242
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': conversione da 'tipo1' a 'tipo2'. Possibile perdita di dati  
  
 Se i tipi sono diversi,  la conversione di tipo, eseguita dal compilatore, può provocare  la perdita di dati.  
  
 Per impostazione predefinita, questo avviso non è attivo.  Per ulteriori informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
 Per ulteriori informazioni sull'avviso C4242, vedere la sezione relativa agli errori comuni del compilatore[winprog64.common\_compiler\_errors](http://msdn.microsoft.com/library/windows/desktop/aa384160).  
  
 Il seguente codice di esempio genera l'errore C4242:  
  
```  
// C4242.cpp  
// compile with: /W4  
#pragma warning(4:4242)  
int func() {  
   return 0;  
}  
  
int main() {  
   char a;  
   a = func();   // C4242, return type and variable type do not match  
}  
```