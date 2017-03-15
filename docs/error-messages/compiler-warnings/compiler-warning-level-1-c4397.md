---
title: "Avviso del compilatore (livello 1) C4397 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4397"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4397"
ms.assetid: 6346fdc2-dbbf-4fba-803a-32b0d0a707be
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Avviso del compilatore (livello 1) C4397
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

DefaultCharSetAttribute ignorato  
  
 <xref:System.Runtime.InteropServices.DefaultCharSetAttribute> viene ignorato dal compilatore Visual C\+\+.  Per specificare un set di caratteri per la DLL, utilizzare l'opzione CharSet di DllImport.  Per ulteriori informazioni, vedere [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../../dotnet/using-cpp-interop-implicit-pinvoke.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4397:  
  
```  
// C4397.cpp  
// compile with: /W1 /c /clr  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
[module:DefaultCharSetAttribute(CharSet::Unicode)];   // C4397  
  
[DllImport("kernel32", EntryPoint="CloseHandle", CharSet=CharSet::Unicode)]   // OK  
extern "C" bool ImportDefault(IntPtr hObject);  
  
public ref class MySettingVC {  
public:  
   void method() {  
      ImportDefault(IntPtr::Zero);  
   }  
};  
  
[StructLayout(LayoutKind::Explicit)]  
public ref struct StructDefault1{};  
  
public ref class ClassDefault1{};  
```