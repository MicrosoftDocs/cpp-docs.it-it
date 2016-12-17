---
title: "CAxDialogImpl Class | Microsoft Docs"
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
  - "ATL::CAxDialogImpl"
  - "ATL.CAxDialogImpl"
  - "CAxDialogImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, finestre di dialogo"
  - "CAxDialogImpl class"
ms.assetid: 817df483-3fa8-44e7-8487-72ba0881cd27
caps.latest.revision: 21
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAxDialogImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa una finestra di dialogo \(modale o non modale\) che ospitano controlli ActiveX.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template <  
class T,  
class TBase= CWindow  
>  
class ATL_NO_VTABLE CAxDialogImpl :  
public CDialogImplBaseT< TBase>  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `CAxDialogImpl`.  
  
 *TBase*  
 La classe della finestra di base per **CDialogImplBaseT**.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAxDialogImpl::AdviseSinkMap](../Topic/CAxDialogImpl::AdviseSinkMap.md)|Chiamare questo metodo per consigliare o il unadvise tutte le voci della mappa eventi dei sink.|  
|[CAxDialogImpl::Create](../Topic/CAxDialogImpl::Create.md)|Chiamare questo metodo per creare una finestra di dialogo non modale.|  
|[CAxDialogImpl::DestroyWindow](../Topic/CAxDialogImpl::DestroyWindow.md)|Chiamare questo metodo per eliminare una finestra di dialogo non modale.|  
|[CAxDialogImpl::DoModal](../Topic/CAxDialogImpl::DoModal.md)|Chiamare questo metodo per creare una finestra di dialogo modale.|  
|[CAxDialogImpl::EndDialog](../Topic/CAxDialogImpl::EndDialog.md)|Chiamare questo metodo per eliminare una finestra di dialogo modale.|  
|[CAxDialogImpl::GetDialogProc](../Topic/CAxDialogImpl::GetDialogProc.md)|Chiamare questo metodo per ottenere un puntatore alla funzione di callback `DialogProc`.|  
|[CAxDialogImpl::GetIDD](../Topic/CAxDialogImpl::GetIDD.md)|Chiamare questo metodo per ottenere gli ID di risorsa modello di finestra di dialogo|  
|[CAxDialogImpl::IsDialogMessage](../Topic/CAxDialogImpl::IsDialogMessage.md)|Chiamare questo metodo per determinare se un messaggio è destinato a questa finestra di dialogo e, se è, elabora il messaggio.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAxDialogImpl::m\_bModal](../Topic/CAxDialogImpl::m_bModal.md)|Una variabile che esiste solo nelle build di debug e è impostata su true se la finestra di dialogo è modale.|  
  
## Note  
 `CAxDialogImpl` consente di creare un oggetto o una finestra di dialogo non modale.  `CAxDialogImpl` fornisce la routine della finestra di dialogo, contenente la mappa messaggi predefinita per indirizzare i messaggi ai gestori appropriati.  
  
 `CAxDialogImpl` deriva da `CDialogImplBaseT`, che a sua volta deriva da *TBase* \(per impostazione predefinita, `CWindow`\) e da `CMessageMap`.  
  
 La classe deve definire un membro di IDD valore che specifica l'id di risorsa modello di finestra di dialogo  Ad esempio, aggiungere un oggetto finestra di dialogo ATL utilizzando la finestra di dialogo **Aggiungi classe** aggiunge automaticamente la riga seguente alla classe:  
  
 [!code-cpp[NVC_ATL_Windowing#41](../../atl/codesnippet/CPP/caxdialogimpl-class_1.h)]  
  
 dove `MyDialog` è **nome breve** inserito nella procedura guidata finestra di dialogo ATL.  
  
 Vedere [implementare una finestra di dialogo](../../atl/implementing-a-dialog-box.md) per ulteriori informazioni.  
  
 Si noti che un controllo ActiveX in una finestra di dialogo modale creata con `CAxDialogImpl` non supporta i tasti di scelta rapida.  Per supportare i tasti di scelta rapida in una finestra di dialogo creata con `CAxDialogImpl`, creare una finestra di dialogo non modale e, utilizzando il proprio ciclo di messaggi, utilizzare [CAxDialogImpl::IsDialogMessage](../Topic/CAxDialogImpl::IsDialogMessage.md) dopo avere essere un messaggio dalla coda per gestire un tasto di scelta rapida.  
  
 Per ulteriori informazioni su `CAxDialogImpl`, vedere [Il contenimento dei controlli domande frequenti su ATL](../../atl/atl-control-containment-faq.md).  
  
## Gerarchia di ereditarietà  
 [CMessageMap](../../atl/reference/cmessagemap-class.md)  
  
 `TBase`  
  
 `CWindowImplRoot`  
  
 `CDialogImplBaseT`  
  
 `CAxDialogImpl`  
  
## Requisiti  
 **Header:** atlwin.h  
  
## Vedere anche  
 [CDialogImpl Class](../../atl/reference/cdialogimpl-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)