---
description: 'Altre informazioni su: passaggio di test di conformità OLE DB'
title: Superamento dei test di conformità OLE DB
ms.date: 11/04/2016
helpviewer_keywords:
- testing, OLE DB providers
- testing providers
- conformance testing
- conformance testing [OLE DB]
- OLE DB providers, testing
ms.assetid: d1a4f147-2edd-476c-b452-0e6a0ac09891
ms.openlocfilehash: d2a5b788b3a118293800b02a9383fbde9845cfa5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97286723"
---
# <a name="passing-ole-db-conformance-tests"></a>Superamento dei test di conformità OLE DB

Per rendere i provider più coerenti, l'SDK di accesso ai dati fornisce un set di test di conformità OLE DB. I test controllano tutti gli aspetti del provider e assicurano che il provider funzioni come previsto. È possibile trovare i test di conformità OLE DB in Microsoft Data Access SDK. Questa sezione è incentrata sulle operazioni da eseguire per superare i test di conformità. Per informazioni sull'esecuzione dei test di conformità OLE DB, vedere l'SDK.

## <a name="running-the-conformance-tests"></a>Esecuzione dei test di conformità

In Visual C++ 6,0, i modelli di provider di OLE DB aggiungono alcune funzioni di hook che consentono di controllare i valori e le proprietà. La maggior parte di queste funzioni è stata aggiunta in risposta ai test di conformità.

> [!NOTE]
> È necessario aggiungere diverse funzioni di convalida per il provider per superare i test di conformità del OLE DB.

Questo provider richiede due routine di convalida. La prima routine, `CRowsetImpl::ValidateCommandID` , fa parte della classe del set di righe. Viene chiamato durante la creazione del set di righe dai modelli di provider. Nell'esempio questa routine viene utilizzata per indicare ai consumer che non supporta gli indici. La prima chiamata a è `CRowsetImpl::ValidateCommandID` (si noti che il provider usa il `_RowsetBaseClass` typedef aggiunto nella mappa dell'interfaccia per il `CCustomRowset` supporto del [provider per i segnalibri](../../data/oledb/provider-support-for-bookmarks.md), pertanto non è necessario digitare la riga estesa degli argomenti di modello). Successivamente, restituire DB_E_NOINDEX se il parametro di indice non è NULL (indica che l'utente desidera utilizzare un indice in USA). Per ulteriori informazioni sugli ID comando, vedere la specifica OLE DB e cercare `IOpenRowset::OpenRowset` .

Il codice seguente è la `ValidateCommandID` routine di convalida:

```cpp
/////////////////////////////////////////////////////////////////////
// CustomRS.H
// Class: CCustomRowset

HRESULT ValidateCommandID(DBID* pTableID, DBID* pIndexID)
{
   HRESULT hr = _RowsetBaseClass::ValidateCommandID(pTableID, pIndexID);
   if (hr != S_OK)
      return hr;

   if (pIndexID != NULL)
      return DB_E_NOINDEX;    // Doesn't support indexes

   return S_OK;
}
```

I modelli di provider chiamano il `OnPropertyChanged` Metodo ogni volta che un utente modifica una proprietà nel gruppo DBPROPSET_ROWSET. Se si desidera gestire le proprietà per altri gruppi, è necessario aggiungerle all'oggetto appropriato, ovvero DBPROPSET_SESSION controlli vengono inseriti nella `CCustomSession` classe.

Il codice verifica prima di tutto se la proprietà è collegata a un'altra. Se la proprietà viene concatenata, imposta la proprietà DBPROP_BOOKMARKS su `True` . L'Appendice C della specifica OLE DB contiene informazioni sulle proprietà. Queste informazioni indicano anche se la proprietà è concatenata a un'altra.

Potrebbe anche essere necessario aggiungere la `IsValidValue` routine al codice. I modelli chiamano `IsValidValue` quando si tenta di impostare una proprietà. È necessario eseguire l'override di questo metodo se è necessaria un'elaborazione aggiuntiva quando si imposta un valore della proprietà. È possibile disporre di uno di questi metodi per ogni set di proprietà.

## <a name="see-also"></a>Vedi anche

[Tecniche avanzate per i provider](../../data/oledb/advanced-provider-techniques.md)
