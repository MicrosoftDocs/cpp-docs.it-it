---
title: Esecuzione dell'automazione remota con AUTOCLIK e AUTODRIV | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- AUTOCLIK sample [MFC]
ms.assetid: 8900c0de-8dba-4f0a-8d9e-7db77a1f4f46
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 791655047eaf07732e1e006e8cc3ea8e7dec4727
ms.sourcegitcommit: fa7a6dccddce3747389c91277a53e296f905305c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="running-remote-automation-using-autoclik-and-autodriv"></a>Esecuzione dell'automazione remota con AUTOCLIK e AUTODRIV
AUTOCLIK è una semplice applicazione di esempio di server automazione che è possibile utilizzare come base da cui per ulteriori informazioni su automazione remota. AUTODRIV è una semplice applicazione client di automazione che controlla AUTOCLIK. È possibile utilizzarli per dimostrare l'automazione remota.  
  
#### <a name="to-install-autoclikexe-on-two-machines-and-drive-it-using-remote-automation"></a>Per installare i AUTOCLIK. EXE su due computer e controllarlo utilizzando l'automazione remota  
  
1.  Installare il [AUTOCLIK](../visual-cpp-samples.md) applicazione nel computer di sviluppo di esempio.  
  
2.  Compilare i AUTOCLIK. FILE EXE.  
  
3.  Eseguire i AUTOCLIK. EXE in autonoma modo e quindi arrestarlo. Questo verrà registrato come un server di automazione.  
  
4.  Copiare i AUTOCLIK. EXE in un computer remoto, eseguirlo e quindi arrestarlo.  
  
5.  Eseguire AUTODRIV. EXE locale del computer e verificare che l'esecuzione inizia AUTOCLIK. FILE EXE. Per ulteriori informazioni su AUTODRIV. EXE, vedere [AUTOCLIK](../visual-cpp-samples.md).  
  
6.  Nel computer remoto, avviare AUTMGR32. EXE (Gestione automazione).  
  
7.  Nel computer remoto, avviare RACMGR32. EXE (gestione connessione di automazione remota).  
  
8.  In Remote Automation Connection Manager, selezionare i AUTOCLIK. Document dal **classi OLE** elenco.  
  
9. Scegliere un criterio di sicurezza del sistema di **accesso Client** tab per concedere l'accesso client a AUTOCLIK. Document.  
  
10. Nel computer locale, avviare RACMGR32. File EXE e selezionare AUTOCLIK. Document dal **classi OLE** elenco.  
  
11. Dal **connessione Server** scheda, scegliere l'indirizzo di rete del computer remoto e il protocollo di rete appropriato.  
  
12. Con AUTOCLIK. Document ancora selezionato nel **classi OLE** nella casella di riepilogo, scegliere il **remoto** comando il `Register` menu.  
  
13. Nel computer locale, eseguire AUTODRIV. File EXE o i AUTOCLIK equivalente. Progetto di Visual Basic di codice MAK, se si desidera disporre di Visual Basic, anziché un MFC, client.  
  
 Nel computer remoto, deve ora essere in grado di visualizzare i AUTOCLIK l'esecuzione di comandi avviati dal client locale.  
  
## <a name="see-also"></a>Vedere anche  
 [Automazione remota](../mfc/remote-automation.md)

