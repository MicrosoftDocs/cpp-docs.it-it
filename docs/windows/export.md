---
title: esportare | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.export
dev_langs:
- C++
helpviewer_keywords:
- export attribute
ms.assetid: 70b3e848-fad6-4e09-8c72-be60ca72a4df
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 67b71639fc0b7d0039f5665d2cc187191ac14baf
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33874603"
---
# <a name="export"></a>esportazione
Fa sì che una struttura di dati da inserire nel file IDL.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
[export]  
  
```  
  
## <a name="remarks"></a>Note  
 Il **esportare** attributo C++ provoca una struttura di dati da inserire nel file IDL e sia disponibile nella libreria dei tipi in un formato compatibile con file binario che rende disponibili per l'utilizzo con qualsiasi linguaggio.  
  
 Non è possibile applicare il **esportare** anche se la classe dispone solo di membri pubblici dell'attributo a una classe (l'equivalente di un `struct`).  
  
 Se si esportano senza nome `enum`s o `struct`s, siano assegnati nomi che iniziano con **unnamed * * * x*, dove *x* è un numero sequenza.  
  
 I typedef validi per l'esportazione sono tipi di base, le strutture, unioni, enumerazioni, gli identificatori dei tipi.  Vedere [typedef](http://msdn.microsoft.com/library/windows/desktop/aa367287) per ulteriori informazioni.  
  
## <a name="example"></a>Esempio  
 Il codice seguente viene illustrato come utilizzare il **esportare** attributo:  
  
```  
// cpp_attr_ref_export.cpp  
// compile with: /LD  
[module(name="MyLibrary")];  
  
[export]  
struct MyStruct {  
   int i;  
};  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**unione**, `typedef`, `enum`, `struct`, o `interface`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del compilatore](../windows/compiler-attributes.md)   
 [Attributi Typedef, Enum, Union e Struct](../windows/typedef-enum-union-and-struct-attributes.md)   
