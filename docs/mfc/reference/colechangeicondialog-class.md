---
title: "COleChangeIconDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleChangeIconDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Change Icon dialog box"
  - "COleChangeIconDialog class"
  - "finestre di dialogo, OLE"
  - "OLE Change Icon dialog box"
  - "OLE (finestre di dialogo), Change Icon"
ms.assetid: 8d6e131b-ddbb-4dff-a432-f239efda8e3d
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COleChangeIconDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato per la finestra di dialogo con icona di modifica OLE.  
  
## Sintassi  
  
```  
class COleChangeIconDialog : public COleDialog  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleChangeIconDialog::COleChangeIconDialog](../Topic/COleChangeIconDialog::COleChangeIconDialog.md)|Costruisce un oggetto `COleChangeIconDialog`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleChangeIconDialog::DoChangeIcon](../Topic/COleChangeIconDialog::DoChangeIcon.md)|Esegue la modifica specificata nella finestra di dialogo.|  
|[COleChangeIconDialog::DoModal](../Topic/COleChangeIconDialog::DoModal.md)|Verrà visualizzata la finestra di dialogo modifica dell'icona OLE 2.|  
|[COleChangeIconDialog::GetIconicMetafile](../Topic/COleChangeIconDialog::GetIconicMetafile.md)|Ottiene un handle a un metafile associate al form in formato dell'icona di questo elemento.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleChangeIconDialog::m\_ci](../Topic/COleChangeIconDialog::m_ci.md)|Una struttura che controlla il comportamento della finestra di dialogo.|  
  
## Note  
 Creare un oggetto di classe `COleChangeIconDialog` quando si desidera chiamare questa finestra di dialogo.  Dopo che un oggetto `COleChangeIconDialog` è stato creato, è possibile utilizzare la struttura [m\_ci](../Topic/COleChangeIconDialog::m_ci.md) per inizializzare i valori o gli stati dei controlli nella finestra di dialogo.  La struttura `m_ci` è di tipo **OLEUICHANGEICON**.  Per ulteriori informazioni sull'utilizzo di questa classe della finestra di dialogo, vedere la funzione membro [DoModal](../Topic/COleChangeIconDialog::DoModal.md).  
  
 Per ulteriori informazioni, vedere la struttura [OLEUICHANGEICON](http://msdn.microsoft.com/library/windows/desktop/ms680098) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per ulteriori informazioni sulle finestre di dialogo OLE\- specifiche, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 [COleDialog](../../mfc/reference/coledialog-class.md)  
  
 `COleChangeIconDialog`  
  
## Requisiti  
 **Header:** afxodlgs.h  
  
## Vedere anche  
 [COleDialog Class](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleDialog Class](../../mfc/reference/coledialog-class.md)