---
title: Creazione di un Provider OLE DB | Documenti Microsoft
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
ms.openlocfilehash: f649b5b4c79c4148d0aed026b044485ca2b1eaa7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="creating-an-ole-db-provider"></a>Creazione di un provider OLE DB
Il metodo consigliato per creare un provider OLE DB consiste nell'utilizzare le procedure guidate per creare un progetto ATL COM e un provider e quindi modificare i file utilizzando i modelli OLE DB. Come la personalizzazione del provider, è possibile impostare come commento indesiderata proprietà e aggiungere interfacce facoltative.  
  
 I passaggi di base sono descritti di seguito:  
  
1.  Utilizzare la creazione guidata progetto ATL per creare i file di progetto di base e la creazione guidata Provider OLE DB ATL per creare il provider (selezionare **Provider OLE DB ATL** dalla cartella di Visual C++ in **Aggiungi classe**).  
  
2.  Modificare il codice di `Execute` metodo in CMyProviderRS. Per un esempio, vedere [lettura di stringhe in un Provider OLE DB](../../data/oledb/reading-strings-into-the-ole-db-provider.md).  
  
3.  Modificare il mapping di proprietà in MyProviderDS. H, MyProviderSess. H e MyProviderRS. H. La procedura guidata crea i mapping di proprietà che contengono tutte le proprietà che è possibile implementare un provider. Eseguire il mapping di proprietà e rimuovere o impostare come commento le proprietà che non è necessario che il provider di supporto.  
  
4.  Aggiornare PROVIDER_COLUMN_MAP, che possono trovarsi in MyProviderRS. H. Per un esempio, vedere [l'archiviazione di stringhe In un Provider OLE DB](../../data/oledb/storing-strings-in-the-ole-db-provider.md).  
  
5.  Quando si è pronti per testare il provider, è possibile eseguirne il test quando si tenta di trovare il provider in un'enumerazione di provider. Per esempi di codice di test che consente di trovare un provider in un'enumerazione, vedere il [CATDB](http://msdn.microsoft.com/en-us/003d516b-2bf6-444e-8be5-4ebaa0b66046) e [DBVIEWER](http://msdn.microsoft.com/en-us/07620f99-c347-4d09-9ebc-2459e8049832) oppure l'esempio in [implementazione di un Consumer semplice](../../data/oledb/implementing-a-simple-consumer.md).  
  
6.  Aggiungere eventuali interfacce aggiuntive desiderate. Per un esempio, vedere [miglioramento di un Provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md).  
  
    > [!NOTE]
    >  Per impostazione predefinita, le procedure guidate di generano codice 0 conforme al livello OLE DB. Per garantire che l'applicazione rimanga livello 0 conforme, non rimuovere una delle interfacce generate dalla procedura guidata dal codice.  
  
## <a name="see-also"></a>Vedere anche  
 [CATDB](http://msdn.microsoft.com/en-us/003d516b-2bf6-444e-8be5-4ebaa0b66046)   
 [DBVIEWER](http://msdn.microsoft.com/en-us/07620f99-c347-4d09-9ebc-2459e8049832)