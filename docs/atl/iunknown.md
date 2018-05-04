---
title: IUnknown | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IUnknown
dev_langs:
- C++
helpviewer_keywords:
- COM interfaces, base interface
- IUnknown interface
ms.assetid: e6b85472-e54b-4b8c-b19f-4454d6c05a8f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c02018ee3cefb1b98c2df850d44578cf3a092c64
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="iunknown"></a>IUnknown
[IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) è l'interfaccia di base di ogni altra interfaccia COM.  Questa interfaccia definisce i tre metodi: [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521), [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379), e [versione](http://msdn.microsoft.com/library/windows/desktop/ms682317). [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521) consente a un utente di interfaccia per porre l'oggetto per un puntatore a un'altra delle relative interfacce. [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379) e [versione](http://msdn.microsoft.com/library/windows/desktop/ms682317) implementare nell'interfaccia di conteggio dei riferimenti.  
  
## <a name="see-also"></a>Vedere anche  
 [Introduzione a COM](../atl/introduction-to-com.md)   
 [IUnknown ed ereditarietà di interfaccia](http://msdn.microsoft.com/library/windows/desktop/ms692713)

