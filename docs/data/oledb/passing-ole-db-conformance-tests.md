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
ms.openlocfilehash: 9f78b16bc30651560137a39286460a8e5ceccd40
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62282816"
---
# <a name="passing-ole-db-conformance-tests"></a>Superamento dei test di conformità OLE DB

Per rendere più coerenti con i provider, Data Access SDK fornisce un set di test di conformità OLE DB. I test verificare tutti gli aspetti del provider e consentono una ragionevole garanzia che il provider funziona come previsto. È possibile trovare i test di conformità OLE DB in Microsoft Data Access SDK. Questa sezione è incentrata su cosa che fare per superare il test della conformità. Per informazioni sull'esecuzione dei test di conformità OLE DB, vedere il SDK.

## <a name="running-the-conformance-tests"></a>Esecuzione di test della conformità

In Visual C++ 6.0, i modelli di provider OLE DB aggiunta una serie di funzioni hook per consentire all'utente di controllare i valori e le proprietà. La maggior parte di queste funzioni sono state aggiunte in risposta ai test di conformità.

> [!NOTE]
> È necessario aggiungere diverse funzioni di convalida per il provider passare i test di conformità OLE DB.

Questo provider richiede due routine di convalida. La prima routine, `CRowsetImpl::ValidateCommandID`, fa parte della classe del set di righe. Viene chiamato durante la creazione del set di righe mediante i modelli di provider. L'esempio Usa questa routine per comunicare ai consumer che non supporta gli indici. La prima chiamata è per `CRowsetImpl::ValidateCommandID` (si noti che il provider utilizza il `_RowsetBaseClass` typedef aggiunto la mappa dell'interfaccia `CCustomRowset` in [supporto dei bookmark nel Provider di](../../data/oledb/provider-support-for-bookmarks.md), in modo da non dover digitare tale riga lunga del modello argomenti). Restituire quindi DB_E_NOINDEX successivamente, se il parametro di indice non è NULL (ciò indica che l'utente vuole usare un indice su Stati Uniti). Per altre informazioni sugli ID di comando, vedere la specifica OLE DB e cercare `IOpenRowset::OpenRowset`.

Il codice seguente è il `ValidateCommandID` routine di convalida:

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

La chiamata di modelli di provider di `OnPropertyChanged` metodo ogni volta che un utente modifica una proprietà nel gruppo di DBPROPSET_ROWSET. Se si desidera gestire le proprietà di altri gruppi, aggiungerli all'oggetto appropriato (vale a dire, DBPROPSET_SESSION passeranno `CCustomSession` classe).

Il codice di verifica innanzitutto se la proprietà è collegata a un altro. Se la proprietà deve essere incatenata, imposta la proprietà DBPROP_BOOKMARKS su `True`. Appendice C della specifica OLE DB contiene informazioni sulle proprietà. Queste informazioni anche indicano se la proprietà viene concatenata a un altro.

È possibile anche aggiungere il `IsValidValue` routine al codice. I modelli chiamano `IsValidValue` durante il tentativo di impostare una proprietà. È necessario sostituire questo metodo se è necessaria un'ulteriore elaborazione quando si imposta un valore della proprietà. È possibile avere uno dei metodi seguenti per ogni set di proprietà.

## <a name="see-also"></a>Vedere anche

[Tecniche avanzate del provider](../../data/oledb/advanced-provider-techniques.md)