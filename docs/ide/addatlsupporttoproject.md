---
title: "AddATLSupportToProject | Microsoft Docs"
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
  - "AddATLSupportToProject (metodo)"
ms.assetid: 26708f22-1e9b-4432-83b2-ed94c765b753
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# AddATLSupportToProject
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Aggiunge il supporto ATL a un progetto MFC.  
  
## Sintassi  
  
```  
  
      function AddATLSupportToProject(   
   oProj   
);  
```  
  
#### Parametri  
 `oProj`  
 Progetto selezionato.  
  
## Valore restituito  
 **true** se il supporto ATL è stato aggiunto correttamente al progetto MFC.  
  
## Note  
 Utilizzare questa funzione per aggiungere il supporto ATL a un progetto MFC creato nella procedura guidata.  
  
 Nella procedura guidata viene visualizzata una casella di messaggio per confermare l'aggiunta del supporto ATL al progetto MFC.  Dopo la conferma, viene verificata la presenza del supporto esistente e vengono aggiunti tutti i GUID, i modelli, le intestazioni e le funzionalità aggiuntive in modo che il progetto MFC creato nella procedura guidata supporti ATL.  
  
## Esempio  
  
```  
var oCM = selProj.CodeModel;  
var L_TRANSACTION_Text = "Add ATL Support To Project";  
oCM.StartTransaction(L_TRANSACTION_Text);  
var bRet = AddATLSupportToProject(selProj);  
if (bRet)  
   oCM.CommitTransaction();  
else  
   oCM.AbortTransaction();  
return bRet;  
```  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [CanAddATLClass](../ide/canaddatlclass.md)   
 [IsMFCProject](../ide/ismfcproject.md)   
 [Introduzione a ATL](../atl/introduction-to-atl.md)