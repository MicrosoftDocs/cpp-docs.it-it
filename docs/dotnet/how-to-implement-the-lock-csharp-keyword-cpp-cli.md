---
title: "Procedura: implementare la parola chiave lock di C# (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lock (parola chiave C#) [C++]"
  - "istruzione di blocco"
ms.assetid: 436fe544-ffb7-49b9-9798-90794e9974de
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: implementare la parola chiave lock di C# (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come implementare la parola chiave `lock` di C\# in Visual C\+\+.  Per ulteriori informazioni, vedere [Istruzione lock](../Topic/lock%20Statement%20\(C%23%20Reference\).md).  
  
 È possibile utilizzare la classe `lock` contenuta nella libreria di supporto C\+\+.  Per ulteriori informazioni, vedere [Sincronizzazione \(classe lock\)](../dotnet/synchronization-lock-class.md).  
  
## Esempio  
  
```  
// CS_lock_in_CPP.cpp  
// compile with: /clr  
using namespace System::Threading;  
ref class Lock {  
   Object^ m_pObject;  
public:  
   Lock( Object ^ pObject ) : m_pObject( pObject ) {  
      Monitor::Enter( m_pObject );  
   }  
   ~Lock() {  
      Monitor::Exit( m_pObject );  
   }  
};  
  
ref struct LockHelper {  
   void DoSomething();  
};  
  
void LockHelper::DoSomething() {  
   // Note: Reference type with stack allocation semantics to provide   
   // deterministic finalization  
  
   Lock lock( this );     
   // LockHelper instance is locked  
}  
  
int main()  
{  
   LockHelper lockHelper;  
   lockHelper.DoSomething();  
   return 0;  
}  
```  
  
## Vedere anche  
 [Interoperabilità con altri linguaggi .NET](../dotnet/interoperability-with-other-dotnet-languages-cpp-cli.md)