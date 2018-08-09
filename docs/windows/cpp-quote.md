---
title: cpp_quote | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.cpp_quote
dev_langs:
- C++
helpviewer_keywords:
- cpp_quote attribute
ms.assetid: f75327ff-42bd-498b-9177-7ffa25427e1f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 21f986e227e9daca58731d03c40d6dae5b0c0a80
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39653040"
---
# <a name="cppquote"></a>cpp_quote
Genera la stringa specificata, senza i caratteri virgoletta, nel file con estensione IDL generato.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
[ cpp_quote(  
   "statement"  
) ];  
```  
  
### <a name="parameters"></a>Parametri  
 *istruzione*  
 Un'istruzione di C.  
  
## <a name="remarks"></a>Note  
 Il **cpp_quote** C++ attributo è utile se si desidera inserire una direttiva del preprocessore in un file con estensione idl.  
  
 È anche possibile usare **cpp_quote** e generare un file con estensione h come parte della compilazione MIDL. Ad esempio, se si dispone di un file di intestazione C++ che utilizza attributi IDL C++, ma non è possibile usare questo file per alcune attività, quindi è possibile compilarlo per creare un file generati da MIDL. h, che dovrebbe essere possibile usare.  
  
 Il **cpp_quote** attributo ha la stessa funzionalità come la [cpp_quote](http://msdn.microsoft.com/library/windows/desktop/aa366765) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio relativo [duale](../windows/dual.md) per un esempio di come usare usare **cpp_quote**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Ovunque|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi autonomi](../windows/stand-alone-attributes.md)   