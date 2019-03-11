---
title: 'Procedura: Chiamare DLL Native da codice gestito tramite PInvoke'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- platform invoke [C++], calling native DLLs
- interop [C++], calling native DLLs
- marshaling [C++], calling native DLLs
- data marshaling [C++], calling native DLLs
ms.assetid: 3273eb4b-38d1-4619-92a6-71bda542be72
ms.openlocfilehash: e51e094cc013250fc254a09e279745f1f9c108ac
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57748541"
---
# <a name="how-to-call-native-dlls-from-managed-code-using-pinvoke"></a>Procedura: Chiamare DLL Native da codice gestito tramite PInvoke

Funzioni che sono implementate nella DLL non gestite possono essere chiamate da codice gestito tramite la funzionalità Platform Invoke (P/Invoke). Se il codice sorgente per la DLL non è disponibile, P/Invoke è l'unica opzione per l'interoperabilità. Tuttavia, a differenza di altri linguaggi .NET, Visual C++ offre un'alternativa al P/Invoke. Per altre informazioni, vedere [con funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md).

## <a name="example"></a>Esempio

L'esempio di codice seguente usa Win32 [GetSystemMetrics](/windows/desktop/api/winuser/nf-winuser-getsystemmetrics) funzione per recuperare la risoluzione corrente dello schermo in pixel.

Per le funzioni che usano solo tipi intrinseci come argomenti e valori restituiscono, non è necessario alcun lavoro aggiuntivo. Altri tipi di dati, ad esempio i puntatori a funzione, matrici e strutture, richiedono attributi aggiuntivi per assicurarsi che il marshalling dei dati appropriati.

Sebbene non sia obbligatorio, è buona norma apportare membri statici di dichiarazioni P/Invoke di una classe di valori in modo che non sono presenti nello spazio dei nomi globale, come illustrato in questo esempio.

```
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

## <a name="see-also"></a>Vedere anche

[Uso esplicito di PInvoke in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)
