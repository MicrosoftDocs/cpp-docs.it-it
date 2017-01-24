---
title: "CWaitCursor Class | Microsoft Docs"
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
  - "CWaitCursor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cursori, wait cursor"
  - "CWaitCursor class"
  - "wait cursors"
ms.assetid: 5dfae2ff-d7b6-4383-b0ad-91e0868c67b3
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CWaitCursor Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce una modalità di una riga mostrare un cursore di attesa, in genere visualizzata come una clessidra, mentre si sta eseguendo un'operazione lunga.  
  
## Sintassi  
  
```  
class CWaitCursor  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWaitCursor::CWaitCursor](../Topic/CWaitCursor::CWaitCursor.md)|Costruisce un oggetto `CWaitCursor` e visualizzare il cursore di attesa.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWaitCursor::Restore](../Topic/CWaitCursor::Restore.md)|Ripristina il cursore di attesa dopo che è stato modificato.|  
  
## Note  
 `CWaitCursor` non dispone di una classe base.  
  
 Le procedure di programmazione ottimali di Windows richiedono visualizzato un cursore di attesa ogni volta che si esegue un'operazione che richiede un tempo significativa.  
  
 Per visualizzare un cursore di attesa, definire una variabile `CWaitCursor` prima del codice che esegue un'operazione di lunga durata.  Il costruttore di un oggetto determina automaticamente il cursore di attesa a essere visualizzato.  
  
 Quando l'oggetto area di validità \(alla fine del blocco in cui l'oggetto `CWaitCursor` viene dichiarato\), il relativo distruttore imposta il cursore nel punto precedente.  Ovvero l'oggetto esegue la pulitura necessarie automaticamente.  
  
> [!NOTE]
>  A causa dei costruttori e i distruttori, oggetti `CWaitCursor` vengono dichiarati sempre come variabili locali e di non vengono dichiarati mai come variabili globali e non sono hanno allocato con **new**.  
  
 Se si esegue un'operazione che potrebbe causare il cursore a essere modificato, come visualizzare una finestra di messaggio o la finestra di dialogo, chiamare la funzione membro [Ripristina](../Topic/CWaitCursor::Restore.md) per ripristinare il cursore di attesa.  È possibile chiamare **Ripristina** anche quando un cursore di attesa attualmente visualizzate.  
  
 Un altro modo per visualizzare un cursore di attesa è utilizzare la combinazione [CCmdTarget::BeginWaitCursor](../Topic/CCmdTarget::BeginWaitCursor.md), [CCmdTarget::EndWaitCursor](../Topic/CCmdTarget::EndWaitCursor.md)ed eventualmente [CCmdTarget::RestoreWaitCursor](../Topic/CCmdTarget::RestoreWaitCursor.md).  Tuttavia, `CWaitCursor` è più facile da utilizzare in quanto non è necessario impostare il punto di inserimento in corrispondenza precedente al termine di un'operazione di lunga durata.  
  
> [!NOTE]
>  Set e ripristinare MFC il cursore utilizzando la funzione virtuale [CWinApp::DoWaitCursor](../Topic/CWinApp::DoWaitCursor.md).  È possibile eseguire l'override di questa funzione per fornire il comportamento personalizzato.  
  
## Gerarchia di ereditarietà  
 `CWaitCursor`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Esempio  
 [!code-cpp[NVC_MFCWindowing#62](../../mfc/reference/codesnippet/CPP/cwaitcursor-class_1.cpp)]  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CCmdTarget::BeginWaitCursor](../Topic/CCmdTarget::BeginWaitCursor.md)   
 [CCmdTarget::EndWaitCursor](../Topic/CCmdTarget::EndWaitCursor.md)   
 [CCmdTarget::RestoreWaitCursor](../Topic/CCmdTarget::RestoreWaitCursor.md)   
 [CWinApp::DoWaitCursor](../Topic/CWinApp::DoWaitCursor.md)   
 [Ricerca di categorie: Modificare il cursore del mouse in un'applicazione MFC?](http://go.microsoft.com/fwlink/?LinkID=128044)