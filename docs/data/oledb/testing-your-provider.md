---
title: Test del Provider | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- testing, OLE DB providers
- testing providers
- OLE DB providers, testing
ms.assetid: bf824fe4-81af-4ffb-beb3-4fa2928dc450
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: a1c97db59b88672f390fc88b78f8d5f843ca7099
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="testing-your-provider"></a>Test del provider
Prima di rilasciare un provider, è necessario eseguire i test seguenti, nell'ordine indicato. Questi test per assicurarsi che il provider funzioni correttamente per la maggior parte dei potenziali utenti.  
  
1.  Testare il provider utilizzando un [consumer](../../data/oledb/creating-an-ole-db-consumer.md) applicazione scritta con i modelli consumer OLE DB. Il consumer di test dovrebbe coprire tutte le aree funzionali del provider (tutto il codice che è stato aggiunto o modificato).  
  
2.  Testare il provider utilizzando un'applicazione consumer scritta con ADO. La maggior parte degli sviluppatori (soprattutto agli sviluppatori di Microsoft Visual Basic e c# Microsoft) utilizzano ADO o ADO.NET per le applicazioni consumer. Il consumer di test dovrebbe coprire tutte le aree funzionali del provider. Per un esempio di un'applicazione consumer ADO, vedere [esempi di codice ADO in Microsoft Visual Basic](https://msdn.microsoft.com/en-us/library/ms807514.aspx).  
  
3.  Eseguire i test di conformità OLE DB (inclusi i test di conformità di ADO) per assicurarsi che il provider soddisfa il livello 0 standard per i provider OLE DB. (Per una spiegazione del livello 0, cercare "OLE DB livello 0 conformità test" nel [Guida per programmatori OLE DB](http://go.microsoft.com/fwlink/?linkid=121548). Questi test e la relativa documentazione sono inclusi in Visual C++ in Data Access SDK. Questi test consentono inoltre di garantire che il provider venga eseguita correttamente quando viene aggregato da altri [ai provider di servizi](../../data/oledb/ole-db-resource-pooling-and-services.md) e sono particolarmente utili se si modifica o aggiunta di proprietà. Per ulteriori informazioni sui test di conformità, vedere il file Leggimi per Data Access SDK, che si trova in uno dei CD di Visual Studio.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)