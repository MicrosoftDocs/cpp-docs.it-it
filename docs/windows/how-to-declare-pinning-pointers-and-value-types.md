---
title: 'Procedura: dichiarare i puntatori di blocco e i tipi di valore | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- value types, declaring
- pinning pointers
ms.assetid: 57c5ec8a-f85a-48c4-ba8b-a81268bcede0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 40187b7da9083ddaa5342e4bdfeba556fb900e7b
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33880384"
---
# <a name="how-to-declare-pinning-pointers-and-value-types"></a>Procedura: dichiarare i puntatori di blocco e i tipi di valore
Un tipo di valore può essere sottoposto a boxing in modo implicito. È possibile dichiarare un puntatore di blocco per l'oggetto di tipo di valore stesso e utilizzare un **pin_ptr** al tipo di valore boxed.  
  
## <a name="example"></a>Esempio  
  
### <a name="code"></a>Codice  
  
```  
// pin_ptr_value.cpp  
// compile with: /clr  
value struct V {  
   int i;  
};  
  
int main() {  
   V ^ v = gcnew V;   // imnplicit boxing  
   v->i=8;  
   System::Console::WriteLine(v->i);  
   pin_ptr<V> mv = &*v;  
   mv->i = 7;  
   System::Console::WriteLine(v->i);  
   System::Console::WriteLine(mv->i);  
}  
```  
  
### <a name="output"></a>Output  
  
```  
8  
7  
7  
```  
  
## <a name="see-also"></a>Vedere anche  
 [pin_ptr (C++/CLI)](../windows/pin-ptr-cpp-cli.md)