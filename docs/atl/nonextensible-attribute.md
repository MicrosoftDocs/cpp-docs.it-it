---
description: 'Altre informazioni su: attributo non estendibile'
title: Attributo non estendibile
ms.date: 11/04/2016
helpviewer_keywords:
- nonextensible attribute
- dual interfaces, nonextensible attribute
ms.assetid: 02a4a18b-ffd3-4d53-8fd1-feb1c05ad5ac
ms.openlocfilehash: 5bad214d6688570bc4a69aca952f6bed98c2b0dc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97159401"
---
# <a name="nonextensible-attribute"></a>Attributo non estendibile

Se un'interfaccia duale non verrà estesa in fase di esecuzione (ovvero, non si forniranno metodi o proprietà tramite `IDispatch::Invoke` che non sono disponibili tramite vtable), è necessario applicare l'attributo non **estensibile** alla definizione dell'interfaccia. Questo attributo fornisce informazioni alle lingue client, ad esempio Visual Basic, che possono essere usate per abilitare la verifica completa del codice in fase di compilazione. Se questo attributo non viene specificato, i bug potrebbero rimanere nascosti nel codice client fino alla fase di esecuzione.

Per ulteriori informazioni sull'attributo non **estendibile** e un esempio, vedere non [estendibile](../windows/attributes/nonextensible.md).

## <a name="see-also"></a>Vedi anche

[Interfacce duali e ATL](../atl/dual-interfaces-and-atl.md)
