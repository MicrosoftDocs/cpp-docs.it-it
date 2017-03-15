---
title: "Propriet&#224; predefinite | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "proprietà predefinite"
  - "proprietà predefinite, informazioni sulle proprietà predefinite"
ms.assetid: a89fc454-0b8e-447a-9033-4c8af46a24d9
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Propriet&#224; predefinite
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se si aggiunge una proprietà a un'interfaccia dispatch MFC utilizzando l'[Aggiunta guidata proprietà](../ide/idl-attributes-add-property-wizard.md), sarà possibile scegliere una proprietà predefinita dall'elenco **Nome proprietà** nella schermata [Nomi](../ide/names-add-property-wizard.md) della procedura guidata.  Di seguito sono riportate le proprietà:  
  
|Nome della proprietà|Descrizione|  
|--------------------------|-----------------|  
|**Aspetto**|Restituisce o imposta un valore che determina l'aspetto del controllo.  La proprietà **Appearance** del controllo può includere o omettere effetti di visualizzazione tridimensionali.  Si tratta di una proprietà di lettura\/scrittura di ambiente.|  
|`BackColor`|Restituisce o imposta la proprietà `BackColor` di ambiente del controllo in un colore della tavolozza \(RGB\) o in un colore di sistema predefinito.  Per impostazione predefinita il valore corrisponde al colore di primo piano del contenitore del controllo.  Si tratta di una proprietà di lettura\/scrittura di ambiente.|  
|`BorderStyle`|Restituisce o imposta lo stile del bordo per un controllo.  Si tratta di una proprietà di lettura\/scrittura.|  
|**Didascalia**|Restituisce o imposta la proprietà **Caption** del controllo,  relativa al titolo della finestra.  Per **Caption** non è disponibile il tipo di implementazione **Variabile membro**.|  
|**Enabled**|Restituisce o imposta la proprietà **Enabled** del controllo.  Un controllo attivato può rispondere a eventi generati dall'utente.|  
|**Tipo di carattere**|Restituisce o imposta il tipo di carattere di ambiente del controllo.  Ha valore null se il controllo non presenta alcun tipo di carattere.|  
|`ForeColor`|Restituisce o imposta la proprietà `ForeColor` di ambiente del controllo.|  
|**hWnd**|Restituisce o imposta la proprietà **hWnd** del controllo.  Per **hWnd** non è disponibile alcun tipo di implementazione **Variabile membro**.|  
|**ReadyState**|Restituisce o imposta la proprietà **ReadyState** del controllo.  Un controllo può essere non inizializzato, inizializzato, in fase di caricamento, interattivo o completo.  Per ulteriori informazioni, vedere [READYSTATE](https://msdn.microsoft.com/en-us/library/aa768362.aspx) in *Internet SDK*.|  
|**Text**|Restituisce o imposta il testo contenuto in un controllo.  Per **Text** non è disponibile il tipo di implementazione **Variabile membro**.|  
  
## Vedere anche  
 [Aggiunta di una proprietà](../ide/adding-a-property-visual-cpp.md)   
 [Attributi IDL, Aggiunta guidata proprietà](../ide/idl-attributes-add-property-wizard.md)