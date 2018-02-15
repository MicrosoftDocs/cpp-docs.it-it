---
title: CEnumeratorAccessor::m_szParseName | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CEnumeratorAccessor::m_szParseName
- ATL::CEnumeratorAccessor::m_szParseName
- m_szParseName
- CEnumeratorAccessor.m_szParseName
- ATL.CEnumeratorAccessor.m_szParseName
dev_langs:
- C++
helpviewer_keywords:
- m_szParseName
ms.assetid: 32e826b6-0890-4db4-aa92-fc1ea3f528b2
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 5089ff7531c349afc8a8f7991cfcb0ff97c4bd52
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="cenumeratoraccessormszparsename"></a>CEnumeratorAccessor::m_szParseName
Stringa da passare al [IParseDisplayName](http://msdn.microsoft.com/library/windows/desktop/ms680604) per ottenere un moniker per l'origine dati o di un enumeratore.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
WCHAR m_szParseName[129];  
  
```  
  
## <a name="remarks"></a>Note  
 Vedere [ISourcesRowset:: GetSourcesRowset](https://msdn.microsoft.com/en-us/library/ms711200.aspx) nel *riferimento per programmatori OLE DB* per ulteriori informazioni.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CEnumeratorAccessor](../../data/oledb/cenumeratoraccessor-class.md)