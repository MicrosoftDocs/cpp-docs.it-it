---
title: IUnknown
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- IUnknown
helpviewer_keywords:
- COM interfaces, base interface
- IUnknown interface
ms.assetid: e6b85472-e54b-4b8c-b19f-4454d6c05a8f
ms.openlocfilehash: 760db28f4016ed529b45c72d25eaabf664642cd2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50430043"
---
# <a name="iunknown"></a>IUnknown

[IUnknown](/windows/desktop/api/unknwn/nn-unknwn-iunknown) è l'interfaccia di base di qualsiasi altra interfaccia COM.  Questa interfaccia definisce tre metodi: [QueryInterface](/windows/desktop/api/unknwn/nf-unknwn-iunknown-queryinterface(q_)), [AddRef](/windows/desktop/api/unknwn/nf-unknwn-iunknown-addref), e [versione](/windows/desktop/api/unknwn/nf-unknwn-iunknown-release). [QueryInterface](/windows/desktop/api/unknwn/nf-unknwn-iunknown-queryinterface(q_)) consente a un utente di interfaccia di richiedere all'oggetto per un puntatore a un'altra delle relative interfacce. [AddRef](/windows/desktop/api/unknwn/nf-unknwn-iunknown-addref) e [rilascio](/windows/desktop/api/unknwn/nf-unknwn-iunknown-release) implementare nell'interfaccia di conteggio dei riferimenti.

## <a name="see-also"></a>Vedere anche

[Introduzione a COM](../atl/introduction-to-com.md)<br/>
[IUnknown ed ereditarietà dell'interfaccia](/windows/desktop/com/iunknown-and-interface-inheritance)

