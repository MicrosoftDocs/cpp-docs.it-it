---
title: "Finestre delle propriet&#224; come procedure guidate | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "finestre delle proprietà, come procedure guidate"
ms.assetid: 1ea66ecb-23b0-484a-838d-58671a2999b5
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Finestre delle propriet&#224; come procedure guidate
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una caratteristica chiave delle finestra delle proprietà della procedura guidata è che la navigazione venga fornita con i pulsanti Avanti o Fine, Indietro e Annulla anziché con le schede.  È necessario chiamare [CPropertySheet::SetWizardMode](../Topic/CPropertySheet::SetWizardMode.md) prima di chiamare [CPropertySheet::DoModal](../Topic/CPropertySheet::DoModal.md) sull'oggetto finestra delle proprietà per utilizzare questa funzionalità.  
  
 L'utente riceve le stesse notifiche [CPropertyPage::OnSetActive](../Topic/CPropertyPage::OnSetActive.md) e [CPropertyPage::OnKillActive](../Topic/CPropertyPage::OnKillActive.md) mentre si sposta da una pagina ad un'altra pagina.  I pulsanti di Fine e Avanti sono controlli mutuamente esclusivi; ovvero per volta solo uno di essi verrà visualizzato.  Nella prima pagina, il pulsante Avanti deve essere abilitato.  Se l'utente è all'ultima pagina, il pulsante Fine dovrà essere abilitato.  Questa operazione non viene eseguita automaticamente dal framework.  È necessario chiamare [CPropertySheet::SetWizardButton](../Topic/CPropertySheet::SetWizardButtons.md) all'ultima pagina a tale scopo.  
  
 Per visualizzare tutti i pulsanti predefiniti, viene illustrata una poltiglia con il pulsante Fine e spostare il pulsante Avanti.  Spostare il pulsante Indietro in modo da mantenere la posizione relativa al pulsante successivo.  Per ulteriori informazioni, cercare l'articolo della Knowledge Base Q143210.  Gli articoli Knowledge Base sono disponibili nella Libreria MSDN.  
  
## Esempio  
 [!code-cpp[NVC_MFCDocView#5](../mfc/codesnippet/CPP/property-sheets-as-wizards_1.cpp)]  
  
## Vedere anche  
 [Finestre delle proprietà](../mfc/property-sheets-mfc.md)