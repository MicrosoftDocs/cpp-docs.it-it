---
title: case (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.case
dev_langs: C++
helpviewer_keywords: case attribute
ms.assetid: 6fb883c3-0526-4932-a901-b4564dcaeb7d
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: b1a3b76d56c6d1b78218d75ca596ae7311e13ac6
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="case-c"></a>case (C++)
Utilizzato con il [switch_type](../windows/switch-type.md) attributo un **unione**.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ case(  
   value  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 *value*  
 Un possibile valore per il quale si desidera fornire l'elaborazione di input. Il tipo di **valore** può essere uno dei tipi seguenti:  
  
-   `int`  
  
-   `char`  
  
-   `boolean`  
  
-   `enum`  
  
 o un identificatore di tale tipo.  
  
## <a name="remarks"></a>Note  
 Il **case** attributo C++ ha la stessa funzionalità come il **case** attributo MIDL. Questo attributo viene utilizzato solo con il [switch_type](../windows/switch-type.md) attributo.  
  
## <a name="example"></a>Esempio  
 Il codice seguente viene illustrato un utilizzo del **case** attributo:  
  
```  
// cpp_attr_ref_case.cpp  
// compile with: /LD  
#include <unknwn.h>  
[export]  
struct SizedValue2 {  
   [switch_type(char), switch_is(kind)] union {  
      [case(1), string]  
          wchar_t* wval;  
      [default, string]  
          char* val;  
   };  
    char kind;  
};  
[module(name="ATLFIRELib")];  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Membro di un **classe** o`struct`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuna|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [TypeDef, Enum, Union e Struct (attributi)](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
