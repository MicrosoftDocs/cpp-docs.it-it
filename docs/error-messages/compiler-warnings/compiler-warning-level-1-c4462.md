---
title: "Avviso del compilatore (livello 1) C4462 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4462"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4462"
ms.assetid: 4e20aca4-293e-4c75-a83d-961c27ab7840
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# Avviso del compilatore (livello 1) C4462
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile determinare il GUID del tipo.Il programma potrebbe bloccarsi in fase di esecuzione.  
  
 L'avviso C4462 viene generato in un componente o app di Windows Runtime quando un elemento `TypedEventHandler` pubblico presenta come uno dei relativi parametri di tipo un riferimento alla classe contenitore.  
  
 **Questo tipo di codice genera questo avviso:**  
  
```  
namespace N  
{  
       public ref struct EventArgs sealed {};  
       public ref struct R sealed  
       {  
              R() {}  
              event Windows::Foundation::TypedEventHandler<R ^, EventArgs^>^ e;  
       };  
}  
  
[Platform::MTAThread]  
int main()  
{  
     auto x = ref new N::R();  
}  
  
```  
  
 **Per risolvere l'errore:**  
  
 Esistono due modi per risolvere l'errore.  In primo luogo, come mostrato nell'esempio seguente, è possibile dare all'evento accessibilità interna in modo che risulti disponibile al codice nello stesso eseguibile, ma non al codice in altri componenti di Windows Runtime.  
  
```  
  
internal:  
event Windows::Foundation::TypedEventHandler<R ^, EventArgs^>^ e;  
  
```  
  
 Se l'evento deve essere pubblico, è possibile ricorrere a un'altra soluzione, ovvero esporlo attraverso un'interfaccia predefinita:  
  
```  
  
ref struct R;  
public interface struct IR { event Windows::Foundation::TypedEventHandler<R ^, EventArgs^>^ e; };  
  
public ref struct R sealed : [Windows::Foundation::Metadata::Default] IR  
{  
    R() {}  
    virtual event Windows::Foundation::TypedEventHandler<R ^, EventArgs^>^ e;  
};  
  
```  
  
 Un GUID del tipo `Windows::Foundation::TypedEventHandler<R ^, EventArgs^>^` viene utilizzato solo quando il tipo è accessibile da un altro componente.  La prima soluzione funziona perché è accessibile solo dall'interno del proprio componente dopo l'applicazione della soluzione.  In caso contrario, il compilatore suppone il caso peggiore e genera l'avviso.