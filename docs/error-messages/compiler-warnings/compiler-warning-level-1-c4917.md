---
title: Compilatore avviso (livello 1) C4917 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4917
dev_langs:
- C++
helpviewer_keywords:
- C4917
ms.assetid: c05e2610-4a5d-4f4b-a99b-c15fd7f1d5f1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: afc38da9bb06879745fb96afd8224a4f599bb252
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4917"></a>Avviso del compilatore (livello 1) C4917
'dichiaratore': un GUID può solo essere associato a una classe, interfaccia o spazio dei nomi  
  
Una struttura definita dall'utente diverso da [classe](../../cpp/class-cpp.md), [interfaccia](../../cpp/interface.md), o [dello spazio dei nomi](../../cpp/namespaces-cpp.md) non può avere un GUID.  
  
Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .  
  
## <a name="example"></a>Esempio  
Esempio di codice seguente genera l'errore C4917:  
  
```cpp  
// C4917.cpp  
// compile with: /W1  
#pragma warning(default : 4917)  
__declspec(uuid("00000000-0000-0000-0000-000000000001")) struct S  
{  
} s;   // C4917, don't put uuid on a struct  
  
int main()  
{  
}  
```