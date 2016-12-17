---
title: "Errore del compilatore C2061 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2061"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2061"
ms.assetid: b0e61c0c-a205-4820-b9aa-301d6c6fe6eb
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2061
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

errore di sintassi: identificatore 'identificatore'  
  
 Il compilatore ha rilevato un identificatore in una posizione imprevista.  Prima di utilizzarlo, assicurarsi che `identifier` sia dichiarato.  
  
 È possibile racchiudere tra parentesi un inizializzatore.  Per evitare questo problema, inserire il dichiaratore tra parentesi o renderlo un `typedef`.  
  
 Questo errore può venire generato anche quando il compilatore rileva un'espressione come argomento di un template di classe, utilizzare [typename](../../cpp/typename.md) per indicare al compilatore che si tratta di un tipo.  
  
 Il seguente codice di esempio genera l'errore C2061:  
  
```  
// C2061.cpp  
// compile with: /c  
template < A a >   // C2061  
// try the following line instead  
// template < typename b >  
class c{};  
```  
  
 L'errore C2061 può verificarsi se viene passato un nome di istanza a [typeid](../../windows/typeid-cpp-component-extensions.md):  
  
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