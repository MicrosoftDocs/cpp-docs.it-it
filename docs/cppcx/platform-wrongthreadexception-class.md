---
title: 'Classe platform:: wrongthreadexception | Documenti Microsoft'
ms.custom: 
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- VCCORLIB/Platform::WrongThreadException
- VCCORLIB/Platform::WrongThreadException::WrongThreadException
dev_langs: C++
helpviewer_keywords: Platform::WrongThreadException
ms.assetid: c193f97e-0392-4535-a4c4-0711e4e4a836
caps.latest.revision: "5"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.openlocfilehash: c07cc20c344e6ccd5c3f7798cfd471e7111fe47d
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="platformwrongthreadexception-class"></a>Classe Platform::WrongThreadException
Generata quando un thread esegue una chiamata tramite un puntatore a interfaccia per un oggetto proxy che non appartiene all'apartment del thread.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
public ref class WrongThreadException : COMException,    IException,    IPrintable,    IEquatable  
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedi la classe [COMException](../cppcx/platform-comexception-class.md).  
  
### <a name="requirements"></a>Requisiti  
 **Client minimo supportato:** Windows 8  
  
 **Server minimo supportato:** Windows Server 2012  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  
  
## <a name="see-also"></a>Vedere anche  
 [Classe Platform::COMException](../cppcx/platform-comexception-class.md)