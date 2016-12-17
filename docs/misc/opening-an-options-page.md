---
title: "Apertura di una pagina di opzioni | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "aprire una pagina di opzioni"
  - "opzioni degli strumenti"
  - "pagina di opzioni"
ms.assetid: 6f24cbfa-288a-4a57-831b-bc82587de255
caps.latest.revision: 9
caps.handback.revision: 9
manager: "douge"
---
# Apertura di una pagina di opzioni
È possibile visualizzare una pagina di opzioni a livello di codice in modo che gli utenti del pacchetto possano configurarla durante l'installazione. Per modificare le impostazioni dopo l'installazione del pacchetto, un utente può comunque accedere alla pagina di opzioni usando la finestra di dialogo **Opzioni**.  
  
### Per visualizzare una pagina di opzioni personalizzate  
  
1.  Creare una pagina di opzioni. Per altre informazioni, vedere [Creazione di pagine di opzioni](../Topic/Creating%20Options%20Pages.md).  
  
2.  Ottenere l'oggetto <xref:System.Type> della pagina di opzioni applicando la parola chiave `typeof` al nome della classe che definisce la pagina di opzioni.  
  
3.  Chiamare il metodo <xref:Microsoft.VisualStudio.Shell.Package.ShowOptionPage%2A> usando l'oggetto <xref:System.Type> della pagina di opzioni come parametro.  
  
     L'esempio seguente mostra una pagina di opzioni denominata **HelloWorldOptions**.  
  
     [!code-cs[UI_UserSettings_ToolsOptionPages#5](../misc/codesnippet/CSharp/opening-an-options-page_1.cs)]
     [!code-vb[UI_UserSettings_ToolsOptionPages#5](../misc/codesnippet/VisualBasic/opening-an-options-page_1.vb)]  
  
### Per visualizzare una pagina di opzioni definita da Visual Studio  
  
1.  Nella sottochiave del Registro di sistema HKEY\_LOCAL\_MACHINE\\SOFTWARE\\Microsoft\\VisualStudio\\9.0\\ToolsOptionsPages\\ individuare il nodo della pagina di opzioni che si vuole visualizzare, quindi copiare il relativo GUID, ovvero il valore della chiave Page.  
  
2.  Creare un'istanza di <xref:System.ComponentModel.Design.CommandID> che presenta le costanti <xref:Microsoft.VisualStudio.VSConstants.GUID_VSStandardCommandSet97> e <xref:Microsoft.VisualStudio.VSConstants.VSStd97CmdID> come parametri.  
  
     In questo modo viene specificata la finestra di dialogo **Opzioni**.  
  
3.  Chiamare il metodo <xref:System.ComponentModel.Design.MenuCommandService.GlobalInvoke%2A> usando l'istanza di <xref:System.ComponentModel.Design.CommandID> e la stringa GUID come parametri.  
  
     L'esempio seguente mostra la scheda **Generale** della pagina di opzioni **Editor di testo**.  
  
     [!code-cs[UI_UserSettings_ToolsOptionPages#6](../misc/codesnippet/CSharp/opening-an-options-page_2.cs)]
     [!code-vb[UI_UserSettings_ToolsOptionPages#6](../misc/codesnippet/VisualBasic/opening-an-options-page_2.vb)]