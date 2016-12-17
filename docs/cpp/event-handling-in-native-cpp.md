---
title: "Gestione di eventi in C++ nativo | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestione eventi, Visual C++"
ms.assetid: e4b9219a-15d8-42fb-83c8-6d2e4e087c8d
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestione di eventi in C++ nativo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella gestione degli eventi in C\+\+ nativo, sono stati configurati un'origine evento e un ricevitore di eventi utilizzando rispettivamente gli attributi [event\_source](../windows/event-source.md) e [event\_receiver](../windows/event-receiver.md), specificando `type`\=`native`.  Questi attributi consentono alle classi, a cui sono applicati, di generare eventi e gestire eventi in un contesto nativo, non COM.  
  
## Dichiarazione di eventi  
 In una classe di origine evento, utilizzare la parola chiave [\_\_event](../cpp/event.md) in una dichiarazione di metodo per dichiarare il metodo come un evento.  Assicurarsi di dichiarare il metodo, ma non di definirlo; così facendo verrà generato un errore del compilatore, poiché il compilatore definisce il metodo in modo implicito quando viene trasformato in un evento.  Gli eventi nativi possono essere metodi con zero o più parametri.  Il tipo restituito può essere void o qualsiasi tipo integrale.  
  
## Definizione di gestori degli eventi  
 In una classe del ricevitore di eventi, è possibile definire i gestori eventi, ovvero i metodi con firme \(tipi restituiti, convenzioni di chiamata e argomenti\) che corrispondono all'evento che gestiranno.  
  
## Hook dei gestori eventi agli eventi  
 Anche in una classe del ricevitore di eventi, è possibile utilizzare la funzione intrinseca [\_\_hook](../cpp/hook.md) per eseguire l'hook di eventi ai gestori eventi e la funzione [\_\_unhook](../cpp/unhook.md) per rimuovere l'hook tra tali due elementi.  È possibile eseguire l'hook di più eventi a un singolo gestore eventi o di diversi gestori eventi a un singolo evento.  
  
## Generazione di eventi  
 Per generare un evento, è sufficiente chiamare il metodo dichiarato come un evento nella classe di origine dell'evento.  Se per l'evento è stato eseguito l'hook ai gestori, questi verranno chiamati.  
  
### Il codice evento in C\+\+ nativo  
 Nell'esempio seguente viene illustrato come gestire un'evento in C\+\+ nativo.  Per compilare ed eseguire l'esempio, fare riferimento ai commenti presenti nel codice.  
  
## Esempio  
  
### Codice  
  
```  
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
  
### Output  
  
```  
MyHandler2 was called with value 123.  
MyHandler1 was called with value 123.  
```  
  
## Vedere anche  
 [Gestione di eventi](../cpp/event-handling.md)