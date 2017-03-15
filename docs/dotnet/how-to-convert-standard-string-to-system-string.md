---
title: "Procedura: convertire stringhe standard in System::String | Microsoft Docs"
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
  - "libreria C++ standard, conversione di stringhe in System::String"
  - "stringhe (conversione) [C++], stringa di libreria C++ standard"
  - "stringhe [C++], conversione"
ms.assetid: 1fde79a0-9d0b-44e5-981b-e8f2676c199d
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Procedura: convertire stringhe standard in System::String
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come convertire una stringa standard della libreria C\+\+ \([\<string\>](../standard-library/string.md)\) in un oggetto <xref:System.String>.  
  
## Esempio  
  
```  
// convert_standard_string_to_system_string.cpp  
// compile with: /clr  
#include <string>  
#include <iostream>  
using namespace System;  
using namespace std;  
  
int main() {  
   string str = "test";  
   cout << str << endl;  
   String^ str2 = gcnew String(str.c_str());  
   Console::WriteLine(str2);  
  
   // alternatively  
   String^ str3 = gcnew String(str.c_str());  
   Console::WriteLine(str3);  
}  
```  
  
  **test**  
**test**  
**test**   
## Vedere anche  
 [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md)