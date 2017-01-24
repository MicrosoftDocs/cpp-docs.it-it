---
title: "CWinFormsControl Class | Microsoft Docs"
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
  - "CWinFormsControl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CWinFormsControl class"
  - "MFC [C++], supporto di Windows Form"
  - "Windows Form [C++], MFC support"
ms.assetid: 6406dd7b-fb89-4a18-ac3a-c010d6b6289a
caps.latest.revision: 28
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CWinFormsControl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità di base per l'hosting di un controllo Windows Form.  
  
## Sintassi  
  
```  
template<class TManagedControl>  
class CWinFormsControl : public CWnd  
```  
  
#### Parametri  
 `TManagedControl`  
 Un controllo Windows Form di .NET Framework da visualizzare nell'applicazione MFC.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinFormsControl::CWinFormsControl](../Topic/CWinFormsControl::CWinFormsControl.md)|Costruisce un oggetto wrapper del controllo Windows Form di MFC.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinFormsControl::CreateManagedControl](../Topic/CWinFormsControl::CreateManagedControl.md)|Crea un controllo Windows Form in un contenitore MFC.|  
|[CWinFormsControl::GetControl](../Topic/CWinFormsControl::GetControl.md)|Recupera un puntatore al controllo Windows Form.|  
|[CWinFormsControl::GetControlHandle](../Topic/CWinFormsControl::GetControlHandle.md)|Recupera l'handle per il controllo Windows Form.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinFormsControl::operator \-\>](../Topic/CWinFormsControl::operator%20-%3E.md)|Sostituisce [CWinFormsControl::GetControl](../Topic/CWinFormsControl::GetControl.md) espressioni.|  
|[CWinFormsControl::operator TManagedControl^](../Topic/CWinFormsControl::operator%20TManagedControl%5E.md)|Esegue il cast di un tipo come puntatore a un controllo Windows Form.|  
  
## Note  
 La classe `CWinFormsControl` fornisce la funzionalità di base per l'hosting di un controllo Windows Form.  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [Utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
 Il codice MFC non deve memorizzare l'handle di finestra \(in genere archiviate in `m_hWnd`\).  Alcune proprietà del controllo Windows Form richiedono che Win32 sottostante `Window` venga eliminato e ricreato utilizzando `DestroyWindow` e `CreateWindow`.  L'implementazione di Windows Form MFC gestisce gli eventi `Create` e `Destroy` dei comandi per aggiornare il membro `m_hWnd`.  
  
> [!NOTE]
>  L'integrazione di Windows Form MFC funziona solo in progetti che vengono collegati in modo dinamico a MFC \(in cui AFXDLL è definito\).  
  
## Requisiti  
 **intestazione:** afxwinforms.h  
  
## Vedere anche  
 [CWinFormsDialog Class](../../mfc/reference/cwinformsdialog-class.md)   
 [CWinFormsView Class](../../mfc/reference/cwinformsview-class.md)