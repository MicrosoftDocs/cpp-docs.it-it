---
title: ref new, gcnew (estensioni del componente C++) | Documenti Microsoft
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
ms.openlocfilehash: 9533675d2894b3c3d99e3fb57abded8ea4e99d7a
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33879061"
---
# <a name="ref-new-gcnew--c-component-extensions"></a>ref new, gcnew (Estensioni del componente C++)
Il `ref new` parola chiave aggregata alloca un'istanza di un tipo che viene sottoposto a garbage collection quando l'oggetto non è accessibile e che restituisce un handle ([^](../windows/handle-to-object-operator-hat-cpp-component-extensions.md)) all'oggetto allocato.  
  
## <a name="all-runtimes"></a>Tutti i runtime  
 La memoria per un'istanza di un tipo che è stata allocata da `ref new` viene deallocata automaticamente.  
  
 Un'operazione `ref new` genera `OutOfMemoryException` se non è in grado di allocare memoria.  
  
 Per ulteriori informazioni su come allocazione e deallocazione memoria per i tipi nativi C++, vedere [nuovo ed eliminare operatori](../cpp/new-and-delete-operators.md).  
  
## <a name="windows-runtime"></a>Windows Runtime  
 Usare `ref new` per allocare memoria per oggetti di Windows Runtime per cui si desidera amministrare automaticamente la durata. L'oggetto viene automaticamente deallocato quando il conteggio dei riferimenti scende a zero. Questo si verifica dopo che l'ultima copia del riferimento esce dall'ambito. Per ulteriori informazioni, vedere [le classi e struct](http://msdn.microsoft.com/library/windows/apps/hh699870.aspx).  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
## <a name="common-language-runtime"></a>Common Language Runtime 
 La memoria per un tipo gestito (tipo riferimento o tipo valore) viene allocata da `gcnew` e deallocata tramite Garbage Collection.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
### <a name="examples"></a>Esempi  
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
  
```Output  
32  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)