---
title: Conteggio (ATL) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- AddRef method [C++], reference counting
- reference counting
- AddRef method [C++]
- reference counts
- references, counting
ms.assetid: b1fd4514-6de6-429f-9e60-2777c0d07a3d
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: be6aff46df500a55665f85f6f462514985885b9b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="reference-counting"></a>Il conteggio dei riferimenti
In COM non automaticamente tenta di rimuovere un oggetto dalla memoria quando che l'oggetto non è non è più utilizzato. Al contrario, il programmatore oggetto deve rimuovere l'oggetto inutilizzato. Il programmatore determina se un oggetto può essere rimosso in base a un conteggio dei riferimenti.  
  
 COM viene utilizzato il **IUnknown** metodi, [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379) e [versione](http://msdn.microsoft.com/library/windows/desktop/ms682317)per gestire il conteggio dei riferimenti delle interfacce in un oggetto. Le regole generali per la chiamata di questi metodi sono:  
  
-   Ogni volta che un client riceve un puntatore a interfaccia `AddRef` deve essere chiamato sull'interfaccia.  
  
-   Ogni volta che il client ha terminato di utilizzare il puntatore di interfaccia, è necessario chiamare **versione**.  
  
 In un'implementazione semplice, ogni `AddRef` chiamare incrementi e ogni **versione** chiamare decrementa una variabile del contatore all'interno dell'oggetto. Quando il conteggio torna a zero, l'interfaccia non ha tutti gli utenti ed è disponibile per rimuoverlo dalla memoria.  
  
 Il conteggio dei riferimenti può anche essere implementata in modo che ogni riferimento all'oggetto (non a una singola interfaccia) viene conteggiato. In questo caso, ogni `AddRef` e **versione** chiamare delegati a un'implementazione centrale sull'oggetto, e **versione** libera l'intero oggetto quando il conteggio dei riferimenti arriva a zero.  
  
> [!NOTE]
>  Quando un `CComObject`-oggetto derivato viene costruita utilizzando il **nuova** (operatore), il conteggio dei riferimenti è 0. Pertanto, una chiamata a `AddRef` devono essere apportate dopo la creazione di `CComObject`-oggetto derivato.  
  
## <a name="see-also"></a>Vedere anche  
 [Introduzione a COM](../atl/introduction-to-com.md)   
 [La gestione della durata degli oggetti mediante il conteggio dei riferimenti](http://msdn.microsoft.com/library/windows/desktop/ms687260)

