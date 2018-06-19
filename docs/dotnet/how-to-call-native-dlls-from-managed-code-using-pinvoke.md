---
title: 'Procedura: chiamare DLL Native da codice gestito tramite PInvoke | Documenti Microsoft'
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- platform invoke [C++], calling native DLLs
- interop [C++], calling native DLLs
- marshaling [C++], calling native DLLs
- data marshaling [C++], calling native DLLs
ms.assetid: 3273eb4b-38d1-4619-92a6-71bda542be72
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: e82690e49daf324d0ff77f89710ecdd09b208c19
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33129187"
---
# <a name="how-to-call-native-dlls-from-managed-code-using-pinvoke"></a>Procedura: chiamare DLL native da codice gestito tramite PInvoke
Funzioni che vengono implementate nella DLL non gestite possono essere chiamate da codice gestito tramite la funzionalità Platform Invoke (P/Invoke). Se il codice sorgente per la DLL non è disponibile, P/Invoke è l'unica opzione per l'interoperabilità. Tuttavia, a differenza di altri linguaggi .NET, Visual C++ fornisce un'alternativa a P/Invoke. Per ulteriori informazioni, vedere [utilizzando l'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md).  
  
## <a name="example"></a>Esempio  
 L'esempio di codice seguente usa Win32 [GetSystemMetrics](http://msdn.microsoft.com/library/windows/desktop/ms724385) funzione per recuperare la risoluzione corrente dello schermo in pixel.  
  
 Per le funzioni che utilizzano solo tipi intrinseci come argomenti e valori restituiscono, è necessario alcun intervento aggiuntivo. Altri tipi di dati, ad esempio i puntatori a funzione, matrici e strutture, richiedono attributi aggiuntivi per garantire il marshalling dei dati corretti.  
  
 Sebbene non sia obbligatorio, è buona norma che i membri statici di dichiarazioni P/Invoke di una classe di valori in modo che non sono presenti nello spazio dei nomi globale, come illustrato in questo esempio.  
  
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