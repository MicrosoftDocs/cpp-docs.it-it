---
description: 'Altre informazioni su: procedura: chiamare DLL native da codice gestito tramite PInvoke'
title: 'Procedura: chiamare DLL native da codice gestito tramite PInvoke'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- platform invoke [C++], calling native DLLs
- interop [C++], calling native DLLs
- marshaling [C++], calling native DLLs
- data marshaling [C++], calling native DLLs
ms.assetid: 3273eb4b-38d1-4619-92a6-71bda542be72
ms.openlocfilehash: 915601aa813f1c5c14977c1492d6c675125c47be
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97335387"
---
# <a name="how-to-call-native-dlls-from-managed-code-using-pinvoke"></a>Procedura: chiamare DLL native da codice gestito tramite PInvoke

Le funzioni implementate nelle dll non gestite possono essere chiamate dal codice gestito utilizzando la funzionalità Platform Invoke (P/Invoke). Se il codice sorgente per la DLL non è disponibile, P/Invoke è l'unica opzione per l'interoperabilità. Tuttavia, a differenza di altri linguaggi .NET, Visual C++ fornisce un'alternativa a P/Invoke. Per ulteriori informazioni, vedere [utilizzo dell'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md).

## <a name="example"></a>Esempio

Nell'esempio di codice seguente viene usata la funzione Win32 [GetSystemMetrics](/windows/win32/api/winuser/nf-winuser-getsystemmetrics) per recuperare la risoluzione corrente dello schermo in pixel.

Per le funzioni che usano solo tipi intrinseci come argomenti e valori restituiti, non sono necessarie operazioni aggiuntive. Altri tipi di dati, ad esempio i puntatori a funzione, le matrici e le strutture, richiedono attributi aggiuntivi per garantire il marshalling dei dati appropriato.

Sebbene non sia obbligatorio, è consigliabile fare in modo che le dichiarazioni P/Invoke siano membri statici di una classe di valori in modo che non esistano nello spazio dei nomi globale, come illustrato in questo esempio.

```cpp
// pinvoke_basic.cpp
// compile with: /clr
using namespace System;
using namespace System::Runtime::InteropServices;

value class Win32 {
public:
   [DllImport("User32.dll")]
   static int GetSystemMetrics(int);

   enum class SystemMetricIndex {
      // Same values as those defined in winuser.h.
      SM_CXSCREEN = 0,
      SM_CYSCREEN = 1
   };
};

int main() {
   int hRes = Win32::GetSystemMetrics( safe_cast<int>(Win32::SystemMetricIndex::SM_CXSCREEN) );
   int vRes = Win32::GetSystemMetrics( safe_cast<int>(Win32::SystemMetricIndex::SM_CYSCREEN) );
   Console::WriteLine("screen resolution: {0},{1}", hRes, vRes);
}
```

## <a name="see-also"></a>Vedi anche

[Utilizzo di PInvoke esplicito in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)
