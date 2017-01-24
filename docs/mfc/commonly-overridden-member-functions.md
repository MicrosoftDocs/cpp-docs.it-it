---
title: "Funzioni membro comunemente sottoposte a override | Microsoft Docs"
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
  - "CDialog (classe), membri"
  - "classi della finestra di dialogo, funzioni membro comunemente sottoposte a override"
  - "MFC (finestre di dialogo), override di funzioni membro"
  - "OnCancel (funzione)"
  - "OnInitDialog (funzione)"
  - "OnOK (funzione)"
  - "override, membri di classe di finestra di dialogo"
ms.assetid: 78eb566c-e361-4c86-8db5-c7e2791b249a
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzioni membro comunemente sottoposte a override
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella tabella seguente sono elencate le funzioni membro più probabili per eseguire l'override del `CDialog`\- classe derivata.  
  
### Funzioni membro comunemente sottoposte di classe CDialog  
  
|Funzione membro|Messaggio risponde a|Scopo di override|  
|---------------------|--------------------------|-----------------------|  
|`OnInitDialog`|**WM\_INITDIALOG**|Inizializzare i comandi della finestra di dialogo.|  
|`OnOK`|**BN\_CLICKED** per il pulsante **IDOK**|Rispondere quando l'utente fa clic sul pulsante OK.|  
|`OnCancel`|**BN\_CLICKED** per il pulsante **IDCANCEL**|Rispondere quando l'utente fa clic sul pulsante Annulla.|  
  
 `OnInitDialog`, `OnOK` e `OnCancel` sono funzioni virtuali.  Per eseguire eseguirne l'override, si dichiara una funzione di override nella classe derivata la finestra di dialogo utilizzando [Finestra Proprietà](../Topic/Properties%20Window.md).  
  
 `OnInitDialog` viene chiamato immediatamente prima della finestra di dialogo visualizza.  È necessario chiamare il gestore predefinito di `OnInitDialog` dagli override in genere hanno come prima azione nel gestore.  Per impostazione predefinita, `OnInitDialog` restituisce **TRUE** per indicare che lo stato attivo deve essere impostato sul primo controllo nella finestra di dialogo.  
  
 `OnOK` in genere a override per non modale ma non le finestre di dialogo modali.  Se si sottopone questo gestore per una finestra di dialogo modale, chiamare la versione della classe base dagli override e accertarsi che `EndDialog` viene chiamato a o dalla chiamata `EndDialog` manualmente.  
  
 `OnCancel` in genere a override per le finestre di dialogo non modale.  
  
 Per ulteriori informazioni su queste funzioni membro, vedere la classe [CDialog](../mfc/reference/cdialog-class.md)*in riferimenti alla libreria MFC* e la discussione su [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md).  
  
## Vedere anche  
 [Finestre di dialogo](../mfc/dialog-boxes.md)   
 [Funzioni membro comunemente aggiunte](../mfc/commonly-added-member-functions.md)