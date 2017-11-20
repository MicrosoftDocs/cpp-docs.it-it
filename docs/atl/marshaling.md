---
title: Marshalling | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- marshaling, COM interop
- marshaling
- COM interfaces, marshaling
ms.assetid: 40644b0a-1106-4fc8-9dfb-9bee9915d825
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: ec8c85606f0f0ef3de67a61181ead6537fde179e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="marshaling"></a>marshalling
La tecnica del marshalling COM consente le interfacce esposte da un oggetto in un processo da utilizzare in un altro processo. Effettuare il marshalling, COM fornisce il codice (o utilizza codice fornito dall'implementatore interfaccia) per comprimere i parametri del metodo in un formato che può essere spostato tra processi (nonché attraverso la rete per i processi in esecuzione su altri computer) e decomprimere i parametri a altra estremità. Analogamente, COM è necessario eseguire questi stessi passaggi in restituito dalla chiamata.  
  
> [!NOTE]
>  Effettuare il marshalling in genere quando non è necessario un'interfaccia fornita da un oggetto utilizzata nello stesso processo dell'oggetto. Tuttavia, risultare necessario tra thread.  
  
## <a name="see-also"></a>Vedere anche  
 [Introduzione a COM](../atl/introduction-to-com.md)   
 [Dettagli sul marshalling](http://msdn.microsoft.com/library/windows/desktop/ms692621)

