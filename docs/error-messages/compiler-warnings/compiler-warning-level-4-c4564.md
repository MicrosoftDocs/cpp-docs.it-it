---
title: "Avviso del compilatore (livello 4) C4564 | Microsoft Docs"
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
  - "C4564"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4564"
ms.assetid: 555b301b-313e-4262-9f81-eb878674be60
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4564
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il metodo 'metodo' di classe 'classe' definisce il parametro predefinito 'parametro' che non è supportato  
  
 È stato rilevato un metodo con uno o più parametri con valori predefiniti.  I valori predefiniti per i parametri vengono ignorati quando si richiama il metodo. Specificare in modo esplicito i valori per tali parametri.  In caso contrario, verrà generato un errore.  
  
 Nell'esempio seguente è illustrata una DLL creata con Visual Basic, che consente l'utilizzo di parametri predefiniti su argomenti di metodo:  
  
```  
' C4564.vb  
' compile with: vbc /t:library C4564.vb  
Public class TestClass  
   Public Sub MyMethod (a as Integer, _  
                        Optional c as Integer=1)  
   End Sub  
End class  
```  
  
 Nell'esempio di C\+\+ riportato di seguito viene utilizzata la DLL creata con Visual Basic:  
  
```  
// C4564.cpp  
// compile with: /clr /W4 /WX  
#using <C4564.dll>  
  
int main() {  
   TestClass ^ myx = gcnew TestClass();   // C4564  
   myx->MyMethod(9);  
   // try the following line instead, to avoid an error  
   // myx->MyMethod(9, 1);  
}  
```