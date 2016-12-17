---
title: "CWinFormsDialog Class | Microsoft Docs"
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
  - "CWinFormsDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CWinFormsDialog class"
  - "MFC [C++], supporto di Windows Form"
  - "Windows Form [C++], MFC support"
ms.assetid: e3cec000-a578-448e-b06a-8af256312f61
caps.latest.revision: 26
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CWinFormsDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Wrapper per una classe finestra di dialogo MFC che ospita un controllo utente Windows Form.  
  
## Sintassi  
  
```  
template <typename TManagedControl>  
class CWinFormsDialog :   
   public CDialog  
```  
  
#### Parametri  
 `TManagedControl`  
 Il controllo utente.NET Framework da visualizzare nell'applicazione MFC.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinFormsDialog::CWinFormsDialog](../Topic/CWinFormsDialog::CWinFormsDialog.md)|Costruisce un oggetto `CWinFormsDialog`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinFormsDialog::GetControl](../Topic/CWinFormsDialog::GetControl.md)|Recupera un riferimento al controllo utente Windows Form.|  
|[CWinFormsDialog::GetControlHandle](../Topic/CWinFormsDialog::GetControlHandle.md)|Recupera l'handle della finestra sul controllo utente Windows Form.|  
|[CWinFormsDialog::OnInitDialog](../Topic/CWinFormsDialog::OnInitDialog.md)|Inizializza la finestra di dialogo MFC creazione e hosting di un controllo utente Windows Form.|  
  
### Operatori pubblici  
  
|Nome||  
|----------|-|  
|[CWinFormsDialog::operator \-\>](../Topic/CWinFormsDialog::operator%20-%3E.md)|Sostituisce [CWinFormsDialog::GetControl](../Topic/CWinFormsDialog::GetControl.md) espressioni.|  
|[CWinFormsDialog::operator TManagedControl^](../Topic/CWinFormsDialog::operator%20TManagedControl%5E.md)|Esegue il cast di un tipo come riferimento a un controllo utente Windows Form.|  
  
## Note  
 `CWinFormsDialog` è un wrapper per una classe finestra di dialogo MFC \([CDialog](../../mfc/reference/cdialog-class.md)\) che ospita un controllo utente Windows Form \(<xref:System.Windows.Forms.UserControl>\).  Questo consente la visualizzazione dei comandi di.NET Framework in una finestra di dialogo MFC modale o non modale.  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [Utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md) e [Hosting di un controllo utente Windows Form come finestra di dialogo MFC](../../dotnet/hosting-a-windows-form-user-control-as-an-mfc-dialog-box.md).  
  
## Requisiti  
 **intestazione:** afxwinforms.h  
  
## Vedere anche  
 <xref:System.Windows.Forms.UserControl?displayProperty=fullName>   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [CWinFormsView Class](../../mfc/reference/cwinformsview-class.md)   
 [CDialog Class](../../mfc/reference/cdialog-class.md)