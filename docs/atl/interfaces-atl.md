---
title: Interfacce (ATL) | Documenti Microsoft
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
ms.openlocfilehash: 0db5a79f187cb0fe320bf67aace751a5d4c537d3
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32359314"
---
# <a name="interfaces-atl"></a>Interfacce (ATL)
Un'interfaccia è il modo in cui un oggetto espone le proprie funzionalità al mondo esterno. In COM, un'interfaccia è una tabella di puntatori (ad esempio, un oggetto vtable C++) alle funzioni implementate dall'oggetto. La tabella rappresenta l'interfaccia e le funzioni a cui fa riferimento sono i metodi di tale interfaccia. Un oggetto può esporre il numero di interfacce che sceglie.  
  
 Ogni interfaccia si basa sull'interfaccia COM fondamentale, [IUnknown](../atl/iunknown.md). I metodi di **IUnknown** consentire la navigazione con altre interfacce esposte dall'oggetto.  
  
 Inoltre, ogni interfaccia viene assegnato un'univoca ID interfaccia (IID). Questa univocità semplifica supportare il controllo delle versioni di interfaccia. Una nuova versione di un'interfaccia è semplicemente una nuova interfaccia, con un nuovo IID.  
  
> [!NOTE]
>  IID per le interfacce COM e OLE standard sono predefiniti.  
  
## <a name="see-also"></a>Vedere anche  
 [Introduzione a COM](../atl/introduction-to-com.md)   
 [Le interfacce e oggetti COM](http://msdn.microsoft.com/library/windows/desktop/ms690343)

