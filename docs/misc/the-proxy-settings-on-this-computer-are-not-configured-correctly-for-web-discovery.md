---
title: "Le impostazioni proxy del computer non sono configurate correttamente per l&#39;individuazione Web. | Microsoft Docs"
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
  - "vs.message.VB_E_MUSTSPECIFYPROXYSERVER"
  - "vs.WebDiscoveryProxyHelp"
ms.assetid: aea2cc20-9180-47cb-b1ed-78fa5f8a407f
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Le impostazioni proxy del computer non sono configurate correttamente per l&#39;individuazione Web.
Questo errore viene visualizzato nella finestra di dialogo Aggiungi riferimento Web se la distribuzione avviene in un computer situato dietro un firewall e se non è stato specificato in modo esplicito un server proxy per le connessioni Internet Explorer. È necessario specificare in modo esplicito l'indirizzo e porta del server proxy nella rete per rendere disponibili i servizi esterni al firewall nel browser Web nella finestra di dialogo Aggiungi riferimento Web. L'opzione di rilevamento automatico del proxy per le connessioni Internet Explorer viene ignorata da .NET Framework. Potrebbe essere necessario chiedere all'amministratore di rete le necessarie informazioni sul proxy.  
  
 Per altre informazioni su "Rilevamento automatico di firewall e client proxy Web", vedere l'indirizzo: [http:\/\/www.microsoft.com\/technet\/prodtechnol\/isa\/2004\/plan\/automaticdiscovery.mspx](http://www.microsoft.com/technet/prodtechnol/isa/2004/plan/automaticdiscovery.mspx)  
  
### Per specificare un server proxy per Internet Explorer  
  
1.  Scegliere **Opzioni** dal menu **Strumenti**.  
  
2.  Nella finestra di dialogo **Opzioni** scegliere **Ambiente**, quindi **Web browser**.  
  
3.  Fare clic su **Opzioni di Internet Explorer**.  
  
4.  Nella scheda **Connessioni** fare clic su **Impostazioni LAN**.  
  
5.  Deselezionare **Rileva automaticamente impostazioni**.  
  
6.  Nell'area **Server proxy** selezionare **Utilizza un server proxy server per le connessioni LAN. Queste impostazioni non verranno applicate alle connessioni remote o VPN.**.  
  
7.  Specificare il numero di porta e l'indirizzo corrispondenti alla propria rete.  
  
8.  Fare clic su **OK** quindi scegliere **OK** e poi di nuovo **OK**.  
  
9. Dal menu **File**, scegliere **Esci** e quindi riaprire Visual Studio.  
  
## Vedere anche  
 [NIB: Finestra di dialogo Aggiungi riferimento Web](http://msdn.microsoft.com/it-it/bdf05776-c591-40af-bfd7-e1e2aa1e87b5)   
 [NIB: Procedura: Aggiungere e rimuovere riferimenti Web.](http://msdn.microsoft.com/it-it/a7ddaa5d-4672-405b-91b3-39de65d7e3a2)   
 [Programming the Web with XML Web Services](http://msdn.microsoft.com/it-it/2d651a26-73df-4b39-85fa-7913a7d6bee4)