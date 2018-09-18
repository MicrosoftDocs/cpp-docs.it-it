---
title: Creazione di un Provider OLE DB | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB providers, creating
- OLE DB provider templates, creating providers
ms.assetid: f73017c3-c89f-41a6-a306-ea992cf6092c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 441fdfcf98e08b30e1049cac986ebc9e0f7df682
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46030404"
---
# <a name="creating-an-ole-db-provider"></a>Creazione di un provider OLE DB

Il metodo consigliato per creare un provider OLE DB è usare le procedure guidate per creare un progetto ATL COM e un provider e quindi modificare i file usando i modelli OLE DB. Quando si personalizza il provider, è possibile commento indesiderato delle proprietà e aggiungere le interfacce facoltative.  
  
I passaggi di base sono descritti di seguito:  
  
1. Usare la creazione guidata progetto ATL per creare i file di progetto di base e la creazione guidata Provider OLE DB ATL per creare il provider (selezionare **Provider OLE DB ATL** dalla cartella in Visual C++ **Aggiungi classe**).  
  
1. Modificare il codice nel `Execute` metodo CMyProviderRS. Per un esempio, vedere [durante la lettura di stringhe in un Provider OLE DB](../../data/oledb/reading-strings-into-the-ole-db-provider.md).  
  
1. Modificare i mapping di proprietà in MyProviderDS. H, MyProviderSess. H e MyProviderRS. H. La procedura guidata consente di creare mappe delle proprietà che contengono tutte le proprietà che è possibile implementare un provider. Scorrere le mappe delle proprietà e rimuovere o rimuovere i commenti per le proprietà che non è necessario che il provider di supporto.  
  
1. Aggiornare PROVIDER_COLUMN_MAP, che è reperibile in MyProviderRS. H. Per un esempio, vedere [memorizzazione di stringhe In un Provider OLE DB](../../data/oledb/storing-strings-in-the-ole-db-provider.md).  
  
1. Quando si è pronti per testare il provider, è possibile eseguirne il test quando si tenta di trovare il provider in un'enumerazione di provider. Per esempi di codice di test che consente di trovare un provider in un'enumerazione, vedere la [CATDB](https://github.com/Microsoft/VCSamples) e [DBVIEWER](https://github.com/Microsoft/VCSamples) oppure l'esempio nella [implementazione di un Consumer semplice](../../data/oledb/implementing-a-simple-consumer.md).  
  
1. Aggiungere eventuali interfacce aggiuntive desiderate. Per un esempio, vedere [miglioramento di un Provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md).  
  
    > [!NOTE]
    >  Per impostazione predefinita, le procedure guidate di generano il codice al livello 0 conforme a OLE DB. Per assicurarsi che l'applicazione a livello 0 conforme, non rimuovere una delle interfacce generate dalla procedura guidata dal codice.  
  
## <a name="see-also"></a>Vedere anche  

[CATDB](https://github.com/Microsoft/VCSamples)<br/>
[DBVIEWER](https://github.com/Microsoft/VCSamples)