---
title: Marshalling | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- marshaling, COM interop
- marshaling
- COM interfaces, marshaling
ms.assetid: 40644b0a-1106-4fc8-9dfb-9bee9915d825
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d2b8b82d5369aa536dab638efa379089325d10b1
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32360100"
---
# <a name="marshaling"></a>marshalling
La tecnica del marshalling COM consente le interfacce esposte da un oggetto in un processo da utilizzare in un altro processo. Effettuare il marshalling, COM fornisce il codice (o utilizza codice fornito dall'implementatore interfaccia) per comprimere i parametri del metodo in un formato che può essere spostato tra processi (nonché attraverso la rete per i processi in esecuzione su altri computer) e decomprimere i parametri a altra estremità. Analogamente, COM è necessario eseguire questi stessi passaggi in restituito dalla chiamata.  
  
> [!NOTE]
>  Effettuare il marshalling in genere quando non è necessario un'interfaccia fornita da un oggetto utilizzata nello stesso processo dell'oggetto. Tuttavia, risultare necessario tra thread.  
  
## <a name="see-also"></a>Vedere anche  
 [Introduzione a COM](../atl/introduction-to-com.md)   
 [Marshalling dei dettagli](http://msdn.microsoft.com/library/windows/desktop/ms692621)

