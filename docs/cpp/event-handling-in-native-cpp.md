---
title: Gestione di eventi in C++ nativo
description: Informazioni su come usare le estensioni di Microsoft C++ per la gestione di eventi C++ nativi.
ms.date: 11/20/2020
helpviewer_keywords:
- event handling [C++]
ms.openlocfilehash: 5ad9128b7ff596674c3b08687b722c81b7a10aa8
ms.sourcegitcommit: b02c61667ff7f38e7add266d0aabd8463f2dbfa1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/23/2020
ms.locfileid: "95483178"
---
# <a name="event-handling-in-native-c"></a>Gestione di eventi in C++ nativo

Nella gestione degli eventi C++ nativi è possibile configurare un'origine evento e un ricevitore di eventi utilizzando rispettivamente gli attributi [event_source](../windows/attributes/event-source.md) e [event_receiver](../windows/attributes/event-receiver.md) , specificando `type` = `native` . Questi attributi consentono alle classi su cui sono applicati di generare eventi e gestire eventi in un contesto nativo non COM.

> [!NOTE]
> Gli attributi degli eventi in C++ nativo non sono compatibili con C++ standard. Non vengono compilati quando si specifica la [`/permissive-`](../build/reference/permissive-standards-conformance.md) modalità di conformità.

## <a name="declaring-events"></a>Dichiarazione di eventi

In una classe di origine evento, usare la [`__event`](../cpp/event.md) parola chiave in una dichiarazione di metodo per dichiarare il metodo come un evento. Assicurarsi di dichiarare il metodo, ma non di definirlo. In caso contrario, viene generato un errore del compilatore, perché il compilatore definisce il metodo in modo implicito quando viene eseguito in un evento. Gli eventi nativi possono essere metodi con zero o più parametri. Il tipo restituito può essere **`void`** o qualsiasi tipo integrale.

## <a name="defining-event-handlers"></a>Definizione di gestori eventi

In una classe Receiver di eventi è possibile definire i gestori eventi. I gestori eventi sono metodi con firme (tipi restituiti, convenzioni di chiamata e argomenti) che corrispondono all'evento che gestiranno.

## <a name="hooking-event-handlers-to-events"></a>Associazione di gestori eventi a eventi

In una classe di ricevitori di eventi, inoltre, si utilizza la funzione intrinseca [`__hook`](../cpp/hook.md) per associare gli eventi ai gestori eventi e [`__unhook`](../cpp/unhook.md) per dissociare gli eventi dai gestori eventi. È possibile eseguire l'hook di più eventi a un singolo gestore eventi o di diversi gestori eventi a un singolo evento.

## <a name="firing-events"></a>Generazione di eventi

Per generare un evento, chiamare il metodo dichiarato come un evento nella classe di origine dell'evento. Se per l'evento è stato eseguito l'hook ai gestori, questi verranno chiamati.

### <a name="native-c-event-code"></a>Codice evento C++ nativo

Nell'esempio seguente viene illustrato come gestire un'evento in C++ nativo. Per compilare ed eseguire l'esempio, fare riferimento ai commenti presenti nel codice. Per compilare il codice nell'IDE di Visual Studio, verificare che l' **`/permissive-`** opzione sia disattivata.

## <a name="example"></a>Esempio

### <a name="code"></a>Codice

```cpp
// evh_native.cpp
// compile by using: cl /EHsc /W3 evh_native.cpp
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

[Gestione degli eventi](../cpp/event-handling.md)
