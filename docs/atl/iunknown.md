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
ms.openlocfilehash: d5840fc7e4623ee6163b3caf1a43eff358a152e6
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46039036"
---
# <a name="iunknown"></a>IUnknown

[IUnknown](/windows/desktop/api/unknwn/nn-unknwn-iunknown) è l'interfaccia di base di qualsiasi altra interfaccia COM.  Questa interfaccia definisce tre metodi: [QueryInterface](/windows/desktop/api/unknwn/nf-unknwn-iunknown-queryinterface(q_)), [AddRef](/windows/desktop/api/unknwn/nf-unknwn-iunknown-addref), e [versione](/windows/desktop/api/unknwn/nf-unknwn-iunknown-release). [QueryInterface](/windows/desktop/api/unknwn/nf-unknwn-iunknown-queryinterface(q_)) consente a un utente di interfaccia di richiedere all'oggetto per un puntatore a un'altra delle relative interfacce. [AddRef](/windows/desktop/api/unknwn/nf-unknwn-iunknown-addref) e [rilascio](/windows/desktop/api/unknwn/nf-unknwn-iunknown-release) implementare nell'interfaccia di conteggio dei riferimenti.

## <a name="see-also"></a>Vedere anche

[Introduzione a COM](../atl/introduction-to-com.md)<br/>
[IUnknown ed ereditarietà dell'interfaccia](/windows/desktop/com/iunknown-and-interface-inheritance)

