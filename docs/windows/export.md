---
title: Esporta | Microsoft Docs
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
ms.openlocfilehash: ad5f886c4d475cb51b370ae25549387f191ab4b6
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39653131"
---
# <a name="export"></a>esportazione
Fa sì che una struttura di dati da inserire nel file IDL.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
[export]  
```  
  
## <a name="remarks"></a>Note  
 Il **esportare** C++ attributo causa una struttura di dati da inserire nel file IDL e sia quindi disponibile nella libreria dei tipi in un formato compatibile con file binario che lo rende disponibile per l'utilizzo con qualsiasi linguaggio.  
  
 Non è possibile applicare il **esportare** anche se la classe contiene solo membri pubblici dell'attributo a una classe (l'equivalente di un **struct**).  
  
 Se si esportano senza nome **enum**s oppure **struct**s, siano assegnati nomi che iniziano con **unnamed * * * x*, dove *x* è un sequenziale numero.  
  
 Il typedef valido per l'esportazione sono tipi di base, le strutture, unioni, enumerazioni, o gli identificatori dei tipi.  Visualizzare [typedef](http://msdn.microsoft.com/library/windows/desktop/aa367287) per altre informazioni.  
  
## <a name="example"></a>Esempio  
 Il codice seguente viene illustrato come utilizzare il **esportare** attributo:  
  
```cpp  
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
|**Si applica a**|**Union**, **typedef**, **enum**, **struct**, o **interfaccia**|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del compilatore](../windows/compiler-attributes.md)   
 [Attributi Typedef, Enum, Union e Struct](../windows/typedef-enum-union-and-struct-attributes.md)   