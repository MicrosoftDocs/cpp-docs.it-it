---
title: "ICommandUI Interface | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ICommandUI"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ICommandUI interface"
ms.assetid: 134afe8d-dcdf-47ca-857a-a166a6b665dd
caps.latest.revision: 24
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ICommandUI Interface
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Gestisce i controlli.  
  
## Sintassi  
  
```  
interface class ICommandUI  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[ICommandUI::Check](../Topic/ICommandUI::Check.md)|Imposta l'elemento dell'interfaccia utente per questo comando nello stato di selezione appropriato.|  
|[ICommandUI::ContinueRouting](../Topic/ICommandUI::ContinueRouting.md)|Indica al meccanismo di routing dei comandi di continuare a utilizzare il messaggio corrente verso la catena dei gestori.|  
|[ICommandUI::Enabled](../Topic/ICommandUI::Enabled.md)|Abilita o disabilita l'elemento dell'interfaccia utente per questo comando.|  
|[ICommandUI::ID](../Topic/ICommandUI::ID.md)|Ottiene l'id dell'oggetto interfaccia utente rappresentato dall'oggetto `ICommandUI`.|  
|[ICommandUI::Index](../Topic/ICommandUI::Index.md)|Ottiene l'indice dell'oggetto dell'interfaccia utente rappresentato dall'oggetto `ICommandUI`.|  
|[ICommandUI::Radio](../Topic/ICommandUI::Radio.md)|Imposta l'elemento dell'interfaccia utente per questo comando nello stato di selezione appropriato.|  
|[ICommandUI::Text](../Topic/ICommandUI::Text.md)|Imposta il testo dell'elemento dell'interfaccia utente per questo comando.|  
  
## Note  
 Questa interfaccia fornisce metodi e proprietà che gestiscono i controlli.  `ICommandUI` è simile a [CCmdUI Class](../../mfc/reference/ccmdui-class.md), ma `ICommandUI` viene utilizzato per le applicazioni MFC che interagiscono con i componenti.NET.  
  
 `ICommandUI` viene utilizzato in un gestore in [ICommandTarget](../../mfc/reference/icommandtarget-interface.md)classe derivata `ON_UPDATE_COMMAND_UI`.  Quando un utente di un'applicazione attiva \(seleziona o scegliendo un menu, ogni voce di menu viene visualizzato come abilitata o disabilitata.  La destinazione di ciascun comando di menu fornisce queste informazioni implementazione di un gestore `ON_UPDATE_COMMAND_UI`.  Per ognuno degli oggetti dell'interfaccia utente del comando nell'applicazione, utilizzare la Finestra Proprietà per creare un prototipo di funzione e la voce della mappa messaggi per ogni gestore.  
  
 Per ulteriori informazioni su come interfaccia `ICommandUI` è il comando utilizzato il routing, vedere [Procedura: aggiungere il routing dei comandi al controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md).  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [Utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
 Per ulteriori informazioni su come i controlli di interfaccia utente vengono gestiti in MFC, vedere [CCmdUI Class](../../mfc/reference/ccmdui-class.md).  
  
## Requisiti  
 **intestazione:** afxwinforms.h \(definito nell'assembly atlmfc \\ spostamento di liberare \\ mfcmifc80.dll\)  
  
## Vedere anche  
 [CCmdUI Class](../../mfc/reference/ccmdui-class.md)