---
title: "Avviso del compilatore (livello 1) C4383 | Microsoft Docs"
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
  - "C4383"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4383"
ms.assetid: 96c0e52d-874e-4b57-a154-0e49b6a00fae
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4383
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operatore\_dereferenziazione\_istanza': il significato della dereferenziazione di un handle può variare quando esiste un operatore 'operatore' definito dall'utente; scrivere l'operatore come funzione statica per specificare l'operando in modo esplicito  
  
 Quando si aggiunge l'override di un'istanza dell'operatore della dereferenziazione definito dall'utente in un tipo gestito, viene potenzialmente annullata la possibilità dell'operatore della dereferenziazione di restituire l'oggetto dell'handle.  Si consiglia di scrivere un operatore della dereferenziazione definito dall'utente e statico.  
  
 Per ulteriori informazioni, vedere [Operatore handle a oggetto \(^\)](../../windows/handle-to-object-operator-hat-cpp-component-extensions.md) e [Tracking Reference Operator](../../windows/tracking-reference-operator-cpp-component-extensions.md).  
  
 Un operatore di istanza non è inoltre disponibile per i compilatori di altri linguaggi mediante metadati referenziati.  Per ulteriori informazioni, vedere [Operatori definiti dall'utente](../../dotnet/user-defined-operators-cpp-cli.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4383:  
  
```  
// C4383.cpp  
// compile with: /clr /W1  
  
ref struct S {  
   int operator*() { return 0; }   // C4383  
};  
  
ref struct T {  
   static int operator*(T%) { return 0; }  
};   
  
int main() {  
   S s;  
   S^ pS = %s;  
  
   T t;  
   T^ pT = %t;  
   T% rT = *pT;  
}  
```