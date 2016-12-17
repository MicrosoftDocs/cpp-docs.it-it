---
title: "nothrow (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "nothrow_cpp"
  - "nothrow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec (parola chiave) [C++], nothrow"
  - "nothrow __declspec (parola chiave)"
ms.assetid: 0a475139-459c-4ec6-99e8-7ecd0d7f44a3
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# nothrow (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Attributo esteso `__declspec` che può essere utilizzato nella dichiarazione di funzioni.  
  
## Sintassi  
  
```  
  
return-type __declspec(nothrow) [call-convention] function-name ([argument-list])  
```  
  
## Note  
 L'attributo indica al compilatore che la funzione dichiarata e le funzioni che tale funzione chiama non generano mai un'eccezione.  Con il modello di gestione delle eccezioni sincrona, per impostazione predefinita il compilatore può ora eliminare i meccanismi che consentono di tenere traccia della durata di alcuni oggetti non rimovibili in tale funzione, riducendo notevolmente la dimensione del codice.  Nella seguente direttiva per il preprocessore le dichiarazioni delle tre funzioni indicate di seguito sono equivalenti:  
  
```  
#define WINAPI __declspec(nothrow) __stdcall   
  
void WINAPI f1();  
void __declspec(nothrow) __stdcall f2();  
void __stdcall f3() throw();  
```  
  
 Se si utilizza `void __declspec(nothrow) __stdcall f2();`, è possibile utilizzare una definizione dell'API, come quella illustrata nell'istruzione `#define`, per specificare facilmente `nothrow` su un set di funzioni.  La terza dichiarazione`, void __stdcall f3() throw();` è la sintassi definita dallo standard C\+\+.  
  
 Per ulteriori informazioni, vedere [Gestione delle eccezioni sincrona](http://msdn.microsoft.com/it-it/81595fae-d8ab-4c14-9670-8d6639cc0369).  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [\_\_declspec](../cpp/declspec.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)