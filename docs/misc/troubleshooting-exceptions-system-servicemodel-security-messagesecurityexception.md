---
title: "Risoluzione dei problemi relativi alle eccezioni: System.ServiceModel.Security.MessageSecurityException | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "System.ServiceModel.Security.MessageSecurityException (eccezione)"
  - "MessageSecurityException (eccezione)"
ms.assetid: 61ad69a1-ac50-49de-9a7c-8454a84ec5bd
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.ServiceModel.Security.MessageSecurityException
Quando <xref:System.ServiceModel.Security.MessageSecurityException> determina che un messaggio non è protetto correttamente oppure è stato alterato, viene generata l'eccezione [!INCLUDE[vsindigo](../misc/includes/vsindigo_md.md)]. Questo errore si verifica il più delle volte quando le condizioni indicate di seguito si verificano contemporaneamente:  
  
-   Si utilizza un riferimento al servizio WCF su una connessione remota, ad esempio Connessione desktop remoto o Servizi terminal, per comunicare con un servizio WCF \(con estensione svc\) in un sito Web o in un progetto di applicazione Web.  
  
-   Non si dispone di autorizzazioni di amministrazione per il sito remoto.  
  
-   Le richieste a localhost sul sito remoto vengono gestite dal server di sviluppo [!INCLUDE[vstecasp](../misc/includes/vstecasp_md.md)].  
  
## Suggerimenti associati  
 **Risolvere i problemi di autenticazione NTLM in caso di utilizzo del server di sviluppo ASP.Net.**  
 Nel server di sviluppo [!INCLUDE[vstecasp](../misc/includes/vstecasp_md.md)] di solito la sicurezza NTLM \(Windows NT Challenge\/Response\) è disattivata e ciò consente l'accesso anonimo. Per impostazione predefinita, quando si esegue una sessione di Servizi terminal o si utilizza una connessione remota, la sicurezza NTLM è attivata. Quando la sicurezza NTLM è attivata, tutte le richieste a localhost vengono convalidate in base alle credenziali dell'utente o al processo che ha avviato il server di sviluppo [!INCLUDE[vstecasp](../misc/includes/vstecasp_md.md)]. In questo modo è possibile ridurre le minacce per la sicurezza. L'autenticazione WCF viene eseguita comunque e l'utilizzo dei servizi WCF viene limitato esclusivamente agli account di amministratore.  
  
 Se un utente remoto può eseguire il sito Web utilizzando il server di sviluppo [!INCLUDE[vstecasp](../misc/includes/vstecasp_md.md)] e utilizzare contemporaneamente un servizio Web o un servizio WCF, è possibile creare un'associazione al servizio personalizzata o disattivare la sicurezza NTLM.  
  
> [!IMPORTANT]
>  La disattivazione della sicurezza NTLM non è un'operazione consigliata e può costituire una minaccia per la sicurezza.  
  
 Se si crea un'associazione al servizio personalizzata è possibile mantenere la sicurezza dell'autenticazione NTLM.  
  
 Utilizzare i passaggi indicati di seguito per creare un'associazione al servizio personalizzata per il servizio WCF.  
  
#### Per creare un'associazione al servizio personalizzata per il servizio WCF ospitato all'interno del server di sviluppo ASP.NET  
  
1.  Aprire il file Web.config del servizio WCF che genera l'eccezione.  
  
2.  Immettere le informazioni riportate di seguito nel file Web.config.  
  
    ```  
    <bindings> <customBinding> <binding name="Service1Binding"> <transactionFlow /> <textMessageEncoding /> <httpTransport authenticationScheme="Ntlm" /> </binding> </customBinding> </bindings>  
    ```  
  
3.  Salvare e chiudere il file Web.config.  
  
4.  Nel codice del servizio WCF o del servizio Web, sostituire il valore dell'endpoint con quanto segue:  
  
    ```  
    <endpoint address="" binding="customBinding" bindingConfiguration="Service1Binding" contract="IService1" />  
    ```  
  
     Ciò garantisce l'utilizzo dell'associazione personalizzata da parte del servizio.  
  
5.  Aggiungere un riferimento al servizio nell'applicazione Web che vi ha accesso. Nella finestra di dialogo **Aggiungi riferimento al servizio**, aggiungere un riferimento al servizio come già fatto per il servizio originario che generava l'eccezione.  
  
 Utilizzare la procedura indicata di seguito per disabilitare la sicurezza NTLM quando si utilizza un riferimento a un servizio WCF.  
  
> [!IMPORTANT]
>  La disattivazione della sicurezza NTLM non è un'operazione consigliata e può costituire una minaccia per la sicurezza.  
  
#### Per disattivare la sicurezza NTLM  
  
1.  In **Esplora soluzioni**, fare clic con il pulsante destro del mouse sul nome del sito Web e scegliere **Pagine delle proprietà**.  
  
2.  Scegliere **Opzioni di avvio**, quindi deselezionare la casella di controllo **Autenticazione NTLM**.  
  
3.  Fare clic su **OK**.  
  
## Vedere anche  
 <xref:System.ServiceModel.Security.MessageSecurityException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)