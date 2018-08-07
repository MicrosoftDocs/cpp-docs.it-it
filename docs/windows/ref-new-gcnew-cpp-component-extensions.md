---
title: ref new, gcnew (estensioni del componente C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- gcnew
- ref new
- gcnew_cpp
dev_langs:
- C++
helpviewer_keywords:
- ref new keyword (C++)
- gcnew keyword [C++]
ms.assetid: 388a62da-c2df-4a94-a9a2-205b53e577da
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 51aec80ee24d96cf08d55778e108492d16ecfcc9
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39606185"
---
# <a name="ref-new-gcnew--c-component-extensions"></a>ref new, gcnew (Estensioni del componente C++)
Il **ref nuove** parola chiave aggregata alloca un'istanza di un tipo che viene sottoposto a garbage collection quando l'oggetto non è accessibile e che restituisce un handle ([^](../windows/handle-to-object-operator-hat-cpp-component-extensions.md)) all'oggetto allocato.  
  
## <a name="all-runtimes"></a>Tutti i runtime  
 Memoria per un'istanza di un tipo che viene allocata dal **ref nuovo** viene deallocata automaticamente.  
  
 Oggetto **ref nuove** genera un'eccezione operazione `OutOfMemoryException` se non è in grado di allocare memoria.  
  
 Per altre informazioni su come memoria per i tipi nativi C++ viene allocata e deallocata, vedere [la nuova ed eliminare operatori](../cpp/new-and-delete-operators.md).  
  
## <a name="windows-runtime"></a>Windows Runtime  
 Uso **ref nuovo** ad allocare memoria per oggetti di Runtime di Windows la cui durata si desidera amministrare automaticamente. L'oggetto viene automaticamente deallocato quando il conteggio dei riferimenti scende a zero. Questo si verifica dopo che l'ultima copia del riferimento esce dall'ambito. Per altre informazioni, vedere [le classi e struct](http://msdn.microsoft.com/library/windows/apps/hh699870.aspx).  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: `/ZW`  
  
## <a name="common-language-runtime"></a>Common Language Runtime 
 Per un tipo gestito (tipo riferimento o valore) di memoria allocata **gcnew**e deallocata tramite garbage collection.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: `/clr`  
  
### <a name="examples"></a>Esempi  
  
 L'esempio seguente usa **gcnew** per allocare un oggetto del messaggio.  
  
```cpp  
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
  
 L'esempio seguente usa **gcnew** per creare un tipo di valore boxed da utilizzare come tipo di riferimento.  
  
```cpp  
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
  
```Output  
32  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)