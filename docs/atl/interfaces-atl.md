---
title: Interfacce (ATL) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- COM interfaces
- interfaces, COM
ms.assetid: de6c8b12-6230-4fdc-af66-a28b91d5ee55
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ef93476e669b923d642f79f480c602229d6a4322
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46071159"
---
# <a name="interfaces-atl"></a>Interfacce (ATL)

Un'interfaccia è il modo in cui un oggetto espone le proprie funzionalità al mondo esterno. In COM, un'interfaccia è una tabella di puntatori (ad esempio, un oggetto vtable C++) alle funzioni implementate dall'oggetto. La tabella rappresenta l'interfaccia e le funzioni a cui fa riferimento sono i metodi di tale interfaccia. Un oggetto può esporre tutte le interfacce che sceglie.

Ogni interfaccia è basata sull'interfaccia COM fondamentale, [IUnknown](../atl/iunknown.md). I metodi di `IUnknown` consentono di spostarsi su altre interfacce esposte dall'oggetto.

Inoltre, ogni interfaccia viene assegnato una unique ID interfaccia (IID). L'univocità semplifica supportare il controllo delle versioni dell'interfaccia. Una nuova versione di un'interfaccia è semplicemente una nuova interfaccia, con un nuovo IID.

> [!NOTE]
>  IID per le interfacce COM e OLE standard sono predefiniti.

## <a name="see-also"></a>Vedere anche

[Introduzione a COM](../atl/introduction-to-com.md)<br/>
[Interfacce e oggetti COM](/windows/desktop/com/com-objects-and-interfaces)

