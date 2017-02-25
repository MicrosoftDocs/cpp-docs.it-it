---
title: "COleInsertDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleInsertDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleInsertDialog class"
  - "finestre di dialogo, OLE"
  - "Insert Object dialog box"
  - "OLE Insert Object dialog box"
ms.assetid: a9ec610b-abde-431e-bd01-c40159a66dbb
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# COleInsertDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato per la finestra di dialogo dell'oggetto di inserimento di OLE.  
  
## Sintassi  
  
```  
class COleInsertDialog : public COleDialog  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleInsertDialog::COleInsertDialog](../Topic/COleInsertDialog::COleInsertDialog.md)|Costruisce un oggetto `COleInsertDialog`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleInsertDialog::CreateItem](../Topic/COleInsertDialog::CreateItem.md)|Crea l'elemento selezionato nella finestra di dialogo.|  
|[COleInsertDialog::DoModal](../Topic/COleInsertDialog::DoModal.md)|Visualizzare la finestra di dialogo dell'oggetto di inserimento di OLE.|  
|[COleInsertDialog::GetClassID](../Topic/COleInsertDialog::GetClassID.md)|Ottiene **CLSID** associato all'elemento selezionato.|  
|[COleInsertDialog::GetDrawAspect](../Topic/COleInsertDialog::GetDrawAspect.md)|Indica se visualizzare l'elemento come icona.|  
|[COleInsertDialog::GetIconicMetafile](../Topic/COleInsertDialog::GetIconicMetafile.md)|Ottiene un handle a un metafile associate al form in formato dell'icona di questo elemento.|  
|[COleInsertDialog::GetPathName](../Topic/COleInsertDialog::GetPathName.md)|Ottiene il percorso completo del file specificato nella finestra di dialogo.|  
|[COleInsertDialog::GetSelectionType](../Topic/COleInsertDialog::GetSelectionType.md)|Ottiene il tipo di oggetto selezionato.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleInsertDialog::m\_io](../Topic/COleInsertDialog::m_io.md)|Una struttura di tipo **OLEUIINSERTOBJECT** che controlla il comportamento della finestra di dialogo.|  
  
## Note  
 Creare un oggetto di classe `COleInsertDialog` quando si desidera chiamare questa finestra di dialogo.  Dopo che un oggetto `COleInsertDialog` è stato creato, è possibile utilizzare la struttura [m\_io](../Topic/COleInsertDialog::m_io.md) per inizializzare i valori o gli stati dei controlli nella finestra di dialogo.  La struttura `m_io` è di tipo **OLEUIINSERTOBJECT**.  Per ulteriori informazioni sull'utilizzo di questa classe della finestra di dialogo, vedere la funzione membro [DoModal](../Topic/COleInsertDialog::DoModal.md).  
  
> [!NOTE]
>  Il codice generato dalla creazione guidata del contenitore dell'applicazione utilizza questa classe.  
  
 Per ulteriori informazioni, vedere la struttura [OLEUIINSERTOBJECT](http://msdn.microsoft.com/library/windows/desktop/ms691316) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per ulteriori informazioni sulle finestre di dialogo OLE\- specifiche, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 [COleDialog](../../mfc/reference/coledialog-class.md)  
  
 `COleInsertDialog`  
  
## Requisiti  
 **Header:** afxodlgs.h  
  
## Vedere anche  
 [Esempio OCLIENT MFC](../../top/visual-cpp-samples.md)   
 [COleDialog Class](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleDialog Class](../../mfc/reference/coledialog-class.md)