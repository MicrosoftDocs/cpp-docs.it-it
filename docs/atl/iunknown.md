---
title: IUnknown | Microsoft Docs
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
ms.openlocfilehash: acabc38b115429c88ac9bed0e509cbcadd78a5aa
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43217496"
---
# <a name="iunknown"></a>IUnknown
[IUnknown](/windows/desktop/api/unknwn/nn-unknwn-iunknown) è l'interfaccia di base di qualsiasi altra interfaccia COM.  Questa interfaccia definisce tre metodi: [QueryInterface](/windows/desktop/api/unknwn/nf-unknwn-iunknown-queryinterface(q_)), [AddRef](/windows/desktop/api/unknwn/nf-unknwn-iunknown-addref), e [versione](/windows/desktop/api/unknwn/nf-unknwn-iunknown-release). [QueryInterface](/windows/desktop/api/unknwn/nf-unknwn-iunknown-queryinterface(q_)) consente a un utente di interfaccia di richiedere all'oggetto per un puntatore a un'altra delle relative interfacce. [AddRef](/windows/desktop/api/unknwn/nf-unknwn-iunknown-addref) e [rilascio](/windows/desktop/api/unknwn/nf-unknwn-iunknown-release) implementare nell'interfaccia di conteggio dei riferimenti.  
  
## <a name="see-also"></a>Vedere anche  
 [Introduzione a COM](../atl/introduction-to-com.md)   
 [IUnknown ed ereditarietà dell'interfaccia](/windows/desktop/com/iunknown-and-interface-inheritance)

