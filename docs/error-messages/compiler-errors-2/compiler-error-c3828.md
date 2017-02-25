---
title: "Errore del compilatore C3828 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3828"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3828"
ms.assetid: 8d9cee75-9504-4bc8-88b6-2413618a3f45
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Errore del compilatore C3828
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'object type': argomenti di posizione non consentiti durante la creazione di istanze di classi gestite o WinRT  
  
 Quando si crea un oggetto di un tipo gestito o di un tipo di Windows Runtime, non è possibile usare il form di posizione dell'operatore [ref new, gcnew](../../windows/ref-new-gcnew-cpp-component-extensions.md) o [new](../../cpp/new-operator-cpp.md).  
  
 L'esempio seguente genera l'errore C3828 e mostra come risolverlo:  
  
```  
// C3828a.cpp  
// compile with: /clr  
ref struct M {  
};  
  
ref struct N {  
   static array<char>^ bytes = gcnew array<char>(256);  
};  
  
int main() {  
   M ^m1 = new (&N::bytes) M();   // C3828  
   // The following line fixes the error.  
   // M ^m1 = gcnew M();  
}  
```