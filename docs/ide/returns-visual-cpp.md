---
title: '&lt;returns&gt; (Visual C++) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- returns
- <returns>
dev_langs:
- C++
helpviewer_keywords:
- returns C++ XML tag
- <returns> C++ XML tag
ms.assetid: 5e3b0ed9-838d-4953-a93e-76d2d0a19fb9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7b9956299370b4a41ce725cf903ff2aefe55bf53
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33336736"
---
# <a name="ltreturnsgt-visual-c"></a>&lt;returns&gt; (Visual C++)
Il tag \<returns> deve essere usato nel commento per una dichiarazione di metodo per descrivere il valore restituito.  
  
## <a name="syntax"></a>Sintassi  
  
```  
<returns>description</returns>  
```  
  
#### <a name="parameters"></a>Parametri  
 `description`  
 Descrizione del valore restituito.  
  
## <a name="remarks"></a>Note  
 Compilare con [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.  
  
## <a name="example"></a>Esempio  
  
```  
// xml_returns_tag.cpp  
// compile with: /LD /clr /doc  
// post-build command: xdcmake xml_returns_tag.dll  
  
/// Text for class MyClass.  
public ref class MyClass {  
public:  
   /// <returns>Returns zero.</returns>  
   int GetZero() { return 0; }  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)