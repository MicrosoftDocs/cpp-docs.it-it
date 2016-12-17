---
title: "MSBuild Error MSB3482 | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.SignFile.SignToolError"
helpviewer_keywords: 
  - "MSB3482"
ms.assetid: fd09371f-2658-4534-affa-edb485575f1a
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3482
**MSB3482: Errore durante la firma: '\<errore\>'.**  
  
 Quando si esegue la pubblicazione usando la distribuzione ClickOnce o si usa SignTool per firmare i manifesti, è possibile che si verifichi questo errore, generato da SignTool. In questo articolo sono elencati i problemi comuni.  
  
 **Errore durante la firma: "Il valore non può essere Null. Nome parametro: strongNameKey".**  
  
 Questo errore potrebbe venire visualizzato nell'elenco di errori durante la distribuzione ClickOnce. Il problema è causato dalla selezione di una chiave di firma non valida. In genere si sta provando a usare una chiave senza crittografia RSA. SignTool supporta solo la crittografia delle chiavi RSA.  
  
 Per correggere l'errore, ottenere una chiave con crittografia RSA abilitata per la firma del codice.  
  
 **Errore durante la firma: "Impossibile creare una catena di certificati per un'autorità radice attendibile".**  
  
 Questo errore potrebbe venire visualizzato nell'elenco di errori durante la distribuzione ClickOnce. Il problema è dovuto al fatto che il certificato ha una catena o un'autorità radice non attendibile nel computer dell'utente. Ciò si verifica in genere quando si spostano i certificati o le chiavi da un computer a un altro.  
  
 Per correggere l'errore, installare il "certificato radice" dell'Autorità di certificazione \(CA\) che lo ha creato. In genere, è possibile visitare il sito Web del fornitore CA e scaricare di nuovo il certificato, come necessario.  
  
 **Errore durante la firma: "Impossibile firmare ...\\setup.exe. Errore SignTool: ISignCode::Sign ha restituito l'errore: 0x80880253 Il certificato del firmatario non è valido per la firma".**  
  
 Questo errore potrebbe venire visualizzato nell'elenco di errori durante la distribuzione ClickOnce.  
  
 Il problema è probabilmente causato da un certificato che non rientra nelle date valide, ad esempio se si ha un certificato scaduto.  
  
 Per correggere l'errore, ottenere un certificato aggiornato con una data valida.  
  
 Per informazioni su come aggiornare il certificato, vedere l'articolo 925521, "Viene visualizzato un messaggio di errore quando si tenta di aggiornare un'applicazione di Visual Studio 2005 ClickOnce alla scadenza del certificato utilizzato per firmare l'installazione" nella Microsoft Knowledge Base all'indirizzo [http:\/\/support.microsoft.com](http://support.microsoft.com/kb/925521).  
  
 **Keyset non esistente.**  
  
 Potrebbe esserci una mancata corrispondenza tra il file PFX e il certificato. Provare a eliminare e reinstallare il certificato e\/o ricreare il file PFX.  
  
 **Chiave non utilizzabile nello stato specificato**  
  
 Vedere http:\/\/blogs.msdn.com\/b\/smondal\/archive\/2012\/05\/08\/an\-error\-occurred\-while\-signing\-key\-not\-valid\-for\-use\-in\-specified\-state.aspx  
  
 **Parametro non corretto.**  
  
 La compilazione potrebbe essere in esecuzione in un servizio o in un account utente diverso da quello che ha importato il certificato. Provare a disattivare le impostazioni dei criteri di sicurezza locali che richiedono la protezione della chiave privata.  Eliminare quindi e importare di nuovo il certificato per l'account utente della compilazione.  
  
 **Impossibile completare l'operazione richiesta.  Il computer deve essere trusted per la delega e l'account utente corrente deve essere configurato per consentire la delega.**  
  
 Vedere [questo post di blog MSDN](http://technet.microsoft.com/en-us/library/cc782684\(v=ws.10\).aspx).  
  
## Vedere anche  
 [Introduzione alla firma del codice](https://msdn.microsoft.com/en-us/library/ms537361\(v=vs.85\).aspx)   
 [SignTool.exe \(Sign Tool\)](../Topic/SignTool.exe%20\(Sign%20Tool\).md)   
 [Pagina Firma, Progettazione progetti](../Topic/Signing%20Page,%20Project%20Designer.md)   
 [Procedura: Firmare un assembly \(Visual Studio\)](http://msdn.microsoft.com/it-it/f468a7d3-234c-4353-924d-8e0ae5896564)   
 [Procedura: firmare un assembly con un nome sicuro](../Topic/How%20to:%20Sign%20an%20Assembly%20with%20a%20Strong%20Name.md)   
 [Assembly con nomi sicuri](../Topic/Strong-Named%20Assemblies.md)   
 [Firma con nome sicuro per applicazioni gestite](http://msdn.microsoft.com/it-it/5fef3490-c519-4363-94fd-8b1ad260dab5)   
 [Elemento \<PackageFiles\>](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)