---
title: Impostazione di proprietà nel provider
ms.date: 10/29/2018
helpviewer_keywords:
- OLE DB providers, properties
- properties [C++], OLE DB provider
ms.assetid: 26a8b493-7ec4-4686-96d0-9ad5d2bca5ac
ms.openlocfilehash: 149e6f37de64a1133258f5bbc550896a4fb22a9f
ms.sourcegitcommit: c40469825b6101baac87d43e5f4aed6df6b078f5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2018
ms.locfileid: "51556660"
---
# <a name="setting-properties-in-your-provider"></a>Impostazione di proprietà nel provider

Trovare il gruppo di proprietà e l'ID di proprietà per la proprietà desiderata. Per altre informazioni, vedere [proprietà OLE DB](https://docs.microsoft.com/previous-versions/windows/desktop/ms722734(v=vs.85)) nel **riferimento per programmatori OLE DB**.

Nel codice del provider generato dalla procedura guidata, trovare il mapping di proprietà corrispondente al gruppo di proprietà. Il nome del gruppo di proprietà in genere corrisponde al nome dell'oggetto. Le proprietà di comando e set di righe sono reperibile nel comando o set di righe. proprietà di inizializzazione e di origine dati è reperibile nell'oggetto origine dati.

Nel mapping della proprietà, aggiungere un [PROPERTY_INFO_ENTRY_EX](../../data/oledb/property-info-entry-ex.md) macro. PROPERTY_INFO_ENTRY_EX accetta quattro parametri:

- L'ID di proprietà corrispondente per la proprietà. Rimuovere i primi sette caratteri DBPROP ("_") dall'inizio del nome della proprietà. Ad esempio, se si desidera aggiungere `DBPROP_MAXROWS`, passare `MAXROWS` come primo elemento. Se si tratta di una proprietà personalizzata, passare il nome completo di GUID (ad esempio, `DBMYPROP_MYPROPERTY`).

- Il tipo di variante della proprietà (in [proprietà OLE DB](https://docs.microsoft.com/previous-versions/windows/desktop/ms722734(v=vs.85)) nel **riferimento per programmatori OLE DB**). Immettere il tipo (ad esempio VT_BOOL o VT_I2) VT _ corrispondente al tipo di dati.

- Flag per indicare se la proprietà è leggibile e scrivibile e il gruppo a cui appartiene. Ad esempio, il codice seguente indica una proprietà di lettura/scrittura che appartengono al gruppo di set di righe:

    ```cpp
    DBPROPFLAGS_ROWSET | DBPROPFLAGS_READ | DBPROPFLAGS_WRITE
    ```

- Valore di base della proprietà. Potrebbe trattarsi di `VARIANT_FALSE` per un valore booleano digitare o zero per un tipo integer, ad esempio. La proprietà ha questo valore a meno che non venga modificato.

    > [!NOTE]
    > Alcune proprietà sono connessi o concatenate ad altre proprietà, ad esempio i segnalibri o l'aggiornamento. Quando un consumer imposta una proprietà su true, potrebbe essere impostata anche un'altra proprietà. I modelli di provider OLE DB supportano questo meccanismo tramite il metodo [CUtlProps:: OnPropertyChanged](../../data/oledb/cutlprops-onpropertychanged.md).

## <a name="properties-ignored-by-microsoft-ole-db-providers"></a>Proprietà ignorata dal provider Microsoft OLE DB

I provider Microsoft OLE DB ignora le proprietà OLE DB seguenti:

- `DBPROP_MAXROWS` funziona solo per i provider di sola lettura (vale a dire, dove `DBPROP_IRowsetChange` e `DBPROP_IRowsetUpdate` vengono **false**); in caso contrario, questa proprietà non è supportata.

- `DBPROP_MAXPENDINGROWS` viene ignorata. il provider specifica uno specifico limite.

- `DBPROP_MAXOPENROWS` viene ignorata. il provider specifica uno specifico limite.

- `DBPROP_CANHOLDROWS` viene ignorata. il provider specifica uno specifico limite.

## <a name="see-also"></a>Vedere anche

[Uso dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)