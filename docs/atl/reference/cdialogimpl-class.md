---
title: "CDialogImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDialogImpl"
  - "ATL.CDialogImpl"
  - "ATL::CDialogImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDialogImpl class"
  - "finestre di dialogo, ATL"
ms.assetid: d430bc7b-8a28-4ad3-9507-277bdd2c2c2e
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 28
---
# CDialogImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per creare un oggetto o una finestra di dialogo non modale.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template <  
class T,  
class TBase= CWindow   
>  
class ATL_NO_VTABLE CDialogImpl :  
public CDialogImplBaseT< TBase>  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `CDialogImpl`.  
  
 *TBase*  
 La classe base della nuova classe.  La classe base predefinita è [CWindow](../../atl/reference/cwindow-class.md).  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[Create](../Topic/CDialogImpl::Create.md)|Crea una finestra di dialogo non modale.|  
|[DestroyWindow](../Topic/CDialogImpl::DestroyWindow.md)|Elimina una finestra di dialogo non modale.|  
|[DoModal](../Topic/CDialogImpl::DoModal.md)|Crea una finestra di dialogo modale.|  
|[EndDialog](../Topic/CDialogImpl::EndDialog.md)|Elimina una finestra di dialogo modale.|  
  
### Metodi di CDialogImplBaseT  
  
|||  
|-|-|  
|[GetDialogProc](../Topic/CDialogImpl::GetDialogProc.md)|Restituisce la routine della finestra di dialogo corrente.|  
|[MapDialogRect](../Topic/CDialogImpl::MapDialogRect.md)|Esegue il mapping delle unità della finestra di dialogo del rettangolo specificato per schermare unità \(pixel.|  
|[OnFinalMessage](../Topic/CDialogImpl::OnFinalMessage.md)|Chiamata dopo la ricezione del messaggio ultimo, in genere `WM_NCDESTROY`.|  
  
### Funzioni statiche  
  
|||  
|-|-|  
|[DialogProc](../Topic/CDialogImpl::DialogProc.md)|Elabora i messaggi inviati alla finestra di dialogo.|  
|[StartDialogProc](../Topic/CDialogImpl::StartDialogProc.md)|Chiamato quando il primo messaggio viene ricevuto per elaborare i messaggi inviati alla finestra di dialogo.|  
  
## Note  
 Con `CDialogImpl` è possibile creare un oggetto o una finestra di dialogo non modale.  `CDialogImpl` fornisce la routine della finestra di dialogo, contenente la mappa messaggi predefinita per indirizzare i messaggi ai gestori appropriati.  
  
 Il distruttore **~CWindowImplRoot** della classe base assicura che la finestra sia stata rimossa prima di eliminare l'oggetto.  
  
 `CDialogImpl` deriva da **CDialogImplBaseT**, che a sua volta deriva da **CWindowImplRoot**.  
  
> [!NOTE]
>  La classe deve definire un membro **IDD** valore che specifica l'id di risorsa modello di finestra di dialogo  Ad esempio, la procedura guidata progetto ATL aggiunge automaticamente la riga seguente alla classe:  
  
 [!code-cpp[NVC_ATL_Windowing#41](../../atl/codesnippet/CPP/cdialogimpl-class_1.h)]  
  
 dove `MyDlg` è **Short name** inserito nella pagina **nomi** della procedura guidata.  
  
|Per ulteriori informazioni su|Vedere|  
|-----------------------------------|------------|  
|Creazione di controlli|[L'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md)|  
|Utilizzo delle finestre di dialogo in ATL|[Classi di finestre ATL](../../atl/atl-window-classes.md)|  
|Creazione guidata progetto ATL|[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)|  
|Finestre di dialogo|[finestre di dialogo](http://msdn.microsoft.com/library/windows/desktop/ms632588) e argomenti successivi in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]|  
  
## Requisiti  
 **Header:** atlwin.h  
  
## Vedere anche  
 [BEGIN\_MSG\_MAP](../Topic/BEGIN_MSG_MAP.md)   
 [Class Overview](../../atl/atl-class-overview.md)