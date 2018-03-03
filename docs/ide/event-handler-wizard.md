---
title: Creazione guidata gestore eventi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.codewiz.eventhandler.overview
dev_langs:
- C++
helpviewer_keywords:
- Event Handler Wizard [C++]
ms.assetid: af8e1835-94b1-4d9a-b353-c519e011d3a1
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3ccb80add8a98b9251a7ccbb5c85bf98b610a22e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="event-handler-wizard"></a>Creazione guidata gestore eventi
Questa procedura guidata aggiunge un gestore eventi per un controllo di finestra di dialogo per la classe di propria scelta. Se si aggiunge un gestore eventi dal [finestra proprietà](/visualstudio/ide/reference/properties-window), è possibile aggiungerlo solo la classe che implementa la finestra di dialogo. Vedere [aggiunta di gestori eventi per i controlli della finestra di dialogo](../windows/adding-event-handlers-for-dialog-box-controls.md) per ulteriori informazioni.  
  
 **Nome del comando**  
 Identifica il controllo selezionato, per il quale viene aggiunto il gestore dell'evento. Questa casella è disponibile.  
  
 **Tipo di messaggio**  
 Visualizza l'elenco dei possibili gestori messaggi correnti per il controllo selezionato.  
  
 **Nome del gestore (funzione)**  
 Visualizza il nome della funzione che viene aggiunto per gestire l'evento. Per impostazione predefinita, il nome è basato sul tipo di messaggio e il comando, preceduto da "On". Ad esempio, per il pulsante chiamato `IDC_BUTTON1`, il tipo di messaggio `BN_CLICKED` Visualizza il nome del gestore `OnBnClickedButton1`.  
  
 **Classe elenco**  
 Visualizza le classi disponibili a cui è possibile aggiungere un gestore eventi. La classe per la finestra di dialogo selezionato viene visualizzata in rosso.  
  
 **Descrizione del gestore**  
 Fornisce una descrizione per l'elemento selezionato nel **tipo di messaggio** casella. Questa casella è disponibile.  
  
 **Aggiungere e modificare**  
 Aggiunge il gestore di messaggi per la classe o oggetto selezionato e quindi apre l'editor di testo per la nuova funzione, è possibile aggiungere il codice del gestore di controllo notifica.  
  
 **Modificare il codice**  
 Apre l'editor di testo per la funzione esistente selezionata in modo è possibile aggiungere o modificare il codice del gestore di notifica del controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di un gestore di evento](../ide/adding-an-event-handler-visual-cpp.md)