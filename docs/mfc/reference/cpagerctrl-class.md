---
title: "CPagerCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPagerCtrl class"
ms.assetid: 65ac58dd-4f5e-4b7e-b15c-e0d435a7e884
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 28
---
# CPagerCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CPagerCtrl` esegue il wrapping del controllo pager di Windows, che può scorrere nella visualizzazione contenuta una finestra che non sono idonei per la finestra contenitore.  
  
## Sintassi  
  
```  
class CPagerCtrl : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPagerCtrl::CPagerCtrl](../Topic/CPagerCtrl::CPagerCtrl.md)|Costruisce un oggetto `CPagerCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPagerCtrl::Create](../Topic/CPagerCtrl::Create.md)|Crea un controllo pager con gli stili specificati e lo aggiunge all'oggetto corrente `CPagerCtrl`.|  
|[CPagerCtrl::CreateEx](../Topic/CPagerCtrl::CreateEx.md)|Crea un controllo pager con gli stili estesi specificati e lo aggiunge all'oggetto corrente `CPagerCtrl`.|  
|[CPagerCtrl::ForwardMouse](../Topic/CPagerCtrl::ForwardMouse.md)|Abilita o disabilita i messaggi di inoltro [WM\_MOUSEMOVE](http://msdn.microsoft.com/library/windows/desktop/ms645616) la finestra contenuta nel controllo pager corrente.|  
|[CPagerCtrl::GetBkColor](../Topic/CPagerCtrl::GetBkColor.md)|Recupera il colore di sfondo del controllo pager corrente.|  
|[CPagerCtrl::GetBorder](../Topic/CPagerCtrl::GetBorder.md)|Recupera la dimensione del bordo del controllo pager corrente.|  
|[CPagerCtrl::GetButtonSize](../Topic/CPagerCtrl::GetButtonSize.md)|Recupera le dimensioni del pulsante del controllo pager corrente.|  
|[CPagerCtrl::GetButtonState](../Topic/CPagerCtrl::GetButtonState.md)|Recupera lo stato del pulsante specificato nel controllo pager corrente.|  
|[CPagerCtrl::GetDropTarget](../Topic/CPagerCtrl::GetDropTarget.md)|Recupera l'interfaccia [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679) per il controllo pager corrente.|  
|[CPagerCtrl::GetScrollPos](../Topic/CPagerCtrl::GetScrollPos.md)|Recupera il percorso di scorrimento del controllo pager corrente.|  
|[CPagerCtrl::IsButtonDepressed](../Topic/CPagerCtrl::IsButtonDepressed.md)|Indica se il pulsante specificato del controllo pager corrente è nello stato `pressed`.|  
|[CPagerCtrl::IsButtonGrayed](../Topic/CPagerCtrl::IsButtonGrayed.md)|Indica se il pulsante specificato del controllo pager corrente è nello stato `grayed`.|  
|[CPagerCtrl::IsButtonHot](../Topic/CPagerCtrl::IsButtonHot.md)|Indica se il pulsante specificato del controllo pager corrente è nello stato `hot`.|  
|[CPagerCtrl::IsButtonInvisible](../Topic/CPagerCtrl::IsButtonInvisible.md)|Indica se il pulsante specificato del controllo pager corrente è nello stato `invisible`.|  
|[CPagerCtrl::IsButtonNormal](../Topic/CPagerCtrl::IsButtonNormal.md)|Indica se il pulsante specificato del controllo pager corrente è nello stato `normal`.|  
|[CPagerCtrl::RecalcSize](../Topic/CPagerCtrl::RecalcSize.md)|Determina il controllo pager corrente a ricalcolare la dimensione della finestra contenuta.|  
|[CPagerCtrl::SetBkColor](../Topic/CPagerCtrl::SetBkColor.md)|Imposta il colore di sfondo del controllo pager corrente.|  
|[CPagerCtrl::SetBorder](../Topic/CPagerCtrl::SetBorder.md)|Imposta la dimensione del bordo del controllo pager corrente.|  
|[CPagerCtrl::SetButtonSize](../Topic/CPagerCtrl::SetButtonSize.md)|Imposta la dimensione del pulsante del controllo pager corrente.|  
|[CPagerCtrl::SetChild](../Topic/CPagerCtrl::SetChild.md)|Imposta la finestra contenuto per il controllo pager corrente.|  
|[CPagerCtrl::SetScrollPos](../Topic/CPagerCtrl::SetScrollPos.md)|Imposta la posizione di scorrimento del controllo pager corrente.|  
  
## Note  
 Un controllo pager è una finestra contenente un'altra finestra da lineare e maggiore della finestra contenitore e consente di scorrere la finestra contenuta nella visualizzazione.  Il controllo pager sono visualizzate due pulsanti di scorrimento che vengono automaticamente eliminate quando la finestra che si scorre nella misura più lontana e utilizzati più volte in caso contrario.  È possibile creare un controllo pager che scorre orizzontalmente o verticalmente.  
  
 Ad esempio, se l'applicazione dispone di una barra degli strumenti non è abbastanza lunga visualizzare tutti i relativi elementi, è possibile assegnare la barra degli strumenti a un controllo pager e gli utenti potranno scorrere la barra degli strumenti a sinistra o il diritto di accedere a tutti gli elementi.  La versione 4,0 \(Microsoft Internet Explorer versione 4,71 di commctrl.dll\) viene illustrato il controllo pager.  
  
 La classe `CPagerCtrl` è derivata dalla classe [CWnd](../../mfc/reference/cwnd-class.md).  Per ulteriori informazioni e una descrizione di un controllo pager, vedere [Controllo pager](http://msdn.microsoft.com/library/windows/desktop/bb760855).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CPagerCtrl`  
  
## Requisiti  
 **intestazione:** afxcmn.h  
  
## Vedere anche  
 [CPagerCtrl Class](../../mfc/reference/cpagerctrl-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Controllo pager](http://msdn.microsoft.com/library/windows/desktop/bb760855)