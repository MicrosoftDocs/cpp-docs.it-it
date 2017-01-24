---
title: "CMFCMaskedEdit Class | Microsoft Docs"
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
  - "CMFCMaskedEdit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCMaskedEdit class"
  - "CMFCMaskedEdit constructor"
ms.assetid: 13b1a645-2d5d-4c37-8599-16d5003f23a5
caps.latest.revision: 30
caps.handback.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCMaskedEdit Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCMaskedEdit` supporta un controllo di modifica mascherato, che convalida input per una maschera e visualizzare i risultati convalidati in base a un modello.  
  
## Sintassi  
  
```  
class CMFCMaskedEdit : public CEdit  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCMaskedEdit::CMFCMaskedEdit`|Costruttore predefinito.|  
|`CMFCMaskedEdit::~CMFCMaskedEdit`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCMaskedEdit::DisableMask](../Topic/CMFCMaskedEdit::DisableMask.md)|Disabilita convalidare l'input utente.|  
|[CMFCMaskedEdit::EnableGetMaskedCharsOnly](../Topic/CMFCMaskedEdit::EnableGetMaskedCharsOnly.md)|Specifica se il metodo `GetWindowText` recupera solo caratteri mascherati.|  
|[CMFCMaskedEdit::EnableMask](../Topic/CMFCMaskedEdit::EnableMask.md)|Inizializza il controllo di modifica mascherato.|  
|[CMFCMaskedEdit::EnableSelectByGroup](../Topic/CMFCMaskedEdit::EnableSelectByGroup.md)|Specifica se il controllo di modifica mascherato selezionare i gruppi specifici di input, o tutto l'input utente.|  
|[CMFCMaskedEdit::EnableSetMaskedCharsOnly](../Topic/CMFCMaskedEdit::EnableSetMaskedCharsOnly.md)|Specifica se il testo viene convalidato solo con i caratteri mascherati, o nella maschera intera.|  
|`CMFCMaskedEdit::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|[CMFCMaskedEdit::GetWindowText](../Topic/CMFCMaskedEdit::GetWindowText.md)|Retrieves ha convalidato il testo dal controllo di modifica mascherato.|  
|[CMFCMaskedEdit::SetValidChars](../Topic/CMFCMaskedEdit::SetValidChars.md)|Specifica una stringa di caratteri validi in cui l'utente può immettere.|  
|[CMFCMaskedEdit::SetWindowText](../Topic/CMFCMaskedEdit::SetWindowText.md)|Viene visualizzata una richiesta nel controllo di modifica mascherato.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCMaskedEdit::IsMaskedChar](../Topic/CMFCMaskedEdit::IsMaskedChar.md)|Chiamato dal framework per convalidare il carattere specificato con il carattere corrispondente della maschera.|  
  
## Note  
 Eseguire i passaggi seguenti per utilizzare il controllo `CMFCMaskedEdit` nell'applicazione:  
  
 1.  Importare un oggetto `CMFCMaskedEdit` nella classe della finestra.  
  
 2.  Chiamare il metodo [CMFCMaskedEdit::EnableMask](../Topic/CMFCMaskedEdit::EnableMask.md) per specificare la maschera.  
  
 3.  Chiamare il metodo [CMFCMaskedEdit::SetValidChars](../Topic/CMFCMaskedEdit::SetValidChars.md) per specificare l'elenco di caratteri validi.  
  
 4.  Chiamare il metodo [CMFCMaskedEdit::SetWindowText](../Topic/CMFCMaskedEdit::SetWindowText.md) per specificare il testo predefinito per il controllo di modifica mascherato.  
  
 5.  Chiamare il metodo [CMFCMaskedEdit::GetWindowText](../Topic/CMFCMaskedEdit::GetWindowText.md) per recuperare il testo convalidato.  
  
 Se non si chiama uno o più metodi per inizializzare la maschera, i caratteri validi e il testo predefinito, il controllo di modifica mascherato si comporta come se il controllo edit standard funziona.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come configurare una maschera ad esempio un numero di telefono\) utilizzando il metodo `EnableMask` per creare la maschera per il controllo di modifica mascherato, il metodo `SetValidChars` per specificare una stringa di caratteri validi in cui l'utente può immettere e il metodo `SetWindowText` visualizzata una richiesta nel controllo di modifica mascherato.  Questo esempio fa parte [Nuovo esempio di controlli](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#11](../../mfc/reference/codesnippet/CPP/cmfcmaskededit-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#12](../../mfc/reference/codesnippet/CPP/cmfcmaskededit-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CEdit](../../mfc/reference/cedit-class.md)  
  
 [CMFCMaskedEdit](../../mfc/reference/cmfcmaskededit-class.md)  
  
## Requisiti  
 **intestazione:** afxmaskededit.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CEdit Class](../../mfc/reference/cedit-class.md)