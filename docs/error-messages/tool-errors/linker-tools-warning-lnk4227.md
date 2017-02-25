---
title: "Avviso degli strumenti del linker LNK4227 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4227"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4227"
ms.assetid: 941a0414-9964-4e02-8487-f9daa42ef7f9
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Avviso degli strumenti del linker LNK4227
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

avviso di operazione sui metadati \(HRESULT\): messaggio\_avviso  
  
 Sono state rilevate differenze nei metadati durante l'unione:  
  
-   Uno o più assembly a cui viene fatto riferimento con l'assembly attualmente in fase di compilazione.  
  
-   Uno o più file di codice sorgente in una compilazione.  
  
 L'avviso LNK4227 può essere restituito, ad esempio, nel caso in cui due funzioni globali abbiamo lo stesso nome ma le relative informazioni sui parametri siano state dichiarate in modo differente \(le dichiarazioni non sono coerenti in tutti i moduli\).  Utilizzare ildasm.exe \/TEXT \/METADATA `object_file` su ciascun file obj per verificare le differenze tra i tipi.  
  
 Nell'avviso LNK4227 vengono inoltre riportati problemi generati con un altro strumento.  Ad esempio, al.exe; vedere [Errori e avvisi di Al.exe](http://msdn.microsoft.com/it-it/7f125d49-0a03-47a6-9ba9-d61a679a7d4b).  
  
 È necessario correggere i problemi relativi ai metadati per risolvere il problema.  
  
 Ad esempio, l'avviso LNK4227 viene generato quando un assembly è firmato in modo diverso rispetto all'assembly che fa riferimento ad esso.  
  
 Il seguente codice di esempio genera l'errore LNK4227:  
  
```  
// LNK4227.cpp  
// compile with: /clr  
using namespace System::Reflection;  
  
[assembly:AssemblyDelaySignAttribute(false)];  
  
int main() {}  
```  
  
 quindi  
  
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
  
 Il seguente codice di esempio genera l'errore LNK4227:  
  
```  
// LNK4227c.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System::Reflection;  
  
[assembly:AssemblyDelaySignAttribute(false)];  
  
int main() {}  
```  
  
 quindi  
  
```  
// LNK4227d.cpp  
// compile with: /clr:oldSyntax LNK4227c.cpp /FeLNK4227d.exe  
#using <mscorlib.dll>  
using namespace System::Reflection;  
using namespace System::Runtime::CompilerServices;  
  
[assembly:AssemblyDelaySignAttribute(true)];  
  
__gc class MyClass  
{  
};  
```  
  
 L'avviso LNK4227 può essere generato anche quando a degli attributi di assembly vengono passati dei numeri di versione nel formato errato.  La notazione "\*" è specifica della classe AssemblyVersionAttribute.  Per risolvere il problema, utilizzare solo i numeri negli attributi di versione diversi da AssemblyVersionAttribute.  
  
 Il seguente codice di esempio genera l'errore LNK4227:  
  
```  
// LNK4227e.cpp  
// compile with: /clr /LD /W1  
using namespace System::Reflection;  
[assembly:AssemblyVersionAttribute("2.3.*")];   // OK  
[assembly:AssemblyFileVersionAttribute("2.3.*")];   // LNK4227  
// try the following line instead  
// [assembly:AssemblyFileVersionAttribute("2.3")];  
```