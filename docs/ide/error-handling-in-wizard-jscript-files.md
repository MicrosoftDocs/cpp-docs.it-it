---
title: "Gestione degli errori nei file JScript della Creazione guidata personalizzata | Microsoft Docs"
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
  - "gestione errori, JScript"
  - "JScript, gestione errori"
  - "gestione errori JScript per procedure guidate"
ms.assetid: 6df3ba46-7ab6-484c-ac45-b08f4b6a5900
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestione degli errori nei file JScript della Creazione guidata personalizzata
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si crea una procedura guidata, nel progetto vengono inclusi i file Default.js e Common.js.  Utilizzare questi file per personalizzare il progetto.  Per ulteriori informazioni, vedere [Il file JScript](../ide/jscript-file.md).  
  
 È opportuno che il progetto includa la gestione degli errori.  Di seguito è riportato un esempio di questo tipo di codice.  
  
### Per gestire gli errori in JScript  
  
1.  Per individuare gli errori quando si sceglie **Fine**, immettere il seguente codice:  
  
    ```  
    function OnFinish(selProj, Class)  
    {  
       try  
       {  
          .....  
       }  
       catch(e)  
       {  
          if (e.description.length != 0)  
             SetErrorInfo(e.description, e.number);  
          return e.number  
       }  
    }  
    ```  
  
2.  Generare `e` da qualsiasi funzione script di supporto chiamata nello script:  
  
    ```  
    function ExtenderFromType(strVariableType)  
    {  
       try  
       {  
          ....  
       }  
       catch(e)  
       {  
          throw e;  
       }  
    }  
    ```  
  
3.  Se il parametro **PREPROCESS\_FUNCTION** è presente [nel file .vsz](../ide/dot-vsz-file-project-control.md), verrà chiamato [CanAddATLClass](../ide/jscript-functions-for-cpp-wizards.md).  Utilizzare [SetErrorInfo](../ide/seterrorinfo.md) in caso di errori e restituire **false**:  
  
    ```  
    function CanAddATLClass(oProj, oObject)  
    {  
       try  
       {  
          if (!IsATLProject(oProj))  
          {  
             if (!IsMFCProject(oProj, true))  
             {     
                var L_CanAddATLClass_Text = "ATL classes can only be added  
     to ATL, MFC EXE and MFC regular DLL projects.";  
                wizard.ReportError(L_CanAddATLClass_Text);  
                return false;  
             }  
             else  
             {  
                .....  
                var bRet = AddATLSupportToProject(oProj);  
                .....  
                return bRet;  
             }  
          }  
          return true;  
       }  
       catch(e)  
       {  
          throw e;  
       }  
    }  
    ```  
  
4.  Se è necessario tornare alla finestra di dialogo **Nuovo progetto** o **Aggiungi elemento**, restituire **VS\_E\_WIZBACKBUTTONPRESS**:  
  
    ```  
    function OnFinish(selProj, Class)  
    {  
       ....  
       if (!CheckAddtoProject(selProj))  
       {  
          return VS_E_WIZARDBACKBUTTONPRESS;  
       }  
    }  
    ```  
  
## Vedere anche  
 [File creati per la procedura guidata](../ide/files-created-for-your-wizard.md)   
 [Personalizzazione della procedura guidata](../ide/customizing-your-wizard.md)