---
description: 'Altre informazioni su: creazione di un provider di OLE DB'
title: Creazione di un provider OLE DB
ms.date: 10/13/2018
helpviewer_keywords:
- OLE DB providers, creating
- OLE DB provider templates, creating providers
ms.assetid: f73017c3-c89f-41a6-a306-ea992cf6092c
ms.openlocfilehash: 69dc9311a79f2739636633b2d268343a92d2dac9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97287801"
---
# <a name="creating-an-ole-db-provider"></a>Creazione di un provider OLE DB

Il metodo consigliato per creare un provider di OLE DB consiste nell'utilizzare le procedure guidate per creare un progetto COM ATL e un provider e quindi modificare i file utilizzando i modelli di OLE DB. Quando si Personalizza il provider, è possibile impostare come commento le proprietà indesiderate e aggiungere interfacce facoltative.

I passaggi di base sono i seguenti:

1. Utilizzare la **creazione guidata progetto ATL** per creare i file di progetto di base e la **creazione guidata provider OLEDB ATL** per creare il provider (selezionare il **provider ATL OLEDB** dalla   >  cartella **Visual C++**  >  **ATL** installata in **Aggiungi nuovo elemento**).

   > [!NOTE]
   > Prima di aggiungere un **provider OLEDB ATL**, il progetto deve includere il supporto MFC.

1. Modificare il codice nel `Execute` metodo in [CCustomRowset (Customers. h)](cmyproviderrowset-myproviderrs-h.md). Per un esempio, vedere [lettura di stringhe in un provider di OLE DB](../../data/oledb/reading-strings-into-the-ole-db-provider.md).

1. Modificare le mappe delle proprietà in [CustomDS. h](cmyprovidersource-myproviderds-h.md), [CustomSess. h](cmyprovidersession-myprovidersess-h.md)e [Customers. h](cmyproviderrowset-myproviderrs-h.md). La procedura guidata crea mappe delle proprietà che contengono tutte le proprietà che un provider può implementare. Scorrere le mappe delle proprietà e rimuovere o impostare come commento le proprietà che non devono essere supportate dal provider.

1. Aggiornare il PROVIDER_COLUMN_MAP, disponibile in [CCustomRowset (Customers. h)](cmyproviderrowset-myproviderrs-h.md). Per un esempio, vedere [archiviazione di stringhe nel Provider OLE DB](../../data/oledb/storing-strings-in-the-ole-db-provider.md).

1. Quando si è pronti per testare il provider, è possibile testarlo tentando di trovare il provider in un'enumerazione del provider. Per esempi di codice di test che consente di trovare un provider in un'enumerazione, vedere gli esempi [catdb](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/catdb) e [DBVIEWER](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/dbviewer) o l'esempio in [implementazione di un consumer semplice](../../data/oledb/implementing-a-simple-consumer.md).

1. Aggiungere le interfacce aggiuntive desiderate. Per un esempio, vedere [miglioramento del provider di Read-Only semplice](../../data/oledb/enhancing-the-simple-read-only-provider.md).

   > [!NOTE]
   > Per impostazione predefinita, le procedure guidate generano codice OLE DB conforme a livello 0. Per assicurarsi che l'applicazione rimanga conforme a livello 0, non rimuovere le interfacce generate dalla procedura guidata dal codice.

## <a name="see-also"></a>Vedi anche

[Esempio CatDB: Visualizzatore dello schema dell'origine dati](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/catdb)<br/>
[Esempio DBViewer: browser database](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/dbviewer)
