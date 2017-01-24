---
title: "Classe CNetAddressCtrl | Microsoft Docs"
ms.custom: ""
ms.date: "12/09/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Classe CNetAddressCtrl"
ms.assetid: cb4c6aca-3f49-4b52-b76c-65f57096155b
caps.latest.revision: 32
caps.handback.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CNetAddressCtrl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CNetAddressCtrl` rappresenta il controllo indirizzo di rete, che è possibile utilizzare per fornire e convalidare il formato di IPv4, di IPv6 e indirizzi denominati DNS.  
  
## Sintassi  
  
```  
class CNetAddressCtrl : public CEdit  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CNetAddressCtrl::CNetAddressCtrl](../Topic/CNetAddressCtrl::CNetAddressCtrl.md)|Costruisce un oggetto `CNetAddressCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CNetAddressCtrl::Create](../Topic/CNetAddressCtrl::Create.md)|Crea un controllo indirizzo di rete con gli stili specificati e lo aggiunge all'oggetto corrente `CNetAddressCtrl`.|  
|[CNetAddressCtrl::CreateEx](../Topic/CNetAddressCtrl::CreateEx.md)|Crea un controllo indirizzo di rete con gli stili estesi specificati e lo aggiunge all'oggetto corrente `CNetAddressCtrl`.|  
|[CNetAddressCtrl::DisplayErrorTip](../Topic/CNetAddressCtrl::DisplayErrorTip.md)|Visualizza un suggerimento di errore quando l'utente immette un indirizzo di rete non supportato nel controllo indirizzo di rete corrente.|  
|[CNetAddressCtrl::GetAddress](../Topic/CNetAddressCtrl::GetAddress.md)|Recupera una rappresentazione convalidare e analizzata degli indirizzi di rete associato al controllo indirizzo di rete corrente.|  
|[CNetAddressCtrl::GetAllowType](../Topic/CNetAddressCtrl::GetAllowType.md)|Recupera il tipo di indirizzo di rete che il controllo indirizzo di rete corrente può supportare.|  
|[CNetAddressCtrl::SetAllowType](../Topic/CNetAddressCtrl::SetAllowType.md)|Imposta il tipo di indirizzo di rete che il controllo indirizzo di rete corrente può supportare.|  
  
## Note  
 Il controllo indirizzo di rete verifica che il formato dell'indirizzo che l'utente ha immesso sia corretto.  Il controllo non si connette all'indirizzo di rete.  Il metodo [CNetAddressCtrl::SetAllowType](../Topic/CNetAddressCtrl::SetAllowType.md) specifica uno o più tipi degli indirizzi che il metodo [CNetAddressCtrl::GetAddress](../Topic/CNetAddressCtrl::GetAddress.md) può analizzare e testare.  Un indirizzo può essere sotto forma di IPv4, IPv6, o address denominato per un server, una rete, l'host, o una destinazione dei messaggi in tempo reale.  Se il formato dell'indirizzo è errato, è possibile utilizzare il metodo [CNetAddressCtrl::DisplayErrorTip](../Topic/CNetAddressCtrl::DisplayErrorTip.md) per visualizzare una finestra di messaggio di infotip che indica graficamente la casella di testo del controllo indirizzo di rete e visualizzare un messaggio di errore predefinito.  
  
 La classe `CNetAddressCtrl` è derivata dalla classe [CEdit](../../mfc/reference/cedit-class.md).  Di conseguenza, il controllo indirizzo di rete fornisce l'accesso a tutti i messaggi del controllo di modifica di Windows.  
  
 Nella figura raffigura una finestra di dialogo contenente un controllo indirizzo di rete.  La casella di testo \(1\) per il controllo indirizzo di rete contiene un indirizzo di rete non valido.  Il messaggio di infotip \(2\) viene visualizzato se l'indirizzo di rete non è valido.  
  
 ![Finestra di dialogo con controllo per l'indirizzo di rete e finestra popup](../../mfc/reference/media/cnetaddctrl.png "CNetAddCtrl")  
  
## Esempio  
 Nell'esempio di codice fa parte della finestra di dialogo che convalida un indirizzo di rete.  I gestori eventi per tre pulsanti di opzione specificano che l'indirizzo di rete può essere uno dei tre tipi di indirizzo.  L'utente fornisce un indirizzo nella casella di testo del controllo di rete, quindi preme un pulsante per convalidare l'indirizzo.  Se l'indirizzo è valido, viene visualizzato un messaggio che indica l'esito positivo eventi video, in caso contrario, il messaggio di errore predefinito del infotip visualizzare.  
  
 [!code-cpp[NVC_MFC_CNetAddressCtrl_s1#1](../../mfc/reference/codesnippet/CPP/cnetaddressctrl-class_1.cpp)]  
  
## Esempio  
 Nell'esempio di codice dal file di intestazione della finestra di dialogo definisce le variabili [NET\_ADDRESS\_INFORMATION](http://msdn.microsoft.com/library/windows/desktop/bb773346) e [NC\_ADDRESS](http://msdn.microsoft.com/library/windows/desktop/bb773345) richieste con il metodo [CNetAddressCtrl::GetAddress](../Topic/CNetAddressCtrl::GetAddress.md).  
  
 [!code-cpp[NVC_MFC_CNetAddressCtrl_s1#2](../../mfc/reference/codesnippet/CPP/cnetaddressctrl-class_2.h)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CEdit](../../mfc/reference/cedit-class.md)  
  
 `CNetAddressCtrl`  
  
## Requisiti  
 **intestazione:** afxcmn.h  
  
 Questa classe è supportata in [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] e versioni successive.  
  
 I requisiti aggiuntivi per la classe sono descritti in [Requisiti di compilazione per i controlli comuni di Windows Vista](../../mfc/build-requirements-for-windows-vista-common-controls.md).  
  
## Vedere anche  
 [CNetAddressCtrl Class](../../mfc/reference/cnetaddressctrl-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CEdit Class](../../mfc/reference/cedit-class.md)