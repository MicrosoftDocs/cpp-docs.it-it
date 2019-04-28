---
title: appdomain
ms.date: 11/04/2016
f1_keywords:
- appdomain_cpp
helpviewer_keywords:
- appdomain __declspec keyword
- __declspec keyword [C++], appdomain
ms.assetid: 29d843cb-cb6b-4d1b-a48d-d928a877234d
ms.openlocfilehash: 3f83841565eb6a097f306129fe8f6d121f837c27
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62184495"
---
# <a name="appdomain"></a>appdomain

Specifica che ogni dominio applicazione dell'applicazione gestita deve disporre di una propria copia di una variabile globale o di una variabile membro statico specifica. Visualizzare [domini applicazione e Visual C++](../dotnet/application-domains-and-visual-cpp.md) per altre informazioni.

Ogni dominio applicazione dispone della propria copia di una variabile per dominio di applicazione. Un costruttore di una variabile del'appdomain viene eseguito quando un assembly viene caricato in un dominio applicazione, mentre il distruttore viene eseguito quando il dominio applicazione viene caricato.

Se si desidera che tutti i domini applicazione di un processo in Common Language Runtime condividano una variabile globale, utilizzare il modificatore `__declspec(process)`. `__declspec(process)` è attiva per impostazione predefinita sotto [/clr](../build/reference/clr-common-language-runtime-compilation.md). Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017.

`__declspec(appdomain)` è valida solo quando una delle **/clr** opzioni del compilatore viene usato. Solo una variabile globale, una variabile membro statico o una variabile locale statica può essere contrassegnata con `__declspec(appdomain)`. L'applicazione di `__declspec(appdomain)` ai membri statici dei tipi gestiti costituisce un errore poiché il relativo comportamento è sempre questo.

Usando `__declspec(appdomain)` è simile all'uso [Thread Local Storage (TLS)](../parallel/thread-local-storage-tls.md). I thread dispongono del proprio spazio di archiviazione, analogamente ai domini applicazione. L'utilizzo di `__declspec(appdomain)` garantisce che la variabile globale disponga del proprio spazio di archiviazione in ogni dominio applicazione creato per l'applicazione specifica.

Esistono alcune limitazioni a combinare l'utilizzo di ogni processo e per le variabili di appdomain. visualizzare [processo](../cpp/process.md) per altre informazioni.

All'avvio del programma, ad esempio, vengono inizializzate prima tutte le variabili per processo, quindi tutte quelle per dominio di applicazione. Di conseguenza, quando una variabile per processo viene inizializzata, non può dipendere dal valore di alcuna variabile per dominio di applicazione. La pratica di combinare l'utilizzo (assegnazione) di variabili per dominio di applicazione e per processo non è corretta.

Per informazioni su come chiamare una funzione in un dominio applicazione specifico, vedere [funzione call_in_appdomain](../dotnet/call-in-appdomain-function.md).

## <a name="example"></a>Esempio

```cpp
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

```Output
__declspec(process) CGlobal::CGlobal constructor
__declspec(appdomain) CGlobal::CGlobal constructor
Initial value
process_global value in appdomain 'declspec_appdomain.exe': 10
appdomain_global value in appdomain 'declspec_appdomain.exe': 10
__declspec(appdomain) CGlobal::CGlobal constructor
process_global value in appdomain 'Domain 1': 10
appdomain_global value in appdomain 'Domain 1': 10
__declspec(appdomain) CGlobal::CGlobal constructor
process_global value in appdomain 'Domain 2': 10
appdomain_global value in appdomain 'Domain 2': 10
Changed value
process_global value in appdomain 'declspec_appdomain.exe': 20
appdomain_global value in appdomain 'declspec_appdomain.exe': 10
process_global value in appdomain 'Domain 1': 20
appdomain_global value in appdomain 'Domain 1': 11
process_global value in appdomain 'Domain 2': 20
appdomain_global value in appdomain 'Domain 2': 12
__declspec(appdomain) CGlobal::~CGlobal destructor
__declspec(appdomain) CGlobal::~CGlobal destructor
__declspec(appdomain) CGlobal::~CGlobal destructor
__declspec(process) CGlobal::~CGlobal destructor
```

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)