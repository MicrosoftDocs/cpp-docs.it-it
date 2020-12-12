---
description: 'Altre informazioni su: impostazione delle proprietà nel provider'
title: Impostazione di proprietà nel provider
ms.date: 10/29/2018
helpviewer_keywords:
- OLE DB providers, properties
- properties [C++], OLE DB provider
ms.assetid: 26a8b493-7ec4-4686-96d0-9ad5d2bca5ac
ms.openlocfilehash: e85fddfb741fe89869d18531bb172201eaa14753
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97316687"
---
# <a name="setting-properties-in-your-provider"></a>Impostazione di proprietà nel provider

Trovare il gruppo di proprietà e l'ID proprietà per la proprietà desiderata. Per ulteriori informazioni, vedere [OLE DB proprietà](/previous-versions/windows/desktop/ms722734(v=vs.85)) nella Guida **di riferimento per programmatori OLE DB**.

Nel codice del provider generato dalla procedura guidata, trovare la mappa delle proprietà corrispondente al gruppo di proprietà. Il nome del gruppo di proprietà corrisponde in genere al nome dell'oggetto. Le proprietà Command e rowset sono disponibili nel comando o nel set di righe. l'origine dati e le proprietà di inizializzazione sono disponibili nell'oggetto origine dati.

Nella mappa delle proprietà aggiungere una macro [PROPERTY_INFO_ENTRY_EX](./macros-for-ole-db-provider-templates.md#property_info_entry_ex) . PROPERTY_INFO_ENTRY_EX accetta quattro parametri:

- ID della proprietà corrispondente alla proprietà. Rimuovere i primi sette caratteri ("DBPROP_") dall'inizio del nome della proprietà. Ad esempio, se si desidera aggiungere `DBPROP_MAXROWS` , passare `MAXROWS` come primo elemento. Se si tratta di una proprietà personalizzata, passare il nome completo del GUID (ad esempio, `DBMYPROP_MYPROPERTY` ).

- Tipo Variant della proprietà (in [OLE DB proprietà](/previous-versions/windows/desktop/ms722734(v=vs.85)) nel **riferimento del programmatore OLE DB**). Immettere il tipo di VT_, ad esempio VT_BOOL o VT_I2, corrispondente al tipo di dati.

- Flag per indicare se la proprietà è leggibile e scrivibile e il gruppo a cui appartiene. Il codice seguente, ad esempio, indica una proprietà di lettura/scrittura appartenente al gruppo di set di righe:

    ```cpp
    DBPROPFLAGS_ROWSET | DBPROPFLAGS_READ | DBPROPFLAGS_WRITE
    ```

- Valore di base della proprietà. Potrebbe trattarsi di `VARIANT_FALSE` un tipo booleano o zero per un tipo Integer, ad esempio. Il valore della proprietà è a meno che non venga modificato.

    > [!NOTE]
    > Alcune proprietà sono connesse o concatenate ad altre proprietà, ad esempio segnalibri o aggiornamenti. Quando un consumer imposta una proprietà su true, potrebbe essere impostata anche un'altra proprietà. I modelli di provider OLE DB supportano questa operazione tramite il metodo [CUtlProps:: OnPropertyChanged](./cutlprops-class.md#onpropertychanged).

## <a name="properties-ignored-by-microsoft-ole-db-providers"></a>Proprietà ignorate dai provider Microsoft OLE DB

I provider Microsoft OLE DB ignorano le proprietà OLE DB seguenti:

- `DBPROP_MAXROWS` funziona solo per i provider di sola lettura (ovvero dove `DBPROP_IRowsetChange` e `DBPROP_IRowsetUpdate` sono **`false`** ); in caso contrario, questa proprietà non è supportata.

- `DBPROP_MAXPENDINGROWS` viene ignorato; il provider specifica il proprio limite.

- `DBPROP_MAXOPENROWS` viene ignorato; il provider specifica il proprio limite.

- `DBPROP_CANHOLDROWS` viene ignorato; il provider specifica il proprio limite.

## <a name="see-also"></a>Vedi anche

[Uso dei modelli di provider di OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)
