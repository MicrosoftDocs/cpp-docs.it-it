---
title: Interfacce (ATL) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- COM interfaces
- interfaces, COM
ms.assetid: de6c8b12-6230-4fdc-af66-a28b91d5ee55
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 95dce7d707cfb29c8f33f94504c26b5b24ef4c4f
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
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

