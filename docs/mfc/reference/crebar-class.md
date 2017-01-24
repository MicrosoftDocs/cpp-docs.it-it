---
title: "CReBar Class | Microsoft Docs"
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
  - "CReBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CReBar class"
  - "Internet Explorer 4.0 common controls"
  - "rebar controls, control bar"
ms.assetid: c1ad2720-1d33-4106-8e4e-80aa84f93559
caps.latest.revision: 22
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CReBar Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una barra di controllo che fornisce il layout, la persistenza e le informazioni sullo stato del controllo.  
  
## Sintassi  
  
```  
  
class CReBar : public CControlBar  
  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CReBar::AddBar](../Topic/CReBar::AddBar.md)|Aggiunge una banda a un rebar.|  
|[CReBar::Create](../Topic/CReBar::Create.md)|Crea il controllo Rebar e lo aggiunge all'oggetto `CReBar`.|  
|[CReBar::GetReBarCtrl](../Topic/CReBar::GetReBarCtrl.md)|Consente l'accesso diretto a controlli comuni sottostante.|  
  
## Note  
 Un oggetto del rebar può contenere diverse finestre figlio, in genere altri controlli, quali caselle di modifica, barre degli strumenti e caselle di riepilogo.  Un oggetto del rebar può visualizzare le finestre figlio in una bitmap specificata.  L'applicazione può ridimensionare automaticamente il rebar, o l'utente può ridimensionare manualmente il rebar scegliendo o trascinando la barra gripper.  
  
 ![Esempio di RebarMenu](../../mfc/reference/media/vc4sc61.png "vc4SC61")  
  
## Controllo Rebar  
 Un oggetto del rebar si comporta in modo analogo a un oggetto della barra degli strumenti.  Un rebar utilizza il meccanismo di clic\-e\- trascinamento per ridimensionare le proprie bande.  Un controllo Rebar può contenere uno o più bande, con ogni banda con qualsiasi combinazione di barra gripper, di bitmap, di un'etichetta di testo e di finestra figlio.  Tuttavia, le bande non possono contenere più finestre figlio.  
  
 **CReBar** utilizza la classe [CReBarCtrl](../../mfc/reference/crebarctrl-class.md) per fornire la relativa implementazione.  È possibile accedere al controllo Rebar con [GetReBarCtrl](../Topic/CReBar::GetReBarCtrl.md) per sfruttare le opzioni di personalizzazione del controllo.  Per ulteriori informazioni sul controllo, vedere `CReBarCtrl`.  Per ulteriori informazioni sull'utilizzo del controllo, vedere [Utilizzando CReBarCtrl](../../mfc/using-crebarctrl.md).  
  
> [!CAUTION]
>  Gli oggetti di controllo Rebar e del rebar non supporta l'ancoraggio della barra di controllo MFC.  Se **CRebar::EnableDocking** viene chiamato, l'applicazione asserirà.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CControlBar](../../mfc/reference/ccontrolbar-class.md)  
  
 `CReBar`  
  
## Requisiti  
 **Header:** afxext.h  
  
## Vedere anche  
 [Esempio MFCIE MFC](../../top/visual-cpp-samples.md)   
 [CControlBar Class](../../mfc/reference/ccontrolbar-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)