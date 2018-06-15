---
title: '&lt;remarks&gt; (Visual C++) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- remarks
- <remarks>
dev_langs:
- C++
helpviewer_keywords:
- <remarks> C++ XML tag
- remarks C++ XML tag
ms.assetid: c820083b-3192-40ab-9ec8-1472c55b4247
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 380a2c27a761154e59826259d3e1e682ae7fbd87
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33334467"
---
# <a name="ltremarksgt-visual-c"></a>&lt;remarks&gt; (Visual C++)
Il tag \<remarks> viene usato per aggiungere informazioni su un tipo, integrando le informazioni con [\<summary>](../ide/summary-visual-cpp.md). Queste informazioni vengono visualizzate in [Visualizzatore oggetti](http://msdn.microsoft.com/en-us/f89acfc5-1152-413d-9f56-3dc16e3f0470) e nel report Web sui commenti del codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
<remarks>description</remarks>  
```  
  
#### <a name="parameters"></a>Parametri  
 `description`  
 Descrizione del membro.  
  
## <a name="remarks"></a>Note  
 Compilare con [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.  
  
## <a name="example"></a>Esempio  
  
```  
// xml_remarks_tag.cpp  
// compile with: /LD /clr /doc  
// post-build command: xdcmake xml_remarks_tag.dll  
  
using namespace System;  
  
/// <summary>  
/// You may have some primary information about this class.  
/// </summary>  
/// <remarks>  
/// You may have some additional information about this class.  
/// </remarks>  
public ref class MyClass {};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)