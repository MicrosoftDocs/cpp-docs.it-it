---
description: 'Altre informazioni su: IUnknown'
title: IUnknown
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- COM interfaces, base interface
- IUnknown interface
ms.assetid: e6b85472-e54b-4b8c-b19f-4454d6c05a8f
ms.openlocfilehash: ddfd35155162275885a1c0c842b4589fa6773a4a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97152646"
---
# <a name="iunknown"></a>IUnknown

[IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) è l'interfaccia di base di tutte le altre interfacce com.  Questa interfaccia definisce tre metodi: [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)), [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref)e [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release). [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) consente a un utente di interfaccia di chiedere all'oggetto un puntatore a un'altra delle relative interfacce. [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref) e [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release) implementano il conteggio dei riferimenti sull'interfaccia.

## <a name="see-also"></a>Vedi anche

[Introduzione a COM](../atl/introduction-to-com.md)<br/>
[IUnknown ed ereditarietà dell'interfaccia](/windows/win32/com/iunknown-and-interface-inheritance)
