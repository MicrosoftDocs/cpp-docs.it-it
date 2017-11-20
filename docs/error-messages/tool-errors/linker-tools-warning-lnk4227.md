---
title: Strumenti del linker LNK4227 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK4227
dev_langs: C++
helpviewer_keywords: LNK4227
ms.assetid: 941a0414-9964-4e02-8487-f9daa42ef7f9
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 6ab7c91a9e73a44b3403adb5cfaf77a11713a359
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="linker-tools-warning-lnk4227"></a>Avviso degli strumenti del linker LNK4227  
  
> avviso di operazione di metadati (*HRESULT*): *messaggio_avviso*  
  
Quando si uniscono rilevato differenze nei metadati:  
  
-   Uno o più assembly a cui si fa riferimento all'assembly in fase di generazione.  
  
-   Uno o più file di codice sorgente in una compilazione.  
  
Ad esempio, LNK4227 può verificarsi se si dispone di due funzioni globali con lo stesso nome ma con le informazioni sui parametri dichiarati in modo diverso (vale a dire le dichiarazioni non sono coerenti in tutti i moduli). Usare ildasm.exe /TEXT /METADATA *object_file* su ogni file obj per vedere come i tipi sono diversi.  
  
LNK4227 viene inoltre utilizzato per segnalare i problemi che provengono da un altro strumento. Cercare il messaggio di avviso per ulteriori informazioni.  
  
Per risolvere il problema, è necessario correggere i problemi relativi ai metadati.  
  
## <a name="example"></a>Esempio  
  
LNK4227 viene generato quando un assembly di riferimento è stato firmato in modo diverso rispetto all'assembly che vi fa riferimento.  
  
L'esempio seguente genera l'errore LNK4227:  
  
```cpp  
// LNK4227.cpp  
// compile with: /clr  
using namespace System::Reflection;  
  
[assembly:AssemblyDelaySignAttribute(false)];  
  
int main() {}  
```  
  
 E poi  
  
```cpp  
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
  
## <a name="example"></a>Esempio  
  
LNK4227 può anche essere generato quando vengono passati i numeri di versione in formato non corretto per gli attributi dell'assembly.  Il ' *' notation è specifico per il `AssemblyVersionAttribute`.  Per risolvere il problema, utilizzare solo numeri negli attributi di versione diverso da `AssemblyVersionAttribute`.  
  
L'esempio seguente genera l'errore LNK4227:  
  
```cpp  
// LNK4227e.cpp  
// compile with: /clr /LD /W1  
using namespace System::Reflection;  
[assembly:AssemblyVersionAttribute("2.3.*")];   // OK  
[assembly:AssemblyFileVersionAttribute("2.3.*")];   // LNK4227  
// try the following line instead  
// [assembly:AssemblyFileVersionAttribute("2.3")];  
```