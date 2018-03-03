---
title: idl_quote | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- vc-attr.idl_quote
dev_langs:
- C++
helpviewer_keywords:
- idl_quote attribute
ms.assetid: a370e1b7-948b-4e67-9a25-58facf24e4c9
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 288d90bf2e32024792eaf5ec44825a9ac992bd71
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="idlquote"></a>idl_quote
Consente di utilizzare costrutti IDL che non sono supportati nella versione corrente di Visual C++ e farli pass-through per il file IDL generato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ idl_quote(  
   text  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 *testo*  
 Nome dell'attributo che si intende il compilatore Visual C++, passare al file IDL generato senza restituire un errore del compilatore.  
  
## <a name="remarks"></a>Note  
 Se il **idl_quote** attributo C++ viene utilizzato come attributo autonomo (con un punto e virgola dopo la parentesi di chiusura), quindi *testo* viene inserito nel file IDL sottoposto a merge come è. Se **idl_quote** viene utilizzata su un simbolo, *testo* viene inserito all'interno del blocco di attributi per tale simbolo.  
  
## <a name="example"></a>Esempio  
 Il codice seguente viene illustrato come è possibile specificare un attributo non supportato (utilizzando **in**, che è supportato) e come definire e utilizzare un costrutto di IDL non definito:  
  
```  
// cpp_attr_ref_idl_quote.cpp  
// compile with: /LD  
#include <unknwn.h>  
[module(name="MyLibrary")];  
  
[export]  
struct MYFLOT {  
   int i;  
};  
  
[export]  
struct MYDUB {  
   int i;  
};  
  
[idl_quote("typedef union _S1_TYPE switch (long l1) U1_TYPE { case 1024: \  
struct MYFLOT f1; case 2048: struct MYDUB d2; } S1_TYPE;") ];  
  
typedef struct _S1_TYPE {   
   long l1;   
  
union {   
   MYFLOT f1; MYDUB d2; } U1_TYPE;   
} S1_TYPE;  
  
[uuid("2F5F63F1-16DA-11d2-9E7B-00C04FB926DA"), object]  
__interface IStatic{  
   HRESULT Func1([idl_quote("in")] int i);  
   HRESULT func( S1_TYPE* myStruct );  
};  
```  
  
 Questo codice causa MYFLOT e MYDUB e *testo* voce posizionati nel file IDL generato. Il *nome* parametro forza *testo* per essere inserita prima di tutto ciò che fa riferimento a *nome* nel file IDL generato. Il *dipendenze* parametro impone le definizioni di elenco di dipendenze da inserire prima *testo* nel file IDL generato.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Ovunque|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi autonomi](../windows/stand-alone-attributes.md)   
