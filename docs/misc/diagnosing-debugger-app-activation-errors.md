---
title: "Diagnosi degli errori di attivazione dell&#39;app del debugger | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.debug.error.app_activation_failure"
dev_langs: 
  - "FSharp"
  - "VB"
  - "CSharp"
  - "C++"
ms.assetid: 558ddc6d-0952-4617-84b8-0838717febcc
caps.latest.revision: 11
caps.handback.revision: 11
ms.author: "susanno"
manager: "douge"
---
# Diagnosi degli errori di attivazione dell&#39;app del debugger
È possibile che si verifichi uno dei seguenti errori quando si tenta di avviare un'app Windows Store nel debugger di Visual Studio:  
  
 **8061**  
  
```  
Unable to activate Windows Store app 'AppName'. The ProcessName process started, but the activation request failed with error 'ErrorNumber'  
```  
  
 **8062**  
  
```  
Unable to activate Windows Store app 'AppName'. The activation request failed with error 'ErrorNumber'  
```  
  
## Per eseguire la diagnostica di questi errori  
 Non esistono modi sicuri per risolvere questi errori.  Usare queste tecniche per eseguire la diagnostica del problema.  
  
### Usare il visualizzatore eventi  
  
1.  Aprire il Visualizzatore eventi \(nel menu Start di Windows cercare **Visualizzatore eventi**\).  Nel Visualizzatore eventi spostarsi nell'albero fino alla cartella **Application and Services Log\\Microsoft\\Windows\\Apps**.  
  
2.  Filtrare la visualizzazione in base agli ID evento: 5900\-6000  
  
3.  Esaminare il log ed esaminare quanto si è verificato.  
  
### Usare il debugger nativo  
 Configurare il progetto in modo che venga eseguito un debugger nativo.  
  
 In Visual Studio impostare **Tipo di debugger** su **Solo nativo** nella pagina **Debug** \(**Debug** in C\+\+ e JavaScript\) delle pagine delle proprietà del progetto di avvio.  
  
 Esaminare le eccezioni generate nella finestra di output.  Potrebbe essere necessario configurare il debugger affinché si arresti quando vengono generate queste eccezioni.  
  
## Risoluzione degli errori di licenza delle app  
 Potrebbe essere visualizzato l'errore di attivazione "Impossibile avviare l'app per un problema relativo alla licenza". Provare le seguenti soluzioni alternative:  
  
-   Nel menu **Compila** scegliere **Pulisci soluzione**, aprire la cartella della soluzione in Esplora file ed eliminare le cartelle **bin** e **obj**.  Scegliere quindi **Compila**, **Ricompila soluzione**.  Con la ricompilazione della soluzione vengono ricreate le cartelle necessarie.  
  
-   Selezionare l'app nella schermata Start e quindi scegliere Disinstalla sulla barra dell'app.  Pulire e ricompilare la soluzione.  
  
-   Aprire un prompt dei comandi con privilegi amministrativi e usare i comandi di PowerShell per rimuovere e reinstallare la licenza per sviluppatore.  Pulire e ricompilare la soluzione.  Vedere l'articolo che spiega come [ottenere una licenza per sviluppatori al prompt dei comandi](http://msdn.microsoft.com/library/windows/apps/Hh974578.aspx#getting_a_developer_license_at_a_command_prompt).