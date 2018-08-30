---
title: Marshalling | Microsoft Docs
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
ms.openlocfilehash: ac4bb35d29d74f0e66337dc6c3999df66a63d254
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43212691"
---
# <a name="marshaling"></a>Marshalling
La tecnica di COM del marshalling consente le interfacce esposte da un oggetto in un unico processo da usare in un altro processo. Effettuare il marshalling, COM fornisce il codice (o Usa il codice forniti dall'implementatore dell'interfaccia) per comprimere i parametri del metodo in un formato che può essere spostato tra processi (oltre che, attraverso la rete per i processi in esecuzione in altri computer) e la decompressione dei parametri a altra estremità. Analogamente, COM è necessario eseguire questi stessi passaggi del ritorno dalla chiamata.  
  
> [!NOTE]
>  Marshalling in genere non è necessario quando un'interfaccia fornita da un oggetto viene usata nello stesso processo dell'oggetto. Tuttavia, il marshalling potrebbe essere necessario tra thread.  
  
## <a name="see-also"></a>Vedere anche  
 [Introduzione a COM](../atl/introduction-to-com.md)   
 [Marshalling dei dettagli](/windows/desktop/com/marshaling-details)

