---
title: Macro per modelli Provider OLE DB | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- vc.templates.ole
dev_langs:
- C++
helpviewer_keywords:
- OLE DB provider templates, macros
- macros, OLE DB Provider Templates
- Provider Template macros (OLE DB)
- OLE DB Provider Template macros
ms.assetid: 909482c5-64ab-4e52-84a9-1c07091db183
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: ab7611c49f625a36023b4e31bf6aff47ab16f156
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="macros-for-ole-db-provider-templates"></a>Macro per i modelli di provider OLE DB
Le macro di Provider di modelli OLE DB offrono funzionalità nelle categorie seguenti:  
  
### <a name="property-set-map-macros"></a>Macro di mapping di Set di proprietà  
  
|||  
|-|-|  
|[BEGIN_PROPERTY_SET](../../data/oledb/begin-property-set.md)|Contrassegna l'inizio di un set di proprietà.|  
|[BEGIN_PROPERTY_SET_EX](../../data/oledb/begin-property-set-ex.md)|Contrassegna l'inizio di un set di proprietà.|  
|[BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md)|Segni di che set di inizio di una proprietà che possono essere nascosti o definiti all'esterno dell'ambito del provider.|  
|[CHAIN_PROPERTY_SET](../../data/oledb/chain-property-set.md)|Unisce i gruppi di proprietà.|  
|[END_PROPERTY_SET](../../data/oledb/end-property-set.md)|Contrassegna la fine di un set di proprietà.|  
|[END_PROPSET_MAP](../../data/oledb/end-propset-map.md)|Contrassegna la fine di una mappa di set di proprietà.|  
|[PROPERTY_INFO_ENTRY](../../data/oledb/property-info-entry.md)|Imposta una proprietà specifica in una proprietà impostata su un valore predefinito.|  
|[PROPERTY_INFO_ENTRY_EX](../../data/oledb/property-info-entry-ex.md)|Imposta una proprietà specifica in una proprietà impostata su un valore fornito dall'utente. Consente inoltre di impostare le opzioni e i flag.|  
|[PROPERTY_INFO_ENTRY_VALUE](../../data/oledb/property-info-entry-value.md)|Imposta una proprietà specifica in una proprietà impostata su un valore fornito dall'utente.|  
  
### <a name="column-map-macros"></a>Macro della mappa colonne  
  
|||  
|-|-|  
|[BEGIN_PROVIDER_COLUMN_MAP](../../data/oledb/begin-provider-column-map.md)|Contrassegna l'inizio delle voci della mappa di colonna del provider.|  
|[END_PROVIDER_COLUMN_MAP](../../data/oledb/end-provider-column-map.md)|Contrassegna la fine delle voci della mappa colonna provider.|  
|[PROVIDER_COLUMN_ENTRY](../../data/oledb/provider-column-entry.md)|Rappresenta una colonna specifica è supportata dal provider.|  
|[PROVIDER_COLUMN_ENTRY_GN](../../data/oledb/provider-column-entry-gn.md)|Rappresenta una colonna specifica è supportata dal provider. È possibile specificare le dimensioni della colonna, tipo di dati, precisione, scala e GUID set di righe dello schema.|  
|[PROVIDER_COLUMN_ENTRY_FIXED](../../data/oledb/provider-column-entry-fixed.md)|Rappresenta una colonna specifica è supportata dal provider. È possibile specificare il tipo di dati della colonna.|  
|[PROVIDER_COLUMN_ENTRY_LENGTH](../../data/oledb/provider-column-entry-length.md)|Rappresenta una colonna specifica è supportata dal provider. È possibile specificare la dimensione della colonna.|  
|[PROVIDER_COLUMN_ENTRY_STR](../../data/oledb/provider-column-entry-str.md)|Rappresenta una colonna specifica è supportata dal provider. Si presuppone che il tipo di colonna è una stringa.|  
|[PROVIDER_COLUMN_ENTRY_TYPE_LENGTH](../../data/oledb/provider-column-entry-type-length.md)|Rappresenta una colonna specifica è supportata dal provider. Come PROVIDER_COLUMN_ENTRY_LENGTH, ma consente anche di specificare il tipo di dati della colonna così come dimensione.|  
|[PROVIDER_COLUMN_ENTRY_WSTR](../../data/oledb/provider-column-entry-wstr.md)|Rappresenta una colonna specifica è supportata dal provider. Si presuppone che il tipo di colonna è una stringa di caratteri Unicode.|  
  
### <a name="schema-rowset-macros"></a>Macro di set di righe dello schema  
  
|||  
|-|-|  
|[BEGIN_SCHEMA_MAP](../../data/oledb/begin-schema-map.md)|Contrassegna l'inizio di una mappa di schema.|  
|[SCHEMA_ENTRY](../../data/oledb/schema-entry.md)|Associa un GUID a una classe.|  
|[END_SCHEMA_MAP](../../data/oledb/end-schema-map.md)|Contrassegna la fine di una mappa di schema.|  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creazione di un Provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)   
 [Riferimenti ai modelli del provider OLE DB](../../data/oledb/ole-db-provider-templates-reference.md)