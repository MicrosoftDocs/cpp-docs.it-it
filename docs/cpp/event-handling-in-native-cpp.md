---
title: Gestione degli eventi in C++ nativo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords: event handling [C++], Visual C++
ms.assetid: e4b9219a-15d8-42fb-83c8-6d2e4e087c8d
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 157b31f244ce5400aac5857f2473deb67938d8d0
ms.sourcegitcommit: 9a0a287d6940591523af959ebdac5affa36220da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/25/2018
---
# <a name="event-handling-in-native-c"></a>Gestione di eventi in C++ nativo

In gestione eventi C++ nativa, viene impostato un ricevitore di origine e di evento di eventi utilizzando il [event_source](../windows/event-source.md) e [event_receiver](../windows/event-receiver.md) rispettivamente gli attributi, specificare `type` = `native`. Questi attributi consentono alle classi, a cui sono applicati, di generare eventi e gestire eventi in un contesto nativo, non COM.

## <a name="declaring-events"></a>Dichiarazione di eventi

In una classe di origine evento, utilizzare il [event](../cpp/event.md) parola chiave in una dichiarazione di metodo per dichiarare il metodo come un evento. Assicurarsi di dichiarare il metodo, ma non di definirlo; così facendo verrà generato un errore del compilatore, poiché il compilatore definisce il metodo in modo implicito quando viene trasformato in un evento. Gli eventi nativi possono essere metodi con zero o più parametri. Il tipo restituito può essere void o qualsiasi tipo integrale.  
  
## <a name="defining-event-handlers"></a>Definizione di gestori degli eventi

In una classe del ricevitore di eventi, è possibile definire i gestori eventi, ovvero i metodi con firme (tipi restituiti, convenzioni di chiamata e argomenti) che corrispondono all'evento che gestiranno.  
  
## <a name="hooking-event-handlers-to-events"></a>Hook dei gestori eventi agli eventi  

Anche in una classe del ricevitore di eventi, utilizzare la funzione intrinseca [hook](../cpp/hook.md) per associare gli eventi con i gestori eventi e [unhook](../cpp/unhook.md) dissociare eventi dai gestori eventi. È possibile eseguire l'hook di più eventi a un singolo gestore eventi o di diversi gestori eventi a un singolo evento.  
  
## <a name="firing-events"></a>Generazione di eventi  

Per generare un evento, è sufficiente chiamare il metodo dichiarato come un evento nella classe di origine dell'evento. Se per l'evento è stato eseguito l'hook ai gestori, questi verranno chiamati.  
  
### <a name="native-c-event-code"></a>Il codice evento in C++ nativo  

Nell'esempio seguente viene illustrato come gestire un'evento in C++ nativo. Per compilare ed eseguire l'esempio, fare riferimento ai commenti presenti nel codice.  
  
## <a name="example"></a>Esempio  
  
### <a name="code"></a>Codice  
  
```cpp  
// evh_native.cpp  
#include <stdio.h>  
  
[event_source(native)]  
class CSource {  
public:  
   __event void MyEvent(int nValue);  
};  
  
[event_receiver(native)]  
class CReceiver {  
public:  
   void MyHandler1(int nValue) {  
      printf_s("MyHandler1 was called with value %d.\n", nValue);  
   }  
  
   void MyHandler2(int nValue) {  
      printf_s("MyHandler2 was called with value %d.\n", nValue);  
   }  
  
   void hookEvent(CSource* pSource) {  
      __hook(&CSource::MyEvent, pSource, &CReceiver::MyHandler1);  
      __hook(&CSource::MyEvent, pSource, &CReceiver::MyHandler2);  
   }  
  
   void unhookEvent(CSource* pSource) {  
      __unhook(&CSource::MyEvent, pSource, &CReceiver::MyHandler1);  
      __unhook(&CSource::MyEvent, pSource, &CReceiver::MyHandler2);  
   }  
};  
  
int main() {  
   CSource source;  
   CReceiver receiver;  
  
   receiver.hookEvent(&source);  
   __raise source.MyEvent(123);  
   receiver.unhookEvent(&source);  
}  
```  
  
### <a name="output"></a>Output  
  
```Output
MyHandler2 was called with value 123.  
MyHandler1 was called with value 123.  
```  
  
## <a name="see-also"></a>Vedere anche

[Gestione di eventi](../cpp/event-handling.md)  

