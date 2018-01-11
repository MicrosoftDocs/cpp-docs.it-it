---
title: Compilatore avviso (livello 4) C4564 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4564
dev_langs: C++
helpviewer_keywords: C4564
ms.assetid: 555b301b-313e-4262-9f81-eb878674be60
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 25f9f8755acafd71a9ac75a68f601660b781746a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-4-c4564"></a>Avviso del compilatore (livello 4) C4564
metodo 'method' classe 'class' definisce il parametro predefinito non supportato 'parameter'  
  
 Il compilatore ha rilevato un metodo con uno o più parametri con valori predefiniti. I valori predefiniti per i parametri verranno ignorati quando viene richiamato il metodo; specificare in modo esplicito i valori per tali parametri. Se non si specificano valori per tali parametri in modo esplicito, il compilatore C++ genererà un errore.  
  
 Dato il seguente file DLL creati con Visual Basic, che consente di parametri predefiniti in argomenti del metodo:  
  
```  
' C4564.vb  
' compile with: vbc /t:library C4564.vb  
Public class TestClass  
   Public Sub MyMethod (a as Integer, _  
                        Optional c as Integer=1)  
   End Sub  
End class  
```  
  
 L'esempio seguente di C++ che utilizza la DLL creata con Visual Basic, e  
  
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