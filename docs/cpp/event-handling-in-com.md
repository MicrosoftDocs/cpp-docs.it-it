---
title: Gestione degli eventi in COM | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- event handling [C++], COM
- event handling [C++], about event handling
- declaring events
- event handlers [C++], COM
- event handlers
- COM, events
- event receivers, in event handling
- event handling [C++]
- hooking events
- event receivers, name and signature matching
- event sources, in event handling
- declaring events, in COM
- declaring events, event handling in COM
ms.assetid: 6b4617d4-a58e-440c-a8a6-1ad1c715b2bb
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1c57b8429a05ab3989dce318f4c16a58475560a1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="event-handling-in-com"></a>Gestione di eventi in COM
Nella gestione degli eventi COM, impostare un ricevitore di origine e di evento di eventi utilizzando il [event_source](../windows/event-source.md) e [event_receiver](../windows/event-receiver.md) rispettivamente gli attributi, specificare `type` = **com**. Questi attributi inseriscono il codice appropriato per le interfacce personalizzate, dispatch e duali al fine di consentire alle classi a cui vengono applicati di generare eventi e gestirli dai punti di connessione COM.  
  
## <a name="declaring-events"></a>Dichiarazione di eventi  
 In una classe di origine evento, utilizzare il [event](../cpp/event.md) parola chiave in una dichiarazione di interfaccia per dichiarare i metodi dell'interfaccia come eventi. Gli eventi di tale interfaccia vengono generati quando vengono chiamati come metodi di interfaccia. I metodi nelle interfacce eventi possono contenere zero o più parametri (che devono essere **in** parametri). Il tipo restituito può essere void o qualsiasi tipo integrale.  
  
## <a name="defining-event-handlers"></a>Definizione di gestori degli eventi  
 In una classe del ricevitore di eventi, è possibile definire i gestori eventi, ovvero i metodi con firme (tipi restituiti, convenzioni di chiamata e argomenti) che corrispondono all'evento che gestiranno. Per gli eventi COM, le convenzioni di chiamata non devono corrispondere; vedere [eventi COM dipendenti del Layout](#vcconeventhandlingincomanchorlayoutdependentcomevents) sotto per informazioni dettagliate.  
  
## <a name="hooking-event-handlers-to-events"></a>Hook dei gestori eventi agli eventi  
 Anche in una classe del ricevitore di eventi, utilizzare la funzione intrinseca [hook](../cpp/hook.md) per associare gli eventi con i gestori eventi e [unhook](../cpp/unhook.md) dissociare eventi dai gestori eventi. È possibile eseguire l'hook di più eventi a un singolo gestore eventi o di diversi gestori eventi a un singolo evento.  
  
> [!NOTE]
>  In genere, sono disponibili due tecniche per consentire a un ricevitore di eventi COM di accedere alle definizioni dell'interfaccia dell'origine evento. La prima, come mostrata di seguito, consiste nel condividere un file di intestazione comune. Il secondo consiste nell'utilizzare [#import](../preprocessor/hash-import-directive-cpp.md) con il `embedded_idl` importare qualificatore, in modo che la libreria dei tipi di origine evento viene scritto il file con estensione tlh con il codice generato dall'attributo mantenuto.  
  
## <a name="firing-events"></a>Generazione di eventi  
 Per generare un evento, è sufficiente chiamare un metodo nell'interfaccia dichiarata con la parola chiave `__event` nella classe di origine dell'evento. Se per l'evento è stato eseguito l'hook ai gestori, questi verranno chiamati.  
  
### <a name="com-event-code"></a>Codice dell'evento COM  
 Nell'esempio seguente viene illustrato come generare un evento in una classe COM. Per compilare ed eseguire l'esempio, fare riferimento ai commenti presenti nel codice.  
  
```  
// evh_server.h  
#pragma once  
  
[ dual, uuid("00000000-0000-0000-0000-000000000001") ]  
__interface IEvents {  
   [id(1)] HRESULT MyEvent([in] int value);  
};  
  
[ dual, uuid("00000000-0000-0000-0000-000000000002") ]  
__interface IEventSource {  
   [id(1)] HRESULT FireEvent();  
};  
  
class DECLSPEC_UUID("530DF3AD-6936-3214-A83B-27B63C7997C4") CSource;  
```  
  
 Quindi il server:  
  
```  
// evh_server.cpp  
// compile with: /LD  
// post-build command: Regsvr32.exe /s evh_server.dll  
#define _ATL_ATTRIBUTES 1  
#include <atlbase.h>  
#include <atlcom.h>  
#include "evh_server.h"  
  
[ module(dll, name="EventSource", uuid="6E46B59E-89C3-4c15-A6D8-B8A1CEC98830") ];  
  
[coclass, event_source(com), uuid("530DF3AD-6936-3214-A83B-27B63C7997C4")]  
class CSource : public IEventSource {  
public:  
   __event __interface IEvents;   
  
   HRESULT FireEvent() {  
      __raise MyEvent(123);  
      return S_OK;  
   }  
};  
```  
  
 Quindi il client:  
  
```  
// evh_client.cpp  
// compile with: /link /OPT:NOREF  
#define _ATL_ATTRIBUTES 1  
#include <atlbase.h>  
#include <atlcom.h>  
#include <stdio.h>  
#include "evh_server.h"  
  
[ module(name="EventReceiver") ];  
  
[ event_receiver(com) ]  
class CReceiver {  
public:  
   HRESULT MyHandler1(int nValue) {  
      printf_s("MyHandler1 was called with value %d.\n", nValue);  
      return S_OK;  
   }  
  
   HRESULT MyHandler2(int nValue) {  
      printf_s("MyHandler2 was called with value %d.\n", nValue);  
      return S_OK;  
   }  
  
   void HookEvent(IEventSource* pSource) {  
      __hook(&IEvents::MyEvent, pSource, &CReceiver::MyHandler1);  
      __hook(&IEvents::MyEvent, pSource, &CReceiver::MyHandler2);  
   }  
  
   void UnhookEvent(IEventSource* pSource) {  
      __unhook(&IEvents::MyEvent, pSource, &CReceiver::MyHandler1);  
      __unhook(&IEvents::MyEvent, pSource, &CReceiver::MyHandler2);  
   }  
};  
  
int main() {  
   // Create COM object  
   CoInitialize(NULL);  
   {  
      IEventSource* pSource = 0;  
      HRESULT hr = CoCreateInstance(__uuidof(CSource), NULL,         CLSCTX_ALL, __uuidof(IEventSource), (void **) &pSource);  
      if (FAILED(hr)) {  
         return -1;  
      }  
  
      // Create receiver and fire event  
      CReceiver receiver;  
      receiver.HookEvent(pSource);  
      pSource->FireEvent();  
      receiver.UnhookEvent(pSource);  
   }  
   CoUninitialize();  
   return 0;  
}  
```  
  
### <a name="output"></a>Output  
  
```  
MyHandler1 was called with value 123.  
MyHandler2 was called with value 123.  
```  
  
##  <a name="vcconeventhandlingincomanchorlayoutdependentcomevents"></a>Eventi COM dipendenti del layout  
 La dipendenza del layout è solo un problema per la programmazione COM. Nella funzione di gestione degli eventi nativa e gestita, le firme (tipo restituito, convenzione di chiamata e argomenti) dei gestori devono corrispondere ai relativi eventi, mentre tale corrispondenza non è necessaria per i nomi dei gestori.  
  
 Tuttavia, nella gestione degli eventi COM, quando si imposta la *layout_dependent* parametro di **event_receiver** a **true**, il nome e una firma corrispondente viene applicata. Ciò significa che i nomi e le firme dei gestori nel ricevitore di eventi devono corrispondere esattamente ai nomi e alle firme degli eventi per il quale è stato eseguito l'hook.  
  
 Quando *layout_dependent* è impostato su **false**, la classe di archiviazione e convenzione di chiamata (virtuale, statica e così via) può essere combinata e trovare una corrispondenza tra l'attivazione del metodo dell'evento e i metodi di hook (relativo delegati). È leggermente più efficiente disporre *layout_dependent*=**true**.  
  
 Ad esempio, si supponga che `IEventSource` sia definito con i metodi seguenti:  
  
```  
[id(1)] HRESULT MyEvent1([in] int value);  
[id(2)] HRESULT MyEvent2([in] int value);  
```  
  
 Si supponga che l'origine evento abbia il formato seguente:  
  
```  
[coclass, event_source(com)]  
class CSource : public IEventSource {  
public:  
   __event __interface IEvents;  
  
   HRESULT FireEvent() {  
      MyEvent1(123);  
      MyEvent2(123);  
      return S_OK;  
   }  
};  
```  
  
 Quindi, nel ricevitore, qualsiasi gestore di cui è stato eseguito l'hook a un metodo in `IEventSource` deve corrispondere al nome e alla firma, nel modo seguente:  
  
```  
[coclass, event_receiver(com, true)]  
class CReceiver {  
public:  
   HRESULT MyEvent1(int nValue) {  // name and signature matches MyEvent1  
      ...  
   }  
   HRESULT MyEvent2(E c, char* pc) {  // signature doesn't match MyEvent2  
      ...  
   }  
   HRESULT MyHandler1(int nValue) {  // name doesn't match MyEvent1 (or 2)  
      ...  
   }  
   void HookEvent(IEventSource* pSource) {  
      __hook(IFace, pSource);  // Hooks up all name-matched events   
                               // under layout_dependent = true  
      __hook(&IFace::MyEvent1, pSource, &CReceive::MyEvent1);   // valid  
      __hook(&IFace::MyEvent2, pSource, &CSink::MyEvent2);   // not valid  
      __hook(&IFace::MyEvent1, pSource, &CSink:: MyHandler1); // not valid  
   }  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione di eventi](../cpp/event-handling.md)