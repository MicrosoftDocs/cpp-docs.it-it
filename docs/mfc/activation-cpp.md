---
title: Attivazione (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- OLE server applications [MFC], activation
- OLE items [MFC], visual editing
- activation [MFC]
- OLE [MFC], in-place activation
- OLE [MFC], activation
- in-place activation, embedded and linked items
- activating objects
- visual editing, activation
- visual editing
- documents [MFC], OLE
- embedded objects [MFC]
- OLE [MFC], editing
- in-place activation
- activation [MFC], embedded OLE items
- OLE activation [MFC]
ms.assetid: ed8357d9-e487-4aaa-aa6b-2edc4de25dfa
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 34b6d6e9313092a8f9a0a11967c7c6a62ed15e15
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33334483"
---
# <a name="activation-c"></a>Attivazione (C++)
In questo articolo viene illustrato il ruolo dell'attivazione nella modifica visiva degli elementi OLE. Dopo che un utente, un elemento OLE è incorporato in un documento contenitore, potrebbe essere necessario da utilizzare. A tale scopo, l'utente fa doppio clic sull'elemento che attiva tale elemento. Modifica di attività più frequenti per l'attivazione. Molti elementi OLE correnti, quando è attivata per la modifica, determinano i menu e barre degli strumenti nella finestra cornice corrente per riflettere quelli che appartengono all'applicazione server che ha creato l'elemento. Questo comportamento, noto come in attivazione sul posto, consente all'utente di modificare qualsiasi elemento incorporato in un documento composito senza uscire dalla finestra del documento contenitore.  
  
 È inoltre possibile modificare gli elementi OLE incorporati in una finestra separata. Questo si verifica se l'applicazione del contenitore o del server non supporta l'attivazione sul posto. In questo caso, quando l'utente fa doppio clic su un elemento incorporato, l'applicazione server viene avviato in una finestra separata e l'elemento incorporato viene visualizzato come un documento. L'utente modifica l'elemento in questa finestra. Quando la modifica è stata completata, l'utente chiude l'applicazione server e restituisce all'applicazione contenitore.  
  
 In alternativa, l'utente può scegliere "Modifica aperta" con il  **\<oggetto > aprire** comando il **modifica** menu. Si apre l'oggetto in una finestra separata.  
  
> [!NOTE]
>  La modifica di elementi incorporati in una finestra separata, è stato il comportamento standard nella versione 1 di OLE e alcune applicazioni OLE possono supportare solo questo stile di modifica.  
  
 Attivazione sul posto Alza di livello un approccio incentrato sul documento per la creazione di documenti. L'utente può considerare un documento composito come una singola entità, è in uso senza dover passare tra le applicazioni. Tuttavia, l'attivazione sul posto viene utilizzato solo per gli elementi incorporati, non per gli elementi collegati: che devono essere modificati in una finestra separata. In questo modo un elemento collegato verrà effettivamente memorizzato in un luogo diverso. La modifica di un elemento collegato viene eseguita all'interno del contesto effettivo dei dati, vale a dire, in cui i dati vengono archiviati. Modifica di un elemento collegato in una finestra separata ricorda all'utente a cui appartengono i dati a un altro documento.  
  
 MFC non supporta l'attivazione sul posto nidificata. Se si compila un'applicazione contenitore/server e che contenitore/server è incorporato in un altro contenitore e attivato sul posto, è possibile sul posto è possibile attivare gli oggetti incorporati all'interno.  
  
 Cosa accade a un elemento incorporato quando l'utente fa doppio clic su dipende dai verbi definiti per l'elemento. Per informazioni, vedere [attivazione: verbi](../mfc/activation-verbs.md).  
  
## <a name="see-also"></a>Vedere anche  
 [OLE](../mfc/ole-in-mfc.md)   
 [Contenitori](../mfc/containers.md)   
 [Server](../mfc/servers.md)

