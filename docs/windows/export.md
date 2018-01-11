---
title: esportare | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.export
dev_langs: C++
helpviewer_keywords: export attribute
ms.assetid: 70b3e848-fad6-4e09-8c72-be60ca72a4df
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 24619e3a0e707b40590b0ffb37b415629a18b1cd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
  
 Se si esporta senza nome `enum`s o `struct`s, verranno assegnati nomi che iniziano con **unnamed***x*, dove *x* è un numero sequenziale.  
  
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
|**Si applica a**|**unione**, `typedef`, `enum`, `struct`, o`interface`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del compilatore](../windows/compiler-attributes.md)   
 [Attributi Typedef, Enum, Union e Struct](../windows/typedef-enum-union-and-struct-attributes.md)   
