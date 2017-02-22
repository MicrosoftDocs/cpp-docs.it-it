---
title: "Procedura: chiamare DLL native da codice gestito tramite PInvoke | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "marshalling dei dati [C++], chiamata di DLL native"
  - "interoperabilità [C++], chiamata di DLL native"
  - "marshalling [C++], chiamata di DLL native"
  - "platform invoke [C++], chiamata di DLL native"
ms.assetid: 3273eb4b-38d1-4619-92a6-71bda542be72
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# Procedura: chiamare DLL native da codice gestito tramite PInvoke
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le funzioni implementate nelle DLL non gestite possono essere chiamate utilizzando la funzionalità P\/Invoke.  Se il codice sorgente della DLL non è disponibile, P\/Invoke è l'unica opzione per l'interoperabilità.  Tuttavia, a differenza di altri linguaggi .NET, in Visual C\+\+ viene fornita un'alternativa a P\/Invoke.  Per ulteriori informazioni, vedere [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md).  
  
## Esempio  
 Nell'esempio di codice riportato di seguito viene utilizzata la funzione Win32 [GetSystemMetrics](http://msdn.microsoft.com/library/windows/desktop/ms724385) per recuperare la risoluzione corrente dello schermo, in pixel.  
  
 Per le funzioni che utilizzano soltanto tipi intrinseci come argomenti e valori restituiti, non sono necessarie ulteriori operazioni.  Altri tipi di dati, ad esempio puntatori a funzione, matrici e strutture, richiedono attributi aggiuntivi per garantire la corretta esecuzione del marshalling dei dati.  
  
 Anche se non è indispensabile, si consiglia di creare dichiarazioni P\/Invoke per i membri statici di una classe di valori in modo che non siano definiti nello spazio dei nomi globali, come illustrato in questo esempio.  
  
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
  
## Vedere anche  
 [Utilizzo esplicito di PInvoke in C\+\+ \(attributo DllImport\)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)