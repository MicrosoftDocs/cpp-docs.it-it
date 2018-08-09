---
title: idl_quote | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.idl_quote
dev_langs:
- C++
helpviewer_keywords:
- idl_quote attribute
ms.assetid: a370e1b7-948b-4e67-9a25-58facf24e4c9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: cbb36012d9a249669e3029c79dcf9c35bcdfc7a4
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40011578"
---
# <a name="idlquote"></a>idl_quote
Consente di usare costrutti IDL che non sono supportati nella versione corrente di Visual C++ e chiedere di pass-through per il file con estensione IDL generato.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
[ idl_quote(  
   text  
) ]  
```  
  
### <a name="parameters"></a>Parametri  
 *testo*  
 Il nome dell'attributo che si intende il compilatore Visual C++, passare al file IDL generato senza restituire un errore del compilatore.  
  
## <a name="remarks"></a>Note  
 Se il **idl_quote** C++ viene usato come attributo autonomo (con un punto e virgola dopo la parentesi di chiusura), quindi *testo* viene inserito nel file unito. idl, come è. Se **idl_quote** viene usato un simbolo *testo* viene inserito nel blocco di attributi per tale simbolo.  
  
## <a name="example"></a>Esempio  
 Il codice seguente illustra come è possibile specificare un attributo non supportato (tramite **in**, che è supportato) e su come definire e usare un costrutto non definito. idl:  
  
```cpp  
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
  
 Questo codice causa `MYFLOT` e `MYDUB` e il *testo* movimento da inserire nel file con estensione IDL generato. Il *name* parametro forza *testo* da inserire prima di tutto ciò che fa riferimento *nome* nel file con estensione IDL generato. Il *dipendenze* parametro impone le definizioni di elenco delle dipendenze da inserire prima *testo* nel file con estensione IDL generato.  
  
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