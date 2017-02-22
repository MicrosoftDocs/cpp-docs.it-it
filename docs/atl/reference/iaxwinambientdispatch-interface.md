---
title: "IAxWinAmbientDispatch Interface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IAxWinAmbientDispatch"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IAxWinAmbientDispatch interface"
ms.assetid: 55ba6f7b-7a3c-4792-ae47-c8a84b683ca9
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 27
---
# IAxWinAmbientDispatch Interface
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa interfaccia fornisce metodi per specificare le caratteristiche del controllo ospitato o del contenitore.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
interface IAxWinAmbientDispatch : IDispatch  
  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[get\_AllowContextMenu](../Topic/IAxWinAmbientDispatch::get_AllowContextMenu.md)|La proprietà **AllowContextMenu** specifica se il controllo ospitato viene consentito per visualizzare il proprio menu di scelta rapida.|  
|[get\_AllowShowUI](../Topic/IAxWinAmbientDispatch::get_AllowShowUI.md)|La proprietà **AllowShowUI** specifica se il controllo ospitato viene consentito per visualizzare la propria interfaccia utente.|  
|[get\_AllowWindowlessActivation](../Topic/IAxWinAmbientDispatch::get_AllowWindowlessActivation.md)|La proprietà **AllowWindowlessActivation** specificare se il contenitore consente l'attivazione senza finestra.|  
|[get\_BackColor](../Topic/IAxWinAmbientDispatch::get_BackColor.md)|La proprietà `BackColor` specifica il colore di sfondo di ambiente del contenitore.|  
|[get\_DisplayAsDefault](../Topic/IAxWinAmbientDispatch::get_DisplayAsDefault.md)|**DisplayAsDefault** è una proprietà di ambiente che consente a un controllo di verificare se è il controllo predefinito.|  
|[get\_DocHostDoubleClickFlags](../Topic/IAxWinAmbientDispatch::get_DocHostDoubleClickFlags.md)|La proprietà **DocHostDoubleClickFlags** specifica l'operazione che deve essere eseguite in risposta a un doppio clic.|  
|[get\_DocHostFlags](../Topic/IAxWinAmbientDispatch::get_DocHostFlags.md)|La proprietà **DocHostFlags** specifica le funzionalità dell'interfaccia utente dell'oggetto host.|  
|[get\_Font](../Topic/IAxWinAmbientDispatch::get_Font.md)|La proprietà **Tipo di carattere** specifica il tipo di ambiente del contenitore.|  
|[get\_ForeColor](../Topic/IAxWinAmbientDispatch::get_ForeColor.md)|La proprietà `ForeColor` specifica il colore di primo piano di ambiente del contenitore.|  
|[get\_LocaleID](../Topic/IAxWinAmbientDispatch::get_LocaleID.md)|La proprietà **LocaleID** specifica l'id delle impostazioni locali di ambiente del contenitore.|  
|[get\_MessageReflect](../Topic/IAxWinAmbientDispatch::get_MessageReflect.md)|La proprietà di ambiente **MessageReflect** specificare se il contenitore rifletterà i messaggi al controllo ospitato.|  
|[get\_OptionKeyPath](../Topic/IAxWinAmbientDispatch::get_OptionKeyPath.md)|La proprietà **OptionKeyPath** specifica il percorso della chiave del Registro di sistema alle impostazioni utente.|  
|[get\_ShowGrabHandles](../Topic/IAxWinAmbientDispatch::get_ShowGrabHandles.md)|La proprietà di ambiente **ShowGrabHandles** consente al controllo di verificare se si disegna con le maniglie.|  
|[get\_ShowHatching](../Topic/IAxWinAmbientDispatch::get_ShowHatching.md)|La proprietà di ambiente **ShowHatching** consente al controllo di verificare se si disegna covasse.|  
|[get\_UserMode](../Topic/IAxWinAmbientDispatch::get_UserMode.md)|La proprietà **UserMode** specifica la modalità utente di ambiente del contenitore.|  
|[put\_AllowContextMenu](../Topic/IAxWinAmbientDispatch::put_AllowContextMenu.md)|La proprietà **AllowContextMenu** specifica se il controllo ospitato viene consentito per visualizzare il proprio menu di scelta rapida.|  
|[put\_AllowShowUI](../Topic/IAxWinAmbientDispatch::put_AllowShowUI.md)|La proprietà **AllowShowUI** specifica se il controllo ospitato viene consentito per visualizzare la propria interfaccia utente.|  
|[put\_AllowWindowlessActivation](../Topic/IAxWinAmbientDispatch::put_AllowWindowlessActivation.md)|La proprietà **AllowWindowlessActivation** specificare se il contenitore consente l'attivazione senza finestra.|  
|[put\_BackColor](../Topic/IAxWinAmbientDispatch::put_BackColor.md)|La proprietà `BackColor` specifica il colore di sfondo di ambiente del contenitore.|  
|[put\_DisplayAsDefault](../Topic/IAxWinAmbientDispatch::put_DisplayAsDefault.md)|**DisplayAsDefault** è una proprietà di ambiente che consente a un controllo di verificare se è il controllo predefinito.|  
|[put\_DocHostDoubleClickFlags](../Topic/IAxWinAmbientDispatch::put_DocHostDoubleClickFlags.md)|La proprietà **DocHostDoubleClickFlags** specifica l'operazione che deve essere eseguite in risposta a un doppio clic.|  
|[put\_DocHostFlags](../Topic/IAxWinAmbientDispatch::put_DocHostFlags.md)|La proprietà **DocHostFlags** specifica le funzionalità dell'interfaccia utente dell'oggetto host.|  
|[put\_Font](../Topic/IAxWinAmbientDispatch::put_Font.md)|La proprietà **Tipo di carattere** specifica il tipo di ambiente del contenitore.|  
|[put\_ForeColor](../Topic/IAxWinAmbientDispatch::put_ForeColor.md)|La proprietà `ForeColor` specifica il colore di primo piano di ambiente del contenitore.|  
|[put\_LocaleID](../Topic/IAxWinAmbientDispatch::put_LocaleID.md)|La proprietà **LocaleID** specifica l'id delle impostazioni locali di ambiente del contenitore.|  
|[put\_MessageReflect](../Topic/IAxWinAmbientDispatch::put_MessageReflect.md)|La proprietà di ambiente **MessageReflect** specificare se il contenitore rifletterà i messaggi al controllo ospitato.|  
|[put\_OptionKeyPath](../Topic/IAxWinAmbientDispatch::put_OptionKeyPath.md)|La proprietà **OptionKeyPath** specifica il percorso della chiave del Registro di sistema alle impostazioni utente.|  
|[put\_UserMode](../Topic/IAxWinAmbientDispatch::put_UserMode.md)|La proprietà **UserMode** specifica la modalità utente di ambiente del contenitore.|  
  
## Note  
 Questa interfaccia è esposta dagli oggetti di hosting di controlli ActiveX ATL.  Chiamare i metodi su questa interfaccia per impostare le proprietà di ambiente disponibili per il controllo ospitato o per specificare altri aspetti del comportamento del contenitore.  Per completare le proprietà forniti da `IAxWinAmbientDispatch`, utilizza [IAxWinAmbientDispatchEx](../../atl/reference/iaxwinambientdispatchex-interface.md).  
  
 [AXHost](https://msdn.microsoft.com/en-us/library/system.windows.forms.axhost.aspx) tenta di caricare le informazioni sui tipi per `IAxWinAmbientDispatch` e `IAxWinAmbientDispatchEx` dalla libreria dei tipi che contiene il codice.  
  
 Se si collega a ATL90.dll, **AXHost** carica le informazioni sul tipo dalla libreria dei tipi nella DLL.  
  
 Vedere [Controlli ActiveX di hosting mediante ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) per ulteriori informazioni.  
  
## Requisiti  
 La definizione di questa interfaccia è disponibile in diversi formati, come illustrato nella tabella riportata di seguito.  
  
|Tipo di definizione|File|  
|-------------------------|----------|  
|IDL|atliface.idl|  
|Libreria dei tipi|ATL.dll|  
|C\+\+|atliface.h \(anche incluso in ATLBase.h\)|  
  
## Vedere anche  
 [IAxWinAmbientDispatchEx Interface](../../atl/reference/iaxwinambientdispatchex-interface.md)   
 [IAxWinHostWindow Interface](../../atl/reference/iaxwinhostwindow-interface.md)   
 [CAxWindow::QueryHost](../Topic/CAxWindow::QueryHost.md)   
 [AtlAxGetHost](../Topic/AtlAxGetHost.md)