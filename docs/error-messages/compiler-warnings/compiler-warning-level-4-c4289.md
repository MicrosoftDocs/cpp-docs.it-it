---
title: "Avviso del compilatore (livello 4) C4289 | Microsoft Docs"
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
  - "C4289"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4289"
ms.assetid: 0dbd2863-4cde-4e16-894b-104a2d5fa724
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4289
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

utilizzata estensione non standard. 'variabile': variabile di controllo ciclo dichiarata nel ciclo for e utilizzata all'esterno dell'ambito del ciclo for  
  
 Durante la compilazione con [\/Ze](../../build/reference/za-ze-disable-language-extensions.md) e **\/Zc:forScope\-**, una variabile dichiarata in un ciclo [for](../../cpp/for-statement-cpp.md) è stata utilizzata all'esterno dell'ambito del ciclo **for**.  
  
 Per informazioni su come specificare un comportamento standard nei cicli **for** con **\/Ze**, vedere [\/Zc:forScope](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md).  
  
 Per impostazione predefinita, questo avviso non è attivo.  Per ulteriori informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
 Il seguente codice di esempio genera l'errore C4289:  
  
```  
// C4289.cpp  
// compile with: /W4 /Zc:forScope-  
#pragma warning(default:4289)  
int main() {  
   for (int i = 0 ; ; )   // C4289  
      break;  
   i++;  
}  
```