---
title: Superamento dei test di conformità OLE DB
ms.date: 11/04/2016
helpviewer_keywords:
- testing, OLE DB providers
- testing providers
- conformance testing
- conformance testing [OLE DB]
- OLE DB providers, testing
ms.assetid: d1a4f147-2edd-476c-b452-0e6a0ac09891
ms.openlocfilehash: eda4dccda147ddd4776bb56e649f539a7550abd1
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80209776"
---
# <a name="passing-ole-db-conformance-tests"></a>Superamento dei test di conformità OLE DB

Per rendere i provider più coerenti, l'SDK di accesso ai dati fornisce un set di test di conformità OLE DB. I test controllano tutti gli aspetti del provider e assicurano che il provider funzioni come previsto. È possibile trovare i test di conformità OLE DB in Microsoft Data Access SDK. Questa sezione è incentrata sulle operazioni da eseguire per superare i test di conformità. Per informazioni sull'esecuzione dei test di conformità OLE DB, vedere l'SDK.

## <a name="running-the-conformance-tests"></a>Esecuzione dei test di conformità

In Visual C++ 6,0, i modelli di provider OLE DB aggiungono una serie di funzioni di hook che consentono di controllare i valori e le proprietà. La maggior parte di queste funzioni è stata aggiunta in risposta ai test di conformità.

> [!NOTE]
> È necessario aggiungere diverse funzioni di convalida per il provider per superare i test di conformità del OLE DB.

Questo provider richiede due routine di convalida. La prima routine, `CRowsetImpl::ValidateCommandID`, fa parte della classe del set di righe. Viene chiamato durante la creazione del set di righe dai modelli di provider. Nell'esempio questa routine viene utilizzata per indicare ai consumer che non supporta gli indici. La prima chiamata consiste nel `CRowsetImpl::ValidateCommandID` (si noti che il provider usa il typedef `_RowsetBaseClass` aggiunto nella mappa dell'interfaccia per `CCustomRowset` nel [supporto del provider per i segnalibri](../../data/oledb/provider-support-for-bookmarks.md), pertanto non è necessario digitare la riga estesa degli argomenti di modello). Successivamente, restituire DB_E_NOINDEX se il parametro di indice non è NULL (indica che l'utente desidera utilizzare un indice in USA). Per ulteriori informazioni sugli ID comando, vedere la specifica OLE DB e cercare `IOpenRowset::OpenRowset`.

Il codice seguente è la routine di convalida `ValidateCommandID`:

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

I modelli di provider chiamano il metodo `OnPropertyChanged` ogni volta che un utente modifica una proprietà nel gruppo DBPROPSET_ROWSET. Se si desidera gestire le proprietà per altri gruppi, aggiungerle all'oggetto appropriato, ovvero DBPROPSET_SESSION controlli vengono inseriti nella classe `CCustomSession`.

Il codice verifica prima di tutto se la proprietà è collegata a un'altra. Se la proprietà viene concatenata, imposta la proprietà DBPROP_BOOKMARKS su `True`. L'Appendice C della specifica OLE DB contiene informazioni sulle proprietà. Queste informazioni indicano anche se la proprietà è concatenata a un'altra.

Potrebbe anche essere necessario aggiungere la routine `IsValidValue` al codice. I modelli chiamano `IsValidValue` quando si tenta di impostare una proprietà. È necessario eseguire l'override di questo metodo se è necessaria un'elaborazione aggiuntiva quando si imposta un valore della proprietà. È possibile disporre di uno di questi metodi per ogni set di proprietà.

## <a name="see-also"></a>Vedere anche

[Tecniche avanzate del provider](../../data/oledb/advanced-provider-techniques.md)
