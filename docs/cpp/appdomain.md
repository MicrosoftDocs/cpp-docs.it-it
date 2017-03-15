---
title: "appdomain | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "appdomain_cpp"
  - "appdomain"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec (parola chiave) [C++], appdomain"
  - "appdomain __declspec (parola chiave)"
ms.assetid: 29d843cb-cb6b-4d1b-a48d-d928a877234d
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# appdomain
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica che ogni dominio applicazione dell'applicazione gestita deve disporre di una propria copia di una variabile globale o di una variabile membro statico specifica.  Per ulteriori informazioni, vedere [Domini applicazione e Visual C\+\+](../dotnet/application-domains-and-visual-cpp.md).  
  
 Ogni dominio applicazione dispone della propria copia di una variabile per dominio di applicazione.  Un costruttore di una variabile del'appdomain viene eseguito quando un assembly viene caricato in un dominio applicazione, mentre il distruttore viene eseguito quando il dominio applicazione viene caricato.  
  
 Se si desidera che tutti i domini applicazione di un processo in Common Language Runtime condividano una variabile globale, utilizzare il modificatore `__declspec(process)`.  `__declspec(process)` è abilitato per impostazione predefinita in [\/clr](../build/reference/clr-common-language-runtime-compilation.md), mentre `__declspec(appdomain)` lo è in **\/clr:pure**.  `__declspec(appdomain)` viene applicato in **\/clr:safe**.  
  
 `__declspec(appdomain)` è valido solo quando viene utilizzata una delle due opzioni del compilatore **\/clr**.  Solo una variabile globale, una variabile membro statico o una variabile locale statica può essere contrassegnata con `__declspec(appdomain)`.  L'applicazione di `__declspec(appdomain)` ai membri statici dei tipi gestiti costituisce un errore poiché il relativo comportamento è sempre questo.  
  
 L'utilizzo di `__declspec(appdomain)` è analogo a quello della [Archiviazione locale di thread \(TLS, Thread Local Storage\)](../parallel/thread-local-storage-tls.md).  I thread dispongono del proprio spazio di archiviazione, analogamente ai domini applicazione.  L'utilizzo di `__declspec(appdomain)` garantisce che la variabile globale disponga del proprio spazio di archiviazione in ogni dominio applicazione creato per l'applicazione specifica.  
  
 Sono presenti alcune limitazioni a combinare l'utilizzo delle variabili per processo e per dominio applicazione. Per ulteriori informazioni, vedere [processo](../cpp/process.md).  
  
 All'avvio del programma, ad esempio, vengono inizializzate prima tutte le variabili per processo, quindi tutte quelle per dominio di applicazione.  Di conseguenza, quando una variabile per processo viene inizializzata, non può dipendere dal valore di alcuna variabile per dominio di applicazione.  La pratica di combinare l'utilizzo \(assegnazione\) di variabili per dominio di applicazione e per processo non è corretta.  
  
 Per informazioni su come chiamare una funzione in un dominio applicazione specifico, vedere [Funzione call\_in\_appdomain](../dotnet/call-in-appdomain-function.md).  
  
## Esempio  
  
```  
// declspec_appdomain.cpp  
// compile with: /clr  
#include <stdio.h>  
using namespace System;  
  
class CGlobal {  
public:  
   CGlobal(bool bProcess) {  
      Counter = 10;  
      m_bProcess = bProcess;  
      Console::WriteLine("__declspec({0}) CGlobal::CGlobal constructor", m_bProcess ? (String^)"process" : (String^)"appdomain");  
   }  
  
   ~CGlobal() {  
      Console::WriteLine("__declspec({0}) CGlobal::~CGlobal destructor", m_bProcess ? (String^)"process" : (String^)"appdomain");  
   }  
  
   int Counter;  
  
private:  
   bool m_bProcess;  
};  
  
__declspec(process) CGlobal process_global = CGlobal(true);  
__declspec(appdomain) CGlobal appdomain_global = CGlobal(false);  
  
value class Functions {  
public:  
   static void change() {  
      ++appdomain_global.Counter;  
   }  
  
   static void display() {  
      Console::WriteLine("process_global value in appdomain '{0}': {1}",   
         AppDomain::CurrentDomain->FriendlyName,  
         process_global.Counter);  
  
      Console::WriteLine("appdomain_global value in appdomain '{0}': {1}",   
         AppDomain::CurrentDomain->FriendlyName,  
         appdomain_global.Counter);  
   }  
};  
  
int main() {  
   AppDomain^ defaultDomain = AppDomain::CurrentDomain;  
   AppDomain^ domain = AppDomain::CreateDomain("Domain 1");  
   AppDomain^ domain2 = AppDomain::CreateDomain("Domain 2");  
   CrossAppDomainDelegate^ changeDelegate = gcnew CrossAppDomainDelegate(&Functions::change);  
   CrossAppDomainDelegate^ displayDelegate = gcnew CrossAppDomainDelegate(&Functions::display);  
  
   // Print the initial values of appdomain_global in all appdomains.  
   Console::WriteLine("Initial value");  
   defaultDomain->DoCallBack(displayDelegate);  
   domain->DoCallBack(displayDelegate);  
   domain2->DoCallBack(displayDelegate);  
  
   // Changing the value of appdomain_global in the domain and domain2  
   // appdomain_global value in "default" appdomain remain unchanged  
   process_global.Counter = 20;  
   domain->DoCallBack(changeDelegate);  
   domain2->DoCallBack(changeDelegate);  
   domain2->DoCallBack(changeDelegate);  
  
   // Print values again  
   Console::WriteLine("Changed value");  
   defaultDomain->DoCallBack(displayDelegate);  
   domain->DoCallBack(displayDelegate);  
   domain2->DoCallBack(displayDelegate);  
  
   AppDomain::Unload(domain);  
   AppDomain::Unload(domain2);  
}  
```  
  
  **\_\_declspec\(process\) CGlobal::CGlobal constructor**  
**\_\_declspec\(appdomain\) CGlobal::CGlobal constructor**  
**Valore iniziale**  
**process\_global value in appdomain 'declspec\_appdomain.exe': 10**  
**appdomain\_global value in appdomain 'declspec\_appdomain.exe': 10**  
**\_\_declspec\(appdomain\) CGlobal::CGlobal constructor**  
**process\_global value in appdomain 'Domain 1': 10**  
**appdomain\_global value in appdomain 'Domain 1': 10**  
**\_\_declspec\(appdomain\) CGlobal::CGlobal constructor**  
**process\_global value in appdomain 'Domain 2': 10**  
**appdomain\_global value in appdomain 'Domain 2': 10**  
**Valore modificato**  
**process\_global value in appdomain 'declspec\_appdomain.exe': 20**  
**appdomain\_global value in appdomain 'declspec\_appdomain.exe': 10**  
**process\_global value in appdomain 'Domain 1': 20**  
**appdomain\_global value in appdomain 'Domain 1': 11**  
**process\_global value in appdomain 'Domain 2': 20**  
**appdomain\_global value in appdomain 'Domain 2': 12**  
**\_\_declspec\(appdomain\) CGlobal::~CGlobal destructor**  
**\_\_declspec\(appdomain\) CGlobal::~CGlobal destructor**  
**\_\_declspec\(appdomain\) CGlobal::~CGlobal destructor**  
**\_\_declspec\(process\) CGlobal::~CGlobal destructor**   
## Vedere anche  
 [\_\_declspec](../cpp/declspec.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)