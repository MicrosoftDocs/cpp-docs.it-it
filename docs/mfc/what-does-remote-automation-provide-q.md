---
title: Cosa fornisce l'automazione remota? | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: Remote Automation, DCOM
ms.assetid: 269ad218-e164-40ef-9b87-25fcc8ba21de
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a4a82b26a1e6c208a584dfd19ebfd4530b4bdf76
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="what-does-remote-automation-provide"></a>Cosa fornisce l'automazione remota?
L'automazione remota consente ai programmi di richiamare le implementazioni `IDispatch` su un computer da un altro computer. Supporta inoltre altre interfacce richieste da automazione, in particolare **IEnumVARIANT** per il supporto della raccolta. Non fornisce la possibilità di distribuire qualsiasi altra interfaccia COM (eccetto **IUnknown**, naturalmente) e, come l'automazione normale, contiene il supporto del marshalling solo per i tipi di dati supportati da automazione.  
  
 Questo set di funzionalità consente a un programma di accedere ai metodi e alle proprietà, incluse quelle che restituiscono raccolte o ulteriori oggetti di automazione, di un oggetto in esecuzione su un nodo di rete accessibile. Se nel computer client è in esecuzione il software adatto, è possibile che il server richiami il client, ancora utilizzando le funzionalità di Automazione (ciò vale solo per i client a 32 bit e a 64 bit ed è concettualmente simile agli eventi, sebbene non utilizzi lo stesso meccanismo).  
  
 Affinché un'applicazione possa essere utilizzata come server di automazione remota, deve essere implementata come un eseguibile, ovvero come server locale anziché come server di tipo in-process.  
  
## <a name="see-also"></a>Vedere anche  
 [In cui di utilizzo dell'automazione remota](where-does-remote-automation-fit-in-q.md)   
 [Cronologia di DCOM](../mfc/history-of-dcom.md)
