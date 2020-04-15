---
title: Interfacce (ATL)
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- COM interfaces
- interfaces, COM
ms.assetid: de6c8b12-6230-4fdc-af66-a28b91d5ee55
ms.openlocfilehash: 56d5a010bc28257dce181ee33e0ddf74655ccd3c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319393"
---
# <a name="interfaces-atl"></a>Interfacce (ATL)

Un'interfaccia è il modo in cui un oggetto espone le proprie funzionalità al mondo esterno. In COM, un'interfaccia è una tabella di puntatori (ad esempio una vtable C ) alle funzioni implementate dall'oggetto. La tabella rappresenta l'interfaccia e le funzioni a cui punta sono i metodi di tale interfaccia. Un oggetto può esporre tutte le interfacce che sceglie.

Ogni interfaccia è basata sull'interfaccia COM fondamentale, [IUnknown](../atl/iunknown.md). Metodi per `IUnknown` consentire lo spostamento ad altre interfacce esposte dall'oggetto.

Inoltre, a ogni interfaccia viene assegnato un ID di interfaccia univoco (IID). Questa unicità semplifica il supporto del controllo delle versioni dell'interfaccia. Una nuova versione di un'interfaccia è semplicemente una nuova interfaccia, con un nuovo IID.

> [!NOTE]
> Gli IID per le interfacce COM e OLE standard sono predefiniti.

## <a name="see-also"></a>Vedere anche

[Introduzione a COM](../atl/introduction-to-com.md)<br/>
[Interfacce e oggetti COMCOM Objects and Interfaces](/windows/win32/com/com-objects-and-interfaces)
