---
title: "/errorReport (Segnala gli errori interni del compilatore) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.ErrorReporting"
  - "/errorreport"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/errorReport (opzione del compilatore) [C++]"
  - "-errorReport (opzione del compilatore) [C++]"
ms.assetid: 819828f8-b0a5-412c-9c57-bf822f17e667
caps.latest.revision: 21
caps.handback.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /errorReport (Segnala gli errori interni del compilatore)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consentire di fornire informazioni su errori interni del compilatore \(ICE\) direttamente a Microsoft.  
  
## Sintassi  
  
```  
/errorReport:[ none | prompt | queue | send ]  
```  
  
## Argomenti  
 **none**  
 Le segnalazioni sugli errori interni del compilatore non verranno raccolte o inviate a Microsoft.  
  
 **prompt**  
 Chiede di inviare una segnalazione quando si riceve un errore interno del compilatore.  **prompt** è l'impostazione predefinita quando un'applicazione viene compilata nell'ambiente di sviluppo.  
  
 **queue**  
 Accoda la segnalazione errori.  Quando si esegue l'accesso con privilegi di amministratore, viene visualizzata una finestra nella quale è possibile segnalare gli eventuali errori che si sono verificati dall'ultimo accesso \(non verrà richiesto di inviare segnalazioni di errori più di una volta ogni tre giorni\).  **queue** è l'impostazione predefinita quando si compila un'applicazione da un prompt di comando.  
  
 **send**  
 Invia automaticamente a Microsoft le segnalazioni di errori interni del compilatore.  Per abilitare questa opzione, è necessario innanzitutto accettare le Informazioni raccolta dati Microsoft.  La prima volta che si specifica **\/errorReport:send** in un computer, verrà visualizzato un messaggio del compilatore che indirizzerà in un sito Web contenente i criteri di raccolta dati di Microsoft.  
  
 Questa opzione dipende dalle impostazione del Registro di sistema.  Per informazioni su come impostare i valori appropriati nel Registro di sistema, vedere [Come abilitare gli errori automatica in strumenti da riga di comando di Visual Studio 2008](http://go.microsoft.com/fwlink/?LinkID=184695) il sito Web MSDN.  
  
## Note  
 Viene restituito un errore interno del compilatore \(ICE\) quando non è possibile elaborare un file del codice sorgente.  Quando si verifica un ICE, il compilatore non genera né un file di output né informazioni di diagnostica utili per correggere il codice.  
  
 Nelle versioni precedenti a ogni errore interno del compilatore lo sviluppatore veniva invitato a chiamare il Servizio supporto tecnico Microsoft per segnalare il problema.  Con **\/errorReport** è possibile fornire informazioni sugli errori interni del compilatore direttamente a Microsoft.  Le segnalazioni errori consentono di migliorare le future versioni del compilatore.  
  
 La capacità di un utente di inviare report dipende dalle autorizzazioni relative ai criteri utente e del computer.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per ulteriori informazioni, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Avanzate**.  
  
4.  Modificare la proprietà **Segnalazione errori**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ErrorReporting%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)