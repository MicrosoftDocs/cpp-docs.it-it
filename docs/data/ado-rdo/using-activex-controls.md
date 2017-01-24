---
title: "Utilizzo dei controlli ActiveX | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX (controlli) [C++], informazioni"
  - "controlli [C++], ActiveX"
ms.assetid: 33442173-205d-492f-82c8-9a8105358ec6
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo dei controlli ActiveX
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Negli argomenti di questa sezione è riportata una panoramica sull'utilizzo dei controlli ActiveX.  
  
 Un controllo ActiveX è un componente COM che supporta interfacce standard relative a persistenza, punti di connessione e hosting.  Queste interfacce standard definiscono un protocollo tramite il quale un controllo può essere inserito in un contenitore, è in grado di scambiare messaggi e gestire eventi.  
  
 Analogamente ai server COM, i controlli ActiveX presentano quanto segue:  
  
|Termine|Descrizione|  
|-------------|-----------------|  
|Proprietà|I controlli dispongono di variabili membro che rappresentano lo stato interno e vengono implementati come funzioni di accesso **Get** e `Set`.  Per ciascun metodo della funzione di accesso viene generata una funzione **Get** con un tag propget nel file IDL  e una funzione `Set` con un tag IDL propput o propputref.<br /><br /> Utilizzare le [classi wrapper](../../data/ado-rdo/wrapper-classes.md) o il [Visualizzatore oggetti OLE\/COM](../../data/ado-rdo/using-the-ole-com-object-viewer.md) per determinare le modalità di definizione delle funzioni di accesso.|  
|Metodi|Il comportamento di un controllo è definito dai relativi metodi pubblici.  Le classi wrapper consentono di accedere ai metodi di un controllo.<br /><br /> Se non si utilizzano classi wrapper \(l'impostazione predefinita\), sarà possibile accedere ai metodi di un controllo ottenendo un puntatore a un'interfaccia.<br /><br /> Un esempio di metodo pubblico è il metodo **Refresh** del controllo dati ADO, che aggiorna il rowset recuperato.|  
|Eventi|Un controllo può generare un evento per comunicare all'host che ha avuto luogo un'azione.  Un esempio è costituito dall'evento `OnClick` del controllo Button.  Quando si fa clic su un pulsante, viene generato un evento `OnClick`.  Se per tale evento l'host del controllo dispone di un gestore, questo verrà eseguito.|  
|Libreria dei tipi|Una libreria dei tipi comunica a un contenitore di controlli le proprietà, i metodi e gli eventi supportati da un controllo.  Le librerie dei tipi possono essere file separati con estensione TLB oppure essere presenti internamente al controllo.<br /><br /> Contengono inoltre le informazioni relative alla coclasse del controllo.  Una coclasse è una classe COM identificata da un GUID e  contiene una o più interfacce definite dal controllo.<br /><br /> Per esaminare le librerie dei tipi, utilizzare il [Visualizzatore oggetti OLE\/COM](../../data/ado-rdo/using-the-ole-com-object-viewer.md).|  
  
 Negli argomenti seguenti viene illustrato l'utilizzo di un controllo ActiveX.  
  
-   [Inserimento di un controllo in un'applicazione Visual C\+\+](../../data/ado-rdo/inserting-the-control-into-a-visual-cpp-application.md)  
  
-   [Classi wrapper](../../data/ado-rdo/wrapper-classes.md)  
  
-   [Creazione di connessioni a database](../../data/ado-rdo/creating-database-connections.md)  
  
-   [Impostazione delle proprietà di un controllo in fase di progettazione](../../data/ado-rdo/setting-control-properties-at-design-time.md)  
  
-   [Impostazione dei gestori eventi nei controlli ActiveX](../../data/ado-rdo/setting-event-handlers-on-activex-controls.md)  
  
-   [Modifica del comportamento di un controllo in fase di esecuzione](../../data/ado-rdo/modifying-a-control-s-run-time-behavior.md)  
  
-   [Ridistribuzione dei controlli](../../data/ado-rdo/redistributing-controls.md)  
  
## Vedere anche  
 [Controlli associati a dati \(ADO e RDO\)](../../data/ado-rdo/data-bound-controls-ado-and-rdo.md)