---
description: 'Ulteriori informazioni su: interfacce (ATL)'
title: Interfacce (ATL)
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- COM interfaces
- interfaces, COM
ms.assetid: de6c8b12-6230-4fdc-af66-a28b91d5ee55
ms.openlocfilehash: d68f482d05ff828631f5f9f27085f24af188d643
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97147693"
---
# <a name="interfaces-atl"></a>Interfacce (ATL)

Un'interfaccia è il modo in cui un oggetto espone le proprie funzionalità al mondo esterno. In COM, un'interfaccia è una tabella di puntatori (come un vtable C++) alle funzioni implementate dall'oggetto. La tabella rappresenta l'interfaccia e le funzioni alle quali fa riferimento sono i metodi di tale interfaccia. Un oggetto può esporre il numero di interfacce che sceglie.

Ogni interfaccia è basata sull'interfaccia COM fondamentale, [IUnknown](../atl/iunknown.md). I metodi di `IUnknown` consentono la navigazione ad altre interfacce esposte dall'oggetto.

Inoltre, a ogni interfaccia viene assegnato un ID di interfaccia univoco (IID). Questa unicità rende più semplice supportare il controllo delle versioni dell'interfaccia. Una nuova versione di un'interfaccia è semplicemente una nuova interfaccia con un nuovo IID.

> [!NOTE]
> IID per le interfacce COM e OLE standard sono predefinite.

## <a name="see-also"></a>Vedi anche

[Introduzione a COM](../atl/introduction-to-com.md)<br/>
[Oggetti e interfacce COM](/windows/win32/com/com-objects-and-interfaces)
