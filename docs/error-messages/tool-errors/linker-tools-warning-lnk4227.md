---
title: Strumenti del linker LNK4227 avviso | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK4227
dev_langs:
- C++
helpviewer_keywords:
- LNK4227
ms.assetid: 941a0414-9964-4e02-8487-f9daa42ef7f9
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: ee566318c7d19159f9a2c084d348b5010a65e2de
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="linker-tools-warning-lnk4227"></a>Avviso degli strumenti del linker LNK4227
avviso di operazione dei metadati (HRESULT): messaggio_avviso  
  
Quando si uniscono rilevato differenze nei metadati:  
  
-   Uno o più assembly cui viene fatto riferimento con l'assembly in fase di generazione.  
  
-   Uno o più file di codice sorgente in una compilazione.  
  
Ad esempio, LNK4227 può verificarsi se si dispongono di due funzioni globali con lo stesso nome ma con informazioni sui parametri dichiarati in modo diverso (dichiarazioni non sono coerenti in tutti i moduli). Utilizzare ildasm.exe /TEXT /METADATA `object_file` in ogni obj file e verrà visualizzato come i tipi sono diversi.  
  
LNK4227 vengono inoltre problemi generati con un altro strumento. Ad esempio, al.exe; vedere [Al.exe errori e avvisi](http://msdn.microsoft.com/en-us/7f125d49-0a03-47a6-9ba9-d61a679a7d4b).  
  
Per risolvere il problema, è necessario correggere i problemi relativi ai metadati.  
  
Ad esempio, LNK4227 viene generato quando un assembly è firmato in modo diverso rispetto all'assembly che fa riferimento a essa.  
  
Nell'esempio seguente viene generato l'errore LNK4227:  
  
```  
// LNK4227.cpp  
// compile with: /clr  
using namespace System::Reflection;  
  
[assembly:AssemblyDelaySignAttribute(false)];  
  
int main() {}  
```  
  
 E poi  
  
```  
// LNK4227b.cpp  
// compile with: /clr LNK4227.cpp /FeLNK4227b.exe  
using namespace System::Reflection;  
using namespace System::Runtime::CompilerServices;  
  
[assembly:AssemblyDelaySignAttribute(true)];  
// Try the following line instead  
// [assembly:AssemblyDelaySignAttribute(false)];  
  
ref class MyClass  
{  
};  
```  
  
LNK4227 può essere generato anche quando vengono passati i numeri di versione in formato non corretto per gli attributi dell'assembly.  Il ' *' notazione è specifica della classe AssemblyVersionAttribute.  Per risolvere il problema, utilizzare solo numeri negli attributi di versione diverso da AssemblyVersionAttribute.  
  
Nell'esempio seguente viene generato l'errore LNK4227:  
  
```  
// LNK4227e.cpp  
// compile with: /clr /LD /W1  
using namespace System::Reflection;  
[assembly:AssemblyVersionAttribute("2.3.*")];   // OK  
[assembly:AssemblyFileVersionAttribute("2.3.*")];   // LNK4227  
// try the following line instead  
// [assembly:AssemblyFileVersionAttribute("2.3")];  
```
