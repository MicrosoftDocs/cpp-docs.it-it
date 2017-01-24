---
title: "ref new, gcnew  (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "gcnew"
  - "ref new"
  - "gcnew_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ref new keyword (C++)"
  - "gcnew keyword [C++]"
ms.assetid: 388a62da-c2df-4a94-a9a2-205b53e577da
caps.latest.revision: 24
caps.handback.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ref new, gcnew  (C++ Component Extensions)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La parola chiave aggregata `ref new` alloca un'istanza di un tipo che viene sottoposto a Garbage Collection quando l'oggetto non è accessibile e restituisce un handle \([^](../windows/handle-to-object-operator-hat-cpp-component-extensions.md)\) all'oggetto allocato.  
  
## Tutti i runtime  
 La memoria per un'istanza di un tipo che è stata allocata da `ref new` viene deallocata automaticamente.  
  
 Un'operazione `ref new` genera `OutOfMemoryException` se non è in grado di allocare memoria.  
  
 Per altre informazioni su come viene allocata e deallocata la memoria per i tipi C\+\+ nativi, vedere [Operatori new e delete](../cpp/new-and-delete-operators.md).  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 Usare `ref new` per allocare memoria per oggetti di Windows Runtime per cui si desidera amministrare automaticamente la durata.  L'oggetto viene automaticamente deallocato quando il conteggio dei riferimenti scende a zero. Questo si verifica dopo che l'ultima copia del riferimento esce dall'ambito.  Per altre informazioni, vedere [Classi e struct di riferimento](http://msdn.microsoft.com/library/windows/apps/hh699870.aspx).  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 La memoria per un tipo gestito \(tipo riferimento o tipo valore\) viene allocata da `gcnew` e deallocata tramite Garbage Collection.  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
 **Esempio**  
  
 Nell'esempio seguente viene usato `gcnew` per allocare un oggetto Message.  
  
```  
// mcppv2_gcnew_1.cpp  
// compile with: /clr  
ref struct Message {  
   System::String^ sender;  
   System::String^ receiver;  
   System::String^ data;  
};  
  
int main() {  
   Message^ h_Message  = gcnew Message;  
  //...  
}  
```  
  
 **Esempio**  
  
 Nell'esempio seguente viene usato `gcnew` per creare un tipo valore boxed da usare come tipo riferimento.  
  
```  
// example2.cpp : main project file.  
// compile with /clr  
using namespace System;  
value class Boxed {  
    public:  
        int i;  
};  
int main()  
{  
    Boxed^ y = gcnew Boxed;  
    y->i = 32;  
    Console::WriteLine(y->i);  
    return 0;  
}  
```  
  
 **Output**  
  
  **32**   
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)