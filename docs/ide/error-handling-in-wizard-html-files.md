---
title: "Gestione degli errori nei file HTML della Creazione guidata personalizzata | Microsoft Docs"
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
  - "gestione errori, controllo di errori nei file"
  - "HTML, gestione errori"
ms.assetid: eb428a64-b681-4420-987d-92098bf98455
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestione degli errori nei file HTML della Creazione guidata personalizzata
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si crea una procedura guidata con un'interfaccia utente, il progetto include file HTM.  Utilizzare questi file per personalizzare il progetto.  Per ulteriori informazioni, vedere [I file HTML](../ide/html-files.md).  
  
 È opportuno che il progetto includa la gestione degli errori.  Di seguito è riportato un esempio di questo tipo di codice.  
  
### Per gestire gli errori in HTML  
  
1.  Quando si convalidano i campi, se si chiama un metodo di convalida in una DLL \(che dovrebbe impostare le informazioni sugli errori\), chiamare `ReportError` senza parametri.  
  
    ```  
    function ValidateInput()  
    {  
       if (!window.external.ValidateFile(HEADER_FILE.value))  
       {  
          ReportError();  
          HEADER_FILE.focus();  
          return false;  
       }  
    }  
    ```  
  
2.  Quando si convalidano i campi, se si convalida un campo utilizzando solo lo script HTML, chiamare prima `SetErrorInfo`, quindi `ReportError` senza parametri.  
  
    ```  
    function OnWhatever()  
    {  
       if (!ValidateInput())  
          window.external.ReportErrror();  
       ....  
    }  
  
    function ValidateInput()  
    {  
       .....  
  
       if (HEADER_FILE.value == IMPL_FILE.value)  
       {  
          var L_ErrMsg_Text = "Header and implementation files cannot have the same name.";  
          SetErrorInfo(L_ErrMsg_Text);  
          bValid = false;  
       }  
       if (TYPE.value == "")  
       {  
          var L_ErrMsg4_Text = "Type cannot be blank.";  
          SetErrorInfo(L_ErrMsg4_Text);  
          bValid = false;  
       }  
       return bValid;  
    }  
    ```  
  
3.  Chiamare `ReportError` con i parametri:  
  
    ```  
    function ValidateInput()  
    {  
       if (!IsListed(strType))  
       {  
          var L_Invalid2_Text = "The variable type should be one of the types listed.";  
          window.external.ReportError(L_Invalid2_Text);  
          VariableType.focus();  
          return false;  
       }  
    }  
    ```  
  
4.  Se è necessario tornare alla finestra di dialogo **Nuovo progetto** o **Aggiungi elemento**, restituire **VS\_E\_WIZBACKBUTTONPRESS**:  
  
    ```  
    try  
    {  
       oCM   = window.external.ProjectObject.CodeModel;  
    }  
    catch(e)  
    {  
       var L_NCBError_Text = "Cannot access the Class View information   
    file. Class View information will not be available.";  
       window.external.ReportError(L_NCBError_Text);  
       return VS_E_WIZARDBACKBUTTONPRESS;  
    ```  
  
## Vedere anche  
 [File creati per la procedura guidata](../ide/files-created-for-your-wizard.md)   
 [Personalizzazione della procedura guidata](../ide/customizing-your-wizard.md)