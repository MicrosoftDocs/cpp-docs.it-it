---
title: "CIPAddressCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CIPAddressCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CIPAddressCtrl class"
  - "controlli comuni, Internet Explorer 4.0"
  - "Internet address edit box"
  - "Internet Explorer 4.0 common controls"
  - "Internet protocol address box"
  - "IP address control"
ms.assetid: 9764d2f4-cb14-4ba8-b799-7f57a55a47c6
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CIPAddressCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità del controllo comune di indirizzo IP di Windows.  
  
## Sintassi  
  
```  
class CIPAddressCtrl : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CIPAddressCtrl::CIPAddressCtrl](../Topic/CIPAddressCtrl::CIPAddressCtrl.md)|Costruisce un oggetto `CIPAddressCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CIPAddressCtrl::ClearAddress](../Topic/CIPAddressCtrl::ClearAddress.md)|Consente di cancellare il contenuto del controllo indirizzo IP.|  
|[CIPAddressCtrl::Create](../Topic/CIPAddressCtrl::Create.md)|Crea un controllo indirizzo IP e lo collega a un oggetto `CIPAddressCtrl`.|  
|[CIPAddressCtrl::CreateEx](../Topic/CIPAddressCtrl::CreateEx.md)|Crea un controllo indirizzo IP con gli stili estesi Windows specificati e lo collega a un oggetto `CIPAddressCtrl`.|  
|[CIPAddressCtrl::GetAddress](../Topic/CIPAddressCtrl::GetAddress.md)|Recupera i valori degli indirizzi per tutti e quattro i campi nel controllo indirizzo IP.|  
|[CIPAddressCtrl::IsBlank](../Topic/CIPAddressCtrl::IsBlank.md)|Determina se tutti i campi nel controllo indirizzo IP sono vuoti.|  
|[CIPAddressCtrl::SetAddress](../Topic/CIPAddressCtrl::SetAddress.md)|Imposta i valori degli indirizzi per tutti e quattro i campi nel controllo indirizzo IP.|  
|[CIPAddressCtrl::SetFieldFocus](../Topic/CIPAddressCtrl::SetFieldFocus.md)|Imposta lo stato attivo al campo specificato nel controllo indirizzo IP.|  
|[CIPAddressCtrl::SetFieldRange](../Topic/CIPAddressCtrl::SetFieldRange.md)|Imposta l'intervallo nel campo specificato nel controllo indirizzo IP.|  
  
## Note  
 Un controllo indirizzo IP, un controllo simile a un controllo di modifica, consente di immettere e modificare un indirizzo numerico nel formato del protocollo internet \(IP\).  
  
 Questo controllo e la classe `CIPAddressCtrl` \) è disponibile solo per i programmi in esecuzione in Microsoft Internet Explorer 4,0 e successive.  Verrà inoltre disponibile nelle versioni future di Windows e Windows NT.  
  
 Per informazioni generali su controllo indirizzo IP, vedere [Controlli di indirizzo IP](http://msdn.microsoft.com/library/windows/desktop/bb761372) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CIPAddressCtrl`  
  
## Requisiti  
 **Header:** afxcmn.h  
  
## Vedere anche  
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)